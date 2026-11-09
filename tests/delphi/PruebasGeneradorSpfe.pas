{******************************************************************************}
{ Módulo: PruebasGeneradorSpfe. Tipo: DUnitX de los generadores UBL/ebMS3.     }
{ Versión: 0.1.0. Fecha: 09/11/2026. Autor: Alejandro Laorden Hidalgo.         }
{ Copyright (c) Alejandro Laorden Hidalgo. SPDX-License-Identifier: MPL-2.0    }
{******************************************************************************}
unit PruebasGeneradorSpfe;

interface

uses
  System.SysUtils, System.Classes, System.IOUtils,
  DUnitX.TestFramework, Xml.Internal.AdomCore_4_3,
  inSpfeEscritorXml, inSpfeMapeos, inSpfeGeneradorUbl,
  inSpfeGeneradorRespuesta, inSpfeEbms3, inSpfeXmlNativo,
  inSpfeValidadorEn;

type
  [TestFixture]
  TPruebasGeneradorSpfe = class
  private
    function FacturaNormal: TFacturaSpfe;
    function MensajeBase: TMensajeEstadoSpfe;
    function Generar(const AFactura: TFacturaSpfe): string;
    function Validar(const AXml: string): TResultadoEnSpfe;
  public
    [Test] procedure SuperarLaCapaEnConFacturaNormal;
    [Test] procedure DivergirSoloEnReferenciasConRectificativa;
    [Test] procedure DivergirSoloEnTotalAPagarConRetencion;
    [Test] procedure EmitirRetencionPorLasDosVias;
    [Test] procedure EmitirClaveDeRegimenEnCadaLinea;
    [Test] procedure EmitirNifConEsquemaLocYFc;
    [Test] procedure EscaparCaracteresReservados;
    [Test] procedure GenerarMensajesDeEstadoBienFormados;
    [Test] procedure RechazarCodigoDeRespuestaDesconocido;
    [Test] procedure RechazarMotivoDeRechazoDesconocido;
    [Test] procedure ConstruirSobreEbms3Completo;
    [Test] procedure TrocearRespuestaMultipart;
    [Test] procedure ReconocerSoapFault;
    [Test] procedure MapearCodigosDelAnexo;
    [Test] procedure ExportarGeneradosParaContrasteXsd;
  end;

implementation

const
  EspacioCac = 'urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonAggregateComponents-2';
  EspacioCbc = 'urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonBasicComponents-2';
  EspacioRespuesta =
    'urn:oasis:names:specification:ubl:schema:xsd:ApplicationResponse-2';
  EspacioSoap = 'http://www.w3.org/2003/05/soap-envelope';
  EspacioEb =
    'http://docs.oasis-open.org/ebxml-msg/ebms/v3.0/ns/core/200704/';

function BuscarElemento(ANodo: TDomNode;
  const AEspacio, ALocal: string): TDomNode;
var
  oHijo: TDomNode;
begin
  Result := nil;
  if not Assigned(ANodo) then
    Exit;
  if (ANodo.NodeType = ntElement_Node) and
    (string(ANodo.LocalName) = ALocal) and
    (string(ANodo.NamespaceURI) = AEspacio) then
    Exit(ANodo);
  oHijo := ANodo.FirstChild;
  while Assigned(oHijo) do
  begin
    Result := BuscarElemento(oHijo, AEspacio, ALocal);
    if Assigned(Result) then
      Exit;
    oHijo := oHijo.NextSibling;
  end;
end;

function ContarTextos(ANodo: TDomNode; const AEspacio, ALocal,
  ATexto: string): Integer;
var
  oHijo: TDomNode;
begin
  Result := 0;
  if not Assigned(ANodo) then
    Exit;
  if (ANodo.NodeType = ntElement_Node) and
    (string(ANodo.LocalName) = ALocal) and
    (string(ANodo.NamespaceURI) = AEspacio) and
    (string(ANodo.XPathStringValue) = ATexto) then
    Inc(Result);
  oHijo := ANodo.FirstChild;
  while Assigned(oHijo) do
  begin
    Inc(Result, ContarTextos(oHijo, AEspacio, ALocal, ATexto));
    oHijo := oHijo.NextSibling;
  end;
end;

function TextoDe(ANodo: TDomNode): string;
begin
  if Assigned(ANodo) then
    Result := string(ANodo.XPathStringValue).Trim
  else
    Result := '';
