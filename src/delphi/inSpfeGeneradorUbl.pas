{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeGeneradorUbl                                            }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       09/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    Genera el UBL 2.5 Invoice del mensaje de alta de factura del SPFE,        }
{    conforme al Anexo I de la orden (docs/spfe/A1-Proyecto-OM-FE.pdf) y       }
{    al ejemplo oficial de la AEAT (docs/spfe/factura.xml), con el orden       }
{    de elementos del esquema docs/spfe/ubl-2.5.                               }
{    Los importes, cantidades y porcentajes se reciben ya formateados con      }
{    punto decimal; el generador no redondea ni recalcula.                     }
{    Pendiente de contraste con la UNE CEN/TS 16931-3-2:2026 y con el          }
{    servicio ValidationInvoice del entorno PRE: hijos exactos de              }
{    CollectionInvoiceLine para la retención. Los suplidos y minoraciones      }
{    en nombre de terceros (SUPL/MINO) y los impuestos de la lista L9 a        }
{    nivel de documento quedan fuera de esta versión.                          }
{******************************************************************************}
unit inSpfeGeneradorUbl;

interface

type
  TDireccionSpfe = record
    Calle: string;        // BT-35/BT-50
    Calle2: string;
    Municipio: string;    // BT-37/BT-52
    CodigoPostal: string; // BT-38/BT-53
    Provincia: string;    // BT-39/BT-54
    PaisAlfa2: string;    // BT-40/BT-55
  end;

  TParteSpfe = record
    Nombre: string;       // BT-27/BT-44
    Nif: string;          // BT-32/BT-47 (esquema LOC, schemeID FC)
    NifIva: string;       // BT-31/BT-48 con prefijo de país (esquema VAT)
    InfoJuridica: string; // BT-33, solo vendedor
    Web: string;
    Telefono: string;     // BT-42/BT-57
    Email: string;        // BT-43/BT-58
    Direccion: TDireccionSpfe;
  end;

  TTerceroSpfe = record
    Nombre: string;       // BT-ES-3; vacío = sin tercero
    Nif: string;          // BT-ES-4
    NifIva: string;
  end;

  TNotaSpfe = record
    Codigo: string;       // BT-21 (REG en menciones obligatorias)
    Texto: string;        // BT-22
  end;

  TReferenciaFacturaSpfe = record
    Id: string;           // BT-25
    Fecha: string;        // BT-26
  end;

  TCargoDocumentoSpfe = record
    Importe: string;      // BT-92/BT-99
    Categoria: string;    // BT-95/BT-102 (lista L4)
    TipoIva: string;      // BT-96/BT-103
    Razon: string;        // BT-97/BT-104
  end;

  TRetencionSpfe = record
    Total: string;        // BT-ES-17/BT-ES-19; vacío = sin retención
    Base: string;         // BT-ES-18
    Porcentaje: string;   // BT-ES-20
    Concepto: string;     // BT-ES-21 (lista L5)
    Descripcion: string;  // BT-180
  end;

  TSubtotalIvaSpfe = record
    Categoria: string;      // BT-118 (lista L4)
    Tipo: string;           // BT-119
    Base: string;           // BT-116
    Cuota: string;          // BT-117
    CodigoExencion: string; // BT-121 (CEF VATEX)
    RazonExencion: string;  // BT-120
  end;

  TTotalesSpfe = record
    LineasNeto: string;   // BT-106
    Descuentos: string;   // BT-107; vacío = no se emite
    Cargos: string;       // BT-108
    Base: string;         // BT-109
    CuotaIva: string;     // BT-110
    Total: string;        // BT-112
    Pagado: string;       // BT-113
    Redondeo: string;     // BT-114
    APagar: string;       // BT-115
  end;

  TImporteRectificadoSpfe = record
    Codigo: string;       // BT-ES-29 (lista L2.C: Base, Cuota, CuotaRecargo)
    Importe: string;      // BT-123
  end;

  TRectificativaSpfe = record
    Tipo: string;         // BT-ES-27 (lista L2.A); vacío = no rectificativa
    Modalidad: string;    // BT-ES-28 (lista L2.B)
    DescripcionTipo: string;
    DescripcionModalidad: string;
    Importes: TArray<TImporteRectificadoSpfe>;
  end;

  TMinoracionLineaSpfe = record
    Importe: string;      // BT-136
    Razon: string;        // BT-139
  end;

  TCargoLineaSpfe = record
    Importe: string;        // BT-141
    Base: string;           // BT-142
    Tipo: string;           // BT-143
    CodigoImpuesto: string; // BT-ES-22 (lista L9)
    Razon: string;          // BT-144
  end;

  TRefCatastralSpfe = record
    Referencia: string;   // BT-161; vacía = sin referencia catastral
    Situacion: string;    // BT-ES-23 (lista L6)
  end;

  TLineaSpfe = record
    Id: string;                  // BT-126
    Cantidad: string;            // BT-129
    UnidadUnece: string;         // BT-130
    ImporteNeto: string;         // BT-131
    Nombre: string;              // BT-153
    Descripcion: string;         // BT-154
    PrecioUnitario: string;      // BT-146
    CantidadBasePrecio: string;  // BT-149
    CategoriaIva: string;        // BT-151 (lista L4)
    TipoIva: string;             // BT-152
    CodigoExencion: string;      // BT-195
    ClaveRegimen: string;        // BT-161 REGI (listas L3A/L3B/L3C)
    ImpuestoRegimen: string;     // BT-ES-24 (IVA, IGIC o IPSI)
    Minoraciones: TArray<TMinoracionLineaSpfe>;
    Cargos: TArray<TCargoLineaSpfe>;
    InfoAdicional: TArray<string>;
    RefCatastral: TRefCatastralSpfe;
  end;

  TFacturaSpfe = record
    Id: string;                 // BT-1
    EsCopiaFiel: Boolean;       // BT-ES-1
    FechaExpedicion: string;    // BT-2 (AAAA-MM-DD)
    HoraExpedicion: string;     // BT-166
    FechaVencimiento: string;   // BT-9
    TipoFactura: string;        // BT-3 (lista L1)
    Moneda: string;             // BT-5; vacía = EUR
    FechaOperacion: string;     // BT-7
    FechaEfectivaPago: string;  // BT-ES-2
    ReferenciasComprador: TArray<string>;      // BT-10
    Notas: TArray<TNotaSpfe>;                  // BG-1
    PeriodoDesde: string;       // BT-73
    PeriodoHasta: string;       // BT-74
    FacturasReferenciadas: TArray<TReferenciaFacturaSpfe>; // BG-3
    Vendedor: TParteSpfe;       // BG-4
    Comprador: TParteSpfe;      // BG-7
    Tercero: TTerceroSpfe;      // BG-ES-1
    MinoracionesDocumento: TArray<TCargoDocumentoSpfe>;    // BG-20
    CargosDocumento: TArray<TCargoDocumentoSpfe>;          // BG-21
    Retencion: TRetencionSpfe;  // BG-34 RETENCIONES
    DesgloseIva: TArray<TSubtotalIvaSpfe>;                 // BG-23
    Totales: TTotalesSpfe;      // BG-22
    CondicionesPago: string;    // BT-20
    PagoCodigoUntdid: string;   // BT-81; vacío = sin BG-16
    PagoIban: string;           // BT-84
    QrTipo: string;             // BT-123 (VERIFACTU o TICKETBAI)
    QrUrl: string;              // BT-ES-25; vacía = sin QR
    Rectificativa: TRectificativaSpfe;                     // BG-24 RECT
    Lineas: TArray<TLineaSpfe>; // BG-25
  end;

  TGeneradorUblSpfe = class
  private
    FEscritor: TObject;
    FMoneda: string;
    procedure Importe(const ANombre, AValor: string);
    procedure ImporteOpcional(const ANombre, AValor: string);
    procedure ReferenciasDocumentales(const AFactura: TFacturaSpfe);
    procedure Parte(const AContenedor: string; const ADatos: TParteSpfe;
      AEsVendedor: Boolean; const ATercero: TTerceroSpfe);
    procedure CargoDocumento(const ADatos: TCargoDocumentoSpfe;
      AEsCargo: Boolean);
    procedure DesgloseIva(const ASubtotales: TArray<TSubtotalIvaSpfe>;
      const ATotales: TTotalesSpfe);
    procedure Totales(const ATotales: TTotalesSpfe);
    procedure Linea(const ALinea: TLineaSpfe);
  public
    function Generar(const AFactura: TFacturaSpfe): string;
  end;

