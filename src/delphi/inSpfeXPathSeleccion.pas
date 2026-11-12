{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeXPathSeleccion                                          }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    navegación XML nativa.                                                    }
{    No acredita conformidad semántica EN 2026/SPFE.                           }
{******************************************************************************}
unit inSpfeXPathSeleccion;

interface

uses
  System.SysUtils, Xml.Internal.AdomCore_4_3, inSpfeXPathTipos;

type
  TSeleccionSpfe = class
  private
    FDocumento: TDomCustomDocument;
    FOrden: TSecuenciaSpfe;
    function Coincidir(const ANodo: TDomNode;
      const ANombre: string): Boolean;
    procedure Recorrer(const ANodo: TDomNode;
      var AResultado: TSecuenciaSpfe);
    function SeleccionarEje(const AActual: TValorSpfe;
      const ATexto: string): TSecuenciaSpfe;
  public
    constructor Create(const ADocumento: TDomCustomDocument);
    function Seleccionar(AClase: TClaseInstruccionSpfe;
      const ATexto: string; const AActual: TValorSpfe): TSecuenciaSpfe;
    function Descender(const AValores: TSecuenciaSpfe): TSecuenciaSpfe;
    function Localizar(const ANodo: TDomNode): string;
  end;

implementation

uses
  inSpfeMensajes;

function EspacioNombre(const APrefijo: string): string;
const
  Inicio = 'urn:oasis:names:specification:ubl:schema:xsd:';
begin
  if APrefijo = 'cbc' then
    Result := Inicio + 'CommonBasicComponents-2'
  else if APrefijo = 'cac' then
    Result := Inicio + 'CommonAggregateComponents-2'
  else if APrefijo = 'ubl' then
    Result := Inicio + 'Invoice-2'
  else if APrefijo = 'cn' then
    Result := Inicio + 'CreditNote-2'
  else if APrefijo = 'ext' then
    Result := Inicio + 'CommonExtensionComponents-2'
  else
    raise ESpfeXPath.Create(rsSpfePrefijoSinResolver + APrefijo);
end;

constructor TSeleccionSpfe.Create(const ADocumento: TDomCustomDocument);
begin
  inherited Create;
  FDocumento := ADocumento;
  Recorrer(FDocumento, FOrden);
end;

procedure TSeleccionSpfe.Recorrer(const ANodo: TDomNode;
  var AResultado: TSecuenciaSpfe);
var
  oHijo: TDomNode;
begin
  AgregarValor(AResultado, TValorSpfe.DesdeNodo(ANodo));
  oHijo := ANodo.FirstChild;
  while Assigned(oHijo) do
  begin
    if oHijo.NodeType = ntElement_Node then
      Recorrer(oHijo, AResultado);
    oHijo := oHijo.NextSibling;
  end;
end;

function TSeleccionSpfe.Coincidir(const ANodo: TDomNode;
  const ANombre: string): Boolean;
var
  iSeparador: Integer;
begin
  Result := ANombre = '*';
  if not Result then
  begin
    iSeparador := Pos(':', ANombre);
    if iSeparador > 0 then
      Result := (ANodo.LocalName = Copy(ANombre, iSeparador + 1, MaxInt))
        and (ANodo.NamespaceURI = EspacioNombre(
          Copy(ANombre, 1, iSeparador - 1)))
    else
      Result := (ANodo.NodeName = ANombre) and (ANodo.NamespaceURI = '');
  end;
end;

function TSeleccionSpfe.SeleccionarEje(const AActual: TValorSpfe;
  const ATexto: string): TSecuenciaSpfe;
var
  sEje, sNombre: string;
  iSeparador: Integer;
  oNodo: TDomNode;
  oValor: TValorSpfe;
