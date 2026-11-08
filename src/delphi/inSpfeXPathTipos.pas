{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeXPathTipos                                              }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    valores del evaluador nativo.                                             }
{    No acredita conformidad semántica EN 2026/SPFE.                           }
{******************************************************************************}
unit inSpfeXPathTipos;

interface

uses
  System.SysUtils, Data.FmtBcd, Xml.Internal.AdomCore_4_3;

type
  ESpfeXPath = class(Exception);
  ESpfeErrorDinamico = class(ESpfeXPath);
  TClaseInstruccionSpfe = (ciCadena, ciNumero, ciVariable, ciHijo,
    ciAtributo, ciRaiz, ciActual, ciPadre, ciDescendientes, ciOperador,
    ciFuncion, ciFiltro, ciCada, ciEje);
  TInstruccionSpfe = record
    Clase: TClaseInstruccionSpfe;
    Texto: PChar;
    Primero: Integer;
    Cantidad: Integer;
  end;
  TContextoSpfe = record
    Patron: PChar;
    Expresion: PChar;
    Instruccion: Integer;
  end;
  TReglaSpfe = record
    Identificador: PChar;
    Bandera: PChar;
    Prueba: PChar;
    Mensaje: PChar;
    Contexto: Integer;
    Instruccion: Integer;
  end;
  TClaseValorSpfe = (cvNodo, cvCadena, cvDecimal, cvBooleano, cvFecha);
  TValorSpfe = record
    Clase: TClaseValorSpfe;
    Nodo: TDomNode;
    Texto: string;
    Decimal: TBcd;
    EsCierto: Boolean;
    class function DesdeNodo(const ANodo: TDomNode): TValorSpfe; static;
    class function DesdeTexto(const ATexto: string): TValorSpfe; static;
    class function DesdeDecimal(const AValor: TBcd): TValorSpfe; static;
    class function DesdeBooleano(AValor: Boolean): TValorSpfe; static;
    function ComoTexto: string;
    function ComoDecimal: TBcd;
    function ComoBooleano: Boolean;
  end;
  TSecuenciaSpfe = TArray<TValorSpfe>;

function ObtenerBooleano(const AValores: TSecuenciaSpfe): Boolean;
function ObtenerTexto(const AValores: TSecuenciaSpfe): string;
function ObtenerDecimal(const AValores: TSecuenciaSpfe): TBcd;
function LeerDecimal(const ATexto: string): TBcd;
function RedondearXPath(const AValor: TBcd): TBcd;
procedure AgregarValor(var AValores: TSecuenciaSpfe;
  const AValor: TValorSpfe);
procedure AgregarSinDuplicar(var AValores: TSecuenciaSpfe;
  const AValor: TValorSpfe);

implementation

uses
  inSpfeMensajes;

function LeerDecimal(const ATexto: string): TBcd;
var
  oFormato: TFormatSettings;
  sTexto: string;
  i, iDigitos, iPunto: Integer;
begin
  sTexto := Trim(ATexto);
  if sTexto = '' then
    raise ESpfeErrorDinamico.Create(rsSpfeDecimalXPathVacio);
  iDigitos := 0;
  for i := 1 to Length(sTexto) do
  begin
    if not CharInSet(sTexto[i], ['0'..'9', '+', '-', '.']) then
      raise ESpfeErrorDinamico.Create(rsSpfeDecimalXPathNoValido + sTexto);
    if CharInSet(sTexto[i], ['0'..'9']) then
      Inc(iDigitos);
  end;
  iPunto := Pos('.', sTexto);
  if (iDigitos > 64) or
    ((iPunto > 0) and (Length(sTexto) - iPunto > 63)) then
    raise ESpfeXPath.Create(rsSpfePrecisionDecimalFueraDel);
  oFormato := TFormatSettings.Invariant;
  if not TryStrToBcd(sTexto, Result, oFormato) then
    raise ESpfeErrorDinamico.Create(rsSpfeDecimalFueraDeRango + sTexto);
end;

class function TValorSpfe.DesdeNodo(
  const ANodo: TDomNode): TValorSpfe;
begin
  Result := Default(TValorSpfe);
  Result.Clase := cvNodo;
  Result.Nodo := ANodo;
end;

class function TValorSpfe.DesdeTexto(const ATexto: string): TValorSpfe;
begin
  Result := Default(TValorSpfe);
  Result.Clase := cvCadena;
  Result.Texto := ATexto;
