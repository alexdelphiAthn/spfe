{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeXPathEvaluador                                          }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    intérprete del subconjunto EN 1.3.17.                                     }
{    No acredita conformidad semántica EN 2026/SPFE.                           }
{******************************************************************************}
unit inSpfeXPathEvaluador;

interface

uses
  System.SysUtils, System.Generics.Collections, Data.FmtBcd,
  Xml.Internal.AdomCore_4_3, inSpfeXPathTipos, inSpfeXPathSeleccion,
  inSpfeXPathFunciones, inSpfeXPathOperaciones, inSpfeReglasEn;

type
  TEvaluadorXPathSpfe = class
  private
    FSeleccion: TSeleccionSpfe;
    FVariables: TDictionary<string, TSecuenciaSpfe>;
    FOperaciones: Int64;
    FLimiteOperaciones: Int64;
    function ObtenerHijo(const AInstruccion: TInstruccionSpfe;
      APosicion: Integer): Integer;
    function EvaluarFuncion(const AInstruccion: TInstruccionSpfe;
      const AActual: TValorSpfe): TSecuenciaSpfe;
    function EvaluarOperacion(const AInstruccion: TInstruccionSpfe;
      const AActual: TValorSpfe): TSecuenciaSpfe;
    function EvaluarLogica(const AInstruccion: TInstruccionSpfe;
      const AActual: TValorSpfe): TSecuenciaSpfe;
    function EvaluarCamino(const AInstruccion: TInstruccionSpfe;
      const AActual: TValorSpfe): TSecuenciaSpfe;
    function EvaluarFiltro(const AInstruccion: TInstruccionSpfe;
      const AActual: TValorSpfe): TSecuenciaSpfe;
    function EvaluarCada(const AInstruccion: TInstruccionSpfe;
      const AActual: TValorSpfe): TSecuenciaSpfe;
  public
    constructor Create(const ADocumento: TDomCustomDocument);
    destructor Destroy; override;
    function Evaluar(AIndice: Integer;
      const AActual: TValorSpfe): TSecuenciaSpfe;
    function Localizar(const ANodo: TDomNode): string;
    property LimiteOperaciones: Int64 read FLimiteOperaciones
      write FLimiteOperaciones;
  end;

implementation

uses
  inSpfeMensajes;

constructor TEvaluadorXPathSpfe.Create(
  const ADocumento: TDomCustomDocument);
begin
  inherited Create;
  FVariables := TDictionary<string, TSecuenciaSpfe>.Create;
  FSeleccion := TSeleccionSpfe.Create(ADocumento);
  FLimiteOperaciones := 10000000;
end;

destructor TEvaluadorXPathSpfe.Destroy;
begin
  FreeAndNil(FSeleccion);
  FreeAndNil(FVariables);
  inherited;
end;

function TEvaluadorXPathSpfe.ObtenerHijo(
  const AInstruccion: TInstruccionSpfe; APosicion: Integer): Integer;
begin
  if (APosicion < 0) or (APosicion >= AInstruccion.Cantidad) then
    raise ESpfeXPath.Create(rsSpfeEnlaceDeInstruccionFuera);
  Result := EnlacesEn[AInstruccion.Primero + APosicion];
end;