implementation

uses
  System.SysUtils, inSpfeEscritorXml, inSpfeMapeos;

const
  EspacioInvoice =
    'urn:oasis:names:specification:ubl:schema:xsd:Invoice-2';
  EspacioCac =
    'urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonAggregateComponents-2';
  EspacioCbc =
    'urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonBasicComponents-2';

function Escritor(AObjeto: TObject): TEscritorXmlSpfe; inline;
begin
  Result := TEscritorXmlSpfe(AObjeto);
end;

procedure TGeneradorUblSpfe.Importe(const ANombre, AValor: string);
begin
  Escritor(FEscritor).Escribir(ANombre, AValor, ['currencyID', FMoneda]);
end;

procedure TGeneradorUblSpfe.ImporteOpcional(const ANombre, AValor: string);
begin
  if AValor <> '' then
    Importe(ANombre, AValor);
end;

function TGeneradorUblSpfe.Generar(const AFactura: TFacturaSpfe): string;
var
  oEscritor: TEscritorXmlSpfe;
  sReferencia: string;
  oNota: TNotaSpfe;
  oReferencia: TReferenciaFacturaSpfe;
  oCargo: TCargoDocumentoSpfe;
  oLinea: TLineaSpfe;
begin
  FMoneda := AFactura.Moneda;
  if FMoneda = '' then
    FMoneda := 'EUR';
  oEscritor := TEscritorXmlSpfe.Create;
  try
    FEscritor := oEscritor;
    oEscritor.Abrir('in:Invoice', ['xmlns:in', EspacioInvoice,
      'xmlns:cac', EspacioCac, 'xmlns:cbc', EspacioCbc]);

    // Cabecera (orden del esquema UBL 2.5).
    oEscritor.Escribir('cbc:CustomizationID',
      IdentificadorEspecificacionSpfe);
    oEscritor.Escribir('cbc:ProfileID', PerfilSpfe);
    oEscritor.Escribir('cbc:ID', AFactura.Id);
    if AFactura.EsCopiaFiel then
      oEscritor.Escribir('cbc:CopyIndicator', 'true')
    else
      oEscritor.Escribir('cbc:CopyIndicator', 'false');
    oEscritor.Escribir('cbc:IssueDate', AFactura.FechaExpedicion);
    oEscritor.EscribirOpcional('cbc:IssueTime', AFactura.HoraExpedicion);
    oEscritor.EscribirOpcional('cbc:DueDate', AFactura.FechaVencimiento);
    oEscritor.Escribir('cbc:InvoiceTypeCode', AFactura.TipoFactura);
    for oNota in AFactura.Notas do
      oEscritor.Escribir('cbc:Note', oNota.Texto);
    oEscritor.EscribirOpcional('cbc:TaxPointDate', AFactura.FechaOperacion);
    oEscritor.Escribir('cbc:DocumentCurrencyCode', FMoneda,
      ['listID', 'ISO 4217 Alpha']);
    for sReferencia in AFactura.ReferenciasComprador do
      oEscritor.Escribir('cbc:BuyerReference', sReferencia);

    // BG-14 Periodo de la factura recapitulativa.
    if (AFactura.PeriodoDesde <> '') or (AFactura.PeriodoHasta <> '') then
    begin
      oEscritor.Abrir('cac:InvoicePeriod');
      oEscritor.EscribirOpcional('cbc:StartDate', AFactura.PeriodoDesde);
      oEscritor.EscribirOpcional('cbc:EndDate', AFactura.PeriodoHasta);
      oEscritor.Cerrar;
    end;

    // BG-3 Facturas referenciadas.
    for oReferencia in AFactura.FacturasReferenciadas do
    begin
      oEscritor.Abrir('cac:BillingReference');
      oEscritor.Abrir('cac:InvoiceDocumentReference');
      oEscritor.Escribir('cbc:ID', oReferencia.Id);
      oEscritor.Escribir('cbc:IssueDate', oReferencia.Fecha);
      oEscritor.Cerrar;
      oEscritor.Cerrar;
    end;

    // BG-24 QR fiscal, tipo, modalidad e importes de rectificativa.
    ReferenciasDocumentales(AFactura);

    // Partes.
    Parte('cac:AccountingSupplierParty', AFactura.Vendedor, True,
      AFactura.Tercero);
    Parte('cac:AccountingCustomerParty', AFactura.Comprador, False,
      Default(TTerceroSpfe));

    // BG-16 Instrucciones de pago.
    if AFactura.PagoCodigoUntdid <> '' then
    begin
      oEscritor.Abrir('cac:PaymentMeans');
      oEscritor.Escribir('cbc:PaymentMeansCode', AFactura.PagoCodigoUntdid,
        ['listID', 'UN/ECE 4461']);
      if AFactura.PagoIban <> '' then
      begin
        oEscritor.Abrir('cac:PayeeFinancialAccount');
        oEscritor.Escribir('cbc:ID', AFactura.PagoIban,
          ['schemeID', 'IBAN']);
        oEscritor.Cerrar;
      end;
      oEscritor.Cerrar;
    end;

    // BG-33 Condiciones de pago.
    if AFactura.CondicionesPago <> '' then
    begin
      oEscritor.Abrir('cac:PaymentTerms');
      oEscritor.Escribir('cbc:Note', AFactura.CondicionesPago);
      oEscritor.Cerrar;
    end;

    // BT-ES-2 Fecha efectiva de pago.
    if AFactura.FechaEfectivaPago <> '' then
    begin
      oEscritor.Abrir('cac:PrepaidPayment');
      oEscritor.Escribir('cbc:PaidDate', AFactura.FechaEfectivaPago);
      oEscritor.Cerrar;
    end;

    // BG-20 / BG-21 Minoraciones y cargos a nivel de documento.
    for oCargo in AFactura.MinoracionesDocumento do
      CargoDocumento(oCargo, False);
    for oCargo in AFactura.CargosDocumento do
      CargoDocumento(oCargo, True);

    // BG-23 Desglose del IVA.
    DesgloseIva(AFactura.DesgloseIva, AFactura.Totales);

    // BG-34 Retenciones: desglose (BT-ES-17 a BT-ES-21).
    if AFactura.Retencion.Total <> '' then
    begin
      oEscritor.Abrir('cac:WithholdingTaxTotal');
      Importe('cbc:TaxAmount', AFactura.Retencion.Total);
      oEscritor.Abrir('cac:TaxSubtotal');
      Importe('cbc:TaxableAmount', AFactura.Retencion.Base);
      Importe('cbc:TaxAmount', AFactura.Retencion.Total);
      oEscritor.Abrir('cac:TaxCategory');
      oEscritor.Escribir('cbc:ID', 'S');
      oEscritor.Escribir('cbc:Percent', AFactura.Retencion.Porcentaje);
      oEscritor.Abrir('cac:TaxScheme');
      oEscritor.Escribir('cbc:ID', 'WTH');
      oEscritor.Escribir('cbc:TaxTypeCode', AFactura.Retencion.Concepto);
      oEscritor.Cerrar; // TaxScheme
      oEscritor.Cerrar; // TaxCategory
      oEscritor.Cerrar; // TaxSubtotal
      oEscritor.Cerrar; // WithholdingTaxTotal
    end;

    // BG-22 Totales.
    Totales(AFactura.Totales);

    // BG-34 Retención como línea de cobro (BT-ES-16, código RETE).
    if AFactura.Retencion.Total <> '' then
    begin
      oEscritor.Abrir('cac:CollectionInvoiceLine');
      oEscritor.Escribir('cbc:ID', CalificadorCargoSpfe + 'RETE');
      Importe('cbc:LineExtensionAmount', AFactura.Retencion.Total);
      // cac:Item es obligatorio en la línea; lleva la descripción (BT-180).
      oEscritor.Abrir('cac:Item');
      if AFactura.Retencion.Descripcion <> '' then
        oEscritor.Escribir('cbc:Name', AFactura.Retencion.Descripcion)
      else
        oEscritor.Escribir('cbc:Name', 'Retencion');
      oEscritor.Cerrar; // Item
      oEscritor.Cerrar; // CollectionInvoiceLine
    end;

    // BG-25 Líneas.
    for oLinea in AFactura.Lineas do
      Linea(oLinea);

    oEscritor.Cerrar; // Invoice
    Result := oEscritor.XmlCompleto;
  finally
    FEscritor := nil;
    FreeAndNil(oEscritor);
  end;
