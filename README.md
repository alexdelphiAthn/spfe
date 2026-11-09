# SPFE: documentación, evaluador y generadores Delphi nativos

Biblioteca experimental para evaluar en Delphi las reglas públicas de
EN 16931 y para generar los mensajes UBL 2.5 del SPFE (factura del
Anexo I, estados del Anexo II y sobres ebMS3), acompañada de
documentación técnica del SPFE, esquemas UBL y pruebas reproducibles.

**No es un validador completo ni certificado del SPFE o de EN 16931:2026.**
El catálogo implementado procede de `validation-1.3.17`: EN 2017+A1 sobre
UBL 2.1. La documentación SPFE y los XSD UBL 2.5 son capas separadas; su
presencia no amplía automáticamente la cobertura del evaluador.

## Contenido

| Ruta | Contenido |
|---|---|
| [src/delphi](src/delphi) | Evaluador, generadores UBL/ebMS3, navegación XML y catálogo Pascal |
| [tests/delphi](tests/delphi) | 35 tests DUnitX y ejecutable de contraste |
| [scripts](scripts) | Compilación, extracción y contrastes de referencia y XSD |
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
No hay cola persistente, interfaz de usuario, acceso a BD ni transporte
HTTP en este repositorio: los generadores producen documentos y sobres, y
el envío con TLS mutuo corresponde a la aplicación que los integre.

## Generar mensajes SPFE desde Delphi

`inSpfeGeneradorUbl` produce el UBL 2.5 `Invoice` del alta de factura del
Anexo I; `inSpfeGeneradorRespuesta`, los `ApplicationResponse` de anulación
y de los ocho estados del Anexo II; `inSpfeEbms3` construye el sobre
SOAP 1.2 con cabecera `eb:Messaging`, el cuerpo multipart con los UBL como
adjuntos `cid:` y trocea las respuestas y los SOAP Fault, según los WSDL y
ejemplos oficiales de `docs/spfe`. `inSpfeMapeos` traduce los códigos del
Anexo I (país, unidades UN/ECE, medios de pago UNTDID 4461).

```pascal
oGenerador := TGeneradorUblSpfe.Create;
try
  sXml := oGenerador.Generar(oFactura); // TFacturaSpfe ya normalizada
finally
  FreeAndNil(oGenerador);
end;
sSobre := TEbms3Spfe.ConstruirSobre(sNif,
  'urn:cen.eu:en16931:submitinvoice', 'SUBMITINVOICE',
  ['altaFacturas.xml'], sMessageId, sConversationId);
```

Los importes se reciben ya formateados: el generador no redondea ni
recalcula. Las pruebas contrastan las facturas generadas con el evaluador
EN nativo (la normal y la rectificativa superan la capa EN salvo las
divergencias documentadas del perfil SPFE frente a EN 2017+A1: la
retención solo hace fallar la regla del importe debido, BR-CO-16, y las
referencias de rectificativa disparan UBL-SR-43), y con los XSD de
UBL 2.5 mediante:

```powershell
./scripts/contrastar_xsd_generados.ps1 -Plataforma Win64
```

Queda pendiente de contraste con el servicio `ValidationInvoice` del
entorno PRE (requiere certificado): hijos exactos de
`CollectionInvoiceLine` en la retención, contenido de `SenderParty` y
`ReceiverParty` en los estados, y los valores de `eb:Service`/`eb:Action`
de cada servicio, de los que solo SUBMITINVOICE está en los ejemplos.

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
