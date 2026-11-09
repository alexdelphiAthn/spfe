{******************************************************************************}
{                                                                              }
{  Módulo:       inSpfeEscritorXml                                             }
{    Tipo:       Librería                                                      }
{ Versión:       0.1.0                                                         }
{   Fecha:       09/11/2026                                                    }
{   Autor:       Alejandro Laorden Hidalgo                                     }
{                                                                              }
{  Copyright (c) Alejandro Laorden Hidalgo.                                    }
{  SPDX-License-Identifier: MPL-2.0                                            }
{                                                                              }
{  Descripción:                                                                }
{    Escritor XML mínimo para los generadores SPFE: anidamiento con pila,      }
{    escapado de texto y atributos, sin dependencias fuera del RTL.            }
{******************************************************************************}
unit inSpfeEscritorXml;

interface

uses
  System.SysUtils, System.Classes, System.Generics.Collections;

type
  ESpfeGenerador = class(Exception);

  TEscritorXmlSpfe = class
  private
    FTexto: TStringBuilder;
    FPila: TStack<string>;
    procedure EscribirAtributos(const AAtributos: array of string);
  public
    constructor Create;
    destructor Destroy; override;
    { AAtributos: pares nombre, valor; se ignoran los de valor vacío. }
    procedure Abrir(const ANombre: string); overload;
    procedure Abrir(const ANombre: string;
      const AAtributos: array of string); overload;
    procedure Escribir(const ANombre, ATexto: string); overload;
    procedure Escribir(const ANombre, ATexto: string;
      const AAtributos: array of string); overload;
    { No escribe nada si el texto está vacío. }
    procedure EscribirOpcional(const ANombre, ATexto: string);
    procedure Cerrar;
    function XmlCompleto: string;
    class function Escapar(const ATexto: string): string;
  end;

implementation

uses
  inSpfeMensajes;

constructor TEscritorXmlSpfe.Create;
begin
  inherited Create;
  FTexto := TStringBuilder.Create;
  FPila := TStack<string>.Create;
end;

destructor TEscritorXmlSpfe.Destroy;
begin
  FreeAndNil(FPila);
  FreeAndNil(FTexto);
  inherited;
end;

class function TEscritorXmlSpfe.Escapar(const ATexto: string): string;
begin
  Result := ATexto
    .Replace('&', '&amp;', [rfReplaceAll])
    .Replace('<', '&lt;', [rfReplaceAll])
    .Replace('>', '&gt;', [rfReplaceAll])
    .Replace('"', '&quot;', [rfReplaceAll])
    .Replace('''', '&apos;', [rfReplaceAll]);
end;

procedure TEscritorXmlSpfe.EscribirAtributos(
  const AAtributos: array of string);
var
  i: Integer;
begin
  if (Length(AAtributos) mod 2) <> 0 then
    raise ESpfeGenerador.Create(rsSpfeAtributosSinPareja);
  i := 0;
  while i < Length(AAtributos) do
  begin
    if AAtributos[i + 1] <> '' then
      FTexto.Append(' ').Append(AAtributos[i]).Append('="')
        .Append(Escapar(AAtributos[i + 1])).Append('"');
    Inc(i, 2);
  end;
end;

procedure TEscritorXmlSpfe.Abrir(const ANombre: string);
begin
  Abrir(ANombre, []);
end;

procedure TEscritorXmlSpfe.Abrir(const ANombre: string;
  const AAtributos: array of string);
begin
  FTexto.Append('<').Append(ANombre);
  EscribirAtributos(AAtributos);
  FTexto.Append('>');
  FPila.Push(ANombre);
end;

procedure TEscritorXmlSpfe.Escribir(const ANombre, ATexto: string);
begin
  Escribir(ANombre, ATexto, []);
end;

procedure TEscritorXmlSpfe.Escribir(const ANombre, ATexto: string;
  const AAtributos: array of string);
begin
  FTexto.Append('<').Append(ANombre);
  EscribirAtributos(AAtributos);
  if ATexto = '' then
    FTexto.Append('/>')
  else
    FTexto.Append('>').Append(Escapar(ATexto))
      .Append('</').Append(ANombre).Append('>');
end;

procedure TEscritorXmlSpfe.EscribirOpcional(const ANombre, ATexto: string);
begin
  if ATexto <> '' then
    Escribir(ANombre, ATexto);
end;

procedure TEscritorXmlSpfe.Cerrar;
begin
  if FPila.Count = 0 then
    raise ESpfeGenerador.Create(rsSpfeCierreSinElemento);
  FTexto.Append('</').Append(FPila.Pop).Append('>');
end;

function TEscritorXmlSpfe.XmlCompleto: string;
begin
  if FPila.Count <> 0 then
    raise ESpfeGenerador.Create(rsSpfeElementosSinCerrar);
  Result := '<?xml version="1.0" encoding="UTF-8"?>' + FTexto.ToString;
end;

end.