end;

function TPruebasGeneradorSpfe.Generar(
  const AFactura: TFacturaSpfe): string;
var
  oGenerador: TGeneradorUblSpfe;
begin
  oGenerador := TGeneradorUblSpfe.Create;
  try
    Result := oGenerador.Generar(AFactura);
  finally
    FreeAndNil(oGenerador);
  end;
end;

function TPruebasGeneradorSpfe.Validar(
  const AXml: string): TResultadoEnSpfe;
var
  oValidador: TValidadorEnSpfe;
begin
  oValidador := TValidadorEnSpfe.Create;
  try
    Result := oValidador.Validar(AXml);
  finally
    FreeAndNil(oValidador);
  end;
end;

function TPruebasGeneradorSpfe.FacturaNormal: TFacturaSpfe;
begin
  Result := Default(TFacturaSpfe);
  Result.Id := 'A/000123';
  Result.FechaExpedicion := '2026-11-09';
  Result.HoraExpedicion := '10:15:00';
  Result.FechaVencimiento := '2027-01-08';
  Result.TipoFactura := '380';
  Result.ReferenciasComprador := ['PEDIDO-77'];
  SetLength(Result.Notas, 1);
  Result.Notas[0].Codigo := 'REG';
  Result.Notas[0].Texto := 'Inscrita en el R.M. de Albacete';

  Result.Vendedor.Nombre := 'Comercial Ejemplo SL';
  Result.Vendedor.NifIva := 'ESB02000000';
  Result.Vendedor.Direccion.Calle := 'C/ Mayor 1';
  Result.Vendedor.Direccion.Municipio := 'Albacete';
  Result.Vendedor.Direccion.CodigoPostal := '02001';
  Result.Vendedor.Direccion.Provincia := 'Albacete';
  Result.Vendedor.Direccion.PaisAlfa2 := PaisAlfa2Spfe('724');
  Result.Vendedor.Telefono := '967000000';
  Result.Vendedor.Email := 'facturas@ejemplo.es';

  Result.Comprador.Nombre := 'Cliente Ejemplo SA';
  Result.Comprador.Nif := 'A28000000';
  Result.Comprador.Direccion.Calle := 'Av. del Puerto 2';
  Result.Comprador.Direccion.Municipio := 'Valencia';
  Result.Comprador.Direccion.CodigoPostal := '46021';
  Result.Comprador.Direccion.Provincia := 'Valencia';
  Result.Comprador.Direccion.PaisAlfa2 := 'ES';
  Result.Comprador.Email := 'compras@clienteejemplo.es';

  SetLength(Result.MinoracionesDocumento, 1);
  Result.MinoracionesDocumento[0].Importe := '10.00';
  Result.MinoracionesDocumento[0].Categoria := 'S';
  Result.MinoracionesDocumento[0].TipoIva := '21.00';
  Result.MinoracionesDocumento[0].Razon := 'Descuento comercial';

  SetLength(Result.DesgloseIva, 1);
  Result.DesgloseIva[0].Categoria := 'S';
  Result.DesgloseIva[0].Tipo := '21.00';
  Result.DesgloseIva[0].Base := '140.00';
  Result.DesgloseIva[0].Cuota := '29.40';

  Result.Totales.LineasNeto := '150.00';
  Result.Totales.Descuentos := '10.00';
  Result.Totales.Base := '140.00';
  Result.Totales.CuotaIva := '29.40';
  Result.Totales.Total := '169.40';
  Result.Totales.APagar := '169.40';

  Result.CondicionesPago := 'Transferencia a 60 dias';
  Result.PagoCodigoUntdid := FormaPagoUntdidSpfe('30', '');
  Result.PagoIban := 'ES9121000418450200051332';
  Result.QrTipo := 'VERIFACTU';
  Result.QrUrl := 'https://www2.agenciatributaria.gob.es/wlpl/TIKE-CONT/' +
    'ValidarQR?nif=B02000000&numserie=A%2F000123' +
    '&fecha=09-11-2026&importe=169.40';

  SetLength(Result.Lineas, 2);
  Result.Lineas[0].Id := '1';
  Result.Lineas[0].Cantidad := '2';
  Result.Lineas[0].UnidadUnece := UnidadUneceSpfe('Uds');
  Result.Lineas[0].ImporteNeto := '100.00';
  Result.Lineas[0].Nombre := 'Servicio de asesoria';
  Result.Lineas[0].Descripcion := 'Asesoria mensual octubre';
  Result.Lineas[0].PrecioUnitario := '50.00';
  Result.Lineas[0].CategoriaIva := 'S';
  Result.Lineas[0].TipoIva := '21.00';
  Result.Lineas[0].ClaveRegimen := '01';
  Result.Lineas[0].ImpuestoRegimen := 'IVA';
  Result.Lineas[1].Id := '2';
  Result.Lineas[1].Cantidad := '5';
  Result.Lineas[1].UnidadUnece := UnidadUneceSpfe('kg');
  Result.Lineas[1].ImporteNeto := '50.00';
  Result.Lineas[1].Nombre := 'Material diverso';
  Result.Lineas[1].PrecioUnitario := '11.00';
  Result.Lineas[1].CategoriaIva := 'S';
  Result.Lineas[1].TipoIva := '21.00';
  Result.Lineas[1].ClaveRegimen := '01';
  Result.Lineas[1].ImpuestoRegimen := 'IVA';
  SetLength(Result.Lineas[1].Minoraciones, 1);
  Result.Lineas[1].Minoraciones[0].Importe := '5.00';
  Result.Lineas[1].Minoraciones[0].Razon := 'Descuento';
