{******************************************************************************}
{ Módulo: PruebasEnSpfe. Tipo: DUnitX del evaluador nativo EN 2017+A1.         }
{ Versión: 0.1.0. Fecha: 08/11/2026. Autor: Alejandro Laorden Hidalgo.         }
{ Copyright (c) Alejandro Laorden Hidalgo. SPDX-License-Identifier: MPL-2.0    }
{******************************************************************************}
unit PruebasEnSpfe;

interface

uses
  System.SysUtils, System.Classes, System.IOUtils, Data.FmtBcd,
  DUnitX.TestFramework, inSpfeValidadorEn, inSpfeXmlNativo,
  inSpfeXPathTipos, inSpfeXPathFunciones, inSpfeXPathOperaciones,
  inSpfeXPathEvaluador, inSpfeReglasEn;

type
  [TestFixture]
  TPruebasEnSpfe = class
  private
    function EvaluarRegla(const AIdentificador, AContenido: string): Boolean;
    function Validar(const AXml: string): TResultadoEnSpfe;
    function Contener(const AResultado: TResultadoEnSpfe;
      const AIdentificador: string): Boolean;
  public
    [Test] procedure ConservarCatalogoCompleto;
    [Test] procedure ContrastarEjemplosOficiales;
    [Test] procedure DetectarNumeroVacio;
    [Test] procedure CuantificarMonedaFiscal;
    [Test] procedure RespetarEspaciosDeNombres;
    [Test] procedure RechazarDecimalInvalido;
    [Test] procedure ConservarPrecisionDecimal;
    [Test] procedure RedondearEmpatesPositivosYNegativos;
    [Test] procedure ContarCaracteresUnicode;
    [Test] procedure ConservarEspacioNoSeparable;
    [Test] procedure RechazarEntidades;
    [Test] procedure RechazarRaizAjena;
    [Test] procedure NoCertificarEdicion2026;
    [Test] procedure ConservarDiferenciasDeVersion;
    [Test] procedure DividirPorCienSinPerderDecimales;
    [Test] procedure RechazarDesbordamientoDecimal;
    [Test] procedure EncontrarCadenaVacia;
    [Test] procedure ConservarUnicodeEnElDom;
    [Test] procedure ResolverRamaQueEvitaConversionInnecesaria;
    [Test] procedure RechazarEscalaNoRepresentable;
  end;

implementation

const
  InicioFactura = '<Invoice xmlns="urn:oasis:names:specification:' +
    'ubl:schema:xsd:Invoice-2" xmlns:cbc="urn:oasis:names:specification:' +
    'ubl:schema:xsd:CommonBasicComponents-2" ' +
    'xmlns:cac="urn:oasis:names:specification:' +
    'ubl:schema:xsd:CommonAggregateComponents-2">';

function TPruebasEnSpfe.Validar(const AXml: string): TResultadoEnSpfe;
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

function TPruebasEnSpfe.Contener(const AResultado: TResultadoEnSpfe;
  const AIdentificador: string): Boolean;
var
  oDiagnostico: TDiagnosticoEnSpfe;
begin
  Result := False;
  for oDiagnostico in AResultado.Diagnosticos do
    Result := Result or (oDiagnostico.Identificador = AIdentificador);
end;

function TPruebasEnSpfe.EvaluarRegla(const AIdentificador,
  AContenido: string): Boolean;
var
  oXml: TXmlNativoSpfe;
  oEvaluador: TEvaluadorXPathSpfe;
  i, iRegla: Integer;
begin
  iRegla := -1;
  for i := Low(ReglasEn) to High(ReglasEn) do
    if string(ReglasEn[i].Identificador) = AIdentificador then
      iRegla := i;
  Assert.IsTrue(iRegla >= 0, AIdentificador);
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar(InicioFactura + AContenido + '</Invoice>');
    oEvaluador := TEvaluadorXPathSpfe.Create(oXml.Documento);
    try
      Result := ObtenerBooleano(oEvaluador.Evaluar(
        ReglasEn[iRegla].Instruccion,
        TValorSpfe.DesdeNodo(oXml.Documento.DocumentElement)));
    finally
      FreeAndNil(oEvaluador);
    end;
  finally
    FreeAndNil(oXml);
  end;
end;

procedure TPruebasEnSpfe.ConservarCatalogoCompleto;
begin
  Assert.AreEqual(982, Length(ReglasEn));
  Assert.AreEqual(104, Length(ContextosEn));
  Assert.AreEqual('eb27995ba7bace330475a0afd54a21bb0' +
    'ebb050d55774949d5e10f65ecef7b95', HuellaFuenteEn);
