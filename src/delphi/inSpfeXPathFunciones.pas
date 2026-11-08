{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeXPathFunciones                                          }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    funciones XPath del paquete EN 1.3.17.                                    }
{    No acredita conformidad semántica EN 2026/SPFE.                           }
{******************************************************************************}
unit inSpfeXPathFunciones;

interface

uses
  System.SysUtils, System.StrUtils, Data.FmtBcd, inSpfeXPathTipos;

type
  TArgumentosSpfe = TArray<TSecuenciaSpfe>;

function EjecutarFuncionSpfe(const ANombre: string;
  const AArgumentos: TArgumentosSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;

implementation

uses
  inSpfeMensajes;

function NormalizarEspacios(const ATexto: string): string;
var
  c: Char;
  bEspacio: Boolean;
begin
  Result := '';
  bEspacio := False;
  for c in ATexto do
  begin
    if CharInSet(c, [#9, #10, #13, #32]) then
      bEspacio := Result <> ''
    else
    begin
      if bEspacio then
        Result := Result + ' ';
      Result := Result + c;
      bEspacio := False;
    end;
  end;
end;

function ContarCaracteres(const ATexto: string): Integer;
var
  i: Integer;
begin
  Result := 0;
  i := 1;
  while i <= Length(ATexto) do
  begin
    Inc(Result);
    if (Ord(ATexto[i]) >= $D800) and (Ord(ATexto[i]) <= $DBFF) then
      Inc(i);
    Inc(i);
  end;
end;

function RecortarCaracteres(const ATexto: string; AInicio: Integer;
  ACantidad: Integer): string;
var
  i, iCaracter, iLongitud: Integer;
begin
  Result := '';
  i := 1;
  iCaracter := 1;
  while i <= Length(ATexto) do
  begin
    iLongitud := 1;
    if (Ord(ATexto[i]) >= $D800) and (Ord(ATexto[i]) <= $DBFF) then
      iLongitud := 2;
    if (iCaracter >= AInicio) and (iCaracter < AInicio + ACantidad) then
      Result := Result + Copy(ATexto, i, iLongitud);
    Inc(i, iLongitud);
    Inc(iCaracter);
  end;
end;

function CalcularCadena(const ANombre: string;
  const AArgumentos: TArgumentosSpfe): string;
var
  sPrimero, sSegundo: string;
  i: Integer;
begin
  sPrimero := ObtenerTexto(AArgumentos[0]);
  sSegundo := '';
  if Length(AArgumentos) > 1 then
    sSegundo := ObtenerTexto(AArgumentos[1]);
  case IndexStr(ANombre, ['normalize-space', 'upper-case', 'concat',
    'substring-after', 'substring-before', 'substring']) of
    0: Result := NormalizarEspacios(sPrimero);
    1: Result := sPrimero.ToUpperInvariant;
    2:
      begin
        Result := '';
        for i := 0 to High(AArgumentos) do
          Result := Result + ObtenerTexto(AArgumentos[i]);
      end;
    3:
      begin
        Result := '';
        i := Pos(sSegundo, sPrimero);
        if i > 0 then
          Result := Copy(sPrimero, i + Length(sSegundo), MaxInt);
        if sSegundo = '' then
          Result := sPrimero;
      end;
    4:
      begin
        Result := '';
        i := Pos(sSegundo, sPrimero);
        if i > 0 then
          Result := Copy(sPrimero, 1, i - 1);
      end;
    5:
      begin
        i := BcdToInteger(RedondearXPath(
          ObtenerDecimal(AArgumentos[1])));
        Result := RecortarCaracteres(sPrimero, i,
          BcdToInteger(RedondearXPath(ObtenerDecimal(AArgumentos[2]))));
      end;
  else
    raise ESpfeXPath.Create(rsSpfeFuncionDeTextoDesconocida + ANombre);
  end;
end;

function CalcularNumero(const ANombre: string;
  const AArgumentos: TArgumentosSpfe): TSecuenciaSpfe;
var
  dResultado: TBcd;
  oValor: TValorSpfe;
begin
  Result := nil;
  if ANombre = 'count' then
    dResultado := IntegerToBcd(Length(AArgumentos[0]))
  else if ANombre = 'sum' then
  begin
    dResultado := IntegerToBcd(0);
    for oValor in AArgumentos[0] do
      dResultado := dResultado + oValor.ComoDecimal;
  end
  else if ANombre = 'string-length' then
    dResultado := IntegerToBcd(ContarCaracteres(
      ObtenerTexto(AArgumentos[0])))
  else
  begin
    if Length(AArgumentos[0]) = 0 then
      dResultado := IntegerToBcd(0)
    else
      dResultado := ObtenerDecimal(AArgumentos[0]);
    if ANombre = 'round' then
      dResultado := RedondearXPath(dResultado)
    else if (ANombre = 'abs') and IsBcdNegative(dResultado) then
      dResultado := -dResultado
    else if ANombre = 'unario-' then
      dResultado := -dResultado;
  end;
  if (Length(AArgumentos[0]) > 0) or
    MatchStr(ANombre, ['count', 'sum', 'string-length']) then
    Result := [TValorSpfe.DesdeDecimal(dResultado)];
end;

function CalcularBooleano(const ANombre: string;
  const AArgumentos: TArgumentosSpfe): Boolean;
begin
  case IndexStr(ANombre, ['true', 'false', 'not', 'exists',
    'contains', 'ends-with']) of
    0: Result := True;
    1: Result := False;
    2: Result := not ObtenerBooleano(AArgumentos[0]);
    3: Result := Length(AArgumentos[0]) > 0;
    4: Result := (ObtenerTexto(AArgumentos[1]) = '') or
      (Pos(ObtenerTexto(AArgumentos[1]),
        ObtenerTexto(AArgumentos[0])) > 0);
    5: Result := EndsStr(ObtenerTexto(AArgumentos[1]),
      ObtenerTexto(AArgumentos[0]));
  else
    raise ESpfeXPath.Create(rsSpfeFuncionBooleanaDesconocida + ANombre);
  end;
end;

function ObtenerDistintos(const AValores: TSecuenciaSpfe): TSecuenciaSpfe;
var
  oValor, oAnterior: TValorSpfe;
  bExiste: Boolean;
begin
  Result := nil;
  for oValor in AValores do
  begin
    bExiste := False;
    for oAnterior in Result do
      bExiste := bExiste or (oAnterior.ComoTexto = oValor.ComoTexto);
    if not bExiste then
      AgregarValor(Result, TValorSpfe.DesdeTexto(oValor.ComoTexto));
  end;
end;

function CalcularNombre(const ANombre: string;
  const AArgumentos: TArgumentosSpfe; const AActual: TValorSpfe): string;
var
  oValor: TValorSpfe;
begin
  oValor := AActual;
  if Length(AArgumentos) = 1 then
  begin
    if Length(AArgumentos[0]) <> 1 then
      raise ESpfeXPath.Create(rsSpfeNombreRequiereUnNodo);
    oValor := AArgumentos[0][0];
  end;
  if oValor.Clase <> cvNodo then
    raise ESpfeXPath.Create(rsSpfeNombreRequiereUnNodo);
  if ANombre = 'name' then
    Result := oValor.Nodo.NodeName
  else
    Result := oValor.Nodo.LocalName;
end;

function EjecutarFuncionSpfe(const ANombre: string;
  const AArgumentos: TArgumentosSpfe;
  const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oValor: TValorSpfe;
begin
  if MatchStr(ANombre, ['normalize-space', 'upper-case', 'concat',
    'substring-after', 'substring-before', 'substring']) then
    Result := [TValorSpfe.DesdeTexto(CalcularCadena(ANombre, AArgumentos))]
  else if MatchStr(ANombre, ['xs:decimal', 'round', 'abs', 'sum',
    'count', 'string-length', 'unario-', 'unario+']) then
    Result := CalcularNumero(ANombre, AArgumentos)
  else if MatchStr(ANombre, ['true', 'false', 'not', 'exists',
    'contains', 'ends-with']) then
    Result := [TValorSpfe.DesdeBooleano(
      CalcularBooleano(ANombre, AArgumentos))]
  else if ANombre = 'distinct-values' then
    Result := ObtenerDistintos(AArgumentos[0])
  else if MatchStr(ANombre, ['name', 'local-name']) then
    Result := [TValorSpfe.DesdeTexto(CalcularNombre(
      ANombre, AArgumentos, AActual))]
  else if ANombre = 'xs:date' then
  begin
    Result := nil;
    if Length(AArgumentos[0]) > 0 then
    begin
      oValor := TValorSpfe.DesdeTexto(ObtenerTexto(AArgumentos[0]));
      oValor.Clase := cvFecha;
      Result := [oValor];
    end;
  end
  else
    raise ESpfeXPath.Create(rsSpfeFuncionNoImplementada + ANombre);
end;

end.