end;

class function TValorSpfe.DesdeDecimal(const AValor: TBcd): TValorSpfe;
begin
  Result := Default(TValorSpfe);
  Result.Clase := cvDecimal;
  Result.Decimal := AValor;
end;

class function TValorSpfe.DesdeBooleano(AValor: Boolean): TValorSpfe;
begin
  Result := Default(TValorSpfe);
  Result.Clase := cvBooleano;
  Result.EsCierto := AValor;
end;

function TValorSpfe.ComoTexto: string;
begin
  case Clase of
    cvNodo: Result := Nodo.XPathStringValue;
    cvDecimal: Result := BcdToStr(Decimal, TFormatSettings.Invariant);
    cvBooleano:
      if EsCierto then
        Result := 'true'
      else
        Result := 'false';
  else
    Result := Texto;
  end;
end;

function TValorSpfe.ComoDecimal: TBcd;
begin
  if Clase = cvDecimal then
    Result := Decimal
  else
    Result := LeerDecimal(ComoTexto);
end;

function TValorSpfe.ComoBooleano: Boolean;
begin
  case Clase of
    cvNodo: Result := Assigned(Nodo);
    cvBooleano: Result := EsCierto;
    cvDecimal: Result := BcdCompare(Decimal, IntegerToBcd(0)) <> 0;
  else
    Result := Texto <> '';
  end;
end;

function ObtenerBooleano(const AValores: TSecuenciaSpfe): Boolean;
begin
  Result := False;
  if Length(AValores) > 0 then
  begin
    if (Length(AValores) > 1) and (AValores[0].Clase <> cvNodo) then
      raise ESpfeXPath.Create(rsSpfeBooleanoEfectivoDeSecuencia);
    Result := AValores[0].ComoBooleano;
  end;
end;

function ObtenerTexto(const AValores: TSecuenciaSpfe): string;
begin
  Result := '';
  if Length(AValores) > 1 then
    raise ESpfeErrorDinamico.Create(rsSpfeLaFuncionRequiereCero);
  if Length(AValores) = 1 then
    Result := AValores[0].ComoTexto;
end;

function ObtenerDecimal(const AValores: TSecuenciaSpfe): TBcd;
begin
  if Length(AValores) <> 1 then
    raise ESpfeErrorDinamico.Create(rsSpfeLaOperacionRequiereUn);
  Result := AValores[0].ComoDecimal;
end;

function RedondearXPath(const AValor: TBcd): TBcd;
var
  sTexto, sEntero, sFraccion: string;
  iPunto: Integer;
  bNegativo, bIncrementar: Boolean;
begin
  // XPath round: los empates se redondean hacia infinito positivo.
  sTexto := BcdToStr(AValor, TFormatSettings.Invariant);
  bNegativo := IsBcdNegative(AValor);
  if bNegativo then
    Delete(sTexto, 1, 1);
  iPunto := Pos('.', sTexto);
  sEntero := sTexto;
  sFraccion := '';
  if iPunto > 0 then
  begin
    sEntero := Copy(sTexto, 1, iPunto - 1);
    sFraccion := Copy(sTexto, iPunto + 1, MaxInt);
  end;
  Result := LeerDecimal(sEntero);
  bIncrementar := False;
  if sFraccion <> '' then
  begin
    if bNegativo then
      bIncrementar := LeerDecimal('0.' + sFraccion) > LeerDecimal('0.5')
    else
      bIncrementar := sFraccion[1] >= '5';
  end;
  if bIncrementar then
    Result := Result + IntegerToBcd(1);
  if bNegativo then
    Result := -Result;
end;

procedure AgregarValor(var AValores: TSecuenciaSpfe;
  const AValor: TValorSpfe);
var
  i: Integer;
begin
  i := Length(AValores);
  SetLength(AValores, i + 1);
  AValores[i] := AValor;
end;

procedure AgregarSinDuplicar(var AValores: TSecuenciaSpfe;
  const AValor: TValorSpfe);
var
  oValor: TValorSpfe;
  bExiste: Boolean;
begin
  bExiste := False;
  if AValor.Clase = cvNodo then
    for oValor in AValores do
      bExiste := bExiste or ((oValor.Clase = cvNodo) and
        (oValor.Nodo = AValor.Nodo));
  if not bExiste then
    AgregarValor(AValores, AValor);
end;

end.