end;

function TPruebasGeneradorSpfe.MensajeBase: TMensajeEstadoSpfe;
begin
  Result := Default(TMensajeEstadoSpfe);
  Result.FechaEmision := '2026-11-09';
  Result.Remitente.Nif := 'A28000000';
  Result.Remitente.Nombre := 'Cliente Ejemplo SA';
  Result.Receptor.Nif := 'B02000000';
  Result.Receptor.Nombre := 'Comercial Ejemplo SL';
  Result.Factura.Id := 'A/000123';
  Result.Factura.Fecha := '2026-11-09';
  Result.Factura.NifEmisor := 'B02000000';
  Result.Factura.NombreEmisor := 'Comercial Ejemplo SL';
end;

procedure TPruebasGeneradorSpfe.SuperarLaCapaEnConFacturaNormal;
var
  oResultado: TResultadoEnSpfe;
  oDiagnostico: TDiagnosticoEnSpfe;
  sFatales: string;
begin
  oResultado := Validar(Generar(FacturaNormal));
  Assert.IsTrue(oResultado.EsEvaluacionCompleta);
  sFatales := '';
  for oDiagnostico in oResultado.Diagnosticos do
    if oDiagnostico.Gravedad <> geAviso then
      sFatales := sFatales + ' ' + oDiagnostico.Identificador;
  Assert.IsTrue(oResultado.EsCapaEnSuperada, 'Fatales:' + sFatales);
end;

procedure TPruebasGeneradorSpfe.DivergirSoloEnReferenciasConRectificativa;
var
  oFactura: TFacturaSpfe;
  oResultado: TResultadoEnSpfe;
  oDiagnostico: TDiagnosticoEnSpfe;
  iFatales: Integer;
begin
  // Los DocumentTypeCode de las referencias RECT del Anexo I (tipo,
  // modalidad e importes rectificados, listas L2) no existen en la
  // EN 2017+A1: cada referencia dispara UBL-SR-43. Cualquier otra
  // divergencia fatal es un error del generador.
  oFactura := FacturaNormal;
  oFactura.Id := 'R/000004';
  oFactura.TipoFactura := '384';
  SetLength(oFactura.FacturasReferenciadas, 1);
  oFactura.FacturasReferenciadas[0].Id := 'A/000120';
  oFactura.FacturasReferenciadas[0].Fecha := '2026-10-02';
  oFactura.Rectificativa.Tipo := 'R1';
  oFactura.Rectificativa.Modalidad := 'S';
  oFactura.Rectificativa.DescripcionTipo := 'Error fundado en derecho';
  SetLength(oFactura.Rectificativa.Importes, 2);
  oFactura.Rectificativa.Importes[0].Codigo := 'Base';
  oFactura.Rectificativa.Importes[0].Importe := '140.00';
  oFactura.Rectificativa.Importes[1].Codigo := 'Cuota';
  oFactura.Rectificativa.Importes[1].Importe := '29.40';
  oResultado := Validar(Generar(oFactura));
  Assert.IsTrue(oResultado.EsEvaluacionCompleta);
  iFatales := 0;
  for oDiagnostico in oResultado.Diagnosticos do
    if oDiagnostico.Gravedad <> geAviso then
    begin
      Inc(iFatales);
      Assert.AreEqual('UBL-SR-43', oDiagnostico.Identificador);
    end;
  // Tipo, modalidad y dos importes rectificados: cuatro referencias.
  Assert.AreEqual(4, iFatales);
