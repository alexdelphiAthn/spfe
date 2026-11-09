{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeEbms3                                                   }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       09/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    Mensajería ebMS 3.0 sobre SOAP 1.2 del SPFE, según la documentación       }
{    embebida en los WSDL del entorno PRE (docs/spfe/wsdl_xsd_20261029.zip)    }
{    y los ejemplos oficiales (docs/spfe/SendInvoicesSOAP.zip): sobre con      }
{    cabecera eb:Messaging y body vacío, documentos UBL como adjuntos MIME     }
{    (multipart/related, cid:), y troceo de respuestas y SOAP Fault.           }
{    Construye y analiza mensajes; no abre conexiones: el transporte HTTP      }
{    con TLS mutuo corresponde a la aplicación que integre la biblioteca.      }
{******************************************************************************}
unit inSpfeEbms3;

interface

type
  TAdjuntoEbms3Spfe = record
    Cid: string;
    Contenido: string;
  end;

  TFaultEbms3Spfe = record
    Codigo: string;
    Razon: string;
  end;

  TRespuestaEbms3Spfe = record
    Http: Integer;
    ContentType: string;
    Crudo: string;
    Messaging: string;        // Sobre SOAP de la respuesta
    RefToMessageId: string;
    Adjuntos: TArray<TAdjuntoEbms3Spfe>;
    TieneFault: Boolean;
    Fault: TFaultEbms3Spfe;
  end;

  TEbms3Spfe = class
  public
    const NifAeat = 'Q2826000H';
    const TipoPartyId =
      'urn:oasis:names:tc:ebcore:partyid-type:iso6523:9920';
    { eb:Action de cada servicio, segun CatalogoServicios.pdf (v0.1.3) y   }
    { FormatosEntradaSalida.pdf (v0.1.2) de docs/spfe.                     }
    const AccionSubmitInvoice = 'SUBMITINVOICE';        // SendInvoice
    const AccionCancelInvoice = 'CANCELINVOICE';        // CancelInvoice
    const AccionQueryById = 'QUERYBYID';                // GetInvoices
    const AccionQueryByFilter = 'QUERYBYFILTER';        // GetRegisteredInvoice
    const AccionDownloadById = 'DOWNLOADBYID';          // DownloadInvoicesByID
    const AccionDownloadByLoc = 'DOWNLOADBYLOC';        // DownloadInvoicesByLOC
    const AccionEventosDestinatario =
      'ACCOUNTINGCUSTOMERPARTYACTION';                  // CustomerInvoiceEvents
    const AccionEventosEmisor =
      'ACCOUNTINGSUPPLIERPARTYACTION';                  // SupplierInvoiceEvents
    { eb:Service: el catalogo solo documenta el URN de la remision.        }
    const ServicioSubmitInvoice = 'urn:cen.eu:en16931:submitinvoice';
    { ValidationInvoice (solo PRE) no usa ebMS ni adjuntos: SOAP 1.2       }
    { document/literal con la factura UBL directamente en el body.         }
    const AccionSoapValidacion =
      'https://www.agenciatributaria.gob.es/spfe/ns/services/' +
      'ValidationInvoice/v1/ValidationInvoice';
    { Sobre SOAP 1.2 con la cabecera eb:Messaging y el body vacío.          }
    { AMarcaTiempo vacía = instante actual UTC.                             }
    class function ConstruirSobre(const ANifRemitente, AServicio,
      AAccion: string; const ACids: TArray<string>;
      const AMessageId, AConversationId: string;
      const AMarcaTiempo: string = ''): string;
    { Cuerpo multipart/related con el sobre y los adjuntos; devuelve en     }
    { AContentType la cabecera Content-Type completa de la petición.        }
    class function ConstruirMultipart(const ASobre: string;
      const AAdjuntos: TArray<TAdjuntoEbms3Spfe>;
      const ALimite, AAccionSoap: string; out AContentType: string): string;
    { Separa el sobre SOAP y los adjuntos MIME de una respuesta, y extrae   }
    { RefToMessageId y el SOAP Fault si lo hay.                             }
    class function TrocearRespuesta(AHttp: Integer;
      const AContentType, ACuerpo: string): TRespuestaEbms3Spfe;
    { Sobre SOAP 1.2 de ValidationInvoice (solo PRE): la factura UBL va     }
    { directamente en el body, sin cabecera ebMS ni adjuntos.               }
    class function EnvolverFacturaParaValidacion(
      const AXmlFactura: string): string;
  end;

