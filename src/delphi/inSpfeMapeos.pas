{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeMapeos                                                  }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       09/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    Códigos y mapeos del Anexo I de la orden del SPFE: país numérico          }
{    ISO 3166-1 a alfa-2, unidades a UN/ECE Rec 20, medios de pago a           }
{    UNTDID 4461 y constantes del perfil (BT-23, BT-24, calificadores).        }
{******************************************************************************}
unit inSpfeMapeos;

interface

const
  { BT-24: identificador de especificación de la factura SPFE. }
  IdentificadorEspecificacionSpfe =
    'urn:cen.eu:en16931:2026#conformant#urn:aeat.es:spfe:1.0.0:extended';
  { BT-23: tipo de proceso de negocio. }
  PerfilSpfe = 'urn:aeat:names:specification:schema:profile:B2B';
  { Calificadores de los documentos justificativos (lista L10) y de las }
  { propiedades de línea (lista L8). }
  CalificadorDocumentoSpfe = 'urn:aeat:names:specification:schema:';
  CalificadorLineaSpfe = 'urn:aeat:names:specification:schema:lin:';
  CalificadorCargoSpfe = 'urn:aeat:names:specification:schema:add:';

{ País: código numérico ISO 3166-1 (como lo guardan las aplicaciones,      }
{ p. ej. 724) a alfa-2 (BT-40/BT-55). Lanza ESpfeGenerador si no hay       }
{ correspondencia registrada.                                              }
function PaisAlfa2Spfe(const ACodigoNumerico: string): string;

{ Unidad de medida libre a código UN/ECE Rec 20 (BT-130); C62 por defecto. }
function UnidadUneceSpfe(const AUnidad: string): string;

{ Medio de pago a UNTDID 4461 (BT-81): devuelve el configurado si no está  }
{ vacío; si no, el conocido para el código de la aplicación; si no, ZZZ.   }
function FormaPagoUntdidSpfe(
  const ACodigoConfigurado, ACodigoAplicacion: string): string;

{ Motivos de rechazo admitidos en el Anexo II (lista L1). }
function EsMotivoRechazoSpfe(const AMotivo: string): Boolean;

{ Códigos de respuesta de los mensajes ApplicationResponse del SPFE. }
function EsCodigoRespuestaSpfe(const ACodigo: string): Boolean;

implementation

uses
  System.SysUtils, inSpfeEscritorXml, inSpfeMensajes;

type
  TParMapeoSpfe = record
    Clave: string;
    Valor: string;
  end;

