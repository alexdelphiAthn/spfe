{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeMensajes                                                }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       08/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    Mensajes técnicos del evaluador nativo SPFE.                              }
{******************************************************************************}
unit inSpfeMensajes;

interface

resourcestring
  rsSpfeXMLVacioOSuperior =
    'XML vacío o superior a 16 millones de caracteres';
  rsSpfeNoSeAdmitenDTD =
    'No se admiten DTD ni entidades declaradas';
  rsSpfeXMLSinElementoRaiz =
    'XML sin elemento raíz';
  rsSpfeRaizAjenaALas =
    'Raíz ajena a las reglas EN para UBL: {';
  rsSpfeXMLMalFormado =
    'XML mal formado: ';
  rsSpfeNoSePudoConstruir =
    'No se pudo construir el DOM XML';
  rsSpfeXMLSinDocumento =
    'XML sin documento';
  rsSpfeEnlaceDeInstruccionFuera =
    'Enlace de instrucción fuera de rango';
  rsSpfeElOrigenDeUn =
    'El origen de un camino debe ser un nodo';
  rsSpfeLimiteDeOperacionesXPath =
    'Límite de operaciones XPath alcanzado';
  rsSpfeInstruccionFueraDeRango =
    'Instrucción fuera de rango';
  rsSpfeVariableXPathSinEnlazar =
    'Variable XPath sin enlazar';
  rsSpfeFuncionDeTextoDesconocida =
    'Función de texto desconocida: ';
  rsSpfeFuncionBooleanaDesconocida =
    'Función booleana desconocida: ';
  rsSpfeNombreRequiereUnNodo =
    'Nombre requiere un nodo';
  rsSpfeFuncionNoImplementada =
    'Función no implementada: ';
  rsSpfeBooleanoXMLNoValido =
    'Booleano XML no válido: ';
  rsSpfeFechaXMLFueraDel =
    'Fecha XML fuera del rango admitido: ';
  rsSpfeFechaXMLNoValida =
    'Fecha XML no válida: ';
  rsSpfeZonaXMLNoValida =
    'Zona XML no válida: ';
  rsSpfeZonaXMLFueraDe =
    'Zona XML fuera de rango: ';
  rsSpfeComparacionDesconocida =
    'Comparación desconocida: ';
  rsSpfeComparacionDeValorCon =
    'Comparación de valor con más de un elemento';
  rsSpfeEscalaDelProductoFuera =
    'Escala del producto fuera de rango';
  rsSpfeDivisorAjenoAlSubconjunto =
    'Divisor ajeno al subconjunto EN 1.3.17';
  rsSpfeEscalaDeLaDivision =
    'Escala de la división fuera de rango';
  rsSpfeAritmeticaDesconocida =
    'Aritmética desconocida: ';
  rsSpfeOperacionDesconocida =
    'Operación desconocida: ';
  rsSpfePrefijoSinResolver =
    'Prefijo sin resolver: ';
  rsSpfeEjeSinImplementar =
    'Eje sin implementar: ';
  rsSpfeUnEjeXPathNecesita =
    'Un eje XPath necesita un nodo';
  rsSpfeClaseDeSeleccionDesconocida =
    'Clase de selección desconocida';
  rsSpfeDescendientesRequiereUnNodo =
    'Descendientes requiere un nodo';
  rsSpfeDecimalXPathVacio =
    'Decimal XPath vacío';
  rsSpfeDecimalXPathNoValido =
    'Decimal XPath no válido: ';
  rsSpfePrecisionDecimalFueraDel =
    'Precisión decimal fuera del rango nativo';
  rsSpfeDecimalFueraDeRango =
    'Decimal fuera de rango: ';
  rsSpfeBooleanoEfectivoDeSecuencia =
    'Booleano efectivo de secuencia atómica';
  rsSpfeLaFuncionRequiereCero =
    'La función requiere cero o un valor';
  rsSpfeLaOperacionRequiereUn =
    'La operación requiere un decimal';

implementation

end.