end;

procedure TGeneradorUblSpfe.ReferenciasDocumentales(
  const AFactura: TFacturaSpfe);
var
  oEscritor: TEscritorXmlSpfe;
  oImporte: TImporteRectificadoSpfe;
begin
  oEscritor := Escritor(FEscritor);
  if AFactura.QrUrl <> '' then
  begin
    oEscritor.Abrir('cac:AdditionalDocumentReference');
    oEscritor.Escribir('cbc:ID', CalificadorDocumentoSpfe + 'QR');
    oEscritor.Escribir('cbc:UUID', AFactura.QrUrl);
    if AFactura.QrTipo <> '' then
      oEscritor.Escribir('cbc:DocumentDescription', AFactura.QrTipo)
    else
      oEscritor.Escribir('cbc:DocumentDescription', 'VERIFACTU');
    oEscritor.Cerrar;
  end;

  if AFactura.Rectificativa.Tipo <> '' then
  begin
    oEscritor.Abrir('cac:AdditionalDocumentReference');
    oEscritor.Escribir('cbc:ID', CalificadorDocumentoSpfe + 'RECT:TIPO');
    oEscritor.Escribir('cbc:DocumentTypeCode', AFactura.Rectificativa.Tipo);
    oEscritor.EscribirOpcional('cbc:DocumentDescription',
      AFactura.Rectificativa.DescripcionTipo);
    oEscritor.Cerrar;

    oEscritor.Abrir('cac:AdditionalDocumentReference');
    oEscritor.Escribir('cbc:ID',
      CalificadorDocumentoSpfe + 'RECT:MODALIDAD');
    oEscritor.Escribir('cbc:DocumentTypeCode',
      AFactura.Rectificativa.Modalidad);
    oEscritor.EscribirOpcional('cbc:DocumentDescription',
      AFactura.Rectificativa.DescripcionModalidad);
    oEscritor.Cerrar;

    for oImporte in AFactura.Rectificativa.Importes do
    begin
      oEscritor.Abrir('cac:AdditionalDocumentReference');
      oEscritor.Escribir('cbc:ID',
        CalificadorDocumentoSpfe + 'RECT:IMPORTES');
      oEscritor.Escribir('cbc:DocumentTypeCode', oImporte.Codigo);
      oEscritor.Escribir('cbc:DocumentDescription', oImporte.Importe);
      oEscritor.Cerrar;
    end;
  end;
