{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeXmlNativo                                               }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{  Descripción:                                                                }
{    ADOM nativo del RTL, con Unicode y espacios de nombres.                   }
{******************************************************************************}
unit inSpfeXmlNativo;

interface

uses
  System.SysUtils, System.Classes, Xml.Internal.AdomCore_4_3,
  inSpfeXPathTipos;

type
  TXmlNativoSpfe = class
  private
    FImplementacion: TDomImplementation;
    FDocumento: TDomCustomDocument;
    procedure NotificarError(ASender: TObject; AError: TDomError;
      var ASeguir: Boolean);
    procedure NormalizarEspaciosNombre(ADocumento: TDomDocument);
    procedure SuprimirDeclaracionVirtual;
  public
    constructor Create;
    destructor Destroy; override;
    procedure Cargar(const AXml: string);
    property Documento: TDomCustomDocument read FDocumento;
  end;

implementation

uses
  inSpfeMensajes;

constructor TXmlNativoSpfe.Create;
begin
  inherited Create;
  FImplementacion := TDomImplementation.Create(nil);
  FImplementacion.OnError := NotificarError;
  FDocumento := TDomDocumentNS.Create(FImplementacion);
end;

destructor TXmlNativoSpfe.Destroy;
begin
  FreeAndNil(FDocumento);
  FreeAndNil(FImplementacion);
  inherited;
end;

procedure TXmlNativoSpfe.NotificarError(ASender: TObject;
  AError: TDomError; var ASeguir: Boolean);
begin
  ASeguir := False;
  raise ESpfeXPath.Create(rsSpfeXMLMalFormado + string(AError.Code));
end;

procedure TXmlNativoSpfe.NormalizarEspaciosNombre(
  ADocumento: TDomDocument);
var
  oLector: TXmlStandardDomReader;
  oEspacios: TXmlNamespaceSignalGenerator;
  oConstructor: TXmlDomBuilder;
begin
  oLector := nil;
  oEspacios := nil;
  oConstructor := nil;
  try
    oLector := TXmlStandardDomReader.Create(nil);
    oEspacios := TXmlNamespaceSignalGenerator.Create(nil);
    oConstructor := TXmlDomBuilder.Create(nil);
    oLector.NextHandler := oEspacios;
    oLector.IgnoreUnspecified := False;
    oEspacios.NextHandler := oConstructor;
    oEspacios.PrefixMapping := True;
    oEspacios.SuppressXmlns := False;
    oConstructor.DocTypeDeclTreatment := dtCheckWellformedness;
    oConstructor.KeepCDATASections := True;
    oConstructor.KeepComments := True;
    oConstructor.KeepEntityRefs := False;
    oConstructor.ReferenceNode := FDocumento;
    if not oLector.Parse(ADocumento) then
      raise ESpfeXPath.Create(rsSpfeNoSePudoConstruir);
  finally
    FreeAndNil(oConstructor);
    FreeAndNil(oLector);
    FreeAndNil(oEspacios);
  end;
end;

procedure TXmlNativoSpfe.Cargar(const AXml: string);
var
  oAnalizador: TXmlToDomParser;
  oEntrada: TXmlInputSource;
  oDocumento: TDomDocument;
  oFlujo: TStringStream;
begin
  oAnalizador := nil;
  oEntrada := nil;
  oDocumento := nil;
  oFlujo := nil;
  try
    FDocumento.Clear;
    oAnalizador := TXmlToDomParser.Create(nil);
    oAnalizador.DOMImpl := FImplementacion;
    oFlujo := TStringStream.Create(AXml, TEncoding.UTF8);
    oEntrada := TXmlInputSource.Create(oFlujo, '', '', 4096, 'UTF-8',
      False, 0, 0, 0, 0, 1);
    oDocumento := oAnalizador.Parse(oEntrada);
    if not Assigned(oDocumento) then
      raise ESpfeXPath.Create(rsSpfeXMLSinDocumento);
    NormalizarEspaciosNombre(oDocumento);
    SuprimirDeclaracionVirtual;
  finally
    FreeAndNil(oDocumento);
    FreeAndNil(oEntrada);
    FreeAndNil(oFlujo);
    FreeAndNil(oAnalizador);
  end;
end;

procedure TXmlNativoSpfe.SuprimirDeclaracionVirtual;
var
  oNodo: TDomElement;
begin
  // El RTL 37 materializa la declaración como un elemento virtual "xml".
  // La declaración no pertenece al modelo de datos XPath.
  oNodo := FDocumento.DocumentElement;
  if Assigned(oNodo) and (FDocumento.XmlVersion <> '') and
    (oNodo.NodeName = 'xml') and (oNodo.NamespaceURI = '') then
  begin
    FDocumento.RemoveChild(oNodo);
    FreeAndNil(oNodo);
  end;
end;

end.
