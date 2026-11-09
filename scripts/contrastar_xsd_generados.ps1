# Contraste de los XML generados con los XSD de UBL 2.5 (herramienta de
# desarrollo; usa el validador XSD de .NET incluido en PowerShell).
# 1. Ejecuta el runner DUnitX con SPFE_SALIDA_GENERADOS para exportar los
#    documentos de ejemplo del generador (factura normal, con retención y
#    mensaje PAYMENT).
# 2. Valida cada uno contra UBL-Invoice-2.5.xsd o
#    UBL-ApplicationResponse-2.5.xsd según su raíz.
# Requiere haber compilado antes con scripts/ejecutar_pruebas.ps1.
param(
  [ValidateSet('Win64', 'Win32')]
  [string]$Plataforma = 'Win64'
)

$ErrorActionPreference = 'Stop'
$raiz = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$runner = Join-Path $raiz "build\$Plataforma\PruebasEnSpfeRunner.exe"
if (-not (Test-Path $runner)) {
  throw "No existe $runner; compilar antes con scripts/ejecutar_pruebas.ps1"
}
$salida = Join-Path $raiz "build\generados"
$ejemplosPrevios = $env:SPFE_EJEMPLOS
$generadosPrevios = $env:SPFE_SALIDA_GENERADOS
$env:SPFE_EJEMPLOS = Join-Path $raiz 'docs\spfe\en16931-ubl-1.3.17\examples'
$env:SPFE_SALIDA_GENERADOS = $salida
try {
  & $runner | Out-Null
  if ($LASTEXITCODE -ne 0) {
    throw 'Fallaron las pruebas DUnitX al exportar los generados'
  }
} finally {
  $env:SPFE_EJEMPLOS = $ejemplosPrevios
  $env:SPFE_SALIDA_GENERADOS = $generadosPrevios
}

$xsdFactura = Join-Path $raiz 'docs\spfe\ubl-2.5\maindoc\UBL-Invoice-2.5.xsd'
$xsdRespuesta = Join-Path $raiz `
  'docs\spfe\ubl-2.5\maindoc\UBL-ApplicationResponse-2.5.xsd'
$fallos = 0
foreach ($archivo in Get-ChildItem (Join-Path $salida '*.xml')) {
  [xml]$doc = Get-Content $archivo.FullName -Raw
  if ($doc.DocumentElement.LocalName -eq 'ApplicationResponse') {
    $xsd = $xsdRespuesta
    $espacio = 'urn:oasis:names:specification:ubl:schema:xsd:' +
      'ApplicationResponse-2'
  } else {
    $xsd = $xsdFactura
    $espacio = 'urn:oasis:names:specification:ubl:schema:xsd:Invoice-2'
  }
  $ajustes = New-Object System.Xml.XmlReaderSettings
  $ajustes.ValidationType = [System.Xml.ValidationType]::Schema
  # Sin resolutor, .NET moderno no sigue los xsd:import anidados.
  $ajustes.Schemas.XmlResolver = New-Object System.Xml.XmlUrlResolver
  $null = $ajustes.Schemas.Add($espacio, $xsd)
  $errores = @()
  $ajustes.add_ValidationEventHandler({ param($s, $e)
      $script:errores += $e.Message })
  $lector = [System.Xml.XmlReader]::Create($archivo.FullName, $ajustes)
  try {
    while ($lector.Read()) { }
  } finally {
    $lector.Close()
  }
  if ($errores.Count -eq 0) {
    Write-Output ("  OK  {0}" -f $archivo.Name)
  } else {
    $fallos++
    Write-Output (">FALLO {0}" -f $archivo.Name)
    $errores | Select-Object -First 5 |
      ForEach-Object { Write-Output ("       - {0}" -f $_) }
  }
}
if ($fallos -gt 0) {
  throw "$fallos documento(s) generado(s) no validan contra el XSD"
}
Write-Output 'Todos los generados validan contra los XSD de UBL 2.5.'
