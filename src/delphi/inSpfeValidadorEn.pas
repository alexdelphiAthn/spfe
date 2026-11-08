{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeValidadorEn                                             }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    validación EN 2017+A1 sin red.                                            }
{    No acredita conformidad semántica EN 2026/SPFE.                           }
{******************************************************************************}
unit inSpfeValidadorEn;

interface

uses
  System.SysUtils, System.Classes, System.Generics.Collections,
  Xml.Internal.AdomCore_4_3,
  inSpfeXPathTipos, inSpfeXPathEvaluador, inSpfeReglasEn, inSpfeXmlNativo;

type
  TGravedadEnSpfe = (geAviso, geFatal, geErrorEvaluacion);
  TDiagnosticoEnSpfe = record
    Identificador: string;
    Gravedad: TGravedadEnSpfe;
    Ubicacion: string;
    Mensaje: string;
    Prueba: string;
  end;
  TResultadoEnSpfe = record
    Diagnosticos: TArray<TDiagnosticoEnSpfe>;
    HuellaFuente: string;
    VersionReglas: string;
    InstanciasEvaluadas: Integer;
    AsertosCatalogados: Integer;
    EsEvaluacionCompleta: Boolean;
    function EsCapaEnSuperada: Boolean;
    function EsCobertura2026Completa: Boolean;
  end;
  TValidadorEnSpfe = class
  private
    procedure ComprobarEntrada(const AXml: string);
    procedure EvaluarRegla(const ARegla: TReglaSpfe;
      const AValor: TValorSpfe; AEvaluador: TEvaluadorXPathSpfe;
      var AResultado: TResultadoEnSpfe);
    procedure EvaluarContexto(AIndice: Integer;
      const AValores: TSecuenciaSpfe; AEvaluador: TEvaluadorXPathSpfe;
      AAplicados: TDictionary<string, Boolean>;
      var AResultado: TResultadoEnSpfe);
    function EvaluarDocumento(const ADocumento: TDomCustomDocument):
      TResultadoEnSpfe;
  public
    function Validar(const AXml: string): TResultadoEnSpfe;
  end;

implementation

uses
  inSpfeMensajes;

function TResultadoEnSpfe.EsCapaEnSuperada: Boolean;
var
  oDiagnostico: TDiagnosticoEnSpfe;
begin
  Result := EsEvaluacionCompleta;
  for oDiagnostico in Diagnosticos do
    Result := Result and (oDiagnostico.Gravedad = geAviso);
end;

function TResultadoEnSpfe.EsCobertura2026Completa: Boolean;
begin
  Result := False;
end;

procedure TValidadorEnSpfe.ComprobarEntrada(const AXml: string);
var
  sMayusculas: string;
begin
  if (AXml = '') or (Length(AXml) > 16 * 1024 * 1024) then
    raise ESpfeXPath.Create(rsSpfeXMLVacioOSuperior);
  sMayusculas := AXml.ToUpperInvariant;
  if (Pos('<!DOCTYPE', sMayusculas) > 0) or
    (Pos('<!ENTITY', sMayusculas) > 0) then
    raise ESpfeXPath.Create(rsSpfeNoSeAdmitenDTD);
end;

procedure AgregarDiagnostico(var AResultado: TResultadoEnSpfe;
  const ADiagnostico: TDiagnosticoEnSpfe);
var
  i: Integer;
begin
  i := Length(AResultado.Diagnosticos);
  SetLength(AResultado.Diagnosticos, i + 1);
  AResultado.Diagnosticos[i] := ADiagnostico;
end;

procedure TValidadorEnSpfe.EvaluarRegla(const ARegla: TReglaSpfe;
  const AValor: TValorSpfe; AEvaluador: TEvaluadorXPathSpfe;
  var AResultado: TResultadoEnSpfe);
var
  oDiagnostico: TDiagnosticoEnSpfe;
  bCumple: Boolean;