end;

procedure TPruebasEnSpfe.ContrastarEjemplosOficiales;
var
  sCarpeta, sArchivo: string;
  oResultado: TResultadoEnSpfe;
  iContador: Integer;
begin
  sCarpeta := GetEnvironmentVariable('SPFE_EJEMPLOS');
  Assert.IsTrue(TDirectory.Exists(sCarpeta), 'Definir SPFE_EJEMPLOS');
  iContador := 0;
  for sArchivo in TDirectory.GetFiles(sCarpeta, '*.xml') do
  begin
    oResultado := Validar(TFile.ReadAllText(sArchivo, TEncoding.UTF8));
    Assert.IsTrue(oResultado.EsEvaluacionCompleta, sArchivo);
    Assert.IsTrue(oResultado.EsCapaEnSuperada, sArchivo);
    Inc(iContador);
  end;
  Assert.AreEqual(19, iContador);
end;

procedure TPruebasEnSpfe.DetectarNumeroVacio;
begin
  Assert.IsFalse(EvaluarRegla('BR-02', '<cbc:ID> </cbc:ID>'));
  Assert.IsTrue(EvaluarRegla('BR-02', '<cbc:ID>A/0001</cbc:ID>'));
end;

procedure TPruebasEnSpfe.CuantificarMonedaFiscal;
begin
  Assert.IsTrue(EvaluarRegla('BR-53', ''));
  Assert.IsFalse(EvaluarRegla('BR-53',
    '<cbc:TaxCurrencyCode>EUR</cbc:TaxCurrencyCode>'));
  Assert.IsTrue(EvaluarRegla('BR-53',
    '<cbc:TaxCurrencyCode>EUR</cbc:TaxCurrencyCode>' +
    '<cac:TaxTotal><cbc:TaxAmount currencyID="EUR">1.00</cbc:TaxAmount>' +
    '</cac:TaxTotal>'));
end;

procedure TPruebasEnSpfe.RespetarEspaciosDeNombres;
begin
  Assert.IsTrue(EvaluarRegla('BR-02',
    '<otro:ID xmlns:otro="urn:oasis:names:specification:ubl:schema:xsd:' +
    'CommonBasicComponents-2">A/1</otro:ID>'));
  Assert.IsFalse(EvaluarRegla('BR-02',
    '<cbc:ID xmlns:cbc="urn:ajeno">A/1</cbc:ID>'));
end;

procedure TPruebasEnSpfe.RechazarDecimalInvalido;
begin
  Assert.WillRaise(
    procedure
    begin
      LeerDecimal('1,99');
    end, ESpfeErrorDinamico);
end;

procedure TPruebasEnSpfe.ConservarPrecisionDecimal;
var
  oResultado: TSecuenciaSpfe;
begin
  oResultado := OperarSpfe('+',
    [TValorSpfe.DesdeDecimal(LeerDecimal('999999999999999999.999999'))],
    [TValorSpfe.DesdeDecimal(LeerDecimal('0.000001'))]);
  Assert.AreEqual(0, BcdCompare(ObtenerDecimal(oResultado),
    LeerDecimal('1000000000000000000')));
end;

procedure TPruebasEnSpfe.RedondearEmpatesPositivosYNegativos;
begin
  Assert.AreEqual(0, BcdCompare(RedondearXPath(LeerDecimal('2.5')),
    LeerDecimal('3')));
  Assert.AreEqual(0, BcdCompare(RedondearXPath(LeerDecimal('-2.5')),
    LeerDecimal('-2')));
  Assert.AreEqual(0, BcdCompare(RedondearXPath(LeerDecimal('-2.500001')),
    LeerDecimal('-3')));
end;

procedure TPruebasEnSpfe.ContarCaracteresUnicode;
var
  oResultado: TSecuenciaSpfe;
