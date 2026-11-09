{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeGeneradorRespuesta                                      }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       09/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    Genera los UBL 2.5 ApplicationResponse del SPFE: la anulación de          }
{    factura (CANCELINVOICE, Anexo I) y los mensajes de estado del Anexo II    }
{    (pago, rechazo, cobro e impago, con altas y bajas).                       }
{    SenderParty y ReceiverParty son obligatorios (1..1) en el esquema UBL     }
{    aunque el Anexo II no los detalla: se consignan NIF y razón social de     }
{    quien comunica y de la otra parte. Pendiente de contraste con el          }
{    servicio ValidationInvoice del entorno PRE.                               }
{******************************************************************************}
unit inSpfeGeneradorRespuesta;

interface

type
  TParteMensajeSpfe = record
    Nif: string;
    Nombre: string;
  end;

  TFacturaInformadaSpfe = record
    Id: string;           // Serie y número (formato BT-1)
    Fecha: string;        // Fecha de expedición
    NifEmisor: string;    // NIF del vendedor de la factura
    NombreEmisor: string; // Razón social del vendedor
  end;

  TMensajeEstadoSpfe = record
    Id: string;             // cbc:ID del ApplicationResponse
    FechaEmision: string;   // cbc:IssueDate del mensaje
    Codigo: string;         // CANCELINVOICE, PAYMENT, CANCELPAYMENT,
                            // REJECTION, CANCELREJECTION, SETTLEMENT,
                            // CANCELSETTLEMENT, DEFAULT, CANCELDEFAULT
    Remitente: TParteMensajeSpfe; // SenderParty: quien comunica
    Receptor: TParteMensajeSpfe;  // ReceiverParty: la otra parte
    Factura: TFacturaInformadaSpfe;
    FechaEfecto: string;          // EffectiveDate; en DEFAULT, vencimiento
    FechaVencimiento: string;     // Status DueDate
    FechaRecepcionMercancias: string; // Status ShipmentDate
    FechaRecepcionFactura: string;    // Status ReceptionDate
    MotivoRechazo: string;        // REJECTION: lista L1 (01, 02)
    EsFacturaRectificada: Boolean;    // PAYMENT: CorrectedInvoice
    EsFacturaRectificativa: Boolean;  // PAYMENT: NegativeAmountInvoice
    EsMecanismoFinanciacion: Boolean; // SETTLEMENT: FinancingArrangement
  end;

  TGeneradorRespuestaSpfe = class
  public
    function Generar(const AMensaje: TMensajeEstadoSpfe): string;
  end;

implementation

uses
  System.SysUtils, inSpfeEscritorXml, inSpfeMapeos, inSpfeMensajes;

const
  EspacioRespuesta =
    'urn:oasis:names:specification:ubl:schema:xsd:ApplicationResponse-2';
  EspacioCac =
    'urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonAggregateComponents-2';
  EspacioCbc =
    'urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonBasicComponents-2';

procedure EscribirParte(AEscritor: TEscritorXmlSpfe; const ANombre: string;
  const ADatos: TParteMensajeSpfe);
begin
  AEscritor.Abrir(ANombre);
  AEscritor.Abrir('cac:PartyTaxScheme');
  AEscritor.Escribir('cbc:CompanyID', ADatos.Nif);
  AEscritor.Abrir('cac:TaxScheme');
  AEscritor.Escribir('cbc:ID', 'LOC');
  AEscritor.Cerrar; // TaxScheme
  AEscritor.Cerrar; // PartyTaxScheme
  AEscritor.Abrir('cac:PartyLegalEntity');
  AEscritor.Escribir('cbc:RegistrationName', ADatos.Nombre);
  AEscritor.Cerrar; // PartyLegalEntity
  AEscritor.Cerrar; // ANombre
end;

{ Status con ReferenceDate y Condition/AttributeID (patrón del Anexo II). }
procedure EscribirEstadoFecha(AEscritor: TEscritorXmlSpfe;
  const AFecha, AAtributo: string);
begin
  if AFecha = '' then
    Exit;
  AEscritor.Abrir('cac:Status');
  AEscritor.Escribir('cbc:ReferenceDate', AFecha);
  AEscritor.Abrir('cac:Condition');
  AEscritor.Escribir('cbc:AttributeID', AAtributo);
  AEscritor.Cerrar; // Condition
  AEscritor.Cerrar; // Status
end;

function TGeneradorRespuestaSpfe.Generar(
  const AMensaje: TMensajeEstadoSpfe): string;
var
  oEscritor: TEscritorXmlSpfe;