end;

procedure TPruebasGeneradorSpfe.DivergirSoloEnTotalAPagarConRetencion;
var
  oFactura: TFacturaSpfe;
  oResultado: TResultadoEnSpfe;
  oDiagnostico: TDiagnosticoEnSpfe;
  iFatales: Integer;
begin
  // La retención del SPFE no existe en la EN 2017+A1: el total a pagar
  // minorado solo debe hacer fallar la regla aritmética del importe
  // debido. Cualquier otra divergencia fatal es un error del generador.
  oFactura := FacturaNormal;
  oFactura.Retencion.Total := '21.00';
  oFactura.Retencion.Base := '140.00';
  oFactura.Retencion.Porcentaje := '15.00';
  oFactura.Retencion.Concepto := '01';
  oFactura.Retencion.Descripcion := 'Retencion IRPF profesionales';
  oFactura.Totales.APagar := '148.40';
  oResultado := Validar(Generar(oFactura));
  Assert.IsTrue(oResultado.EsEvaluacionCompleta);
  iFatales := 0;
  for oDiagnostico in oResultado.Diagnosticos do
    if oDiagnostico.Gravedad <> geAviso then
    begin
      Inc(iFatales);
      Assert.AreEqual('BR-CO-16', oDiagnostico.Identificador);
    end;
  Assert.AreEqual(1, iFatales);
end;

procedure TPruebasGeneradorSpfe.EmitirRetencionPorLasDosVias;
var
  oFactura: TFacturaSpfe;
  oXml: TXmlNativoSpfe;
  oNodo: TDomNode;
begin
  oFactura := FacturaNormal;
  oFactura.Retencion.Total := '21.00';
  oFactura.Retencion.Base := '140.00';
  oFactura.Retencion.Porcentaje := '15.00';
  oFactura.Retencion.Concepto := '01';
  oFactura.Retencion.Descripcion := 'Retencion IRPF profesionales';
  oFactura.Totales.APagar := '148.40';
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar(Generar(oFactura));
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioCac,
      'WithholdingTaxTotal');
    Assert.IsNotNull(oNodo);
    Assert.AreEqual('21.00', TextoDe(BuscarElemento(oNodo, EspacioCbc,
      'TaxAmount')));
    Assert.AreEqual('01', TextoDe(BuscarElemento(oNodo, EspacioCbc,
      'TaxTypeCode')));
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioCac,
      'CollectionInvoiceLine');
    Assert.IsNotNull(oNodo);
    Assert.AreEqual(CalificadorCargoSpfe + 'RETE',
      TextoDe(BuscarElemento(oNodo, EspacioCbc, 'ID')));
  finally
    FreeAndNil(oXml);
  end;
end;

procedure TPruebasGeneradorSpfe.EmitirClaveDeRegimenEnCadaLinea;
var
  oXml: TXmlNativoSpfe;
begin
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar(Generar(FacturaNormal));
    Assert.AreEqual(2, ContarTextos(oXml.Documento.DocumentElement,
      EspacioCbc, 'Name', CalificadorLineaSpfe + 'REGI'));
    Assert.AreEqual(2, ContarTextos(oXml.Documento.DocumentElement,
      EspacioCbc, 'Value', '01'));
    Assert.AreEqual(IdentificadorEspecificacionSpfe,
      TextoDe(BuscarElemento(oXml.Documento.DocumentElement, EspacioCbc,
      'CustomizationID')));
  finally
    FreeAndNil(oXml);
  end;
end;

procedure TPruebasGeneradorSpfe.EmitirNifConEsquemaLocYFc;
var
  oFactura: TFacturaSpfe;
  sXml: string;