begin
  oDiagnostico := Default(TDiagnosticoEnSpfe);
  oDiagnostico.Identificador := ARegla.Identificador;
  oDiagnostico.Ubicacion := AEvaluador.Localizar(AValor.Nodo);
  oDiagnostico.Prueba := ARegla.Prueba;
  try
    bCumple := ObtenerBooleano(AEvaluador.Evaluar(
      ARegla.Instruccion, AValor));
    Inc(AResultado.InstanciasEvaluadas);
    if not bCumple then
    begin
      oDiagnostico.Gravedad := geFatal;
      if string(ARegla.Bandera) = 'warning' then
        oDiagnostico.Gravedad := geAviso;
      oDiagnostico.Mensaje := ARegla.Mensaje;
      AgregarDiagnostico(AResultado, oDiagnostico);
    end;
  except
    on E: Exception do
    begin
      // Se conserva el error, la regla y la cobertura incompleta.
      AResultado.EsEvaluacionCompleta := False;
      oDiagnostico.Gravedad := geErrorEvaluacion;
      oDiagnostico.Mensaje := E.ClassName + ': ' + E.Message;
      AgregarDiagnostico(AResultado, oDiagnostico);
    end;
  end;
end;

procedure TValidadorEnSpfe.EvaluarContexto(AIndice: Integer;
  const AValores: TSecuenciaSpfe; AEvaluador: TEvaluadorXPathSpfe;
  AAplicados: TDictionary<string, Boolean>;
  var AResultado: TResultadoEnSpfe);
var
  oValor: TValorSpfe;
  sClave: string;
  i: Integer;
begin
  for oValor in AValores do
  begin
    sClave := string(ContextosEn[AIndice].Patron) + '|' +
      AEvaluador.Localizar(oValor.Nodo);
    // Schematron aplica solo la primera regla de cada patrón por nodo.
    if not AAplicados.ContainsKey(sClave) then
    begin
      AAplicados.Add(sClave, True);
      for i := Low(ReglasEn) to High(ReglasEn) do
        if ReglasEn[i].Contexto = AIndice then
          EvaluarRegla(ReglasEn[i], oValor, AEvaluador, AResultado);
    end;
  end;
end;

function TValidadorEnSpfe.EvaluarDocumento(
  const ADocumento: TDomCustomDocument): TResultadoEnSpfe;
var
  oEvaluador: TEvaluadorXPathSpfe;
  oAplicados: TDictionary<string, Boolean>;
  oValores: TSecuenciaSpfe;
  i: Integer;
begin
  Result := Default(TResultadoEnSpfe);
  Result.HuellaFuente := HuellaFuenteEn;
  Result.VersionReglas := 'validation-1.3.17 / EN 2017+A1 / UBL 2.1';
  Result.AsertosCatalogados := Length(ReglasEn);
  Result.EsEvaluacionCompleta := True;
  oAplicados := TDictionary<string, Boolean>.Create;
  try
    oEvaluador := TEvaluadorXPathSpfe.Create(ADocumento);
    try
      for i := Low(ContextosEn) to High(ContextosEn) do
      begin
        oValores := oEvaluador.Evaluar(ContextosEn[i].Instruccion,
          TValorSpfe.DesdeNodo(ADocumento));
        EvaluarContexto(i, oValores, oEvaluador, oAplicados, Result);
      end;
    finally
      FreeAndNil(oEvaluador);
    end;
  finally
    FreeAndNil(oAplicados);
  end;
end;

function TValidadorEnSpfe.Validar(const AXml: string): TResultadoEnSpfe;
var
  oXml: TXmlNativoSpfe;
  sNombre, sEspacio: string;
begin
  ComprobarEntrada(AXml);
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar(AXml);
    if not Assigned(oXml.Documento.DocumentElement) then
      raise ESpfeXPath.Create(rsSpfeXMLSinElementoRaiz);
    sNombre := oXml.Documento.DocumentElement.LocalName;
    sEspacio := oXml.Documento.DocumentElement.NamespaceURI;
    if not (((sNombre = 'Invoice') or (sNombre = 'CreditNote')) and
      (sEspacio = 'urn:oasis:names:specification:ubl:schema:xsd:' +
        sNombre + '-2')) then
      raise ESpfeXPath.Create(rsSpfeRaizAjenaALas +
        sEspacio + '}' + sNombre);
    Result := EvaluarDocumento(oXml.Documento);
  finally
    FreeAndNil(oXml);
  end;
end;

end.