begin
  Result := nil;
  iSeparador := Pos('::', ATexto);
  sEje := Copy(ATexto, 1, iSeparador - 1);
  sNombre := Copy(ATexto, iSeparador + 2, MaxInt);
  oNodo := AActual.Nodo;
  if sEje = 'self' then
  begin
    if Coincidir(oNodo, sNombre) then
      AgregarValor(Result, AActual);
  end
  else if sEje = 'ancestor' then
  begin
    oNodo := oNodo.ParentNode;
    while Assigned(oNodo) do
    begin
      if Coincidir(oNodo, sNombre) then
        AgregarValor(Result, TValorSpfe.DesdeNodo(oNodo));
      oNodo := oNodo.ParentNode;
    end;
  end
  else if sEje = 'preceding' then
  begin
    for oValor in FOrden do
    begin
      if oValor.Nodo = AActual.Nodo then
        Break;
      if Coincidir(oValor.Nodo, sNombre) then
        AgregarValor(Result, oValor);
    end;
  end
  else
    raise ESpfeXPath.Create(rsSpfeEjeSinImplementar + sEje);
end;

function TSeleccionSpfe.Seleccionar(AClase: TClaseInstruccionSpfe;
  const ATexto: string; const AActual: TValorSpfe): TSecuenciaSpfe;
var
  oHijo: TDomNode;
  i: Integer;
begin
  Result := nil;
  if (AClase <> ciActual) and (AActual.Clase <> cvNodo) then
    raise ESpfeXPath.Create(rsSpfeUnEjeXPathNecesita);
  case AClase of
    ciRaiz: Result := [TValorSpfe.DesdeNodo(FDocumento)];
    ciActual: Result := [AActual];
    ciPadre:
      if Assigned(AActual.Nodo.ParentNode) then
        Result := [TValorSpfe.DesdeNodo(AActual.Nodo.ParentNode)];
    ciEje: Result := SeleccionarEje(AActual, ATexto);
    ciAtributo:
      if Assigned(AActual.Nodo.Attributes) then
        for i := 0 to AActual.Nodo.Attributes.Length - 1 do
          if Coincidir(AActual.Nodo.Attributes.Item(i), ATexto) then
            AgregarValor(Result, TValorSpfe.DesdeNodo(
              AActual.Nodo.Attributes.Item(i)));
    ciHijo:
      begin
        oHijo := AActual.Nodo.FirstChild;
        while Assigned(oHijo) do
        begin
          if (oHijo.NodeType = ntElement_Node) and Coincidir(oHijo, ATexto) then
            AgregarValor(Result, TValorSpfe.DesdeNodo(oHijo));
          oHijo := oHijo.NextSibling;
        end;
      end;
  else
    raise ESpfeXPath.Create(rsSpfeClaseDeSeleccionDesconocida);
  end;
end;

function TSeleccionSpfe.Descender(
  const AValores: TSecuenciaSpfe): TSecuenciaSpfe;
var
  oValor: TValorSpfe;
begin
  Result := nil;
  for oValor in AValores do
  begin
    if oValor.Clase <> cvNodo then
      raise ESpfeXPath.Create(rsSpfeDescendientesRequiereUnNodo);
    Recorrer(oValor.Nodo, Result);
  end;
end;

function TSeleccionSpfe.Localizar(const ANodo: TDomNode): string;
var
  oNodo, oHermano: TDomNode;
  iPosicion: Integer;
begin
  Result := '';
  oNodo := ANodo;
  while Assigned(oNodo) and (oNodo.NodeType <> ntDocument_Node) do
  begin
    iPosicion := 1;
    oHermano := oNodo.PreviousSibling;
    while Assigned(oHermano) do
    begin
      if (oHermano.LocalName = oNodo.LocalName) and
        (oHermano.NamespaceURI = oNodo.NamespaceURI) then
        Inc(iPosicion);
      oHermano := oHermano.PreviousSibling;
    end;
    Result := '/' + oNodo.NodeName + '[' + IntToStr(iPosicion) + ']' + Result;
    oNodo := oNodo.ParentNode;
  end;
end;

end.