begin
  // Sin NIF-IVA, el NIF viaja con esquema LOC y schemeID FC, como el
  // ejemplo oficial docs/spfe/factura.xml.
  oFactura := FacturaNormal;
  oFactura.Vendedor.NifIva := '';
  oFactura.Vendedor.Nif := 'B02000000';
  sXml := Generar(oFactura);
  Assert.IsTrue(sXml.Contains(
    '<cbc:CompanyID schemeID="FC">B02000000</cbc:CompanyID>'));
  Assert.IsTrue(sXml.Contains('<cbc:ID>LOC</cbc:ID>'));
end;

procedure TPruebasGeneradorSpfe.EscaparCaracteresReservados;
var
  oFactura: TFacturaSpfe;
  oXml: TXmlNativoSpfe;
  sNombre: string;
begin
  sNombre := 'Hilos & Cia <"Taller'' de pruebas">';
  oFactura := FacturaNormal;
  oFactura.Comprador.Nombre := sNombre;
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar(Generar(oFactura));
    Assert.AreEqual(1, ContarTextos(oXml.Documento.DocumentElement,
      EspacioCbc, 'RegistrationName', sNombre));
  finally
    FreeAndNil(oXml);
  end;
end;

procedure TPruebasGeneradorSpfe.GenerarMensajesDeEstadoBienFormados;
const
  Codigos: array [0 .. 5] of string = ('PAYMENT', 'REJECTION',
    'SETTLEMENT', 'DEFAULT', 'CANCELPAYMENT', 'CANCELINVOICE');
var
  oGenerador: TGeneradorRespuestaSpfe;
  oMensaje: TMensajeEstadoSpfe;
  oXml: TXmlNativoSpfe;
  sCodigo: string;
begin
  oGenerador := TGeneradorRespuestaSpfe.Create;
  oXml := TXmlNativoSpfe.Create;
  try
    for sCodigo in Codigos do
    begin
      oMensaje := MensajeBase;
      oMensaje.Id := 'MSG-' + sCodigo;
      oMensaje.Codigo := sCodigo;
      if sCodigo = 'PAYMENT' then
      begin
        oMensaje.FechaEfecto := '2026-12-01';
        oMensaje.FechaVencimiento := '2027-01-08';
        oMensaje.FechaRecepcionFactura := '2026-11-10';
      end
      else if sCodigo = 'REJECTION' then
      begin
        oMensaje.FechaEfecto := '2026-11-12';
        oMensaje.MotivoRechazo := '01';
      end
      else if sCodigo = 'SETTLEMENT' then
      begin
        oMensaje.FechaEfecto := '2026-12-01';
        oMensaje.EsMecanismoFinanciacion := True;
      end
      else if sCodigo = 'DEFAULT' then
        oMensaje.FechaEfecto := '2027-01-08'
      else if sCodigo = 'CANCELINVOICE' then
        oMensaje.FechaEfecto := '2026-11-15';
      oXml.Cargar(oGenerador.Generar(oMensaje));
      Assert.AreEqual('ApplicationResponse',
        string(oXml.Documento.DocumentElement.LocalName), sCodigo);
      Assert.AreEqual(EspacioRespuesta,
        string(oXml.Documento.DocumentElement.NamespaceURI), sCodigo);
      Assert.AreEqual(sCodigo,
        TextoDe(BuscarElemento(oXml.Documento.DocumentElement, EspacioCbc,
        'ResponseCode')));
      Assert.AreEqual('A/000123',
        TextoDe(BuscarElemento(
        BuscarElemento(oXml.Documento.DocumentElement, EspacioCac,
        'DocumentReference'), EspacioCbc, 'ID')), sCodigo);
    end;
  finally
    FreeAndNil(oXml);
    FreeAndNil(oGenerador);
  end;
end;

procedure TPruebasGeneradorSpfe.RechazarCodigoDeRespuestaDesconocido;
begin
  Assert.WillRaise(
    procedure
    var
      oGenerador: TGeneradorRespuestaSpfe;
      oMensaje: TMensajeEstadoSpfe;
    begin
      oGenerador := TGeneradorRespuestaSpfe.Create;
      try
        oMensaje := MensajeBase;
        oMensaje.Codigo := 'SUBMITINVOICE';
        oGenerador.Generar(oMensaje);
      finally
        FreeAndNil(oGenerador);
      end;
    end, ESpfeGenerador);
end;

