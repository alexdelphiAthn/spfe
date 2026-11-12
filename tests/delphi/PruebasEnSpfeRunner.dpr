{ Runner DUnitX independiente. Usa las DCU de DUnitX suministradas con Delphi. }
program PruebasEnSpfeRunner;

{$APPTYPE CONSOLE}
{$STRONGLINKTYPES ON}

uses
  System.SysUtils, DUnitX.TestFramework, DUnitX.Loggers.Console,
  PruebasEnSpfe;

var
  oEjecutor: ITestRunner;
  oResultado: IRunResults;
begin
  ReportMemoryLeaksOnShutdown := True;
  try
    oEjecutor := TDUnitX.CreateRunner;
    oEjecutor.UseRTTI := True;
    oEjecutor.AddLogger(TDUnitXConsoleLogger.Create(True));
    oResultado := oEjecutor.Execute;
    if not oResultado.AllPassed then
      System.ExitCode := 1;
  except
    on E: Exception do
    begin
      Writeln(E.ClassName + ': ' + E.Message);
      System.ExitCode := 1;
    end;
  end;
end.
