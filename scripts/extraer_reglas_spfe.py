"""Compila el subconjunto XPath publicado por ConnectingEurope a Pascal.

Herramienta de desarrollo, sin dependencia Python en la aplicación. No interpreta
normas UNE ausentes ni modifica las fuentes oficiales EUPL-1.2.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path
from xml.etree import ElementTree as ET

NS = {"s": "http://purl.oclc.org/dsdl/schematron"}
FUNCIONES = {
    "not", "normalize-space", "exists", "xs:decimal", "upper-case",
    "count", "sum", "true", "false", "contains", "string-length",
    "substring-after", "round", "concat", "abs", "xs:date",
    "substring-before", "ends-with", "name", "substring", "local-name",
    "distinct-values",
}
PRECEDENCIA = {
    ",": 1, "or": 2, "and": 3, "=": 4, "!=": 4, "<": 4,
    ">": 4, "<=": 4, ">=": 4, "eq": 4, "ne": 4, "lt": 4,
    "gt": 4, "le": 4, "ge": 4, "+": 5, "-": 5, "*": 6,
    "div": 6, "|": 7, "/": 8, "//": 8, "[": 9,
}
TOKEN = re.compile(
    r"\s*(?:(?P<cadena>'(?:[^']|'')*'|\"(?:[^\"]|\"\")*\")"
    r"|(?P<numero>\d+(?:\.\d*)?|\.\d+)"
    r"|(?P<nombre>[A-Za-z_][\w.-]*(?::[A-Za-z_][\w.-]*)?)"
    r"|(?P<signo>::|//|\.\.|!=|<=|>=|[()\[\]/@.$,+*|=<>-]))"
)


class Analizador:
    def __init__(self, texto):
        self.tokens = []
        posicion = 0
        while posicion < len(texto.rstrip()):
            coincidencia = TOKEN.match(texto, posicion)
            if not coincidencia:
                raise ValueError(f"Token desconocido: {texto[posicion:]} : {texto}")
            self.tokens.append((coincidencia.lastgroup, coincidencia.group(0).strip()))
            posicion = coincidencia.end()
        self.tokens.append(("fin", ""))
        self.posicion = 0

    def tomar(self, esperado=None):
        token = self.tokens[self.posicion]
        if esperado is not None and token[1] != esperado:
            raise ValueError(f"Esperado {esperado}, recibido {token}")
        self.posicion += 1
        return token

    def actual(self):
        return self.tokens[self.posicion][1]

    def analizar(self):
        arbol = self.expresion()
        self.tomar("")
        return arbol

    def expresion(self, minimo=1):
        izquierdo = self.primario()
        while PRECEDENCIA.get(self.actual(), 0) >= minimo:
            operador = self.tomar()[1]
            if operador == "[":
                predicado = self.expresion()
                self.tomar("]")
                izquierdo = ("filtro", "", [izquierdo, predicado])
            else:
                derecho = self.expresion(PRECEDENCIA[operador] + 1)
                if operador == "//":
                    izquierdo = ("operador", "/", [
                        ("descendientes", "", [izquierdo]), derecho])
                else:
                    izquierdo = ("operador", operador, [izquierdo, derecho])
        return izquierdo

    def primario(self):
        tipo, texto = self.tomar()
        if tipo == "cadena":
            return ("cadena", texto[1:-1].replace(texto[0] * 2, texto[0]), [])
        if tipo == "numero":
            return ("numero", texto, [])
        if texto == "(":
            resultado = self.expresion()
            self.tomar(")")
            return resultado
        if texto in ("/", "//"):
            raiz = ("raiz", "", [])
            if texto == "//":
                raiz = ("descendientes", "", [raiz])
            return ("operador", "/", [raiz, self.expresion(9)])
        if texto == "$":
            return ("variable", self.tomar()[1], [])
        if texto == "every":
            self.tomar("$")
            variable = self.tomar()[1]
            self.tomar("in")
            origen = self.expresion(2)
            self.tomar("satisfies")
            return ("cada", variable, [origen, self.expresion(2)])
        if texto in ("+", "-"):
            return ("funcion", "unario" + texto, [self.expresion(7)])
        if texto == "@":
            return ("atributo", self.tomar()[1], [])
        if texto == ".":
            return ("actual", "", [])
        if texto == "..":
            return ("padre", "", [])
        if tipo == "nombre" and self.actual() == "::":
            self.tomar("::")
            nombre = self.tomar()[1]
            if texto == "child":
                return ("hijo", nombre, [])
            if texto not in {"self", "ancestor", "preceding"}:
                raise ValueError(f"Eje sin implementar: {texto}")
            return ("eje", texto + "::" + nombre, [])
        if tipo == "nombre" and self.actual() == "(":
            if texto not in FUNCIONES:
                raise ValueError(f"Función sin implementar: {texto}")
            self.tomar("(")
            argumentos = []
            if self.actual() != ")":
                argumentos.append(self.expresion(2))
                while self.actual() == ",":
                    self.tomar(",")
                    argumentos.append(self.expresion(2))
            self.tomar(")")
            return ("funcion", texto, argumentos)
        if tipo == "nombre" or texto == "*":
            return ("hijo", texto, [])
        raise ValueError(f"Primario desconocido: {tipo}, {texto}")


def literal_pascal(texto):
    # Segmentos cortos: respeta las 80 columnas, incluso listas de códigos.
    partes = [texto[i:i + 32] for i in range(0, len(texto), 32)] or [""]
    return " +\n      ".join("'" + p.replace("'", "''").replace(
        "\n", "'#10'").replace("\r", "'#13'").replace(
        "\t", "'#9'") + "'" for p in partes)


def escribir(ruta, texto):
    ruta.parent.mkdir(parents=True, exist_ok=True)
    ruta.write_bytes(b"\xef\xbb\xbf" + texto.replace("\r\n", "\n").replace(
        "\n", "\r\n").encode("utf-8"))


def extraer(origen, destino, informe):
    fuente = origen.read_bytes()
    esquema = ET.fromstring(fuente)
    instrucciones, enlaces, cache = [], [], {}

    def compilar(arbol):
        tipo, texto, hijos = arbol
        clave = json.dumps(arbol, ensure_ascii=False)
        if clave not in cache:
            indices = [compilar(hijo) for hijo in hijos]
            primero = len(enlaces)
            enlaces.extend(indices)
            cache[clave] = len(instrucciones)
            instrucciones.append((tipo, texto, primero, len(hijos)))
        return cache[clave]

    reglas, contextos = [], []
    for patron in esquema.findall("s:pattern", NS):
        for regla in patron.findall("s:rule", NS):
            contexto = regla.attrib["context"]
            # Los contextos Schematron relativos casan a cualquier profundidad.
            arbol = Analizador(contexto).analizar()
            if not contexto.startswith("/"):
                arbol = ("operador", "/", [
                    ("descendientes", "", [("raiz", "", [])]), arbol])
            indice = len(contextos)
            contextos.append((patron.attrib["id"], contexto, compilar(arbol)))
            for aserto in regla.findall("s:assert", NS):
                prueba = aserto.attrib["test"]
                reglas.append({
                    "id": aserto.attrib["id"], "contexto": indice,
                    "bandera": aserto.attrib["flag"], "prueba": prueba,
                    "mensaje": "".join(aserto.itertext()),
                    "instruccion": compilar(Analizador(prueba).analizar()),
                })
    sha = hashlib.sha256(fuente).hexdigest()
    lineas = [
        "{ Reglas derivadas de ConnectingEurope/eInvoicing-EN16931. }",
        "{ Licensed under European Union Public Licence (EUPL) version 1.2. }",
        "{ Schematron version 1.3.17 - Last update: 2026-10-09. }",
        "{ Generado por extraer_reglas_spfe.py. No editar a mano. }",
        "{ EN 2017+A1 / UBL 2.1; NO acredita EN 2026 ni el perfil SPFE. }",
        "", "const", "  HuellaFuenteEn = " + literal_pascal(sha) + ";",
        f"  InstruccionesEn: array[0..{len(instrucciones) - 1}] of",
        "    TInstruccionSpfe = (",
    ]
    for i, (tipo, texto, primero, cantidad) in enumerate(instrucciones):
        lineas += [f"    (Clase: ci{tipo.capitalize()}; Texto:",
                   "      " + literal_pascal(texto) + ";",
                   f"     Primero: {primero}; Cantidad: {cantidad})" +
                   ("," if i < len(instrucciones) - 1 else ");")]
    lineas += [f"  EnlacesEn: array[0..{len(enlaces) - 1}] of Integer = ("]
    for inicio in range(0, len(enlaces), 10):
        parte = enlaces[inicio:inicio + 10]
        lineas.append("    " + ", ".join(map(str, parte)) +
                      ("," if inicio + 10 < len(enlaces) else ");"))
    lineas += [f"  ContextosEn: array[0..{len(contextos) - 1}] of",
               "    TContextoSpfe = ("]
    for i, (patron, contexto, instruccion) in enumerate(contextos):
        lineas += ["    (Patron: " + literal_pascal(patron) + ";",
                   "     Expresion: " + literal_pascal(contexto) + ";",
                   f"     Instruccion: {instruccion})" +
                   ("," if i < len(contextos) - 1 else ");")]
    lineas += [f"  ReglasEn: array[0..{len(reglas) - 1}] of TReglaSpfe = ("]
    for i, regla in enumerate(reglas):
        lineas += ["    (Identificador: " + literal_pascal(regla["id"]) + ";",
                   "     Bandera: " + literal_pascal(regla["bandera"]) + ";",
                   "     Prueba: " + literal_pascal(regla["prueba"]) + ";",
                   "     Mensaje: " + literal_pascal(regla["mensaje"]) + ";",
                   f"     Contexto: {regla['contexto']};",
                   f"     Instruccion: {regla['instruccion']})" +
                   ("," if i < len(reglas) - 1 else ");")]
    escribir(destino, "\n".join(lineas) + "\n")
    resumen = {"fuente": str(origen), "sha256": sha,
               "version": "validation-1.3.17", "licencia": "EUPL-1.2",
               "contextos": len(contextos), "asertos": len(reglas),
               "instrucciones": len(instrucciones),
               "clases": sorted({n[0] for n in instrucciones}),
               "funciones": sorted({n[1] for n in instrucciones
                                    if n[0] == "funcion"}),
               "reglas": reglas, "cobertura_2026_completa": False}
    escribir(informe, json.dumps(resumen, ensure_ascii=False, indent=2) + "\n")
    print(f"Extraídos {len(reglas)} asertos y {len(contextos)} contextos.")


if __name__ == "__main__":
    argumentos = argparse.ArgumentParser(description=__doc__)
    argumentos.add_argument("origen", type=Path)
    argumentos.add_argument("destino", type=Path)
    argumentos.add_argument("informe", type=Path)
    opciones = argumentos.parse_args()
    extraer(opciones.origen, opciones.destino, opciones.informe)
