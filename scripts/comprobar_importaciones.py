"""Enumera las importaciones PE sin cargar ni ejecutar el binario."""
import argparse
import hashlib
import json
from pathlib import Path
import struct


def leer_importaciones(ruta):
    contenido = ruta.read_bytes()
    pe = struct.unpack_from("<I", contenido, 0x3C)[0]
    if contenido[pe:pe + 4] != b"PE\0\0":
        raise ValueError("No es un ejecutable PE")
    secciones = struct.unpack_from("<H", contenido, pe + 6)[0]
    longitud_opcional = struct.unpack_from("<H", contenido, pe + 20)[0]
    opcional = pe + 24
    magia = struct.unpack_from("<H", contenido, opcional)[0]
    directorios = opcional + {0x10B: 96, 0x20B: 112}[magia]
    importaciones_rva = struct.unpack_from("<I", contenido, directorios + 8)[0]
    tabla_secciones = opcional + longitud_opcional

    def resolver_rva(rva):
        for indice in range(secciones):
            entrada = tabla_secciones + 40 * indice
            virtual, direccion, tamano, posicion = struct.unpack_from(
                "<IIII", contenido, entrada + 8)
            if direccion <= rva < direccion + max(virtual, tamano):
                return posicion + rva - direccion
        raise ValueError(f"RVA no encontrada: {rva}")

    importaciones = []
    posicion = resolver_rva(importaciones_rva)
    while any(contenido[posicion:posicion + 20]):
        nombre_rva = struct.unpack_from("<I", contenido, posicion + 12)[0]
        inicio = resolver_rva(nombre_rva)
        final = contenido.index(b"\0", inicio)
        importaciones.append(contenido[inicio:final].decode("ascii"))
        posicion += 20
    return {"archivo": str(ruta), "sha256": hashlib.sha256(contenido).hexdigest(),
            "plataforma": "Win64" if magia == 0x20B else "Win32",
            "importaciones": sorted(set(importaciones), key=str.lower)}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("archivos", type=Path, nargs="+")
    opciones = parser.parse_args()
    print(json.dumps([leer_importaciones(p) for p in opciones.archivos],
                     ensure_ascii=False, indent=2))