const
  PaisesSpfe: array [0 .. 40] of TParMapeoSpfe = (
    (Clave: '724'; Valor: 'ES'), (Clave: '620'; Valor: 'PT'),
    (Clave: '250'; Valor: 'FR'), (Clave: '276'; Valor: 'DE'),
    (Clave: '380'; Valor: 'IT'), (Clave: '826'; Valor: 'GB'),
    (Clave: '528'; Valor: 'NL'), (Clave: '056'; Valor: 'BE'),
    (Clave: '040'; Valor: 'AT'), (Clave: '372'; Valor: 'IE'),
    (Clave: '616'; Valor: 'PL'), (Clave: '203'; Valor: 'CZ'),
    (Clave: '642'; Valor: 'RO'), (Clave: '100'; Valor: 'BG'),
    (Clave: '300'; Valor: 'GR'), (Clave: '752'; Valor: 'SE'),
    (Clave: '208'; Valor: 'DK'), (Clave: '246'; Valor: 'FI'),
    (Clave: '348'; Valor: 'HU'), (Clave: '703'; Valor: 'SK'),
    (Clave: '705'; Valor: 'SI'), (Clave: '440'; Valor: 'LT'),
    (Clave: '428'; Valor: 'LV'), (Clave: '233'; Valor: 'EE'),
    (Clave: '191'; Valor: 'HR'), (Clave: '442'; Valor: 'LU'),
    (Clave: '470'; Valor: 'MT'), (Clave: '196'; Valor: 'CY'),
    (Clave: '756'; Valor: 'CH'), (Clave: '578'; Valor: 'NO'),
    (Clave: '020'; Valor: 'AD'), (Clave: '840'; Valor: 'US'),
    (Clave: '484'; Valor: 'MX'), (Clave: '032'; Valor: 'AR'),
    (Clave: '152'; Valor: 'CL'), (Clave: '170'; Valor: 'CO'),
    (Clave: '604'; Valor: 'PE'), (Clave: '858'; Valor: 'UY'),
    (Clave: '076'; Valor: 'BR'), (Clave: '156'; Valor: 'CN'),
    (Clave: '504'; Valor: 'MA'));

  UnidadesSpfe: array [0 .. 25] of TParMapeoSpfe = (
    (Clave: 'UDS'; Valor: 'C62'), (Clave: 'UD'; Valor: 'C62'),
    (Clave: 'UNIDAD'; Valor: 'C62'), (Clave: 'UNIDADES'; Valor: 'C62'),
    (Clave: 'KG'; Valor: 'KGM'), (Clave: 'KILOS'; Valor: 'KGM'),
    (Clave: 'G'; Valor: 'GRM'), (Clave: 'GRAMOS'; Valor: 'GRM'),
    (Clave: 'L'; Valor: 'LTR'), (Clave: 'LITROS'; Valor: 'LTR'),
    (Clave: 'ML'; Valor: 'MLT'), (Clave: 'M'; Valor: 'MTR'),
    (Clave: 'METROS'; Valor: 'MTR'), (Clave: 'CM'; Valor: 'CMT'),
    (Clave: 'MM'; Valor: 'MMT'), (Clave: 'M2'; Valor: 'MTK'),
    (Clave: 'M3'; Valor: 'MTQ'), (Clave: 'HORAS'; Valor: 'HUR'),
    (Clave: 'H'; Valor: 'HUR'), (Clave: 'MIN'; Valor: 'MIN'),
    (Clave: 'DIAS'; Valor: 'DAY'), (Clave: 'DIA'; Valor: 'DAY'),
    (Clave: 'CAJAS'; Valor: 'XBX'), (Clave: 'CAJA'; Valor: 'XBX'),
    (Clave: 'PARES'; Valor: 'PR'), (Clave: 'PAR'; Valor: 'PR'));

  FormasPagoSpfe: array [0 .. 1] of TParMapeoSpfe = (
    (Clave: 'EFE'; Valor: '10'), (Clave: 'TARJ'; Valor: '48'));

  CodigosRespuestaSpfe: array [0 .. 8] of string = (
    'CANCELINVOICE', 'PAYMENT', 'CANCELPAYMENT', 'REJECTION',
    'CANCELREJECTION', 'SETTLEMENT', 'CANCELSETTLEMENT', 'DEFAULT',
    'CANCELDEFAULT');

function BuscarPar(const APares: array of TParMapeoSpfe;
  const AClave: string; out AValor: string): Boolean;
var
  i: Integer;
begin
  Result := False;
  AValor := '';
  for i := Low(APares) to High(APares) do
    if APares[i].Clave = AClave then
    begin
      AValor := APares[i].Valor;
      Exit(True);
    end;
end;

function PaisAlfa2Spfe(const ACodigoNumerico: string): string;
var
  sCodigo: string;
begin
  sCodigo := ACodigoNumerico.Trim;
  while Length(sCodigo) < 3 do
    sCodigo := '0' + sCodigo;
  if not BuscarPar(PaisesSpfe, sCodigo, Result) then
    raise ESpfeGenerador.Create(rsSpfePaisSinCorrespondencia +
      ACodigoNumerico);
end;

function UnidadUneceSpfe(const AUnidad: string): string;
begin
  if not BuscarPar(UnidadesSpfe, AUnidad.Trim.ToUpperInvariant, Result) then
    Result := 'C62';
end;

function FormaPagoUntdidSpfe(
  const ACodigoConfigurado, ACodigoAplicacion: string): string;
begin
  Result := ACodigoConfigurado.Trim;
  if Result <> '' then
    Exit;
  if not BuscarPar(FormasPagoSpfe, ACodigoAplicacion.Trim.ToUpperInvariant,
    Result) then
    Result := 'ZZZ';
end;

function EsMotivoRechazoSpfe(const AMotivo: string): Boolean;
begin
  Result := (AMotivo = '01') or (AMotivo = '02');
end;

function EsCodigoRespuestaSpfe(const ACodigo: string): Boolean;
var
  i: Integer;
begin
  Result := False;
  for i := Low(CodigosRespuestaSpfe) to High(CodigosRespuestaSpfe) do
    Result := Result or (CodigosRespuestaSpfe[i] = ACodigo);
end;

end.
