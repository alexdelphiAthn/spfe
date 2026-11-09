# Contraste real contra el servicio ValidationInvoice del entorno PRE de la
# AEAT (herramienta de desarrollo; requiere PowerShell 7 y un certificado
# electrónico de persona o representante en el almacén del usuario).
#
# ValidationInvoice (solo PRE) es SOAP 1.2 document/literal sin ebMS: la
# factura UBL viaja directamente en el body y la respuesta es un UBL
# DocumentStatus con el resultado de las tres capas de validación
# (sintaxis, EN 16931 y reglas propias de la SPFE). No registra la factura.
#
# 1. Exporta los XML del generador (vía el runner, como el contraste XSD).
# 2. Envía cada factura (raíz Invoice) a ValidationInvoiceSOAP con TLS
#    mutuo y guarda cada DocumentStatus en build/pre/.
#
# Uso:  ./scripts/validar_en_pre.ps1 -Huella <huella del certificado>
#       (sin -Huella, lista los certificados de cliente disponibles)
param(
  [string]$Huella,
  [ValidateSet('Win64', 'Win32')]
  [string]$Plataforma = 'Win64',
  [string]$Endpoint =
    'https://prewww1.aeat.es/wlpl/SPFE-FACT/ws/ValidationInvoiceSOAP'
)

$ErrorActionPreference = 'Stop'
$accionSoap = 'https://www.agenciatributaria.gob.es/spfe/ns/services/' +
  'ValidationInvoice/v1/ValidationInvoice'

if (-not $Huella) {
  Write-Output 'Indicar -Huella. Certificados de cliente disponibles:'
  Get-ChildItem Cert:\CurrentUser\My | Where-Object {
    $_.HasPrivateKey -and
    (($_.EnhancedKeyUsageList | ForEach-Object ObjectId) -contains
      '1.3.6.1.5.5.7.3.2') } | ForEach-Object {
    Write-Output ("  {0}  {1}" -f $_.Thumbprint, $_.Subject) }
  exit 1
}
$certificado = Get-Item "Cert:\CurrentUser\My\$Huella"

$raiz = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$runner = Join-Path $raiz "build\$Plataforma\PruebasEnSpfeRunner.exe"
if (-not (Test-Path $runner)) {
  throw "No existe $runner; compilar antes con scripts/ejecutar_pruebas.ps1"
}
$generados = Join-Path $raiz 'build\generados'
$respuestas = Join-Path $raiz 'build\pre'
New-Item -ItemType Directory -Path $respuestas -Force | Out-Null

$ejemplosPrevios = $env:SPFE_EJEMPLOS
$generadosPrevios = $env:SPFE_SALIDA_GENERADOS
$env:SPFE_EJEMPLOS = Join-Path $raiz 'docs\spfe\en16931-ubl-1.3.17\examples'
$env:SPFE_SALIDA_GENERADOS = $generados
try {
  & $runner | Out-Null
  if ($LASTEXITCODE -ne 0) {
    throw 'Fallaron las pruebas DUnitX al exportar los generados'
  }
} finally {
  $env:SPFE_EJEMPLOS = $ejemplosPrevios
  $env:SPFE_SALIDA_GENERADOS = $generadosPrevios
}

$fallos = 0
foreach ($archivo in Get-ChildItem (Join-Path $generados '*.xml')) {
  [xml]$doc = Get-Content $archivo.FullName -Raw
  if ($doc.DocumentElement.LocalName -ne 'Invoice') {
    continue # ValidationInvoice solo admite facturas (InvoiceType).
  }
  $factura = (Get-Content $archivo.FullName -Raw) `
    -replace '^\s*<\?xml[^>]*\?>\s*', ''
  $sobre = '<?xml version="1.0" encoding="UTF-8"?>' +
    '<soap:Envelope xmlns:soap="http://www.w3.org/2003/05/soap-envelope">' +
    '<soap:Body>' + $factura + '</soap:Body></soap:Envelope>'
  $contentType = 'application/soap+xml; charset=UTF-8; action="' +
    $accionSoap + '"'
  $respuesta = Invoke-WebRequest -Uri $Endpoint -Method Post `
    -Certificate $certificado -ContentType $contentType `
    -Body ([System.Text.Encoding]::UTF8.GetBytes($sobre)) `
    -SkipHttpErrorCheck
  $destino = Join-Path $respuestas `
    ($archivo.BaseName + '_documentstatus.xml')
  $texto = if ($respuesta.Content -is [byte[]]) {
    [System.Text.Encoding]::UTF8.GetString($respuesta.Content)
  } else { [string]$respuesta.Content }
  Set-Content -Path $destino -Value $texto -Encoding utf8
  Write-Output ("HTTP {0}  {1} -> {2}" -f $respuesta.StatusCode,
    $archivo.Name, (Split-Path $destino -Leaf))
  if ($respuesta.StatusCode -ne 200) { $fallos++ }
}
Write-Output ("Respuestas guardadas en {0}" -f $respuestas)
if ($fallos -gt 0) {
  Write-Output ("{0} peticion(es) devolvieron un estado distinto de 200;" `
    -f $fallos)
  Write-Output 'revisar el SOAP Fault guardado en la respuesta.'
}
