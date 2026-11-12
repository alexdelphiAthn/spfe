param(
  [string]$DelphiRoot = $env:BDS,
  [ValidateSet('Win64', 'Win32')]
  [string[]]$Plataformas = @('Win64', 'Win32')
)

$ErrorActionPreference = 'Stop'
if (-not $DelphiRoot) {
  throw 'Indicar -DelphiRoot con la carpeta de instalación de RAD Studio.'
}
$raiz = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$fuentes = Join-Path $raiz 'src\delphi'
$ejemplosPrevios = $env:SPFE_EJEMPLOS
$env:SPFE_EJEMPLOS = Join-Path $raiz `
  'docs\spfe\en16931-ubl-1.3.17\examples'
try {
  foreach ($plataforma in $Plataformas) {
    $salida = Join-Path $raiz "build\$plataforma"
    New-Item -ItemType Directory -Path $salida -Force | Out-Null
    $compilador = Join-Path $DelphiRoot `
      ('bin\dcc' + $plataforma.Substring(3) + '.exe')
    $bibliotecas = Join-Path $DelphiRoot "lib\$plataforma\release"
    foreach ($proyecto in @('ComprobarEnSpfe', 'PruebasEnSpfeRunner')) {
      & $compilador -B -Q "-U$fuentes;$bibliotecas" "-I$fuentes" `
        "-E$salida" "-NU$salida" `
        (Join-Path $raiz "tests\delphi\$proyecto.dpr")
      if ($LASTEXITCODE -ne 0) {
        throw "Falló la compilación de $proyecto para $plataforma"
      }
    }
    & (Join-Path $salida 'PruebasEnSpfeRunner.exe')
    if ($LASTEXITCODE -ne 0) {
      throw "Fallaron las pruebas DUnitX para $plataforma"
    }
  }
} finally {
  $env:SPFE_EJEMPLOS = $ejemplosPrevios
}
