{ Prueba de contrato del evaluador EN; no conecta con la aplicación ni con BBDD. }
program ComprobarEnSpfe;

{$APPTYPE CONSOLE}

uses
  System.SysUtils, System.IOUtils, System.JSON, System.Diagnostics,
  inSpfeValidadorEn;

function Serializar(const AResultado: TResultadoEnSpfe): TJSONObject;
var
  oDiagnosticos: TJSONArray;
  oDiagnostico: TDiagnosticoEnSpfe;
  oObjeto: TJSONObject;
begin
  Result := TJSONObject.Create;
  Result.AddPair('completa', TJSONBool.Create(
    AResultado.EsEvaluacionCompleta));
  Result.AddPair('superada', TJSONBool.Create(AResultado.EsCapaEnSuperada));
  Result.AddPair('cobertura2026', TJSONBool.Create(
    AResultado.EsCobertura2026Completa));
  Result.AddPair('evaluadas', TJSONNumber.Create(
    AResultado.InstanciasEvaluadas));
  oDiagnosticos := TJSONArray.Create;
  Result.AddPair('diagnosticos', oDiagnosticos);
  for oDiagnostico in AResultado.Diagnosticos do
  begin
    oObjeto := TJSONObject.Create;
    oObjeto.AddPair('id', oDiagnostico.Identificador);
    oObjeto.AddPair('gravedad', TJSONNumber.Create(
      Ord(oDiagnostico.Gravedad)));
    oObjeto.AddPair('ubicacion', oDiagnostico.Ubicacion);
    oObjeto.AddPair('mensaje', oDiagnostico.Mensaje);
    oDiagnosticos.AddElement(oObjeto);
  end;
end;

procedure EjecutarArchivo(const AArchivo: string);
var
  oValidador: TValidadorEnSpfe;
  oObjeto: TJSONObject;
  oReloj: TStopwatch;
begin
  oValidador := TValidadorEnSpfe.Create;
  try
    oReloj := TStopwatch.StartNew;
    oObjeto := Serializar(oValidador.Validar(
      TFile.ReadAllText(AArchivo, TEncoding.UTF8)));
    try
      oObjeto.AddPair('archivo', AArchivo);
      oObjeto.AddPair('milisegundos', TJSONNumber.Create(
        oReloj.ElapsedMilliseconds));
      Writeln(oObjeto.ToJSON);
    finally
      FreeAndNil(oObjeto);
    end;
  finally
    FreeAndNil(oValidador);
  end;
end;

procedure EjecutarSeguro(const AArchivo: string);
var
  oObjeto: TJSONObject;
begin
  try
    EjecutarArchivo(AArchivo);
  except
    on E: Exception do
    begin
      oObjeto := TJSONObject.Create;
      try
        oObjeto.AddPair('archivo', AArchivo);
        oObjeto.AddPair('completa', TJSONBool.Create(False));
        oObjeto.AddPair('superada', TJSONBool.Create(False));
        oObjeto.AddPair('evaluadas', TJSONNumber.Create(0));
        oObjeto.AddPair('milisegundos', TJSONNumber.Create(0));
        oObjeto.AddPair('diagnosticos', TJSONArray.Create);
        oObjeto.AddPair('error_motor', E.ClassName + ': ' + E.Message);
        Writeln(oObjeto.ToJSON);
      finally
        FreeAndNil(oObjeto);
      end;
    end;
  end;
end;

var
  i: Integer;
  sArchivo: string;
begin
  SetTextCodePage(Output, 65001);
  try
    for i := 1 to ParamCount do
      if ParamStr(i).StartsWith('@') then
      begin
        for sArchivo in TFile.ReadAllLines(Copy(ParamStr(i), 2, MaxInt),
          TEncoding.UTF8) do
          EjecutarSeguro(sArchivo);
      end
      else
        EjecutarSeguro(ParamStr(i));
  except
    on E: Exception do
    begin
      Writeln(E.ClassName + ': ' + E.Message);
      System.ExitCode := 1;
    end;
  end;
end.