implementation

uses
  System.SysUtils, System.Classes, System.DateUtils,
  Xml.Internal.AdomCore_4_3,
  inSpfeEscritorXml, inSpfeXmlNativo, inSpfeXPathTipos;

const
  EspacioSoap = 'http://www.w3.org/2003/05/soap-envelope';
  EspacioEb =
    'http://docs.oasis-open.org/ebxml-msg/ebms/v3.0/ns/core/200704/';

class function TEbms3Spfe.ConstruirSobre(const ANifRemitente, AServicio,
  AAccion: string; const ACids: TArray<string>;
  const AMessageId, AConversationId: string;
  const AMarcaTiempo: string): string;
var
  oEscritor: TEscritorXmlSpfe;
  sMarca, sCid: string;
begin
  sMarca := AMarcaTiempo;
  if sMarca = '' then
    sMarca := FormatDateTime('yyyy"-"mm"-"dd"T"hh":"nn":"ss"."zzz"Z"',
      TTimeZone.Local.ToUniversalTime(Now));
  oEscritor := TEscritorXmlSpfe.Create;
  try
    oEscritor.Abrir('soap:Envelope',
      ['xmlns:soap', EspacioSoap, 'xmlns:eb', EspacioEb]);
    oEscritor.Abrir('soap:Header');
    oEscritor.Abrir('eb:Messaging');
    oEscritor.Abrir('eb:UserMessage');

    oEscritor.Abrir('eb:MessageInfo');
    oEscritor.Escribir('eb:Timestamp', sMarca);
    oEscritor.Escribir('eb:MessageId', AMessageId);
    oEscritor.Cerrar; // MessageInfo

    oEscritor.Abrir('eb:PartyInfo');
    oEscritor.Abrir('eb:From');
    oEscritor.Escribir('eb:PartyId', ANifRemitente,
      ['type', TipoPartyId]);
    oEscritor.Escribir('eb:Role', 'ebms:initiator');
    oEscritor.Cerrar; // From
    oEscritor.Abrir('eb:To');
    oEscritor.Escribir('eb:PartyId', NifAeat, ['type', TipoPartyId]);
    oEscritor.Escribir('eb:Role', 'ebms:responder');
    oEscritor.Cerrar; // To
    oEscritor.Cerrar; // PartyInfo

    oEscritor.Abrir('eb:CollaborationInfo');
    oEscritor.Escribir('eb:Service', AServicio);
    oEscritor.Escribir('eb:Action', AAccion);
    oEscritor.Escribir('eb:ConversationId', AConversationId);
    oEscritor.Cerrar; // CollaborationInfo

    oEscritor.Abrir('eb:PayloadInfo');
    for sCid in ACids do
    begin
      oEscritor.Abrir('eb:PartInfo', ['href', 'cid:' + sCid]);
      oEscritor.Abrir('eb:PartProperties');
      oEscritor.Escribir('eb:Property', 'application/xml',
        ['name', 'MimeType']);
      oEscritor.Cerrar; // PartProperties
      oEscritor.Cerrar; // PartInfo
    end;
    oEscritor.Cerrar; // PayloadInfo

    oEscritor.Cerrar; // UserMessage
    oEscritor.Cerrar; // Messaging
    oEscritor.Cerrar; // Header
    oEscritor.Abrir('soap:Body');
    oEscritor.Cerrar; // Body
    oEscritor.Cerrar; // Envelope
    Result := oEscritor.XmlCompleto;
  finally
    FreeAndNil(oEscritor);
  end;
end;