function TEvaluadorXPathSpfe.EvaluarFuncion(
  const AInstruccion: TInstruccionSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oArgumentos: TArgumentosSpfe;
  i: Integer;
begin
  SetLength(oArgumentos, AInstruccion.Cantidad);
  for i := 0 to High(oArgumentos) do
    oArgumentos[i] := Evaluar(ObtenerHijo(AInstruccion, i), AActual);
  Result := EjecutarFuncionSpfe(AInstruccion.Texto, oArgumentos, AActual);
end;

function TEvaluadorXPathSpfe.EvaluarCamino(
  const AInstruccion: TInstruccionSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oIzquierda, oDerecha: TSecuenciaSpfe;
  oValor, oElemento: TValorSpfe;
begin
  Result := nil;
  oIzquierda := Evaluar(ObtenerHijo(AInstruccion, 0), AActual);
  for oValor in oIzquierda do
  begin
    if oValor.Clase <> cvNodo then
      raise ESpfeXPath.Create(rsSpfeElOrigenDeUn);
    oDerecha := Evaluar(ObtenerHijo(AInstruccion, 1), oValor);
    for oElemento in oDerecha do
      AgregarSinDuplicar(Result, oElemento);
  end;
end;

function TEvaluadorXPathSpfe.EvaluarOperacion(
  const AInstruccion: TInstruccionSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oIzquierda, oDerecha: TSecuenciaSpfe;
  sOperador: string;
begin
  sOperador := AInstruccion.Texto;
  if sOperador = '/' then
    Result := EvaluarCamino(AInstruccion, AActual)
  else if (sOperador = 'and') or (sOperador = 'or') then
    Result := EvaluarLogica(AInstruccion, AActual)
  else
  begin
    oIzquierda := Evaluar(ObtenerHijo(AInstruccion, 0), AActual);
    oDerecha := Evaluar(ObtenerHijo(AInstruccion, 1), AActual);
    Result := OperarSpfe(sOperador, oIzquierda, oDerecha);
  end;
end;

function TEvaluadorXPathSpfe.EvaluarLogica(
  const AInstruccion: TInstruccionSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  bResultado, bRecuperado, bEsAnd: Boolean;
begin
  bEsAnd := string(AInstruccion.Texto) = 'and';
  bRecuperado := False;
  try
    bResultado := ObtenerBooleano(Evaluar(
      ObtenerHijo(AInstruccion, 0), AActual));
  except
    on E: Exception do
    begin
      if not ((E is ESpfeErrorDinamico) or (E is EBcdException) or
        (E is EConvertError)) then
        raise;
      // XPath permite resolver true OR error y false AND error. La hoja
      // oficial optimiza estas ramas; no ocultar errores de infraestructura.
      bResultado := ObtenerBooleano(Evaluar(
        ObtenerHijo(AInstruccion, 1), AActual));
      if bResultado = bEsAnd then
        raise;
      bRecuperado := True;
    end;
  end;
  if not bRecuperado and (bResultado = bEsAnd) then
    bResultado := ObtenerBooleano(Evaluar(
      ObtenerHijo(AInstruccion, 1), AActual));
  Result := [TValorSpfe.DesdeBooleano(bResultado)];
end;

function TEvaluadorXPathSpfe.EvaluarFiltro(
  const AInstruccion: TInstruccionSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oOrigen, oPredicado: TSecuenciaSpfe;
  i: Integer;
  bConservar: Boolean;
begin
  Result := nil;
  oOrigen := Evaluar(ObtenerHijo(AInstruccion, 0), AActual);
  for i := 0 to High(oOrigen) do
  begin
    oPredicado := Evaluar(ObtenerHijo(AInstruccion, 1), oOrigen[i]);
    if (Length(oPredicado) = 1) and
      (oPredicado[0].Clase = cvDecimal) then
      bConservar := BcdCompare(oPredicado[0].Decimal,
        IntegerToBcd(i + 1)) = 0
    else
      bConservar := ObtenerBooleano(oPredicado);
    if bConservar then
      AgregarValor(Result, oOrigen[i]);
  end;
end;

function TEvaluadorXPathSpfe.EvaluarCada(
  const AInstruccion: TInstruccionSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oOrigen, oAnterior: TSecuenciaSpfe;
  oValor: TValorSpfe;
  bAnterior, bCumplido: Boolean;
  sVariable: string;
begin
  sVariable := AInstruccion.Texto;
  oOrigen := Evaluar(ObtenerHijo(AInstruccion, 0), AActual);
  bAnterior := FVariables.TryGetValue(sVariable, oAnterior);
  bCumplido := True;
  try
    for oValor in oOrigen do
    begin
      FVariables.AddOrSetValue(sVariable, [oValor]);
      bCumplido := ObtenerBooleano(Evaluar(
        ObtenerHijo(AInstruccion, 1), AActual));
      if not bCumplido then
        Break;
    end;
    Result := [TValorSpfe.DesdeBooleano(bCumplido)];
  finally
    if bAnterior then
      FVariables.AddOrSetValue(sVariable, oAnterior)
    else
      FVariables.Remove(sVariable);
  end;
end;

function TEvaluadorXPathSpfe.Evaluar(AIndice: Integer;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oInstruccion: TInstruccionSpfe;
begin
  Inc(FOperaciones);
  if FOperaciones > FLimiteOperaciones then
    raise ESpfeXPath.Create(rsSpfeLimiteDeOperacionesXPath);
  if (AIndice < Low(InstruccionesEn)) or
    (AIndice > High(InstruccionesEn)) then
    raise ESpfeXPath.Create(rsSpfeInstruccionFueraDeRango);
  oInstruccion := InstruccionesEn[AIndice];
  case oInstruccion.Clase of
    ciCadena: Result := [TValorSpfe.DesdeTexto(oInstruccion.Texto)];
    ciNumero: Result := [TValorSpfe.DesdeDecimal(
      LeerDecimal(oInstruccion.Texto))];
    ciVariable:
      if not FVariables.TryGetValue(oInstruccion.Texto, Result) then
        raise ESpfeXPath.Create(rsSpfeVariableXPathSinEnlazar);
    ciFuncion: Result := EvaluarFuncion(oInstruccion, AActual);
    ciOperador: Result := EvaluarOperacion(oInstruccion, AActual);
    ciFiltro: Result := EvaluarFiltro(oInstruccion, AActual);
    ciCada: Result := EvaluarCada(oInstruccion, AActual);
    ciDescendientes: Result := FSeleccion.Descender(Evaluar(
      ObtenerHijo(oInstruccion, 0), AActual));
  else
    Result := FSeleccion.Seleccionar(oInstruccion.Clase,
      oInstruccion.Texto, AActual);
  end;
end;

function TEvaluadorXPathSpfe.Localizar(const ANodo: TDomNode): string;
begin
  Result := FSeleccion.Localizar(ANodo);
end;

end.