procedure TPruebasGeneradorSpfe.RechazarMotivoDeRechazoDesconocido;
begin
  Assert.WillRaise(
    procedure
    var
      oGenerador: TGeneradorRespuestaSpfe;
      oMensaje: TMensajeEstadoSpfe;
    begin
      oGenerador := TGeneradorRespuestaSpfe.Create;
      try
        oMensaje := MensajeBase;
        oMensaje.Codigo := 'REJECTION';
        oMensaje.MotivoRechazo := '03';
        oGenerador.Generar(oMensaje);
      finally
        FreeAndNil(oGenerador);
      end;
    end, ESpfeGenerador);
end;

procedure TPruebasGeneradorSpfe.ConstruirSobreEbms3Completo;
var
  sSobre: string;
  oXml: TXmlNativoSpfe;
  oNodo: TDomNode;
begin
  sSobre := TEbms3Spfe.ConstruirSobre('B02000000',
    'urn:cen.eu:en16931:submitinvoice', 'SUBMITINVOICE',
    ['altaFacturas.xml'], 'uuid-prueba-1', 'conv-prueba-1',
    '2026-11-09T09:00:00.000Z');
  Assert.IsTrue(sSobre.Contains('href="cid:altaFacturas.xml"'));
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar(sSobre);
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioEb,
      'From');
    Assert.AreEqual('B02000000', TextoDe(BuscarElemento(oNodo, EspacioEb,
      'PartyId')));
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioEb,
      'To');
    Assert.AreEqual(TEbms3Spfe.NifAeat,
      TextoDe(BuscarElemento(oNodo, EspacioEb, 'PartyId')));
    Assert.AreEqual('urn:cen.eu:en16931:submitinvoice',
      TextoDe(BuscarElemento(oXml.Documento.DocumentElement, EspacioEb,
      'Service')));
    Assert.AreEqual('SUBMITINVOICE',
      TextoDe(BuscarElemento(oXml.Documento.DocumentElement, EspacioEb,
      'Action')));
    // El body SOAP viaja vacío: los UBL son adjuntos MIME.
    oNodo := BuscarElemento(oXml.Documento.DocumentElement, EspacioSoap,
      'Body');
    Assert.IsNotNull(oNodo);
    Assert.IsNull(oNodo.FirstChild);
  finally
    FreeAndNil(oXml);
  end;
end;

procedure TPruebasGeneradorSpfe.TrocearRespuestaMultipart;
const
  CRLF = #13#10;
var
  sSobre, sCuerpo, sContentType: string;
  aAdjuntos: TArray<TAdjuntoEbms3Spfe>;
  oRespuesta: TRespuestaEbms3Spfe;
begin
  sSobre := '<?xml version="1.0" encoding="UTF-8"?>' +
    '<soapenv:Envelope xmlns:soapenv="' + EspacioSoap + '">' +
    '<soapenv:Header><ns2:Messaging xmlns:ns2="' + EspacioEb + '">' +
    '<ns2:UserMessage><ns2:MessageInfo>' +
    '<ns2:Timestamp>2026-11-09T09:00:00.000Z</ns2:Timestamp>' +
    '<ns2:MessageId>uuid-resp-1</ns2:MessageId>' +
    '<ns2:RefToMessageId>uuid-prueba-1</ns2:RefToMessageId>' +
    '</ns2:MessageInfo></ns2:UserMessage></ns2:Messaging>' +
    '</soapenv:Header><soapenv:Body/></soapenv:Envelope>';
  SetLength(aAdjuntos, 1);
  aAdjuntos[0].Cid := 'RespuestaAltaFacturas.xml';
  aAdjuntos[0].Contenido := '<?xml version="1.0"?><RespuestaAltaFacturas/>';
  sCuerpo := TEbms3Spfe.ConstruirMultipart(sSobre, aAdjuntos,
    'limite_prueba', 'SUBMITINVOICE', sContentType);
  Assert.IsTrue(sContentType.Contains('boundary="limite_prueba"'));

  oRespuesta := TEbms3Spfe.TrocearRespuesta(200, sContentType, sCuerpo);
  Assert.AreEqual('uuid-prueba-1', oRespuesta.RefToMessageId);
  Assert.IsFalse(oRespuesta.TieneFault);
  Assert.AreEqual(1, Integer(Length(oRespuesta.Adjuntos)));
  Assert.AreEqual('RespuestaAltaFacturas.xml', oRespuesta.Adjuntos[0].Cid);
  Assert.IsTrue(oRespuesta.Adjuntos[0].Contenido.Contains(
    '<RespuestaAltaFacturas/>'));
