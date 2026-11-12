# SPFE: documentación y evaluador Delphi nativo

Biblioteca experimental para evaluar en Delphi las reglas públicas de
EN 16931, acompañada de documentación técnica del SPFE, esquemas UBL y
pruebas reproducibles.

**No es un validador completo ni certificado del SPFE o de EN 16931:2026.**
El catálogo implementado procede de `validation-1.3.17`: EN 2017+A1 sobre
UBL 2.1. La documentación SPFE y los XSD UBL 2.5 son capas separadas; su
presencia no amplía automáticamente la cobertura del evaluador.

## Contenido

| Ruta | Contenido |
|---|---|
| [src/delphi](src/delphi) | Evaluador, navegación XML y catálogo Pascal |
| [tests/delphi](tests/delphi) | 20 tests DUnitX y ejecutable de contraste |
| [scripts](scripts) | Compilación, extracción y contraste de referencia |
| [docs/spfe](docs/spfe/README.md) | Documentación AEAT/BOE, UBL 2.5 y EN |
| [docs/ARQUITECTURA.md](docs/ARQUITECTURA.md) | API, límites y funcionamiento |
| [docs/VALIDACION.md](docs/VALIDACION.md) | Evidencias y límites de las pruebas |

El código de producción es Delphi nativo: no requiere Java, Python, Saxon,
MSXML ni DLL o BPL adicionales. Usa ADOM y aritmética BCD del RTL, enlazados
en el ejecutable. Python y SaxonC son herramientas opcionales de desarrollo
para extraer reglas y contrastarlas con el XSLT oficial.

## Compilar y ejecutar las pruebas

Entorno comprobado: RAD Delphi 13.2, compiladores 37.0, Win64 y Win32.
Se requieren las DCU de RTL y DUnitX suministradas con Delphi. No se
redistribuyen componentes, fuentes ni binarios de Embarcadero.

En PowerShell, desde la raíz del repositorio:

```powershell
./scripts/ejecutar_pruebas.ps1 -DelphiRoot $env:BDS
```

Si `BDS` no está definido, pasar en `-DelphiRoot` la carpeta de instalación
de RAD Studio. Para una sola plataforma, añadir `-Plataformas Win64`.
Los ejecutables y las DCU se generan en `build/`, excluido de Git.

Ejemplo de ejecución del comprobador:

```powershell
./build/Win64/ComprobarEnSpfe.exe ./docs/spfe/factura.xml
```

La salida JSON distingue avisos, fallos fatales y errores de evaluación.
Ese XML es un ejemplo SPFE; puede producir diferencias con el perfil EN
antiguo. Un error técnico o cobertura incompleta nunca significa validación
satisfactoria. El comprobador es una herramienta de diagnóstico, no un
cliente de servicios web.

## Uso desde Delphi

Añadir `src/delphi` al search path y utilizar `inSpfeValidadorEn`:

```pascal
oValidador := TValidadorEnSpfe.Create;
try
  oResultado := oValidador.Validar(sXml);
  // Consultar EsEvaluacionCompleta, EsCapaEnSuperada y Diagnosticos.
finally
  FreeAndNil(oValidador);
end;
```

La API es síncrona. Integrarla en un trabajador en segundo plano y medir
su impacto; no ejecutarla dentro de la emisión ni de una transacción fiscal.
No hay cola persistente, interfaz de usuario, acceso a BD, generador UBL
ni cliente SOAP en este repositorio.

## Regenerar el catálogo

Solo en desarrollo, con Python 3:

```powershell
python scripts/extraer_reglas_spfe.py `
  docs/spfe/en16931-ubl-1.3.17/schematron/preprocessed/EN16931-UBL-validation-preprocessed.sch `
  src/delphi/inSpfeReglasEn.inc build/extraccion.json
```

Crear `build/` si no existe. No cambiar de versión sin revisar el nuevo
vocabulario XPath y repetir las pruebas: el evaluador implementa el
subconjunto utilizado por esta release, no todo XPath 2.0 ni XSLT.

## Licencias y atribuciones

El código propio conserva MPL-2.0, indicada en [LICENSE](LICENSE). Las
reglas derivadas y los artefactos EN conservan EUPL-1.2. La documentación
AEAT/BOE y los esquemas OASIS mantienen sus condiciones y avisos originales.
Consultar [NOTICE.md](NOTICE.md); la licencia raíz no sustituye las de terceros.

Este proyecto es independiente y no está patrocinado ni certificado por
la AEAT, OASIS, la Comisión Europea ni los autores de los estándares.
