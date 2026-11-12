# Documentación técnica de referencia

Copias documentales para facilitar el trabajo de programadores. Los
archivos originales se conservan byte a byte; los índices y explicaciones
de este repositorio son material propio. Consultar siempre las fuentes
oficiales para comprobar vigencia y nuevas versiones.

## Documentos AEAT

Fuente: Agencia Estatal de Administración Tributaria, Portal de Desarrolladores,
sección Solución Pública de Facturación Electrónica (SPFE).

[Página de origen](https://www.agenciatributaria.es/AEAT.desarrolladores/Desarrolladores/_menu_/Documentacion/Documentacion.html).

Fechas de publicación registradas en la captura documental suministrada:

| Archivo | Contenido | Última modificación registrada |
|---|---|---|
| [A1-Proyecto-OM-FE.pdf](A1-Proyecto-OM-FE.pdf) | Anexo I, campos de factura y estados | 21-10-2026 |
| [A2-Proyecto-OM-FE.pdf](A2-Proyecto-OM-FE.pdf) | Anexo II, pago, rechazo, cobro e impago | 21-10-2026 |
| [CatalogoServicios.pdf](CatalogoServicios.pdf) | Catálogo de servicios web | 21-10-2026 |
| [FormatosEntradaSalida.pdf](FormatosEntradaSalida.pdf) | Formatos de entrada y salida | 21-10-2026 |
| [Validaciones_Factura_Electronica.pdf](Validaciones_Factura_Electronica.pdf) | Validaciones propias de SPFE | 16-10-2026 |
| [factura.xml](factura.xml) | Ejemplo básico de factura UBL | 20-10-2026 |
| [wsdl_xsd_20261029.zip](wsdl_xsd_20261029.zip) | WSDL y XSD del entorno PRE | 29-10-2026 |
| [SendInvoicesSOAP.zip](SendInvoicesSOAP.zip) | Ejemplos de petición y respuesta | 29-10-2026 |

Los nombres A1/A2 conservan la denominación «Proyecto» de los originales;
no equivalen por sí solos a un texto legal definitivo. El WSDL corresponde
a la captura de PRE y puede cambiar; no se presupone un contrato de producción.

## Normativa de referencia

Copias suministradas desde el BOE, conservadas en [boe/](boe/):

- [Orden HAC/1028/2026, PDF](boe/Orden_HAC_1028_2026.pdf).
- [Orden HAC/1028/2026, HTML](boe/Orden_HAC_1028_2026.html).
- [RD 238/2026, PDF](boe/RD_238_2026.pdf).

Las URLs de origen constan en [FUENTES.json](FUENTES.json). Las copias
son referencias versionadas; no se afirma que incorporen cambios posteriores.

## Tres capas que deben distinguirse

1. [ubl-2.5/](ubl-2.5/): 116 XSD canónicos de OASIS, 101 maindoc y 15 common.
   Conservan sus imports relativos y sus avisos originales. Origen:
   [UBL 2.5](https://docs.oasis-open.org/ubl/os-UBL-2.5/UBL-2.5.zip).
2. [en16931-ubl-1.3.17/](en16931-ubl-1.3.17/): 27 archivos de la release
   pública EN, con Schematron, XSLT 2.0 y 19 ejemplos. Origen:
   [validation-1.3.17](https://github.com/ConnectingEurope/eInvoicing-EN16931/releases/tag/validation-1.3.17).
   Se añade la licencia EUPL original junto a los archivos sin modificarlos.
3. Validaciones SPFE de la AEAT: PDF específico de esta carpeta.

El paquete EN cubre EN 2017+A1 / UBL 2.1; no acredita la semántica de
EN 2026 sobre UBL 2.5. El ejemplo europeo CreditNote no establece que SPFE
admita ese tipo de documento. Los textos de las normas UNE 2026 no están
disponibles en este repositorio y su cobertura permanece pendiente.

## Procedencia e integridad

[SHA256.json](SHA256.json) identifica cada original incluido. El manifiesto
no constituye certificación normativa. [FUENTES.json](FUENTES.json) conserva
los registros disponibles de URLs, fechas y metadatos de descarga. Los
esquemas y artefactos mantienen las condiciones de sus autores, detalladas
en [NOTICE.md](../../NOTICE.md).