begin
  oResultado := EjecutarFuncionSpfe('string-length',
    [[TValorSpfe.DesdeTexto('A' + #$D83D#$DCB6 + 'B')]],
    Default(TValorSpfe));
  Assert.AreEqual(0, BcdCompare(ObtenerDecimal(oResultado),
    IntegerToBcd(3)));
end;

procedure TPruebasEnSpfe.ConservarEspacioNoSeparable;
var
  oResultado: TSecuenciaSpfe;
begin
  oResultado := EjecutarFuncionSpfe('normalize-space',
    [[TValorSpfe.DesdeTexto(string('  A'#9'B'#$A0'C  '))]],
    Default(TValorSpfe));
  Assert.AreEqual(string('A B'#$A0'C'), ObtenerTexto(oResultado));
end;

procedure TPruebasEnSpfe.RechazarEntidades;
begin
  Assert.WillRaise(
    procedure
    begin
      Validar('<!DOCTYPE Invoice [<!ENTITY x SYSTEM "file:///x">]>' +
        InicioFactura + '</Invoice>');
    end, ESpfeXPath);
end;

procedure TPruebasEnSpfe.RechazarRaizAjena;
begin
  Assert.WillRaise(
    procedure
    begin
      Validar('<Invoice xmlns="urn:ajeno"/>');
    end, ESpfeXPath);
end;

procedure TPruebasEnSpfe.NoCertificarEdicion2026;
var
  oResultado: TResultadoEnSpfe;
begin
  oResultado := Default(TResultadoEnSpfe);
  Assert.IsFalse(oResultado.EsCobertura2026Completa);
  Assert.IsFalse(oResultado.EsCapaEnSuperada);
end;

procedure TPruebasEnSpfe.ConservarDiferenciasDeVersion;
var
  oResultado: TResultadoEnSpfe;
begin
  oResultado := Validar(InicioFactura +
    '<cbc:UBLVersionID>2.5</cbc:UBLVersionID>' +
    '<cac:WithholdingTaxTotal/>' + '</Invoice>');
  Assert.IsTrue(Contener(oResultado, 'UBL-CR-002'));
  Assert.IsTrue(Contener(oResultado, 'UBL-CR-513'));
end;

procedure TPruebasEnSpfe.DividirPorCienSinPerderDecimales;
var
  oResultado: TSecuenciaSpfe;
begin
  oResultado := OperarSpfe('div',
    [TValorSpfe.DesdeDecimal(LeerDecimal('0.123456789012345678'))],
    [TValorSpfe.DesdeDecimal(IntegerToBcd(100))]);
  Assert.AreEqual(0, BcdCompare(ObtenerDecimal(oResultado),
    LeerDecimal('0.00123456789012345678')));
end;

procedure TPruebasEnSpfe.RechazarDesbordamientoDecimal;
begin
  Assert.WillRaise(
    procedure
    begin
      LeerDecimal(StringOfChar('1', 65));
    end, ESpfeXPath);
end;

procedure TPruebasEnSpfe.EncontrarCadenaVacia;
var
  oResultado: TSecuenciaSpfe;
begin
  oResultado := EjecutarFuncionSpfe('contains',
    [[TValorSpfe.DesdeTexto('ABC')], [TValorSpfe.DesdeTexto('')]],
    Default(TValorSpfe));
  Assert.IsTrue(ObtenerBooleano(oResultado));
end;

procedure TPruebasEnSpfe.ConservarUnicodeEnElDom;
var
  oXml: TXmlNativoSpfe;
  sUnicode: string;
begin
  sUnicode := #$D83D#$DCB6;
  oXml := TXmlNativoSpfe.Create;
  try
    oXml.Cargar('<?xml version="1.0" encoding="UTF-8"?>' + InicioFactura +
      '<cbc:ID>' + sUnicode + '&#x1F4B6;<![CDATA[&#x1F4B6;]]></cbc:ID>' +
      '</Invoice>');
    Assert.AreEqual('Invoice', string(oXml.Documento.DocumentElement.
      LocalName));
    Assert.AreEqual(sUnicode + sUnicode + '&#x1F4B6;',
      string(oXml.Documento.DocumentElement.FirstChild.XPathStringValue));
  finally
    FreeAndNil(oXml);
  end;
end;

procedure TPruebasEnSpfe.ResolverRamaQueEvitaConversionInnecesaria;
var
  oResultado: TResultadoEnSpfe;
begin
  // Sin subtotales, BR-CO-14 se cumple sin convertir TaxAmount vacío.
  oResultado := Validar(InicioFactura +
    '<cac:TaxTotal><cbc:TaxAmount/></cac:TaxTotal></Invoice>');
  Assert.IsFalse(Contener(oResultado, 'BR-CO-14'));
  // La presencia de errores fiscales de otros asertos se conserva.
  Assert.IsFalse(oResultado.EsCapaEnSuperada);
end;

procedure TPruebasEnSpfe.RechazarEscalaNoRepresentable;
begin
  Assert.WillRaise(
    procedure
    begin
      OperarSpfe('*', [TValorSpfe.DesdeDecimal(LeerDecimal(
        '0.' + StringOfChar('0', 39) + '1'))],
        [TValorSpfe.DesdeDecimal(LeerDecimal(
          '0.' + StringOfChar('0', 39) + '1'))]);
    end, ESpfeXPath);
end;

initialization
  TDUnitX.RegisterTestFixture(TPruebasEnSpfe);

end.