class function TEbms3Spfe.ConstruirMultipart(const ASobre: string;
  const AAdjuntos: TArray<TAdjuntoEbms3Spfe>;
  const ALimite, AAccionSoap: string; out AContentType: string): string;
const
  CRLF = #13#10;
var
  oTexto: TStringBuilder;
  oAdjunto: TAdjuntoEbms3Spfe;
begin
  AContentType := 'multipart/related; boundary="' + ALimite +
    '"; type="application/soap+xml"; start="<sobre.soap>"; ' +
    'start-info="application/soap+xml"; action="' + AAccionSoap + '"';
  oTexto := TStringBuilder.Create;
  try
    oTexto.Append('--').Append(ALimite).Append(CRLF);
    oTexto.Append('Content-Type: application/soap+xml; charset=UTF-8; ' +
      'action="').Append(AAccionSoap).Append('"').Append(CRLF);
    oTexto.Append('Content-ID: <sobre.soap>').Append(CRLF).Append(CRLF);
    oTexto.Append(ASobre).Append(CRLF);
    for oAdjunto in AAdjuntos do
    begin
      oTexto.Append('--').Append(ALimite).Append(CRLF);
      oTexto.Append('Content-Type: application/xml; charset=UTF-8')
        .Append(CRLF);
      oTexto.Append('Content-Transfer-Encoding: binary').Append(CRLF);
      oTexto.Append('Content-ID: <').Append(oAdjunto.Cid).Append('>')
        .Append(CRLF).Append(CRLF);
      oTexto.Append(oAdjunto.Contenido).Append(CRLF);
    end;
    oTexto.Append('--').Append(ALimite).Append('--').Append(CRLF);
    Result := oTexto.ToString;
  finally
    FreeAndNil(oTexto);
  end;
end;

function BuscarElemento(ANodo: TDomNode;
  const AEspacio, ALocal: string): TDomNode;
var
  oHijo: TDomNode;
begin
  Result := nil;
  if not Assigned(ANodo) then
    Exit;
  if (ANodo.NodeType = ntElement_Node) and
    (string(ANodo.LocalName) = ALocal) and
    (string(ANodo.NamespaceURI) = AEspacio) then
    Exit(ANodo);
  oHijo := ANodo.FirstChild;
  while Assigned(oHijo) do
  begin
    Result := BuscarElemento(oHijo, AEspacio, ALocal);
    if Assigned(Result) then
      Exit;
    oHijo := oHijo.NextSibling;
  end;
end;

function TextoDeElemento(ANodo: TDomNode): string;
begin
  if Assigned(ANodo) then
    Result := string(ANodo.XPathStringValue).Trim
  else
    Result := '';
end;

function ExtraerLimite(const AContentType: string): string;
var
  i, iFin: Integer;
  sResto: string;
begin
  Result := '';
  i := Pos('boundary=', AContentType.ToLowerInvariant);
  if i = 0 then
    Exit;
  sResto := AContentType.Substring(i + Length('boundary=') - 1);
  if sResto.StartsWith('"') then
  begin
    sResto := sResto.Substring(1);
    iFin := sResto.IndexOf('"');
  end
  else
    iFin := sResto.IndexOf(';');
  if iFin < 0 then
    Result := sResto
  else
    Result := sResto.Substring(0, iFin);
end;

function ExtraerContentId(const ACabeceras: string): string;
var
  i, iInicio, iFin: Integer;
begin
  Result := '';
  i := Pos('content-id:', ACabeceras.ToLowerInvariant);
  if i = 0 then
    Exit;
  iInicio := ACabeceras.IndexOf('<', i - 1);
  iFin := ACabeceras.IndexOf('>', iInicio + 1);
  if (iInicio >= 0) and (iFin > iInicio) then
    Result := ACabeceras.Substring(iInicio + 1, iFin - iInicio - 1);
end;

procedure ExtraerDatosSobre(const AXml: string;
  var ARespuesta: TRespuestaEbms3Spfe);
var
  oXml: TXmlNativoSpfe;
  oNodo, oValor: TDomNode;
