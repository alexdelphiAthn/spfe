{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeXPathOperaciones                                        }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    operaciones decimales y comparaciones.                                    }
{    No acredita conformidad semántica EN 2026/SPFE.                           }
{******************************************************************************}
unit inSpfeXPathOperaciones;

interface

uses
  System.SysUtils, System.StrUtils, System.DateUtils, Data.FmtBcd,
  inSpfeXPathTipos;

function OperarSpfe(const AOperador: string;
  const AIzquierda, ADerecha: TSecuenciaSpfe): TSecuenciaSpfe;

implementation

uses
  inSpfeMensajes;

function LeerBooleano(const AValor: TValorSpfe): Boolean;
var
  sTexto: string;
begin
  if AValor.Clase = cvBooleano then
    Result := AValor.EsCierto
  else
  begin
    sTexto := Trim(AValor.ComoTexto);
    if not MatchStr(sTexto, ['true', 'false', '1', '0']) then
      raise ESpfeErrorDinamico.Create(rsSpfeBooleanoXMLNoValido + sTexto);
    Result := MatchStr(sTexto, ['true', '1']);
  end;
end;

function LeerFecha(const ATexto: string): TDateTime;
var
  sTexto: string;
  iHoras, iMinutos, iSigno: Integer;
begin
  sTexto := Trim(ATexto);
  if not (Length(sTexto) in [10, 11, 16]) then
    raise ESpfeXPath.Create(rsSpfeFechaXMLFueraDel + sTexto);
  if (sTexto[5] <> '-') or (sTexto[8] <> '-') then
    raise ESpfeXPath.Create(rsSpfeFechaXMLNoValida + sTexto);
  Result := EncodeDate(StrToInt(Copy(sTexto, 1, 4)),
    StrToInt(Copy(sTexto, 6, 2)), StrToInt(Copy(sTexto, 9, 2)));
  // La zona implícita del evaluador es UTC, estable entre equipos.
  if (Length(sTexto) = 11) and (sTexto[11] <> 'Z') then
    raise ESpfeXPath.Create(rsSpfeZonaXMLNoValida + sTexto);
  if Length(sTexto) = 16 then
  begin
    if not CharInSet(sTexto[11], ['+', '-']) or (sTexto[14] <> ':') then
      raise ESpfeXPath.Create(rsSpfeZonaXMLNoValida + sTexto);
    iHoras := StrToInt(Copy(sTexto, 12, 2));
    iMinutos := StrToInt(Copy(sTexto, 15, 2));
    if (iHoras > 14) or (iMinutos > 59) or
      ((iHoras = 14) and (iMinutos <> 0)) then
      raise ESpfeXPath.Create(rsSpfeZonaXMLFueraDe + sTexto);
    iSigno := 1;
    if sTexto[11] = '-' then
      iSigno := -1;
    Result := Result - iSigno * (iHoras * 60 + iMinutos) / MinsPerDay;
  end;
end;

function CompararValores(const AIzquierda, ADerecha: TValorSpfe): Integer;
var
  dtIzquierda, dtDerecha: TDateTime;
begin
  if (AIzquierda.Clase = cvFecha) or (ADerecha.Clase = cvFecha) then
  begin
    dtIzquierda := LeerFecha(AIzquierda.ComoTexto);
    dtDerecha := LeerFecha(ADerecha.ComoTexto);
    Result := 0;
    if dtIzquierda < dtDerecha then
      Result := -1
    else if dtIzquierda > dtDerecha then
      Result := 1;
  end
  else if (AIzquierda.Clase = cvDecimal) or
    (ADerecha.Clase = cvDecimal) then
    Result := BcdCompare(AIzquierda.ComoDecimal, ADerecha.ComoDecimal)
  else if (AIzquierda.Clase = cvBooleano) or
    (ADerecha.Clase = cvBooleano) then
    Result := Ord(LeerBooleano(AIzquierda)) - Ord(LeerBooleano(ADerecha))
  else
    Result := CompareStr(AIzquierda.ComoTexto, ADerecha.ComoTexto);
end;

function CumplirComparacion(const AOperador: string;
  AComparacion: Integer): Boolean;