begin
  if not EsCodigoRespuestaSpfe(AMensaje.Codigo) then
    raise ESpfeGenerador.Create(rsSpfeCodigoRespuestaDesconocido +
      AMensaje.Codigo);
  if (AMensaje.MotivoRechazo <> '') and
    not EsMotivoRechazoSpfe(AMensaje.MotivoRechazo) then
    raise ESpfeGenerador.Create(rsSpfeMotivoRechazoDesconocido +
      AMensaje.MotivoRechazo);

  oEscritor := TEscritorXmlSpfe.Create;
  try
    oEscritor.Abrir('ar:ApplicationResponse',
      ['xmlns:ar', EspacioRespuesta, 'xmlns:cac', EspacioCac,
      'xmlns:cbc', EspacioCbc]);
    oEscritor.Escribir('cbc:CustomizationID',
      IdentificadorEspecificacionSpfe);
    oEscritor.Escribir('cbc:ProfileID', PerfilSpfe);
    oEscritor.Escribir('cbc:ID', AMensaje.Id);
    oEscritor.Escribir('cbc:IssueDate', AMensaje.FechaEmision);

    EscribirParte(oEscritor, 'cac:SenderParty', AMensaje.Remitente);
    EscribirParte(oEscritor, 'cac:ReceiverParty', AMensaje.Receptor);

    oEscritor.Abrir('cac:DocumentResponse');
    oEscritor.Abrir('cac:Response');
    oEscritor.Escribir('cbc:ResponseCode', AMensaje.Codigo);
    oEscritor.EscribirOpcional('cbc:EffectiveDate', AMensaje.FechaEfecto);

    // Estados con fecha de referencia y condición (Anexo II).
    EscribirEstadoFecha(oEscritor, AMensaje.FechaVencimiento, 'DueDate');
    EscribirEstadoFecha(oEscritor, AMensaje.FechaRecepcionMercancias,
      'ShipmentDate');
    EscribirEstadoFecha(oEscritor, AMensaje.FechaRecepcionFactura,
      'ReceptionDate');

    // REJECTION: motivo del rechazo (lista L1 del Anexo II).
    if AMensaje.MotivoRechazo <> '' then
    begin
      oEscritor.Abrir('cac:Status');
      oEscritor.Escribir('cbc:ConditionCode', AMensaje.MotivoRechazo);
      oEscritor.Cerrar;
    end;

    // PAYMENT: indicadores de factura rectificada / rectificativa.
    if AMensaje.EsFacturaRectificada then
    begin
      oEscritor.Abrir('cac:Status');
      oEscritor.Escribir('cbc:StatusReason', 'CorrectedInvoice');
      oEscritor.Cerrar;
    end;
    if AMensaje.EsFacturaRectificativa then
    begin
      oEscritor.Abrir('cac:Status');
      oEscritor.Escribir('cbc:StatusReason', 'NegativeAmountInvoice');
      oEscritor.Cerrar;
    end;

    // SETTLEMENT: cobro a través de un mecanismo de financiación.
    if AMensaje.EsMecanismoFinanciacion then
    begin
      oEscritor.Abrir('cac:Status');
      oEscritor.Abrir('cac:Condition');
      oEscritor.Escribir('cbc:AttributeID', 'FinancingArrangement');
      oEscritor.Cerrar; // Condition
      oEscritor.Cerrar; // Status
    end;

    oEscritor.Cerrar; // Response

    // Factura sobre la que se informa.
    oEscritor.Abrir('cac:DocumentReference');
    oEscritor.Escribir('cbc:ID', AMensaje.Factura.Id);
    oEscritor.Escribir('cbc:IssueDate', AMensaje.Factura.Fecha);
    oEscritor.Abrir('cac:IssuerParty');
    oEscritor.Abrir('cac:PartyTaxScheme');
    oEscritor.Escribir('cbc:CompanyID', AMensaje.Factura.NifEmisor);
    // cac:TaxScheme es obligatorio dentro de PartyTaxScheme.
    oEscritor.Abrir('cac:TaxScheme');
    oEscritor.Escribir('cbc:ID', 'LOC');
    oEscritor.Cerrar; // TaxScheme
    oEscritor.Cerrar; // PartyTaxScheme
    oEscritor.Abrir('cac:PartyLegalEntity');
    oEscritor.Escribir('cbc:RegistrationName',
      AMensaje.Factura.NombreEmisor);
    oEscritor.Cerrar; // PartyLegalEntity
    oEscritor.Cerrar; // IssuerParty
    oEscritor.Cerrar; // DocumentReference

    oEscritor.Cerrar; // DocumentResponse
    oEscritor.Cerrar; // ApplicationResponse
    Result := oEscritor.XmlCompleto;
  finally
    FreeAndNil(oEscritor);
  end;
end;

end.