begin
  oXml := TXmlNativoSpfe.Create;
  try
    try
      oXml.Cargar(AXml);
    except
      on ESpfeXPath do
        Exit; // Un sobre ilegible deja los campos extraídos vacíos.
    end;
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioEb,
      'RefToMessageId');
    ARespuesta.RefToMessageId := TextoDeElemento(oNodo);
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioSoap,
      'Fault');
    if Assigned(oNodo) then
    begin
      ARespuesta.TieneFault := True;
      oValor := BuscarElemento(oNodo, EspacioSoap, 'Value');
      ARespuesta.Fault.Codigo := TextoDeElemento(oValor);
      oValor := BuscarElemento(oNodo, EspacioSoap, 'Text');
      ARespuesta.Fault.Razon := TextoDeElemento(oValor);
    end;
  finally
    FreeAndNil(oXml);
  end;
end;

class function TEbms3Spfe.EnvolverFacturaParaValidacion(
  const AXmlFactura: string): string;
var
  sFactura: string;
  iInicio: Integer;
begin
  // Retira la declaración XML para incrustar la factura en el body.
  sFactura := AXmlFactura.TrimLeft;
  if sFactura.StartsWith('<?xml') then
  begin
    iInicio := sFactura.IndexOf('?>');
    if iInicio >= 0 then
      sFactura := sFactura.Substring(iInicio + 2).TrimLeft;
  end;
  Result := '<?xml version="1.0" encoding="UTF-8"?>' +
    '<soap:Envelope xmlns:soap="' + EspacioSoap + '"><soap:Body>' +
    sFactura + '</soap:Body></soap:Envelope>';
end;

class function TEbms3Spfe.TrocearRespuesta(AHttp: Integer;
  const AContentType, ACuerpo: string): TRespuestaEbms3Spfe;
const
  CRLF = #13#10;
var
  sLimite, sTrozo, sCabeceras, sContenido, sCid: string;
  aTrozos: TArray<string>;
  iSeparador, iAdjunto: Integer;
  bEsSobre: Boolean;
  bPrimero: Boolean;
begin
  Result := Default(TRespuestaEbms3Spfe);
  Result.Http := AHttp;
  Result.ContentType := AContentType;
  Result.Crudo := ACuerpo;

  sLimite := '';
  if AContentType.ToLowerInvariant.Contains('multipart/related') then
    sLimite := ExtraerLimite(AContentType);

  if sLimite = '' then
  begin
    Result.Messaging := ACuerpo;
    ExtraerDatosSobre(ACuerpo, Result);
    Exit;
  end;

  aTrozos := ACuerpo.Split(['--' + sLimite], TStringSplitOptions.None);
  bPrimero := True;
  for sTrozo in aTrozos do
  begin
    sContenido := sTrozo.TrimLeft([#13, #10]);
    if (sContenido = '') or sContenido.StartsWith('--') then
      Continue;
    iSeparador := sContenido.IndexOf(CRLF + CRLF);
    if iSeparador < 0 then
      Continue;
    sCabeceras := sContenido.Substring(0, iSeparador);
    sContenido := sContenido.Substring(iSeparador + 4)
      .TrimRight([#13, #10]);
    sCid := ExtraerContentId(sCabeceras);
    bEsSobre := bPrimero or
      sCabeceras.ToLowerInvariant.Contains('application/soap+xml');
    bPrimero := False;
    if bEsSobre and sContenido.Contains('Envelope') then
    begin
      Result.Messaging := sContenido;
      ExtraerDatosSobre(sContenido, Result);
    end
    else if sContenido <> '' then
    begin
      iAdjunto := Length(Result.Adjuntos);
      SetLength(Result.Adjuntos, iAdjunto + 1);
      if sCid <> '' then
        Result.Adjuntos[iAdjunto].Cid := sCid
      else
        Result.Adjuntos[iAdjunto].Cid := 'adjunto_' + IntToStr(iAdjunto);
      Result.Adjuntos[iAdjunto].Contenido := sContenido;
    end;
  end;
end;

end.