begin
  case IndexStr(AOperador, ['=', 'eq', '!=', 'ne', '<', 'lt',
    '>', 'gt', '<=', 'le', '>=', 'ge']) of
    0, 1: Result := AComparacion = 0;
    2, 3: Result := AComparacion <> 0;
    4, 5: Result := AComparacion < 0;
    6, 7: Result := AComparacion > 0;
    8, 9: Result := AComparacion <= 0;
    10, 11: Result := AComparacion >= 0;
  else
    raise ESpfeXPath.Create(rsSpfeComparacionDesconocida + AOperador);
  end;
end;

function CompararSecuencias(const AOperador: string;
  const AIzquierda, ADerecha: TSecuenciaSpfe): TSecuenciaSpfe;
var
  oIzquierda, oDerecha: TValorSpfe;
  bCumplida: Boolean;
begin
  if MatchStr(AOperador, ['eq', 'ne', 'lt', 'gt', 'le', 'ge']) and
    ((Length(AIzquierda) > 1) or (Length(ADerecha) > 1)) then
    raise ESpfeXPath.Create(rsSpfeComparacionDeValorCon);
  bCumplida := False;
  for oIzquierda in AIzquierda do
    for oDerecha in ADerecha do
      bCumplida := bCumplida or CumplirComparacion(AOperador,
        CompararValores(oIzquierda, oDerecha));
  Result := [TValorSpfe.DesdeBooleano(bCumplida)];
end;

function CalcularAritmetica(const AOperador: string;
  const AIzquierda, ADerecha: TSecuenciaSpfe): TSecuenciaSpfe;
var
  dIzquierda, dDerecha, dResultado: TBcd;
begin
  Result := nil;
  if (Length(AIzquierda) > 0) and (Length(ADerecha) > 0) then
  begin
    dIzquierda := ObtenerDecimal(AIzquierda);
    dDerecha := ObtenerDecimal(ADerecha);
    case IndexStr(AOperador, ['+', '-', '*', 'div']) of
      0: dResultado := dIzquierda + dDerecha;
      1: dResultado := dIzquierda - dDerecha;
      2:
        begin
          if BcdScale(dIzquierda) + BcdScale(dDerecha) > 63 then
            raise ESpfeXPath.Create(rsSpfeEscalaDelProductoFuera);
          dResultado := dIzquierda * dDerecha;
        end;
      3:
        begin
          // Todas las divisiones de esta versión fuente son por 100.
          // FmtBcd.Divide limita fracciones a diez cifras: no se utiliza.
          if BcdCompare(dDerecha, IntegerToBcd(100)) <> 0 then
            raise ESpfeXPath.Create(rsSpfeDivisorAjenoAlSubconjunto);
          if BcdScale(dIzquierda) > 61 then
            raise ESpfeXPath.Create(rsSpfeEscalaDeLaDivision);
          dResultado := dIzquierda * LeerDecimal('0.01');
        end;
    else
      raise ESpfeXPath.Create(rsSpfeAritmeticaDesconocida + AOperador);
    end;
    Result := [TValorSpfe.DesdeDecimal(dResultado)];
  end;
end;

function OperarSpfe(const AOperador: string;
  const AIzquierda, ADerecha: TSecuenciaSpfe): TSecuenciaSpfe;
var
  oValor: TValorSpfe;
begin
  if MatchStr(AOperador, ['+', '-', '*', 'div']) then
    Result := CalcularAritmetica(AOperador, AIzquierda, ADerecha)
  else if MatchStr(AOperador, ['=', 'eq', '!=', 'ne', '<', 'lt',
    '>', 'gt', '<=', 'le', '>=', 'ge']) then
    Result := CompararSecuencias(AOperador, AIzquierda, ADerecha)
  else if MatchStr(AOperador, [',', '|']) then
  begin
    Result := Copy(AIzquierda);
    for oValor in ADerecha do
      if AOperador = '|' then
        AgregarSinDuplicar(Result, oValor)
      else
        AgregarValor(Result, oValor);
  end
  else
    raise ESpfeXPath.Create(rsSpfeOperacionDesconocida + AOperador);
end;

end.
