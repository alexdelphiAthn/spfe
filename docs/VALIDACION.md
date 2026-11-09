# Validación y límites de la evidencia

La copia preparada para publicación se ha compilado con los compiladores
37.0 de Delphi para Win64 y Win32. Pasan los 36 tests DUnitX por plataforma,
sin tests ignorados, errores, fallos ni fugas reportadas por el runner.
La compilación usa las DCU suministradas de RTL/DUnitX y no recompila terceros.

Los tests del evaluador cubren los 19 ejemplos europeos, campos obligatorios,
espacios de nombres, cuantificadores, precisión decimal, redondeos positivos
y negativos, límites de representación, Unicode literal/referenciado/CDATA y
errores. Incluyen regresiones de evaluación lógica y diferencias de versión.

Los tests de los generadores contrastan las facturas generadas con el propio
evaluador EN (la normal y la rectificativa superan la capa EN, salvo las
divergencias documentadas del perfil SPFE frente a EN 2017+A1: con retención
solo falla BR-CO-16 y cada referencia de rectificativa dispara UBL-SR-43),
los mensajes de estado del Anexo II, el escapado XML, los mapeos de códigos
del Anexo I, el sobre ebMS3 y el troceo multipart con SOAP Fault. Los XML
generados validan contra los XSD de UBL 2.5 con
`scripts/contrastar_xsd_generados.ps1` (validador XSD de .NET). Ese
contraste es sintáctico y EN 2017+A1: no acredita las validaciones propias
del SPFE, pendientes del servicio ValidationInvoice del entorno PRE.

El intento de contraste real (`scripts/validar_en_pre.ps1`, noviembre de
2026) verificó el TLS mutuo con certificado FNMT de persona física y la
ruta `ws/ValidationInvoiceSOAP` del PRE exterior, que respondió con un
Fault SOAP «404 … Desactivada temporalmente»: el servicio estaba apagado
por la AEAT, de modo que las reglas propias del SPFE siguen sin
contrastar. Las respuestas quedan en `build/pre/` al repetir el envío.

## Contraste previo del mismo núcleo

El núcleo y el catálogo se conservan byte a byte respecto a la implementación
contrastada con la hoja XSLT oficial mediante SaxonC HE 13.1.1, solo en
desarrollo. Por plataforma se comprobaron 2.263 entradas:

- 1.656 con comparación de identificador, gravedad y multiplicidad de fallos.
- 607 en las que el XSLT de referencia aborta por conversión; Delphi informa
  evaluación incompleta. No se cuentan como facturas normativamente válidas.
- Cero discrepancias según esos criterios.

La batería incluye los 19 XML originales, copias con cada nodo hoja vacío
y casos adicionales de moneda, versión y Unicode. No demuestra equivalencia
para cualquier XML posible ni cobertura de todas las ramas de cada regla.
El resumen histórico está en [VALIDACION.json](VALIDACION.json); sus hashes
de ejecutables corresponden a aquel contraste, no a una compilación nueva.

No se afirma conformidad EN 2026/SPFE. El XSD UBL 2.5 no está integrado en
el evaluador nativo y quedan pendientes las reglas propias del perfil SPFE
y una matriz oficial de aplicabilidad entre versiones. Los textos UNE 2026
no están incluidos. Las pruebas tampoco demuestran ausencia de impacto en
la emisión ni rendimiento del sistema completo en un servidor de dos núcleos.

## Repetir el contraste

Instalar Python 3 y, solo para esta prueba, SaxonC en una carpeta de desarrollo:

```powershell
python -m pip install --target build/oraculo saxonche==13.1.1
python scripts/comparar_referencia.py `
  --fuentes docs/spfe/en16931-ubl-1.3.17 `
  --temporal build/casos `
  --ejecutable build/Win64/ComprobarEnSpfe.exe `
  --oraculo build/oraculo `
  --informe build/contraste-win64.json
```

Repetir con el ejecutable Win32 y otro informe si se desea contrastar ambas
plataformas. El script necesita rutas absolutas para el ejecutable si el
sistema no resuelve la ruta relativa en la creación del proceso; se puede
usar `(Resolve-Path build/Win64/ComprobarEnSpfe.exe).Path` como argumento.
No distribuir el motor de referencia ni sus dependencias con el producto.

## Regeneración y documentos

El extractor produce las mismas 3.576 instrucciones para los 982 asertos
y 104 contextos de esta release. Una actualización requiere revisar funciones,
operadores, ejes y divisores, además de repetir el contraste.

Los originales documentales están inventariados en
[SHA256.json](spfe/SHA256.json). Los hashes permiten detectar cambios;
no convierten una copia documental en una certificación normativa.