end;

procedure TGeneradorUblSpfe.Parte(const AContenedor: string;
  const ADatos: TParteSpfe; AEsVendedor: Boolean;
  const ATercero: TTerceroSpfe);
var
  oEscritor: TEscritorXmlSpfe;
begin
  oEscritor := Escritor(FEscritor);
  oEscritor.Abrir(AContenedor);
  oEscritor.Abrir('cac:Party');
  oEscritor.EscribirOpcional('cbc:WebsiteURI', ADatos.Web);

  oEscritor.Abrir('cac:PostalAddress');
  oEscritor.Escribir('cbc:StreetName', ADatos.Direccion.Calle);
  oEscritor.EscribirOpcional('cbc:AdditionalStreetName',
    ADatos.Direccion.Calle2);
  oEscritor.EscribirOpcional('cbc:CityName', ADatos.Direccion.Municipio);
  oEscritor.EscribirOpcional('cbc:PostalZone',
    ADatos.Direccion.CodigoPostal);
  oEscritor.EscribirOpcional('cbc:CountrySubentity',
    ADatos.Direccion.Provincia);
  oEscritor.Abrir('cac:Country');
  oEscritor.Escribir('cbc:IdentificationCode', ADatos.Direccion.PaisAlfa2);
  oEscritor.Cerrar; // Country
  oEscritor.Cerrar; // PostalAddress

  // BT-31/BT-48 (NIF-IVA, esquema VAT) o BT-32/BT-47 (NIF, esquema LOC).
  oEscritor.Abrir('cac:PartyTaxScheme');
  if ADatos.NifIva <> '' then
  begin
    oEscritor.Escribir('cbc:CompanyID', ADatos.NifIva);
    oEscritor.Abrir('cac:TaxScheme');
    oEscritor.Escribir('cbc:ID', 'VAT');
    oEscritor.Cerrar;
  end
  else
  begin
    oEscritor.Escribir('cbc:CompanyID', ADatos.Nif, ['schemeID', 'FC']);
    oEscritor.Abrir('cac:TaxScheme');
    oEscritor.Escribir('cbc:ID', 'LOC');
    oEscritor.Cerrar;
  end;
  oEscritor.Cerrar; // PartyTaxScheme

  oEscritor.Abrir('cac:PartyLegalEntity');
  oEscritor.Escribir('cbc:RegistrationName', ADatos.Nombre);
  if (ADatos.NifIva = '') and (ADatos.Nif <> '') then
    // BT-30: obligatorio cuando se informa BT-32.
    oEscritor.Escribir('cbc:CompanyID', ADatos.Nif);
  if AEsVendedor then
    oEscritor.EscribirOpcional('cbc:CompanyLegalForm', ADatos.InfoJuridica);
  oEscritor.Cerrar; // PartyLegalEntity

  if (ADatos.Telefono <> '') or (ADatos.Email <> '') then
  begin
    oEscritor.Abrir('cac:Contact');
    oEscritor.EscribirOpcional('cbc:Telephone', ADatos.Telefono);
    oEscritor.EscribirOpcional('cbc:ElectronicMail', ADatos.Email);
    oEscritor.Cerrar;
  end;

  // BG-ES-1 Tercero que expide materialmente la factura.
  if AEsVendedor and (ATercero.Nombre <> '') then
  begin
    oEscritor.Abrir('cac:ServiceProviderParty');
    oEscritor.Abrir('cac:Party');
    oEscritor.Abrir('cac:PartyTaxScheme');
    if ATercero.NifIva <> '' then
    begin
      oEscritor.Escribir('cbc:CompanyID', ATercero.NifIva);
      oEscritor.Abrir('cac:TaxScheme');
      oEscritor.Escribir('cbc:ID', 'VAT');
      oEscritor.Cerrar;
    end
    else
    begin
      oEscritor.Escribir('cbc:CompanyID', ATercero.Nif, ['schemeID', 'FC']);
      oEscritor.Abrir('cac:TaxScheme');
      oEscritor.Escribir('cbc:ID', 'LOC');
      oEscritor.Cerrar;
    end;
    oEscritor.Cerrar; // PartyTaxScheme
    oEscritor.Abrir('cac:PartyLegalEntity');
    oEscritor.Escribir('cbc:RegistrationName', ATercero.Nombre);
    oEscritor.Cerrar; // PartyLegalEntity
    oEscritor.Cerrar; // Party
    oEscritor.Escribir('cbc:ServiceTypeCode',
      'Facturaci' + #$00F3 + 'nPorTercero');
    oEscritor.Cerrar; // ServiceProviderParty
  end;

  oEscritor.Cerrar; // Party
  oEscritor.Cerrar; // AContenedor
end;

procedure TGeneradorUblSpfe.CargoDocumento(
  const ADatos: TCargoDocumentoSpfe; AEsCargo: Boolean);
var
  oEscritor: TEscritorXmlSpfe;
begin
  oEscritor := Escritor(FEscritor);
  oEscritor.Abrir('cac:AllowanceCharge');
  if AEsCargo then
    oEscritor.Escribir('cbc:ChargeIndicator', 'true')
  else
    oEscritor.Escribir('cbc:ChargeIndicator', 'false');
  oEscritor.Escribir('cbc:AllowanceChargeReason', ADatos.Razon);
  Importe('cbc:Amount', ADatos.Importe);
  oEscritor.Abrir('cac:TaxCategory');
  oEscritor.Escribir('cbc:ID', ADatos.Categoria);
  oEscritor.EscribirOpcional('cbc:Percent', ADatos.TipoIva);
  oEscritor.Abrir('cac:TaxScheme');
  oEscritor.Escribir('cbc:ID', 'VAT');
  oEscritor.Cerrar; // TaxScheme
  oEscritor.Cerrar; // TaxCategory
  oEscritor.Cerrar; // AllowanceCharge
end;

procedure TGeneradorUblSpfe.DesgloseIva(
  const ASubtotales: TArray<TSubtotalIvaSpfe>; const ATotales: TTotalesSpfe);
var
  oEscritor: TEscritorXmlSpfe;
  oSubtotal: TSubtotalIvaSpfe;
begin
  oEscritor := Escritor(FEscritor);
  oEscritor.Abrir('cac:TaxTotal');
  Importe('cbc:TaxAmount', ATotales.CuotaIva);
  for oSubtotal in ASubtotales do
  begin
    oEscritor.Abrir('cac:TaxSubtotal');
    Importe('cbc:TaxableAmount', oSubtotal.Base);
    Importe('cbc:TaxAmount', oSubtotal.Cuota);
    oEscritor.Abrir('cac:TaxCategory');
    oEscritor.Escribir('cbc:ID', oSubtotal.Categoria);
    oEscritor.EscribirOpcional('cbc:Percent', oSubtotal.Tipo);
    oEscritor.EscribirOpcional('cbc:TaxExemptionReasonCode',
      oSubtotal.CodigoExencion);
    oEscritor.EscribirOpcional('cbc:TaxExemptionReason',
      oSubtotal.RazonExencion);
    oEscritor.Abrir('cac:TaxScheme');
    oEscritor.Escribir('cbc:ID', 'VAT');
    oEscritor.Cerrar; // TaxScheme
    oEscritor.Cerrar; // TaxCategory
    oEscritor.Cerrar; // TaxSubtotal
  end;
  oEscritor.Cerrar; // TaxTotal
end;

procedure TGeneradorUblSpfe.Totales(const ATotales: TTotalesSpfe);
var
  oEscritor: TEscritorXmlSpfe;
begin
  oEscritor := Escritor(FEscritor);
  oEscritor.Abrir('cac:LegalMonetaryTotal');
  Importe('cbc:LineExtensionAmount', ATotales.LineasNeto);
  Importe('cbc:TaxExclusiveAmount', ATotales.Base);
  Importe('cbc:TaxInclusiveAmount', ATotales.Total);
  ImporteOpcional('cbc:AllowanceTotalAmount', ATotales.Descuentos);
  ImporteOpcional('cbc:ChargeTotalAmount', ATotales.Cargos);
  ImporteOpcional('cbc:PrepaidAmount', ATotales.Pagado);
  ImporteOpcional('cbc:PayableRoundingAmount', ATotales.Redondeo);
  Importe('cbc:PayableAmount', ATotales.APagar);
  oEscritor.Cerrar;
end;

procedure TGeneradorUblSpfe.Linea(const ALinea: TLineaSpfe);
var
  oEscritor: TEscritorXmlSpfe;
  oMinoracion: TMinoracionLineaSpfe;
  oCargo: TCargoLineaSpfe;
  sInfo: string;
begin
  oEscritor := Escritor(FEscritor);
  oEscritor.Abrir('cac:InvoiceLine');
  oEscritor.Escribir('cbc:ID', ALinea.Id);
  oEscritor.Escribir('cbc:InvoicedQuantity', ALinea.Cantidad,
    ['unitCode', ALinea.UnidadUnece]);
  Importe('cbc:LineExtensionAmount', ALinea.ImporteNeto);

  // BG-27 / BG-28 minoraciones y cargos de línea.
  for oMinoracion in ALinea.Minoraciones do
  begin
    oEscritor.Abrir('cac:AllowanceCharge');
    oEscritor.Escribir('cbc:ChargeIndicator', 'false');
    oEscritor.Escribir('cbc:AllowanceChargeReason', oMinoracion.Razon);
    Importe('cbc:Amount', oMinoracion.Importe);
    oEscritor.Cerrar;
  end;
  for oCargo in ALinea.Cargos do
  begin
    oEscritor.Abrir('cac:AllowanceCharge');
    oEscritor.Escribir('cbc:ChargeIndicator', 'true');
    oEscritor.Escribir('cbc:AllowanceChargeReason', oCargo.Razon);
    Importe('cbc:Amount', oCargo.Importe);
    ImporteOpcional('cbc:BaseAmount', oCargo.Base);
    if oCargo.CodigoImpuesto <> '' then
    begin
      // BT-ES-22: tipo de impuesto (no IVA) del cargo, lista L9.
      oEscritor.Abrir('cac:TaxCategory');
      oEscritor.Escribir('cbc:ID', 'S');
      oEscritor.EscribirOpcional('cbc:Percent', oCargo.Tipo);
      oEscritor.Abrir('cac:TaxScheme');
      oEscritor.Escribir('cbc:ID', 'OTH');
      oEscritor.Escribir('cbc:TaxTypeCode', oCargo.CodigoImpuesto);
      oEscritor.Cerrar; // TaxScheme
      oEscritor.Cerrar; // TaxCategory
    end;
    oEscritor.Cerrar; // AllowanceCharge
  end;

  // BG-31 Información de artículo.
  oEscritor.Abrir('cac:Item');
  oEscritor.EscribirOpcional('cbc:Description', ALinea.Descripcion);
  oEscritor.Escribir('cbc:Name', ALinea.Nombre);

  // BG-30 IVA de la línea.
  oEscritor.Abrir('cac:ClassifiedTaxCategory');
  oEscritor.Escribir('cbc:ID', ALinea.CategoriaIva);
  oEscritor.EscribirOpcional('cbc:Percent', ALinea.TipoIva);
  oEscritor.EscribirOpcional('cbc:TaxExemptionReasonCode',
    ALinea.CodigoExencion);
  oEscritor.Abrir('cac:TaxScheme');
  oEscritor.Escribir('cbc:ID', 'VAT');
  oEscritor.Cerrar; // TaxScheme
  oEscritor.Cerrar; // ClassifiedTaxCategory

  // BG-32 INFO: información adicional de la línea.
  for sInfo in ALinea.InfoAdicional do
  begin
    oEscritor.Abrir('cac:AdditionalItemProperty');
    oEscritor.Escribir('cbc:Name', CalificadorLineaSpfe + 'INFO');
    oEscritor.Escribir('cbc:Value', sInfo);
    oEscritor.Cerrar;
  end;

  // BG-32 RCAT: referencia catastral (arrendamientos).
  if ALinea.RefCatastral.Referencia <> '' then
  begin
    oEscritor.Abrir('cac:AdditionalItemProperty');
    oEscritor.Escribir('cbc:Name', CalificadorLineaSpfe + 'RCAT');
    oEscritor.Escribir('cbc:Value', ALinea.RefCatastral.Referencia);
    oEscritor.Escribir('cbc:ValueQualifier', ALinea.RefCatastral.Situacion);
    oEscritor.Cerrar;
  end;

  // BG-32 REGI: clave de régimen (obligatoria, 1..2).
  oEscritor.Abrir('cac:AdditionalItemProperty');
  oEscritor.Escribir('cbc:Name', CalificadorLineaSpfe + 'REGI');
  oEscritor.Escribir('cbc:Value', ALinea.ClaveRegimen);
  if ALinea.ImpuestoRegimen <> '' then
    oEscritor.Escribir('cbc:ValueQualifier', ALinea.ImpuestoRegimen)
  else
    oEscritor.Escribir('cbc:ValueQualifier', 'IVA');
  oEscritor.Cerrar;

  oEscritor.Cerrar; // Item

  // BG-29 Precio.
  oEscritor.Abrir('cac:Price');
  Importe('cbc:PriceAmount', ALinea.PrecioUnitario);
  if ALinea.CantidadBasePrecio <> '' then
    oEscritor.Escribir('cbc:BaseQuantity', ALinea.CantidadBasePrecio,
      ['unitCode', ALinea.UnidadUnece]);
  oEscritor.Cerrar; // Price

  oEscritor.Cerrar; // InvoiceLine
end;

end.
