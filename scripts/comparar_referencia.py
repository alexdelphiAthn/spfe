"""Contrasta Delphi con el XSLT oficial mediante SaxonC SOLO en desarrollo.

SaxonC/Python no se enlazan ni se distribuyen con la aplicación. Los originales no
se modifican. Las mutaciones se crean en el temporal indicado por el llamador.
"""
from __future__ import annotations

import argparse
from collections import Counter
from copy import deepcopy
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from xml.etree import ElementTree as ET

CBC = "urn:oasis:names:specification:ubl:schema:xsd:CommonBasicComponents-2"
CAC = "urn:oasis:names:specification:ubl:schema:xsd:CommonAggregateComponents-2"
SVRL = "http://purl.oclc.org/dsdl/svrl"


def mutaciones(ejemplos, temporal):
    archivos = sorted(ejemplos.glob("*.xml"))
    temporal.mkdir(parents=True, exist_ok=True)
    for original in list(archivos):
        raiz = ET.parse(original).getroot()
        # Cada nodo hoja da un caso negativo reproducible, sin inventar reglas.
        hojas = [n for n in raiz.iter() if len(n) == 0]
        for indice, hoja in enumerate(hojas):
            nueva = deepcopy(raiz)
            nodo = [n for n in nueva.iter() if len(n) == 0][indice]
            nodo.text = ""
            ruta = temporal / f"{original.stem}-vacio-{indice:03}.xml"
            ET.ElementTree(nueva).write(ruta, encoding="utf-8",
                                       xml_declaration=True)
            archivos.append(ruta)
    base = ET.parse(archivos[0]).getroot()
    for indice, (nombre, texto) in enumerate([
        ("UBLVersionID", "2.5"), ("DocumentCurrencyCode", "ZZZ"),
        ("IssueDate", "2026-01-01Z"), ("ID", "💶 Arreglo legal"),
    ]):
        nueva = deepcopy(base)
        nodo = nueva.find(f"{{{CBC}}}{nombre}")
        if nodo is None:
            nodo = ET.SubElement(nueva, f"{{{CBC}}}{nombre}")
        nodo.text = texto
        ruta = temporal / f"adicional-{indice}.xml"
        ET.ElementTree(nueva).write(ruta, encoding="utf-8",
                                   xml_declaration=True)
        archivos.append(ruta)
    return archivos


def comparar(opciones):
    sys.path.insert(0, str(opciones.oraculo))
    from saxonche import PySaxonProcessor

    archivos = mutaciones(opciones.fuentes / "examples", opciones.temporal)
    hoja = opciones.fuentes / "xslt/EN16931-UBL-validation.xslt"
    casos, discrepancias = [], []
    # Una sola instancia nativa; cada documento conserva su DOM independiente.
    lista = opciones.temporal / "archivos.txt"
    lista.write_text("\n".join(map(str, archivos)), encoding="utf-8")
    proceso = subprocess.Popen([str(opciones.ejecutable), "@" + str(lista)],
                               stdout=subprocess.PIPE, text=True,
                               encoding="utf-8")
    with PySaxonProcessor(license=False) as procesador:
        transformacion = procesador.new_xslt30_processor().compile_stylesheet(
            stylesheet_file=str(hoja))
        for indice, archivo in enumerate(archivos):
            nativo = json.loads(proceso.stdout.readline())
            try:
                svrl = ET.fromstring(transformacion.transform_to_string(
                    source_file=str(archivo)))
                referencia = Counter((a.get("id"), a.get("flag")) for a in
                                     svrl.iter(f"{{{SVRL}}}failed-assert"))
                error_referencia = None
            except Exception as error:
                referencia = Counter()
                error_referencia = str(error).splitlines()[0]
            actuales = Counter((a["id"], {0: "warning", 1: "fatal",
                                 2: "error"}[a["gravedad"]]) for a in
                                nativo["diagnosticos"])
            # Un XML con conversión inválida puede abortar el XSLT. Delphi
            # debe conservar entonces error explícito, nunca darlo por válido.
            coincide = (not nativo["completa"] if error_referencia else
                        actuales == referencia and nativo["completa"])
            caso = {"archivo": archivo.name,
                    "sha256": hashlib.sha256(archivo.read_bytes()).hexdigest(),
                    "coincide": coincide,
                    "milisegundos": nativo["milisegundos"],
                    "evaluadas": nativo["evaluadas"],
                    "error_referencia": error_referencia}
            caso["diagnosticos_sha256"] = hashlib.sha256(json.dumps(
                sorted(actuales.elements())).encode("utf-8")).hexdigest()
            casos.append(caso)
            if not coincide:
                discrepancias.append({**caso,
                    "solo_delphi": list((actuales - referencia).elements()),
                    "solo_referencia": list((referencia - actuales).elements()),
                    "errores_delphi": [d for d in nativo["diagnosticos"]
                                       if d["gravedad"] == 2],
                    "error_motor": nativo.get("error_motor")})
            if indice % 100 == 0:
                print(f"{indice + 1}/{len(archivos)}; "
                      f"discrepancias={len(discrepancias)}", flush=True)
    informe = {"ejecutable": str(opciones.ejecutable),
               "xslt_sha256": hashlib.sha256(hoja.read_bytes()).hexdigest(),
               "referencia": "SaxonC HE 13.1.1, solo desarrollo",
               "ejecutable_sha256": hashlib.sha256(
                   opciones.ejecutable.read_bytes()).hexdigest(),
               "casos": casos, "discrepancias": discrepancias,
               "casos_comparables": sum(c["error_referencia"] is None
                                        for c in casos),
               "casos_error_referencia": sum(c["error_referencia"] is not None
                                             for c in casos),
               "cobertura_2026_completa": False}
    if proceso.wait() != 0:
        raise RuntimeError("El ejecutor Delphi terminó con error")
    opciones.informe.write_text(json.dumps(informe, ensure_ascii=False,
                                          indent=2), encoding="utf-8-sig")
    print(f"Casos={len(casos)}; discrepancias={len(discrepancias)}", flush=True)
    return bool(discrepancias)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    for nombre in ("fuentes", "temporal", "ejecutable", "oraculo", "informe"):
        parser.add_argument("--" + nombre, type=Path, required=True)
    sys.exit(comparar(parser.parse_args()))
