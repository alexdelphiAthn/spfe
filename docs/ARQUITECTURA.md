# API y arquitectura del evaluador nativo

## Contrato y límites

```pascal
oValidador := TValidadorEnSpfe.Create;
try
  oResultado := oValidador.Validar(sXmlInmutable);
finally
  FreeAndNil(oValidador);
end;
```

Cada llamada posee su DOM, variables y evaluador. No hay estado global mutable
propio ni acceso a UI/BBDD. Debe invocarse desde el futuro trabajador en segundo
plano; esta API es síncrona y no debe llamarse en el hilo de emisión.

`EsCapaEnSuperada` exige evaluación completa y ausencia de fallos fatales o
errores técnicos. Un aviso se conserva. Un error al evaluar un aserto guarda
su identificador y marca cobertura incompleta. Un fallo de lectura, contexto
o límite de operaciones propaga excepción: el coordinador deberá conservar
el trabajo como error, nunca como validado. La comprobación de entrada rechaza
DTD y entidades declaradas, y limita el tamaño a 16.777.216 caracteres.

No es un motor general XPath 2.0/XSLT. Solo implementa el vocabulario de las
expresiones extraídas. Las divisiones del paquete son exclusivamente por 100:
se calculan mediante multiplicación decimal exacta por 0,01. No se usa
`Currency` ni coma flotante para importes; los desbordamientos son errores.
La entrada decimal está limitada a 64 cifras y escala 63, el rango de TBcd.
Las fechas admiten años 0001–9999 y zona XML; la zona implícita es UTC.
El presupuesto inicial es de diez millones de instrucciones por documento;
alcanzarlo produce error de infraestructura. No implica rechazo normativo.

Se respeta la primera regla aplicable por nodo y patrón. Los prefijos del
XML pueden variar: se comparan URI y nombre local, no el texto del prefijo.
Los IDs y mensajes oficiales permanecen en su idioma original.

**Cobertura: EN 2017+A1 / UBL 2.1, release validation-1.3.17.**
`EsCobertura2026Completa` siempre devuelve falso. Quedan pendientes las normas
UNE 2026, la matriz de aplicabilidad SPFE, las comprobaciones propias del BOE
y la capa XSD UBL 2.5 nativa. Se conservan UBL-CR-002 y UBL-CR-513 aunque
reflejen diferencias con la versión/perfil SPFE. CreditNote se utiliza solo
para contrastar el ejemplo europeo; SPFE seguirá usando Invoice también en
rectificativas.


## Generadores UBL y ebMS3

`inSpfeGeneradorUbl` (factura del Anexo I), `inSpfeGeneradorRespuesta`
(anulación y estados del Anexo II) e `inSpfeEbms3` (sobre SOAP 1.2 con
cabecera `eb:Messaging`, multipart `cid:` y troceo de respuestas y Fault)
comparten el mismo criterio: entrada ya normalizada en registros con los
códigos del Anexo (los importes llegan formateados con punto decimal; no
se redondea ni se recalcula), salida como cadena XML con escapado propio
(`inSpfeEscritorXml`), sin estado global, UI, BD ni red. `inSpfeMapeos`
traduce país numérico, unidades UN/ECE y medios de pago UNTDID 4461, y
valida motivos de rechazo y códigos de respuesta.

El transporte HTTP con TLS mutuo y la persistencia de MessageId y
ConversationId pertenecen a la aplicación integradora. Los puntos aún no
contrastados con el entorno PRE están marcados en las cabeceras de las
unidades y en el README.

## Integración

El ejecutor en segundo plano, la cola persistente y sus límites de recursos
pertenecen a cada aplicación. Medir el impacto real, especialmente en equipos
de dos núcleos. El componente no instala tablas ni modifica datos fiscales.