end;

procedure TPruebasGeneradorSpfe.ReconocerSoapFault;
var
  sFault: string;
  oRespuesta: TRespuestaEbms3Spfe;
begin
  sFault := '<?xml version="1.0"?>' +
    '<env:Envelope xmlns:env="' + EspacioSoap + '">' +
    '<env:Body><env:Fault><env:Code><env:Value>env:Sender</env:Value>' +
    '</env:Code><env:Reason><env:Text xml:lang="es">Documento UBL no ' +
    'valido</env:Text></env:Reason></env:Fault></env:Body></env:Envelope>';
  oRespuesta := TEbms3Spfe.TrocearRespuesta(400, 'application/soap+xml',
    sFault);
  Assert.IsTrue(oRespuesta.TieneFault);
  Assert.AreEqual('env:Sender', oRespuesta.Fault.Codigo);
  Assert.IsTrue(oRespuesta.Fault.Razon.Contains('UBL'));
end;

procedure TPruebasGeneradorSpfe.MapearCodigosDelAnexo;
begin
  Assert.AreEqual('ES', PaisAlfa2Spfe('724'));
  Assert.AreEqual('BE', PaisAlfa2Spfe('56'));
  Assert.AreEqual('C62', UnidadUneceSpfe('Uds'));
  Assert.AreEqual('KGM', UnidadUneceSpfe('kg'));
  Assert.AreEqual('C62', UnidadUneceSpfe('desconocida'));
  Assert.AreEqual('10', FormaPagoUntdidSpfe('', 'EFE'));
  Assert.AreEqual('30', FormaPagoUntdidSpfe('30', 'EFE'));
  Assert.AreEqual('ZZZ', FormaPagoUntdidSpfe('', 'OTRO'));
  Assert.WillRaise(
    procedure
    var
      sPais: string;
    begin
      sPais := PaisAlfa2Spfe('999');
      Assert.Fail(sPais);
    end, ESpfeGenerador);
end;

procedure TPruebasGeneradorSpfe.ExportarGeneradosParaContrasteXsd;
var
  sCarpeta: string;
  oFactura: TFacturaSpfe;
  oGenerador: TGeneradorRespuestaSpfe;
  oMensaje: TMensajeEstadoSpfe;
begin
  // Con SPFE_SALIDA_GENERADOS definida, deja los XML generados en esa
  // carpeta para contrastarlos fuera con los XSD de docs/spfe/ubl-2.5
  // (scripts/contrastar_xsd_generados.ps1).
  sCarpeta := GetEnvironmentVariable('SPFE_SALIDA_GENERADOS');
  if sCarpeta = '' then
  begin
    Assert.Pass('SPFE_SALIDA_GENERADOS sin definir');
    Exit;
  end;
  TDirectory.CreateDirectory(sCarpeta);
  TFile.WriteAllText(TPath.Combine(sCarpeta, 'generada_normal.xml'),
    Generar(FacturaNormal), TEncoding.UTF8);

  oFactura := FacturaNormal;
  oFactura.Retencion.Total := '21.00';
  oFactura.Retencion.Base := '140.00';
  oFactura.Retencion.Porcentaje := '15.00';
  oFactura.Retencion.Concepto := '01';
  oFactura.Retencion.Descripcion := 'Retencion IRPF profesionales';
  oFactura.Totales.APagar := '148.40';
  TFile.WriteAllText(TPath.Combine(sCarpeta, 'generada_retencion.xml'),
    Generar(oFactura), TEncoding.UTF8);

  oGenerador := TGeneradorRespuestaSpfe.Create;
  try
    oMensaje := MensajeBase;
    oMensaje.Id := 'MSG-PAY-1';
    oMensaje.Codigo := 'PAYMENT';
    oMensaje.FechaEfecto := '2026-12-01';
    oMensaje.FechaVencimiento := '2027-01-08';
    TFile.WriteAllText(TPath.Combine(sCarpeta, 'generada_payment.xml'),
      oGenerador.Generar(oMensaje), TEncoding.UTF8);
  finally
    FreeAndNil(oGenerador);
  end;
  Assert.IsTrue(TFile.Exists(TPath.Combine(sCarpeta,
    'generada_normal.xml')));
end;

initialization
  TDUnitX.RegisterTestFixture(TPruebasGeneradorSpfe);

end.
