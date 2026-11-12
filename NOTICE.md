# Licencias, origen y modificaciones

- Código original de Alejandro Laorden Hidalgo: MPL-2.0, según los avisos
  de cada archivo y la licencia raíz preexistente.
- `src/delphi/inSpfeReglasEn.pas` y `inSpfeReglasEn.inc`: adaptación a Pascal
  de ConnectingEurope/eInvoicing-EN16931, release `validation-1.3.17`.
  Se conservan EUPL-1.2, identificadores, expresiones, mensajes y gravedad.
  La modificación consiste en compilar las reglas a instrucciones nativas;
  la fecha de la adaptación figura en la cabecera de la unidad.
- `docs/spfe/en16931-ubl-1.3.17`: artefactos públicos de esa release,
  conservados sin modificación, con su [licencia](LICENSES/EUPL-1.2.txt).
  [Origen](https://github.com/ConnectingEurope/eInvoicing-EN16931/releases/tag/validation-1.3.17).
- `docs/spfe/ubl-2.5`: XSD canónicos de OASIS UBL 2.5. Se conservan los
  avisos de copyright y permisos incluidos en los archivos, también los
  avisos de terceros de los esquemas auxiliares.
  [Distribución oficial](https://docs.oasis-open.org/ubl/os-UBL-2.5/).
- Documentación AEAT: copias técnicas de la Agencia Estatal de
  Administración Tributaria. Se conserva su contenido y metadatos; fuentes
  y fechas disponibles en `docs/spfe/FUENTES.json` y el índice documental.
  [Condiciones de reutilización](https://sede.agenciatributaria.gob.es/Sede/gobierno-abierto/reutilizacion-informacion/condiciones-reutilizacion.html).
- Documentación BOE: copias de la Agencia Estatal Boletín Oficial del
  Estado, con procedencia en el mismo manifiesto.
  [Condiciones de reutilización](https://www.boe.es/informacion/aviso_legal/index.php?lang=es).

No se distribuyen los textos licenciados de UNE/AENOR ni componentes del
RTL, DCU, DUnitX o motores de terceros. Los usuarios necesitan su propia
instalación de Delphi. No se atribuye a los organismos anteriores apoyo,
participación o certificación de este proyecto.
