{ Reglas derivadas de ConnectingEurope/eInvoicing-EN16931. }
{ Licensed under European Union Public Licence (EUPL) version 1.2. }
{ Schematron version 1.3.17 - Last update: 2026-10-09. }
{ Generado por extraer_reglas_spfe.py. No editar a mano. }
{ EN 2017+A1 / UBL 2.1; NO acredita EN 2026 ni el perfil SPFE. }

const
  HuellaFuenteEn = 'eb27995ba7bace330475a0afd54a21bb' +
      '0ebb050d55774949d5e10f65ecef7b95';
  InstruccionesEn: array[0..3575] of
    TInstruccionSpfe = (
    (Clase: ciRaiz; Texto:
      '';
     Primero: 0; Cantidad: 0),
    (Clase: ciDescendientes; Texto:
      '';
     Primero: 0; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:AdditionalDocumentReference';
     Primero: 1; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:ID';
     Primero: 3; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 3; Cantidad: 1),
    (Clase: ciCadena; Texto:
      '';
     Primero: 4; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 4; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:AccountingCustomerParty';
     Primero: 6; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cac:Party';
     Primero: 6; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 6; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:EndpointID';
     Primero: 8; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 8; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 10; Cantidad: 2),
    (Clase: ciAtributo; Texto:
      'schemeID';
     Primero: 12; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 12; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PostalAddress';
     Primero: 13; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 13; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 15; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:Country';
     Primero: 17; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cbc:IdentificationCode';
     Primero: 17; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 17; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 19; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 20; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:PaymentMeans';
     Primero: 22; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cac:CardAccount';
     Primero: 22; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 22; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:PrimaryAccountNumberID';
     Primero: 24; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 24; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 26; Cantidad: 2),
    (Clase: ciActual; Texto:
      '';
     Primero: 28; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 28; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 29; Cantidad: 1),
    (Clase: ciNumero; Texto:
      '10';
     Primero: 30; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 30; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:Delivery';
     Primero: 32; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cac:DeliveryLocation';
     Primero: 32; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 32; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:Address';
     Primero: 34; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 34; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 36; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 38; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'ubl:Invoice';
     Primero: 39; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 39; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:AllowanceCharge';
     Primero: 41; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cbc:ChargeIndicator';
     Primero: 41; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'false';
     Primero: 41; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 41; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 43; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 45; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cn:CreditNote';
     Primero: 47; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 47; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 49; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 51; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:Amount';
     Primero: 53; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 53; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:TaxCategory';
     Primero: 54; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cac:TaxScheme';
     Primero: 54; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'upper-case';
     Primero: 54; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 55; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 56; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'VAT';
     Primero: 58; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 58; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 60; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 62; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 64; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AllowanceChargeReason';
     Primero: 65; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 65; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AllowanceChargeReasonCode';
     Primero: 66; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 66; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 67; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'true';
     Primero: 69; Cantidad: 0),
    (Clase: ciCadena; Texto:
      '.';
     Primero: 69; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 69; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 71; Cantidad: 1),
    (Clase: ciNumero; Texto:
      '2';
     Primero: 72; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 72; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:BaseAmount';
     Primero: 74; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 74; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 76; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 77; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 79; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 81; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 83; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 85; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 87; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:LegalMonetaryTotal';
     Primero: 89; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 89; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:LineExtensionAmount';
     Primero: 91; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 91; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxExclusiveAmount';
     Primero: 92; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 92; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxInclusiveAmount';
     Primero: 93; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 93; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PayableAmount';
     Primero: 94; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 94; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 95; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:InvoiceLine';
     Primero: 96; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cac:CreditNoteLine';
     Primero: 96; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 96; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 98; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 100; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 102; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 103; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 105; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 107; Cantidad: 1),
    (Clase: ciNumero; Texto:
      '100';
     Primero: 108; Cantidad: 0),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 108; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 110; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 111; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:AllowanceTotalAmount';
     Primero: 113; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 113; Cantidad: 1),
    (Clase: ciPadre; Texto:
      '';
     Primero: 114; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 114; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 116; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 117; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 119; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 120; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 122; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 124; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 125; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 127; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 129; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 130; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 131; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 133; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:ChargeTotalAmount';
     Primero: 135; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 135; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 136; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 138; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 140; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 141; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 143; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 145; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 146; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 148; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 150; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 151; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 152; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 154; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 156; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 158; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 159; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 161; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 163; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 165; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 167; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 168; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 170; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 172; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 174; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 176; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 178; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 180; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 182; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 183; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 185; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 187; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 189; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 191; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 193; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 195; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 197; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 198; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 200; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 202; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 204; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 206; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 208; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 210; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 212; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:PrepaidAmount';
     Primero: 214; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 214; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PayableRoundingAmount';
     Primero: 215; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 215; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 216; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 217; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 219; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 220; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 221; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 222; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 224; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 226; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 228; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 229; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 231; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 233; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 235; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 236; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 238; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 240; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 242; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 244; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 246; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 247; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 249; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 251; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 253; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 254; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 256; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 258; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 260; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 262; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 264; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 266; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 268; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 270; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 272; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 273; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 275; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 277; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 278; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 280; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 282; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 283; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 285; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 287; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 288; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 290; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 292; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 293; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 295; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 297; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 298; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 300; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 302; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 303; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 305; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 307; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 308; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 310; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:CustomizationID';
     Primero: 312; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 312; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 313; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:IssueDate';
     Primero: 315; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 315; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 316; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:InvoiceTypeCode';
     Primero: 318; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 318; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 319; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:CreditNoteTypeCode';
     Primero: 321; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 321; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 322; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 324; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:DocumentCurrencyCode';
     Primero: 326; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 326; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 327; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:AccountingSupplierParty';
     Primero: 329; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 329; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:PartyLegalEntity';
     Primero: 331; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 331; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:RegistrationName';
     Primero: 333; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 333; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 335; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 336; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 338; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 340; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 342; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 343; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 345; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 347; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 348; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 349; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 350; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 351; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:TaxCurrencyCode';
     Primero: 353; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cac:TaxTotal';
     Primero: 353; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 353; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:TaxAmount';
     Primero: 355; Cantidad: 0),
    (Clase: ciAtributo; Texto:
      'currencyID';
     Primero: 355; Cantidad: 0),
    (Clase: ciVariable; Texto:
      'taxcurrency';
     Primero: 355; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 355; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 357; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 359; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 361; Cantidad: 1),
    (Clase: ciCada; Texto:
      'taxcurrency';
     Primero: 362; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 364; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'AE';
     Primero: 366; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 366; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 368; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 370; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 372; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ClassifiedTaxCategory';
     Primero: 373; Cantidad: 0),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 373; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 375; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 377; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 379; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 380; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:TaxSubtotal';
     Primero: 382; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 382; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 384; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 386; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 388; Cantidad: 1),
    (Clase: ciNumero; Texto:
      '1';
     Primero: 389; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 389; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 391; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 393; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 394; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 395; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 397; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 399; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 401; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 403; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 405; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 407; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 408; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 410; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:PartyTaxScheme';
     Primero: 412; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 412; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:CompanyID';
     Primero: 414; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 414; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 416; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:TaxRepresentativeParty';
     Primero: 417; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 417; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 419; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 421; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 423; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 425; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 427; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 429; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 430; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 432; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 434; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 436; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 438; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 440; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 442; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 443; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 445; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 447; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 448; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 450; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 452; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 453; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 455; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 457; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 459; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 461; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 463; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 464; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 466; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 468; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 469; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 471; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 473; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 475; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 476; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 478; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 480; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 481; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:TaxPointDate';
     Primero: 483; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 483; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:InvoicePeriod';
     Primero: 484; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cbc:DescriptionCode';
     Primero: 484; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 484; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 486; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 487; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 489; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 490; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 491; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 493; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 495; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 497; Cantidad: 2),
    (Clase: ciVariable; Texto:
      'Currency';
     Primero: 499; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 499; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 501; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 503; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 504; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 506; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'eq';
     Primero: 507; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 509; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 511; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 513; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 515; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 517; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 519; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 520; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 522; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 524; Cantidad: 2),
    (Clase: ciCada; Texto:
      'Currency';
     Primero: 526; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 528; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 529; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 531; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 533; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 535; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 537; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 538; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 540; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 542; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 543; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 545; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 547; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 549; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 551; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 553; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 554; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 556; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 558; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 559; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'E';
     Primero: 561; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 561; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 563; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 565; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 567; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 568; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 570; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 571; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 573; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 575; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 576; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 578; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 580; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 581; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 582; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 584; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 586; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 588; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 590; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 592; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 594; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 595; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 597; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 598; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 600; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 602; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 604; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 606; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 607; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 609; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 610; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 612; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 614; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 615; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 617; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 618; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'G';
     Primero: 620; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 620; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 622; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 624; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 626; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 627; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 629; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 630; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 632; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 634; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 635; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 637; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 639; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 640; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 641; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 643; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 645; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 647; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 649; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 651; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 653; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 654; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 656; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 658; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 659; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 661; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 663; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 664; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 666; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 668; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 670; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 671; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 673; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 675; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 677; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 678; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 679; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 681; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 683; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 684; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 686; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 688; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 689; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 690; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'K';
     Primero: 692; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 692; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 694; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 696; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 698; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 699; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 701; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 702; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 704; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 706; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 707; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 709; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 711; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 712; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 713; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 715; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 717; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 719; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 721; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 723; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 725; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 726; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 728; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 730; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 731; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 733; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 735; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 737; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 739; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 740; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 742; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 744; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 745; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 747; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 749; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 750; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 752; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 754; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 755; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 757; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ActualDeliveryDate';
     Primero: 758; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 758; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 760; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 761; Cantidad: 2),
    (Clase: ciHijo; Texto:
      '*';
     Primero: 763; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 763; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 765; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 767; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 769; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 770; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 772; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 774; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 776; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 777; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 779; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 781; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 783; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'L';
     Primero: 785; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 785; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 787; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 789; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 791; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 793; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 794; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 796; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 798; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 800; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 801; Cantidad: 2),
    (Clase: ciNumero; Texto:
      '0';
     Primero: 803; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 803; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 805; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 807; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 809; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 811; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 812; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 814; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 816; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 818; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 820; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 821; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 823; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 825; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 827; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 828; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 830; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 831; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 833; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 835; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 836; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 838; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 839; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 841; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 843; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 844; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 846; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 848; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 850; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 851; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 852; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'M';
     Primero: 854; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 854; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 856; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 858; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 860; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 862; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 863; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 865; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 867; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 869; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 870; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 872; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 874; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 876; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 878; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 880; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 882; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 883; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 885; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 887; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 889; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 891; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 892; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 894; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 896; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 898; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 899; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 901; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 902; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 904; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 906; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 907; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 909; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 910; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 912; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 914; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 915; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 917; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 918; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'O';
     Primero: 920; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 920; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 922; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 924; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 926; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 927; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 929; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 930; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 932; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 934; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 935; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 937; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 939; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 940; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 941; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 943; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 945; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 947; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 949; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 951; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 953; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 954; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 955; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 956; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 958; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 959; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 961; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 963; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 964; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 966; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 968; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 970; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 972; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 974; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 975; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 977; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 978; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 980; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 982; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 984; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 985; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 987; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 988; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 990; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 991; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 993; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 995; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 997; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 999; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1000; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1002; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1004; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1005; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1007; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1009; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1011; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1013; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1014; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1016; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1018; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1020; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1022; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1023; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1025; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1027; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1029; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1031; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1032; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1034; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1036; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'S';
     Primero: 1038; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1038; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1040; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1042; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1044; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1045; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1047; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1049; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1050; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 1052; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1054; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1056; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 1057; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1059; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1061; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1063; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1065; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1067; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1069; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1071; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1073; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1074; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1076; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1077; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1078; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1080; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1082; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1084; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1085; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1087; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1088; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1090; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1092; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1093; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1095; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1096; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'Z';
     Primero: 1098; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1098; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1100; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1102; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1104; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1105; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1107; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1108; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1110; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 1112; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1113; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1115; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1117; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1118; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1119; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1121; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1123; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1125; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1127; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1129; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1131; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1132; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1134; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1135; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1137; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1139; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1141; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1143; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1144; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1146; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1147; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1149; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1151; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1152; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1154; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1155; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1157; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'IT';
     Primero: 1159; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 1159; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1161; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1162; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1164; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'B';
     Primero: 1166; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1166; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1168; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1170; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1172; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1174; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1176; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1178; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1179; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1181; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1183; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1185; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1187; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1189; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1191; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1193; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1195; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1197; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1199; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1201; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1203; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1205; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1207; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1208; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1210; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1211; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:InvoicedQuantity';
     Primero: 1213; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1213; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CreditedQuantity';
     Primero: 1214; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1214; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1215; Cantidad: 2),
    (Clase: ciAtributo; Texto:
      'unitCode';
     Primero: 1217; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1217; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1219; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1220; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1222; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1223; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:Item';
     Primero: 1225; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cbc:Name';
     Primero: 1225; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1225; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 1227; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 1228; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:Price';
     Primero: 1230; Cantidad: 0),
    (Clase: ciHijo; Texto:
      'cbc:PriceAmount';
     Primero: 1230; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1230; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1232; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>=';
     Primero: 1233; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1235; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1237; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>=';
     Primero: 1239; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1241; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1242; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1243; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1245; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1247; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1249; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1251; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1253; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1255; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1257; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1259; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1261; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1263; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1265; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1267; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1269; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1271; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1273; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:EndDate';
     Primero: 1275; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1275; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:StartDate';
     Primero: 1276; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1276; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1277; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:date';
     Primero: 1279; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'xs:date';
     Primero: 1280; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '>=';
     Primero: 1281; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1283; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1285; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1286; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1288; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1289; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1291; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1293; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1295; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1296; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1298; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1300; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:AdditionalItemProperty';
     Primero: 1302; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1302; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1304; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Value';
     Primero: 1305; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1305; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1306; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1308; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:CommodityClassification';
     Primero: 1310; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1310; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:ItemClassificationCode';
     Primero: 1312; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1312; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1314; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1316; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1318; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1320; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1322; Cantidad: 2),
    (Clase: ciAtributo; Texto:
      'listID';
     Primero: 1324; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1324; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:StandardItemIdentification';
     Primero: 1325; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1325; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1327; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1329; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1331; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1333; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1335; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:Note';
     Primero: 1337; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1337; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1339; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1341; Cantidad: 2),
    (Clase: ciCadena; Texto:
      '#';
     Primero: 1343; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 1343; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 1345; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-before';
     Primero: 1347; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 1349; Cantidad: 1),
    (Clase: ciNumero; Texto:
      '3';
     Primero: 1350; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1350; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1352; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' AAA AAB AAC AAD AAE AAF AAG AAI' +
      ' AAJ AAK AAL AAM AAN AAO AAP AAQ' +
      ' AAR AAS AAT AAU AAV AAW AAX AAY' +
      ' AAZ ABA ABB ABC ABD ABE ABF ABG' +
      ' ABH ABI ABJ ABK ABL ABM ABN ABO' +
      ' ABP ABQ ABR ABS ABT ABU ABV ABW' +
      ' ABX ABZ ACA ACB ACC ACD ACE ACF' +
      ' ACG ACH ACI ACJ ACK ACL ACM ACN' +
      ' ACO ACP ACQ ACR ACS ACT ACU ACV' +
      ' ACW ACX ACY ACZ ADA ADB ADC ADD' +
      ' ADE ADF ADG ADH ADI ADJ ADK ADL' +
      ' ADM ADN ADO ADP ADQ ADR ADS ADT' +
      ' ADU ADV ADW ADX ADY ADZ AEA AEB' +
      ' AEC AED AEE AEF AEG AEH AEI AEJ' +
      ' AEK AEL AEM AEN AEO AEP AEQ AER' +
      ' AES AET AEU AEV AEW AEX AEY AEZ' +
      ' AFA AFB AFC AFD AFE AFF AFG AFH' +
      ' AFI AFJ AFK AFL AFM AFN AFO AFP' +
      ' AFQ AFR AFS AFT AFU AFV AFW AFX' +
      ' AFY AFZ AGA AGB AGC AGD AGE AGF' +
      ' AGG AGH AGI AGJ AGK AGL AGM AGN' +
      ' AGO AGP AGQ AGR AGS AGT AGU AGV' +
      ' AGW AGX AGY AGZ AHA AHB AHC AHD' +
      ' AHE AHF AHG AHH AHI AHJ AHK AHL' +
      ' AHM AHN AHO AHP AHQ AHR AHS AHT' +
      ' AHU AHV AHW AHX AHY AHZ AIA AIB' +
      ' AIC AID AIE AIF AIG AIH AII AIJ' +
      ' AIK AIL AIM AIN AIO AIP AIQ AIR' +
      ' AIS AIT AIU AIV AIW AIX AIY AIZ' +
      ' AJA AJB ALC ALD ALE ALF ALG ALH' +
      ' ALI ALJ ALK ALL ALM ALN ALO ALP' +
      ' ALQ ARR ARS AUT AUU AUV AUW AUX' +
      ' AUY AUZ AVA AVB AVC AVD AVE AVF' +
      ' BAG BAH BAI BAJ BAK BAL BAM BAN' +
      ' BAO BAP BAQ BAR BAS BAT BAU BAV' +
      ' BAW BAX BAY BAZ BBA BBB BLC BLD' +
      ' BLE BLF BLG BLH BLI BLJ BLK BLL' +
      ' BLM BLN BLO BLP BLQ BLR BLS BLT' +
      ' BLU BLV BLW BLX BLY BLZ BMA BMB' +
      ' BMC BMD BME BMF BMG BMH CCJ CCK' +
      ' CCL CCM CCN CCO CCI CEX CHG CIP' +
      ' CLP CLR COI CUR CUS DAR DCL DEL' +
      ' DIN DOC DUT EUR FBC GBL GEN GS7' +
      ' HAN HAZ ICN IIN IMI IND INS INV' +
      ' IRP ITR ITS LAN LIN LOI MCO MDH' +
      ' MKS ORI OSI PAC PAI PAY PKG PKT' +
      ' PMD PMT PRD PRF PRI PUR QIN QQD' +
      ' QUT RAH REG RET REV RQR SAF SIC' +
      ' SIN SLR SPA SPG SPH SPP SPT SRN' +
      ' SSR SUR TCA TDT TRA TRR TXD WHI' +
      ' ZZZ ';
     Primero: 1354; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 1354; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1356; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1358; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1359; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1361; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1362; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:PayeeParty';
     Primero: 1364; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1364; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:PartyName';
     Primero: 1366; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1366; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1368; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1369; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1371; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1373; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1375; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1377; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1379; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PartyIdentification';
     Primero: 1380; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1380; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1382; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1384; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1386; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1388; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1389; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1391; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:PaymentMeansCode';
     Primero: 1393; Cantidad: 0),
    (Clase: ciCadena; Texto:
      '30';
     Primero: 1393; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1393; Cantidad: 2),
    (Clase: ciCadena; Texto:
      '58';
     Primero: 1395; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1395; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1397; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1399; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:PayeeFinancialAccount';
     Primero: 1401; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1401; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1403; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1405; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1407; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1408; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1410; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 1411; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1412; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1414; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1416; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1418; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 1420; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 1422; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1424; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1426; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:BillingReference';
     Primero: 1428; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1428; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:InvoiceDocumentReference';
     Primero: 1430; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1430; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1432; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1433; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1435; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1437; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1439; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1440; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'SEPA';
     Primero: 1442; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1442; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1444; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1445; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1447; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1449; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1450; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1452; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1454; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1456; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1457; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1459; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1461; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1463; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 1465; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 1466; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1468; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1469; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1471; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1472; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1474; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1476; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1478; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1480; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1482; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1483; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1485; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1486; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1488; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 1490; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 1491; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1493; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1495; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1496; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1498; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:TaxableAmount';
     Primero: 1500; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1500; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1501; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Percent';
     Primero: 1502; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1502; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1504; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1505; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1507; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1509; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1511; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1512; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 1514; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1515; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 1517; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1518; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1520; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 1522; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'abs';
     Primero: 1524; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1525; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1527; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'abs';
     Primero: 1528; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 1529; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1531; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1533; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1535; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 1537; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 1538; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 1540; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1542; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 1544; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1546; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1548; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1550; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1552; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1553; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1554; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1556; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 1558; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 1560; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 1561; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 1563; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 1565; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 1566; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1568; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 1A AD AE AF AG AI AL AM AO AQ A' +
      'R AS AT AU AW AX AZ BA BB BD BE ' +
      'BF BG BH BI BL BJ BM BN BO BQ BR' +
      ' BS BT BV BW BY BZ CA CC CD CF C' +
      'G CH CI CK CL CM CN CO CR CU CV ' +
      'CW CX CY CZ DE DJ DK DM DO DZ EC' +
      ' EE EG EH ER ES ET FI FJ FK FM F' +
      'O FR GA GB GD GE GF GG GH GI GL ' +
      'GM GN GP GQ GR GS GT GU GW GY HK' +
      ' HM HN HR HT HU ID IE IL IM IN I' +
      'O IQ IR IS IT JE JM JO JP KE KG ' +
      'KH KI KM KN KP KR KW KY KZ LA LB' +
      ' LC LI LK LR LS LT LU LV LY MA M' +
      'C MD ME MF MG MH MK ML MM MN MO ' +
      'MP MQ MR MS MT MU MV MW MX MY MZ' +
      ' NA NC NE NF NG NI NL NO NP NR N' +
      'U NZ OM PA PE PF PG PH PK PL PM ' +
      'PN PR PS PT PW PY QA RE RO RS RU' +
      ' RW SA SB SC SD SE SG SH SI SJ S' +
      'K SL SM SN SO SR SS ST SV SX SY ' +
      'SZ TC TD TF TG TH TJ TK TL TM TN' +
      ' TO TR TT TV TW TZ UA UG UM US U' +
      'Y UZ VA VC VE VG VI VN VU WF WS ' +
      'XI YE YT ZA ZM ZW ';
     Primero: 1570; Cantidad: 0),
    (Clase: ciCadena; Texto:
      ' ';
     Primero: 1570; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'substring';
     Primero: 1570; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 1573; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 1576; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1578; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1580; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1582; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1584; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1586; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1587; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1589; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1590; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1592; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1594; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1596; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1598; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1600; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1602; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1604; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1606; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1607; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1609; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1611; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1613; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1615; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1617; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1618; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1620; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1622; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1624; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1626; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1627; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1629; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1631; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1633; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1634; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1636; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1638; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1640; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1641; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1643; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1645; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1647; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1649; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1651; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1653; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1654; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:TaxExemptionReason';
     Primero: 1656; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1656; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxExemptionReasonCode';
     Primero: 1657; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 1657; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1658; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1660; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1662; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1664; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1666; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1668; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1670; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1672; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1674; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1676; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1678; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1680; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1682; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1684; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1686; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1688; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1689; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1691; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1693; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1695; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1697; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1698; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1700; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1702; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1704; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1706; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1707; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1709; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1711; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1713; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1715; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1717; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1719; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1720; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1722; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1724; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1726; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1728; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1730; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1732; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1734; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1736; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1738; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1740; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1742; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1744; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1746; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1748; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1750; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1752; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1754; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1756; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1757; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1759; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1761; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1763; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1765; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1766; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1768; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1770; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1772; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1774; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1775; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1777; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1779; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1781; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1783; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1785; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1787; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1788; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1790; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1792; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1794; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1796; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1798; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1800; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1802; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1804; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1806; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1808; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1810; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1812; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1814; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1816; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1818; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1820; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1822; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1824; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1825; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1827; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1829; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1831; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1833; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1834; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1836; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1838; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1840; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1842; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1843; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1845; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1847; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1849; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1851; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1853; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1855; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1856; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1858; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1860; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1862; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1864; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1866; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1868; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1870; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1872; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1874; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1876; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 1878; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1880; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1882; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1884; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1886; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1887; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1889; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1891; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1893; Cantidad: 2),
    (Clase: ciVariable; Texto:
      'rate';
     Primero: 1895; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1895; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1897; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1899; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1901; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1903; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1904; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1906; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1908; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 1910; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1912; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1914; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1916; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1918; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1919; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1921; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1923; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1925; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1927; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1929; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1930; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 1932; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1934; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'xs:decimal';
     Primero: 1936; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1937; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 1939; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1941; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1943; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1945; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 1947; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1949; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1951; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 1953; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1954; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1956; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 1958; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 1960; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1962; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1964; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 1966; Cantidad: 2),
    (Clase: ciCada; Texto:
      'rate';
     Primero: 1968; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'abs';
     Primero: 1970; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 1971; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'abs';
     Primero: 1973; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 1974; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1976; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1978; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '*';
     Primero: 1980; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'round';
     Primero: 1982; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'div';
     Primero: 1983; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 1985; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 1987; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 1989; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1991; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1993; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 1994; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 1995; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1997; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 1999; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>=';
     Primero: 2001; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2003; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2005; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2007; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2009; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 2011; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2013; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2015; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2017; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2019; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2021; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2023; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2025; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2027; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2028; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2030; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2032; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2034; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2036; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2038; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2039; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2041; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2043; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2045; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2047; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2049; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2050; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 2052; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 2054; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2056; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2058; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2060; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2062; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2064; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2066; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2068; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2069; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2071; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 2073; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 2075; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2077; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2079; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2081; Cantidad: 2),
    (Clase: ciCada; Texto:
      'rate';
     Primero: 2083; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2085; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2087; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2089; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2091; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2093; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2095; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 2097; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2099; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2101; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2103; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2105; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2107; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2109; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2111; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2112; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2114; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2116; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2118; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2120; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2121; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2123; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2125; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2127; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2129; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2130; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2132; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2134; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2136; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2138; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2140; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2142; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2143; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2145; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2147; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2149; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2151; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2153; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2155; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2157; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2158; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2160; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2162; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2164; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 2166; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2168; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2170; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2172; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2174; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2176; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2178; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 2180; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2181; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2183; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2185; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2187; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 2189; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2190; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2192; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2194; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2196; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2197; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2199; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2201; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2203; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2205; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2206; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2208; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2210; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2212; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2214; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2216; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2217; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 2219; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 2221; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2223; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2225; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2227; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2229; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2231; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 2233; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2234; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2236; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2238; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2240; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2241; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2243; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<';
     Primero: 2245; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 2247; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2249; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2251; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2253; Cantidad: 2),
    (Clase: ciCada; Texto:
      'rate';
     Primero: 2255; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2257; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2259; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '>';
     Primero: 2261; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2263; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2265; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2267; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2269; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 2271; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2273; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2275; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2277; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2279; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2281; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2283; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2285; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2286; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2288; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2290; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2292; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2294; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2295; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2297; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2299; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2301; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2303; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2304; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2306; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2308; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2310; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2312; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2314; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'sum';
     Primero: 2316; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '+';
     Primero: 2317; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 2319; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2321; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2323; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2325; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2327; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2329; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2330; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2332; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2334; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2336; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2338; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2340; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 2342; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2344; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2346; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2348; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 2350; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:AddressLine';
     Primero: 2352; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2352; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 2353; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2354; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2356; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2358; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 2360; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 2361; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:DocumentDescription';
     Primero: 2363; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 2363; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 2364; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:DocumentTypeCode';
     Primero: 2366; Cantidad: 0),
    (Clase: ciCadena; Texto:
      '130';
     Primero: 2366; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2366; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'local-name';
     Primero: 2368; Cantidad: 1),
    (Clase: ciCadena; Texto:
      'CreditNote';
     Primero: 2369; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2369; Cantidad: 2),
    (Clase: ciCadena; Texto:
      '50';
     Primero: 2371; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2371; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2373; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2375; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2377; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2379; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2380; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2381; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2383; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'name';
     Primero: 2385; Cantidad: 0),
    (Clase: ciCadena; Texto:
      'Amount';
     Primero: 2385; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'ends-with';
     Primero: 2385; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'PriceAmount';
     Primero: 2387; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'ends-with';
     Primero: 2387; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2389; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2390; Cantidad: 2),
    (Clase: ciEje; Texto:
      'ancestor::cac:Price';
     Primero: 2392; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2392; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2394; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2395; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2397; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2399; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'substring-after';
     Primero: 2401; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'string-length';
     Primero: 2403; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 2404; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'BinaryObject';
     Primero: 2406; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'ends-with';
     Primero: 2406; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 2408; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2410; Cantidad: 2),
    (Clase: ciAtributo; Texto:
      'mimeCode';
     Primero: 2412; Cantidad: 0),
    (Clase: ciAtributo; Texto:
      'filename';
     Primero: 2412; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2412; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:DeliveryParty';
     Primero: 2414; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2414; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2415; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2417; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 2419; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2420; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2422; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 2424; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 2425; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2427; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2429; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 2431; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'exists';
     Primero: 2432; Cantidad: 1),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 2433; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'ext:UBLExtensions';
     Primero: 2435; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2435; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:UBLVersionID';
     Primero: 2436; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2436; Cantidad: 1),
    (Clase: ciCadena; Texto:
      '2.1';
     Primero: 2437; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 2437; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 2439; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:ProfileExecutionID';
     Primero: 2441; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2441; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CopyIndicator';
     Primero: 2442; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2442; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:UUID';
     Primero: 2443; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2443; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:IssueTime';
     Primero: 2444; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2444; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PricingCurrencyCode';
     Primero: 2445; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2445; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentCurrencyCode';
     Primero: 2446; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2446; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentAlternativeCurrencyCo' +
      'de';
     Primero: 2447; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2447; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AccountingCostCode';
     Primero: 2448; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2448; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LineCountNumeric';
     Primero: 2449; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2449; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:StartTime';
     Primero: 2450; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2450; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2452; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:EndTime';
     Primero: 2453; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2453; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2455; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:DurationMeasure';
     Primero: 2456; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2456; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2458; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Description';
     Primero: 2459; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2459; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2461; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OrderReference';
     Primero: 2462; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2462; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2464; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2465; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2467; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2468; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2470; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2471; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2473; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CustomerReference';
     Primero: 2474; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2474; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2476; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:OrderTypeCode';
     Primero: 2477; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2477; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2479; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DocumentReference';
     Primero: 2480; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2480; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2482; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2483; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2485; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2487; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2488; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2490; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2491; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2493; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2494; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2496; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:DocumentType';
     Primero: 2497; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2497; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2499; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:XPath';
     Primero: 2500; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2500; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2502; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LanguageID';
     Primero: 2503; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2503; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2505; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LocaleCode';
     Primero: 2506; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2506; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2508; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:VersionID';
     Primero: 2509; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2509; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2511; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:DocumentStatusCode';
     Primero: 2512; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2512; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2514; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2515; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2517; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Attachment';
     Primero: 2518; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2518; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2520; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ValidityPeriod';
     Primero: 2521; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2521; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2523; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:IssuerParty';
     Primero: 2524; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2524; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2526; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ResultOfVerification';
     Primero: 2527; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2527; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2529; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SelfBilledInvoiceDocumentRef' +
      'erence';
     Primero: 2530; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2530; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2532; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:CreditNoteDocumentReference';
     Primero: 2533; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2533; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2535; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SelfBilledCreditNoteDocument' +
      'Reference';
     Primero: 2536; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2536; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2538; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DebitNoteDocumentReference';
     Primero: 2539; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2539; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2541; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ReminderDocumentReference';
     Primero: 2542; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2542; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2544; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2545; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2547; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:BillingReferenceLine';
     Primero: 2548; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2548; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2550; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DespatchDocumentReference';
     Primero: 2551; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2551; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2553; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2554; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2556; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2557; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2559; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2560; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2562; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2563; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2565; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2566; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2568; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2569; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2571; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2572; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2574; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2575; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2577; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2578; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2580; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2581; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2583; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2584; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2586; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2587; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2589; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2590; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2592; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2593; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2595; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2596; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2598; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ReceiptDocumentReference';
     Primero: 2599; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2599; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2601; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2602; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2604; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2605; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2607; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2608; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2610; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2611; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2613; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2614; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2616; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2617; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2619; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2620; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2622; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2623; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2625; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2626; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2628; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2629; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2631; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2632; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2634; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2635; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2637; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2638; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2640; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2641; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2643; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2644; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2646; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:StatementDocumentReference';
     Primero: 2647; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2647; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OriginatorDocumentReference';
     Primero: 2648; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2648; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2650; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2651; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2653; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2654; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2656; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2657; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2659; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2660; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2662; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2663; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2665; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2666; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2668; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2669; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2671; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2672; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2674; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2675; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2677; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2678; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2680; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2681; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2683; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2684; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2686; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2687; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2689; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2690; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2692; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2693; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2695; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ContractDocumentReference';
     Primero: 2696; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2696; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2698; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2699; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2701; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2702; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2704; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2705; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2707; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2708; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2710; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2711; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2713; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2714; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2716; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2717; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2719; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2720; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2722; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2723; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2725; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2726; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2728; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2729; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2731; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2732; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2734; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2735; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2737; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2738; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2740; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2741; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2743; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2744; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2746; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2747; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2749; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2750; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2752; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2753; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2755; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2756; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2758; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2759; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2761; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2762; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2764; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2765; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2767; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2768; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2770; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2771; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2773; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2774; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cac:ExternalReference';
     Primero: 2776; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2776; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:DocumentHash';
     Primero: 2778; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2778; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2780; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:HashAlgorithmMethod';
     Primero: 2781; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2781; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2783; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ExpiryDate';
     Primero: 2784; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2784; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2786; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ExpiryTime';
     Primero: 2787; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2787; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2789; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MimeCode';
     Primero: 2790; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2790; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2792; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:FormatCode';
     Primero: 2793; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2793; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2795; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:EncodingCode';
     Primero: 2796; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2796; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2798; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CharacterSetCode';
     Primero: 2799; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2799; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2801; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:FileName';
     Primero: 2802; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2802; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2804; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2805; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2807; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2808; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2810; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2811; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2813; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2814; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2816; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ProjectReference';
     Primero: 2817; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2817; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2819; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2820; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2822; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:WorkPhaseReference';
     Primero: 2823; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2823; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2825; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Signature';
     Primero: 2826; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2826; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CustomerAssignedAccountID';
     Primero: 2827; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2827; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2829; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AdditionalAccountID';
     Primero: 2830; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2830; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2832; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:DataSendingCapability';
     Primero: 2833; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2833; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2835; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MarkCareIndicator';
     Primero: 2836; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2836; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2838; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MarkAttentionIndicator';
     Primero: 2839; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2839; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2841; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:WebsiteURI';
     Primero: 2842; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2842; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2844; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LogoReferenceID';
     Primero: 2845; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2845; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2847; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:IndustryClassificationCode';
     Primero: 2848; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2848; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2850; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Language';
     Primero: 2851; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2851; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2853; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2854; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2856; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AddressTypeCode';
     Primero: 2857; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2857; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2859; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AddressFormatCode';
     Primero: 2860; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2860; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2862; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Postbox';
     Primero: 2863; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2863; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2865; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Floor';
     Primero: 2866; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2866; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2868; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Room';
     Primero: 2869; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2869; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2871; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:BlockName';
     Primero: 2872; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2872; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2874; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:BuildingName';
     Primero: 2875; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2875; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2877; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:BuildingNumber';
     Primero: 2878; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2878; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2880; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:InhouseMail';
     Primero: 2881; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2881; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2883; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Department';
     Primero: 2884; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2884; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2886; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MarkAttention';
     Primero: 2887; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2887; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2889; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MarkCare';
     Primero: 2890; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2890; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2892; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PlotIdentification';
     Primero: 2893; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2893; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2895; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CitySubdivisionName';
     Primero: 2896; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2896; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2898; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CountrySubentityCode';
     Primero: 2899; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2899; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2901; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Region';
     Primero: 2902; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2902; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2904; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:District';
     Primero: 2905; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2905; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2907; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TimezoneOffset';
     Primero: 2908; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2908; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2910; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2911; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2913; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2915; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:LocationCoordinate';
     Primero: 2916; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2916; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2918; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PhysicalLocation';
     Primero: 2919; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2919; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2921; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2922; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2924; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2926; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxLevelCode';
     Primero: 2927; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2927; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2929; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ExemptionReasonCode';
     Primero: 2930; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2930; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2932; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ExemptionReason';
     Primero: 2933; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2933; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2935; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:RegistrationAddress';
     Primero: 2936; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2936; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2938; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2939; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2941; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2943; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxTypeCode';
     Primero: 2944; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2944; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2946; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CurrencyCode';
     Primero: 2947; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2947; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2949; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:JurisdictionRegionAddress';
     Primero: 2950; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2950; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2952; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:RegistrationDate';
     Primero: 2953; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2953; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2955; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:RegistrationExpirationDate';
     Primero: 2956; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2956; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2958; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CompanyLegalFormCode';
     Primero: 2959; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2959; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2961; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SoleProprietorshipIndicator';
     Primero: 2962; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2962; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2964; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CompanyLiquidationStatusCode';
     Primero: 2965; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2965; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2967; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CorporateStockAmount';
     Primero: 2968; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2968; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2970; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:FullyPaidSharesIndicator';
     Primero: 2971; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2971; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2973; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2974; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2976; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:CorporateRegistrationScheme';
     Primero: 2977; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2977; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2979; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:HeadOfficeParty';
     Primero: 2980; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2980; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2982; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ShareholderParty';
     Primero: 2983; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2983; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2985; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Contact';
     Primero: 2986; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2986; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2988; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2990; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Telefax';
     Primero: 2991; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2991; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2993; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2994; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2996; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OtherCommunication';
     Primero: 2997; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 2997; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 2999; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Person';
     Primero: 3000; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3000; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3002; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:AgentParty';
     Primero: 3003; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3003; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3005; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ServiceProviderParty';
     Primero: 3006; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3006; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3008; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PowerOfAttorney';
     Primero: 3009; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3009; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3011; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:FinancialAccount';
     Primero: 3012; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3012; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3014; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DespatchContact';
     Primero: 3015; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3015; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3017; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:AccountingContact';
     Primero: 3018; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3018; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3020; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SellerContact';
     Primero: 3021; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3021; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3023; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3024; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3026; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SupplierAssignedAccountID';
     Primero: 3027; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3027; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3029; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3030; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3032; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3033; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3035; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3036; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3038; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3039; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3041; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3042; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3044; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3045; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3047; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3048; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3050; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3051; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3053; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3054; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3056; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3057; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3059; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3060; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3062; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3063; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3065; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3066; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3068; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3069; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3071; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3072; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3074; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3075; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3077; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3078; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3080; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3081; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3083; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3084; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3086; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3087; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3089; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3090; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3092; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3093; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3095; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3096; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3098; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3099; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3101; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3102; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3104; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3105; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3107; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3108; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3110; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3112; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3113; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3115; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3116; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3118; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3119; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3121; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3123; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3124; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3126; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3127; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3129; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3130; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3132; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3133; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3135; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3136; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3138; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3140; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3141; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3143; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3144; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3146; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3147; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3149; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3150; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3152; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3153; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3155; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3156; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3158; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CompanyLegalForm';
     Primero: 3159; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3159; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3161; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3162; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3164; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3165; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3167; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3168; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3170; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3171; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3173; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3174; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3176; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3177; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3179; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3180; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3182; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3183; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3185; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3186; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3188; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3190; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3191; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3193; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3194; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3196; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3197; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3199; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3200; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3202; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3203; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3205; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3206; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3208; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3209; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3211; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3212; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3214; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DeliveryContact';
     Primero: 3215; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3215; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3217; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3218; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3220; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:BuyerContact';
     Primero: 3221; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3221; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3223; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3224; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3226; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3227; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3229; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3230; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3232; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3233; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3235; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3236; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3238; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3239; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3241; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3242; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3244; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3245; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3247; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3248; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3250; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3251; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3253; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3254; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3256; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3258; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3259; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3261; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3262; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3264; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3265; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3267; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3268; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3270; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3271; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3273; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3274; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3276; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3277; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3279; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3280; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3282; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3283; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3285; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3286; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3288; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3289; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3291; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3292; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3294; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3295; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3297; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3298; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3300; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3301; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3303; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3304; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3306; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3307; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3309; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3310; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3312; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:BuyerCustomerParty';
     Primero: 3313; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3313; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SellerSupplierParty';
     Primero: 3314; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3314; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3315; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3317; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3318; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3320; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3321; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3323; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3324; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3326; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3327; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3329; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3330; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3332; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3333; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3335; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3336; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3338; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3339; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3341; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3342; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3344; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3345; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3347; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3348; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3350; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3351; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3353; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3354; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3356; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3357; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3359; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3360; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3362; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3363; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3365; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3366; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3368; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3369; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3371; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3372; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3374; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3375; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3377; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3378; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3380; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3381; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3383; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3384; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3386; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3387; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3389; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3390; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3392; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3393; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3395; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3396; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3398; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3400; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3401; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3403; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3404; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3406; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3407; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3409; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3411; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3412; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3414; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3415; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3417; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3418; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3420; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3421; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3423; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3424; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3426; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3428; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3429; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3431; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3432; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3434; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3435; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3437; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3438; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3440; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3441; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3443; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3444; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3446; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3447; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3449; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3450; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3452; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3453; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3455; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3456; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3458; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3459; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3461; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Quantity';
     Primero: 3462; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3462; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3464; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MinimumQuantity';
     Primero: 3465; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3465; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3467; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MaximumQuantity';
     Primero: 3468; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3468; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3470; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ActualDeliveryTime';
     Primero: 3471; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3471; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3473; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LatestDeliveryDate';
     Primero: 3474; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3474; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3476; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LatestDeliveryTime';
     Primero: 3477; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3477; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3479; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ReleaseID';
     Primero: 3480; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3480; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3482; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TrackingID';
     Primero: 3483; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3483; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3485; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3486; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3488; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Conditions';
     Primero: 3489; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3489; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3491; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CountrySubentity';
     Primero: 3492; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3492; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3494; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3495; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3497; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LocationTypeCode';
     Primero: 3498; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3498; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3500; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:InformationURI';
     Primero: 3501; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3501; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3503; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3504; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3506; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3507; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3509; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3510; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3512; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3513; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3515; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3516; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3518; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3519; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3521; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3522; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3524; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3525; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3527; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3528; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3530; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3531; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3533; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3534; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3536; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3537; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3539; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3540; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3542; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3543; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3545; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3546; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3548; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3549; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3551; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3552; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3554; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3555; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3557; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3558; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3560; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3561; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3563; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3564; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3566; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3567; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3569; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3570; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3572; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SubsidiaryLocation';
     Primero: 3573; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3573; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3575; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3576; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3578; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:AlternativeDeliveryLocation';
     Primero: 3579; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3579; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3581; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:RequestedDeliveryPeriod';
     Primero: 3582; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3582; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3584; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:EstimatedDeliveryPeriod';
     Primero: 3585; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3585; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3587; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:CarrierParty';
     Primero: 3588; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3588; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3590; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3591; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3593; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3595; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3596; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3598; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3599; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3601; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3602; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3604; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3605; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3607; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3608; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3610; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3611; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3613; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3614; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3616; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3617; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3619; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3620; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3622; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3623; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3625; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3626; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3628; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3629; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3631; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3632; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3634; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3635; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3637; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3638; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3640; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3641; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3643; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3644; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3646; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:NotifyParty';
     Primero: 3647; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3647; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3649; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Despatch';
     Primero: 3650; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3650; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3652; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DeliveryTerms';
     Primero: 3653; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3653; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3655; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:MinimumDeliveryUnit';
     Primero: 3656; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3656; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3658; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:MaximumDeliveryUnit';
     Primero: 3659; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3659; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3661; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Shipment';
     Primero: 3662; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3662; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3664; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3665; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3666; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3668; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentDueDate';
     Primero: 3669; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3669; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3671; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3672; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 3674; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:PaymentChannelCode';
     Primero: 3676; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3676; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3678; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:InstructionID';
     Primero: 3679; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3679; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3681; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CardTypeCode';
     Primero: 3682; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3682; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3684; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ValidityStartDate';
     Primero: 3685; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3685; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3687; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3688; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3690; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:IssuerID';
     Primero: 3691; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3691; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3693; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:IssueNumberID';
     Primero: 3694; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3694; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3696; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CV2ID';
     Primero: 3697; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3697; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3699; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CardChipCode';
     Primero: 3700; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3700; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3702; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ChipApplicationID';
     Primero: 3703; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3703; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3705; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3706; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:AliasName';
     Primero: 3708; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3708; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3710; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AccountTypeCode';
     Primero: 3711; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3711; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3713; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AccountFormatCode';
     Primero: 3714; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3714; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3716; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3717; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3719; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentNote';
     Primero: 3720; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3720; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3722; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:FinancialInstitutionBranch';
     Primero: 3723; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3723; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3725; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3727; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:FinancialInstitution';
     Primero: 3728; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3728; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3730; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3732; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3733; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3735; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3736; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3738; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3739; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3741; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:CreditAccount';
     Primero: 3742; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3742; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3744; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PaymentMandate';
     Primero: 3745; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3745; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:MandateTypeCode';
     Primero: 3747; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3747; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3749; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MaximumPaymentInstructionsNu' +
      'meric';
     Primero: 3750; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3750; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3752; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MaximumPaidAmount';
     Primero: 3753; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3753; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3755; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SignatureID';
     Primero: 3756; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3756; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3758; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PayerParty';
     Primero: 3759; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3759; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3761; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PayerFinancialAccount';
     Primero: 3762; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3762; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3764; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3766; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3767; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3769; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3770; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3772; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3773; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3775; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3776; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3778; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3779; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3781; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3782; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3784; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3785; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3787; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3788; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3790; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PaymentReversalPeriod';
     Primero: 3791; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3791; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3793; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Clause';
     Primero: 3794; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3794; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3796; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:TradeFinancing';
     Primero: 3797; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3797; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3799; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PaymentTerms';
     Primero: 3800; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3800; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3802; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentMeansID';
     Primero: 3803; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3803; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3805; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PrepaidPaymentReferenceID';
     Primero: 3806; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3806; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3808; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ReferenceEventCode';
     Primero: 3809; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3809; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3811; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SettlementDiscountPercent';
     Primero: 3812; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3812; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3814; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PenaltySurchargePercent';
     Primero: 3815; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3815; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3817; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentPercent';
     Primero: 3818; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3818; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3820; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3821; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3823; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SettlementDiscountAmount';
     Primero: 3824; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3824; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3826; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PenaltyAmount';
     Primero: 3827; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3827; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3829; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentTermsDetailsURI';
     Primero: 3830; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3830; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3832; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3833; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3835; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:InstallmentDueDate';
     Primero: 3836; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3836; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3838; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:InvoicingPartyReference';
     Primero: 3839; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3839; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3841; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SettlementPeriod';
     Primero: 3842; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3842; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3844; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PenaltyPeriod';
     Primero: 3845; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3845; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3847; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ExchangeRate';
     Primero: 3848; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3848; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3850; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3851; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3853; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PrepaidPayment';
     Primero: 3854; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3854; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3855; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3857; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PrepaidIndicator';
     Primero: 3858; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3858; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3860; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SequenceNumeric';
     Primero: 3861; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3861; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3863; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3864; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3866; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AccountingCost';
     Primero: 3867; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3867; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3869; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PerUnitAmount';
     Primero: 3870; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3870; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3872; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3873; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3875; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:BaseUnitMeasure';
     Primero: 3876; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3876; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3878; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3879; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3881; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3882; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3884; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3885; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3887; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TierRange';
     Primero: 3888; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3888; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3890; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TierRatePercent';
     Primero: 3891; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3891; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3893; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3894; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3896; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3898; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3899; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3901; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3902; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3904; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3905; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3907; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3908; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3910; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3911; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3913; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:TaxExchangeRate';
     Primero: 3914; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3914; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PricingExchangeRate';
     Primero: 3915; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3915; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PaymentExchangeRate';
     Primero: 3916; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3916; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PaymentAlternativeExchangeRa' +
      'te';
     Primero: 3917; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3917; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:RoundingAmount';
     Primero: 3918; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3918; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3920; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxEvidenceIndicator';
     Primero: 3921; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3921; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3923; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TaxIncludedIndicator';
     Primero: 3924; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3924; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3926; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CalculationSequenceNumeric';
     Primero: 3927; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3927; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3929; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TransactionCurrencyTaxAmount';
     Primero: 3930; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3930; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3932; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3933; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3935; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3936; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3938; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3939; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3941; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3942; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3944; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3945; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3947; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3948; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3950; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3951; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3953; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3954; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3956; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3957; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3959; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3960; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3962; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3963; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3965; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3967; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3968; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3970; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3971; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3973; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3974; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3976; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:WithholdingTaxTotal';
     Primero: 3977; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3977; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PayableAlternativeAmount';
     Primero: 3978; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3978; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3980; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3981; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3983; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3984; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3986; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3987; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3989; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentPurposeCode';
     Primero: 3990; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3990; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3992; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:FreeOfChargeIndicator';
     Primero: 3993; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3993; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 3995; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3996; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 3998; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4000; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4001; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4003; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4004; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4006; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4007; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4009; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4010; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4012; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OrderLineReference';
     Primero: 4013; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4013; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:SalesOrderLineID';
     Primero: 4015; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4015; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4017; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4018; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4020; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:LineStatusCode';
     Primero: 4021; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4021; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4023; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4024; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4026; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DespatchLineReference';
     Primero: 4027; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4027; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4029; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ReceiptLineReference';
     Primero: 4030; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4030; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4032; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4033; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4035; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4036; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4038; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4040; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4041; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4043; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4044; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4046; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4047; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4049; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4050; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4052; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4053; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4055; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4056; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4058; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4059; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4061; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4062; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4064; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4065; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4067; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4068; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4070; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4071; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4073; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4074; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4076; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4077; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4079; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4080; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4082; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PricingReference';
     Primero: 4083; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4083; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4085; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OriginatorParty';
     Primero: 4086; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4086; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4088; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4089; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4091; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4092; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4094; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4095; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4097; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4099; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4100; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4102; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4103; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4105; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4106; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4108; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4109; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4111; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4112; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4114; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4115; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4117; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4118; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4120; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4121; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4123; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4124; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4126; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4127; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4129; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4130; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:PackQuantity';
     Primero: 4132; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4132; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4134; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PackSizeNumeric';
     Primero: 4135; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4135; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4137; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CatalogueIndicator';
     Primero: 4138; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4138; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4140; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:HazardousRiskIndicator';
     Primero: 4141; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4141; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4143; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:AdditionalInformation';
     Primero: 4144; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4144; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4146; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:Keyword';
     Primero: 4147; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4147; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4149; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:BrandName';
     Primero: 4150; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4150; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4152; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ModelName';
     Primero: 4153; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4153; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4155; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:BuyersItemIdentification';
     Primero: 4156; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4156; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:ExtendedID';
     Primero: 4158; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4158; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4160; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:BarcodeSymbologyID';
     Primero: 4161; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4161; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4163; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:PhysicalAttribute';
     Primero: 4164; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4164; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4166; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:MeasurementDimension';
     Primero: 4167; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4167; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4169; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4170; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4172; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SellersItemIdentification';
     Primero: 4173; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4173; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4175; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4177; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4178; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4180; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4181; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4183; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4184; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4186; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4187; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4189; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ManufacturersItemIdentificat' +
      'ion';
     Primero: 4190; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4190; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4192; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4193; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4195; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4197; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4198; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4200; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4201; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4203; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4204; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4206; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4207; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4209; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:CatalogueItemIdentification';
     Primero: 4210; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4210; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4212; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:AdditionalItemIdentification';
     Primero: 4213; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4213; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4215; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:CatalogueDocumentReference';
     Primero: 4216; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4216; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4218; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ItemSpecificationDocumentRef' +
      'erence';
     Primero: 4219; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4219; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4221; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OriginCountry';
     Primero: 4222; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4222; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4224; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4226; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4227; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:NatureCode';
     Primero: 4229; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4229; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4231; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CargoTypeCode';
     Primero: 4232; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4232; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4234; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:CommodityCode';
     Primero: 4235; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4235; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4237; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:TransactionConditions';
     Primero: 4238; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4238; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4240; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:HazardousItem';
     Primero: 4241; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4241; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4243; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4244; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4246; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4248; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4249; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4251; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4252; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4254; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4255; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4257; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4258; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4260; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4261; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4263; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4264; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4266; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4267; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4269; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4271; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4272; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4274; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4275; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4277; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4278; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4280; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4281; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4283; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4285; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:NameCode';
     Primero: 4286; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4286; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4288; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:TestMethod';
     Primero: 4289; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4289; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4291; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ValueQuantity';
     Primero: 4292; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4292; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4294; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ValueQualifier';
     Primero: 4295; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4295; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4297; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ImportanceCode';
     Primero: 4298; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4298; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4300; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ListValue';
     Primero: 4301; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4301; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4303; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:UsabilityPeriod';
     Primero: 4304; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4304; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4306; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ItemPropertyGroup';
     Primero: 4307; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4307; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4309; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:RangeDimension';
     Primero: 4310; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4310; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4312; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ItemPropertyRange';
     Primero: 4313; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4313; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4315; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ManufacturerParty';
     Primero: 4316; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4316; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4318; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:InformationContentProviderPa' +
      'rty';
     Primero: 4319; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4319; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4321; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:OriginAddress';
     Primero: 4322; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4322; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4324; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ItemInstance';
     Primero: 4325; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4325; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4327; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Certificate';
     Primero: 4328; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4328; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4330; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:Dimension';
     Primero: 4331; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4331; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4333; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4334; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:PriceChangeReason';
     Primero: 4336; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4336; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4338; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PriceTypeCode';
     Primero: 4339; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4339; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4341; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PriceType';
     Primero: 4342; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4342; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4344; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:OrderableUnitFactorRate';
     Primero: 4345; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4345; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4347; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ValidityPeriod';
     Primero: 4348; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4348; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4350; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PriceList';
     Primero: 4351; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4351; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4353; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4354; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4356; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4358; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4359; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4361; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4362; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4364; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:MultiplierFactorNumeric';
     Primero: 4365; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4365; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4367; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4368; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4370; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4371; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4373; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4374; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4376; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4377; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4379; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4380; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4382; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4383; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4385; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4386; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4388; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4389; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4391; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4392; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4394; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4395; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4397; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:SubInvoiceLine';
     Primero: 4398; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4398; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4400; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:ItemPriceExtension';
     Primero: 4401; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4401; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4403; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4404; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4406; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:ProfileID';
     Primero: 4407; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4407; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4409; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:SalesOrderID';
     Primero: 4410; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4410; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4412; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4413; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4415; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4417; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:PaymentID';
     Primero: 4418; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4418; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4420; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4422; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4423; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4425; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4427; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4428; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4430; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4432; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4433; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4435; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4436; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4438; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4439; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4441; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4442; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4444; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4446; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4447; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4449; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4451; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4453; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4454; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4456; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4458; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4459; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4461; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4463; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'unitCodeListID';
     Primero: 4464; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4464; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4466; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4467; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4469; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 4470; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 4472; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4474; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4476; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4478; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4480; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4482; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4483; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4485; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4487; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4489; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4490; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4492; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4494; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4496; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4497; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4499; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4501; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4503; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4504; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4506; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4508; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4510; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4511; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4513; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4514; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4516; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4517; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4519; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4520; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4522; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4523; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4525; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4527; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4528; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:NetworkID';
     Primero: 4530; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4530; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4532; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4534; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4535; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4537; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4539; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4541; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4542; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4544; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4546; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4548; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4549; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4551; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4552; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4554; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4555; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4557; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cbc:InstructionNote';
     Primero: 4558; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4558; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4560; Cantidad: 1),
    (Clase: ciHijo; Texto:
      'cac:DeliveryAddress';
     Primero: 4561; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4561; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4563; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'schemeName';
     Primero: 4564; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4564; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4566; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'schemeAgencyName';
     Primero: 4567; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4567; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4569; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'schemeDataURI';
     Primero: 4570; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4570; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4572; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'schemeURI';
     Primero: 4573; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4573; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4575; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'format';
     Primero: 4576; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4576; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4578; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'unitCodeListIdentifier';
     Primero: 4579; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4579; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4581; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'unitCodeListAgencyIdentifier';
     Primero: 4582; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4582; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4584; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'unitCodeListAgencyName';
     Primero: 4585; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4585; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4587; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'listAgencyName';
     Primero: 4588; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4588; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4590; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'listName';
     Primero: 4591; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4591; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4593; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'name';
     Primero: 4594; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4594; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4596; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4597; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4599; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4601; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '-';
     Primero: 4602; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4604; Cantidad: 2),
    (Clase: ciAtributo; Texto:
      'languageID';
     Primero: 4606; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4606; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4608; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'listURI';
     Primero: 4609; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4609; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4611; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'listSchemeURI';
     Primero: 4612; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4612; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4614; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'languageLocaleID';
     Primero: 4615; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4615; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4617; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'uri';
     Primero: 4618; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4618; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4620; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'currencyCodeListVersionID';
     Primero: 4621; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4621; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4623; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'characterSetCode';
     Primero: 4624; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4624; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4626; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'encodingCode';
     Primero: 4627; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4627; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4629; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'schemeAgencyID';
     Primero: 4630; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4630; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4632; Cantidad: 1),
    (Clase: ciAtributo; Texto:
      'listAgencyID';
     Primero: 4633; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4633; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4635; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4636; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4638; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4639; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4641; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4643; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4644; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4646; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4648; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4649; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4651; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4653; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4654; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4656; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4658; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4659; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4661; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4662; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4664; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4665; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4667; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4669; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4671; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4672; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4674; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4676; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4677; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4679; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 4681; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4683; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4685; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4687; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4689; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4690; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 4692; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4694; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4696; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4698; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4700; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4701; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4703; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4705; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4706; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4708; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4709; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4711; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4713; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4715; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4716; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4718; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4720; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4721; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4723; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4725; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4727; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4728; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4730; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4731; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4733; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'upper-case';
     Primero: 4735; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 4736; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4738; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4740; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4742; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4743; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4745; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4747; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4748; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4750; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4752; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4754; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4755; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4757; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'distinct-values';
     Primero: 4759; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4760; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4761; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4763; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4764; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4766; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4768; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4769; Cantidad: 2),
    (Clase: ciEje; Texto:
      'preceding::cbc:PaymentMeansCode';
     Primero: 4771; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4771; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 4773; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4775; Cantidad: 1),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4776; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4778; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4780; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4781; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4783; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4784; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4786; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4787; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4789; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4790; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4792; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4794; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4795; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4797; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4798; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4800; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4801; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4803; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4805; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4806; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4808; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4810; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4811; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4813; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4815; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4816; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:LineID';
     Primero: 4818; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4818; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4820; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4821; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4823; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4825; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4826; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4828; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 4829; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4831; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4833; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4834; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4836; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4837; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4839; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4840; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4842; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4844; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 4846; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4848; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '!=';
     Primero: 4850; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4852; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4854; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4856; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4857; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4859; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4861; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4863; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4864; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4866; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4868; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4869; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4871; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4872; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4874; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4876; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4877; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4879; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4881; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4882; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4884; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 4885; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 4887; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4889; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4890; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 4891; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 4893; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4895; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4896; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4898; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4900; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4901; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4903; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4905; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'count';
     Primero: 4907; Cantidad: 1),
    (Clase: ciOperador; Texto:
      '<=';
     Primero: 4908; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4910; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4912; Cantidad: 2),
    (Clase: ciEje; Texto:
      'self::cbc:InvoiceTypeCode';
     Primero: 4914; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4914; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4916; Cantidad: 1),
    (Clase: ciCadena; Texto:
      ' 71 80 81 82 84 102 130 202 203 ' +
      '204 211 218 219 295 325 326 331 ' +
      '380 382 383 384 385 386 387 388 ' +
      '389 390 393 394 395 456 457 471 ' +
      '472 473 500 501 527 553 575 623 ' +
      '633 751 780 817 870 875 876 877 ' +
      '935 ';
     Primero: 4917; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 4917; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4920; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4922; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4924; Cantidad: 2),
    (Clase: ciEje; Texto:
      'self::cbc:CreditNoteTypeCode';
     Primero: 4926; Cantidad: 0),
    (Clase: ciCadena; Texto:
      ' 81 83 261 262 296 308 381 396 4' +
      '20 458 502 503 532 ';
     Primero: 4926; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4926; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4928; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4930; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 4932; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4934; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4936; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4938; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4940; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4942; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4944; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4946; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4948; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4950; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4952; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4954; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4956; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4958; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 4960; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4961; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 4963; Cantidad: 1),
    (Clase: ciCadena; Texto:
      ' AED AFN ALL AMD AOA ARS AUD AWG' +
      ' AZN BAM BBD BDT BHD BIF BMD BND' +
      ' BOB BOV BRL BSD BTN BWP BYN BZD' +
      ' CAD CDF CHE CHF CHW CLF CLP CNH' +
      ' CNY COP COU CRC CUP CVE CZK DJF' +
      ' DKK DOP DZD EGP ERN ETB EUR FJD' +
      ' FKP GBP GEL GHS GIP GMD GNF GTQ' +
      ' GYD HKD HNL HTG HUF IDR ILS INR' +
      ' IQD IRR ISK JMD JOD JPY KES KGS' +
      ' KHR KMF KPW KRW KWD KYD KZT LAK' +
      ' LBP LKR LRD LSL LYD MAD MDL MGA' +
      ' MKD MMK MNT MOP MRU MUR MVR MWK' +
      ' MXN MXV MYR MZN NAD NGN NIO NOK' +
      ' NPR NZD OMR PAB PEN PGK PHP PKR' +
      ' PLN PYG QAR RON RSD RUB RWF SAR' +
      ' SBD SCR SDG SEK SGD SHP SLE SOS' +
      ' SRD SSP STN SVC SYP SZL THB TJS' +
      ' TMT TND TOP TRY TTD TWD TZS UAH' +
      ' UGX USD USN UYI UYU UYW UZS VES' +
      ' VED VND VUV WST XAF XAG XAU XBA' +
      ' XBB XBC XBD XCD XCG XDR XOF XPD' +
      ' XPF XPT XSU XTS XUA XXX YER ZAR' +
      ' ZMW ZWG ';
     Primero: 4964; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 4964; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4967; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4969; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4971; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4973; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4975; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4977; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4979; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 3 35 432 ';
     Primero: 4981; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4981; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 4983; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4985; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4987; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 4989; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4991; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 4993; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 4995; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 4997; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 4998; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 5000; Cantidad: 1),
    (Clase: ciCadena; Texto:
      ' AAA AAB AAC AAD AAE AAF AAG AAH' +
      ' AAI AAJ AAK AAL AAM AAN AAO AAP' +
      ' AAQ AAR AAS AAT AAU AAV AAW AAX' +
      ' AAY AAZ ABA ABB ABC ABD ABE ABF' +
      ' ABG ABH ABI ABJ ABK ABL ABM ABN' +
      ' ABO ABP ABQ ABR ABS ABT ABU ABV' +
      ' ABW ABX ABY ABZ AC ACA ACB ACC ' +
      'ACD ACE ACF ACG ACH ACI ACJ ACK ' +
      'ACL ACN ACO ACP ACQ ACR ACT ACU ' +
      'ACV ACW ACX ACY ACZ ADA ADB ADC ' +
      'ADD ADE ADF ADG ADI ADJ ADK ADL ' +
      'ADM ADN ADO ADP ADQ ADT ADU ADV ' +
      'ADW ADX ADY ADZ AE AEA AEB AEC A' +
      'ED AEE AEF AEG AEH AEI AEJ AEK A' +
      'EL AEM AEN AEO AEP AEQ AER AES A' +
      'ET AEU AEV AEW AEX AEY AEZ AF AF' +
      'A AFB AFC AFD AFE AFF AFG AFH AF' +
      'I AFJ AFK AFL AFM AFN AFO AFP AF' +
      'Q AFR AFS AFT AFU AFV AFW AFX AF' +
      'Y AFZ AGA AGB AGC AGD AGE AGF AG' +
      'G AGH AGI AGJ AGK AGL AGM AGN AG' +
      'O AGP AGQ AGR AGS AGT AGU AGV AG' +
      'W AGX AGY AGZ AHA AHB AHC AHD AH' +
      'E AHF AHG AHH AHI AHJ AHK AHL AH' +
      'M AHN AHO AHP AHQ AHR AHS AHT AH' +
      'U AHV AHX AHY AHZ AIA AIB AIC AI' +
      'D AIE AIF AIG AIH AII AIJ AIK AI' +
      'L AIM AIN AIO AIP AIQ AIR AIS AI' +
      'T AIU AIV AIW AIX AIY AIZ AJA AJ' +
      'B AJC AJD AJE AJF AJG AJH AJI AJ' +
      'J AJK AJL AJM AJN AJO AJP AJQ AJ' +
      'R AJS AJT AJU AJV AJW AJX AJY AJ' +
      'Z AKA AKB AKC AKD AKE AKF AKG AK' +
      'H AKI AKJ AKK AKL AKM AKN AKO AK' +
      'P AKQ AKR AKS AKT AKU AKV AKW AK' +
      'X AKY AKZ ALA ALB ALC ALD ALE AL' +
      'F ALG ALH ALI ALJ ALK ALL ALM AL' +
      'N ALO ALP ALQ ALR ALS ALT ALU AL' +
      'V ALW ALX ALY ALZ AMA AMB AMC AM' +
      'D AME AMF AMG AMH AMI AMJ AMK AM' +
      'L AMM AMN AMO AMP AMQ AMR AMS AM' +
      'T AMU AMV AMW AMX AMY AMZ ANA AN' +
      'B ANC AND ANE ANF ANG ANH ANI AN' +
      'J ANK ANL ANM ANN ANO ANP ANQ AN' +
      'R ANS ANT ANU ANV ANW ANX ANY AO' +
      'A AOD AOE AOF AOG AOH AOI AOJ AO' +
      'K AOL AOM AON AOO AOP AOQ AOR AO' +
      'S AOT AOU AOV AOW AOX AOY AOZ AP' +
      ' APA APB APC APD APE APF APG APH' +
      ' API APJ APK APL APM APN APO APP' +
      ' APQ APR APS APT APU APV APW APX' +
      ' APY APZ AQA AQB AQC AQD AQE AQF' +
      ' AQG AQH AQI AQJ AQK AQL AQM AQN' +
      ' AQO AQP AQQ AQR AQS AQT AQU AQV' +
      ' AQW AQX AQY AQZ ARA ARB ARC ARD' +
      ' ARE ARF ARG ARH ARI ARJ ARK ARL' +
      ' ARM ARN ARO ARP ARQ ARR ARS ART' +
      ' ARU ARV ARW ARX ARY ARZ ASA ASB' +
      ' ASC ASD ASE ASF ASG ASH ASI ASJ' +
      ' ASK ASL ASM ASN ASO ASP ASQ ASR' +
      ' ASS AST ASU ASV ASW ASX ASY ASZ' +
      ' ATA ATB ATC ATD ATE ATF ATG ATH' +
      ' ATI ATJ ATK ATL ATM ATN ATO ATP' +
      ' ATQ ATR ATS ATT ATU ATV ATW ATX' +
      ' ATY ATZ AU AUA AUB AUC AUD AUE ' +
      'AUF AUG AUH AUI AUJ AUK AUL AUM ' +
      'AUN AUO AUP AUQ AUR AUS AUT AUU ' +
      'AUV AUW AUX AUY AUZ AV AVA AVB A' +
      'VC AVD AVE AVF AVG AVH AVI AVJ A' +
      'VK AVL AVM AVN AVO AVP AVQ AVR A' +
      'VS AVT AVU AVV AVW AVX AVY AVZ A' +
      'WA AWB AWC AWD AWE AWF AWG AWH A' +
      'WI AWJ AWK AWL AWM AWN AWO AWP A' +
      'WQ AWR AWS AWT AWU AWV AWW AWX A' +
      'WY AWZ AXA AXB AXC AXD AXE AXF A' +
      'XG AXH AXI AXJ AXK AXL AXM AXN A' +
      'XO AXP AXQ AXR AXS AXU BA BC BD ' +
      'BE BH BM BN BO BR BT BTP BW CAS ' +
      'CAT CAU CAV CAW CAX CAY CAZ CBA ' +
      'CBB CD CEC CED CFE CFF CFO CG CH' +
      ' CK CKN CM CMR CN CNO COF CP CR ' +
      'CRN CS CST CT CU CV CW CZ DA DAN' +
      ' DB DI DL DM DQ DR EA EB ED EE E' +
      'EP EI EN EQ ER ERN ET EX FC FF F' +
      'I FLW FN FO FS FT FV FX GA GC GD' +
      ' GDN GN HS HWB IA IB ICA ICE ICO' +
      ' II IL INB INN INO IP IS IT IV J' +
      'B JE LA LAN LAR LB LC LI LO LRC ' +
      'LS MA MB MF MG MH MR MRN MS MSS ' +
      'MWB NA NF OH OI ON OP OR PB PC P' +
      'D PE PF PI PK PL POR PP PQ PR PS' +
      ' PW PY RA RC RCN RE REN RF RR RT' +
      ' SA SB SD SE SEA SF SH SI SM SN ' +
      'SP SQ SRN SS STA SW SZ TB TCR TE' +
      ' TF TI TIN TL TN TP UAR UC UCN U' +
      'N UO URI VA VC VGR VM VN VON VOR' +
      ' VP VR VS VT VV WE WM WN WR WS W' +
      'Y XA XC XP ZZZ ';
     Primero: 5001; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 5001; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5004; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5006; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5008; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5010; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 0002 0003 0004 0005 0006 0007 0' +
      '008 0009 0010 0011 0012 0013 001' +
      '4 0015 0016 0017 0018 0019 0020 ' +
      '0021 0022 0023 0024 0025 0026 00' +
      '27 0028 0029 0030 0031 0032 0033' +
      ' 0034 0035 0036 0037 0038 0039 0' +
      '040 0041 0042 0043 0044 0045 004' +
      '6 0047 0048 0049 0050 0051 0052 ' +
      '0053 0054 0055 0056 0057 0058 00' +
      '59 0060 0061 0062 0063 0064 0065' +
      ' 0066 0067 0068 0069 0070 0071 0' +
      '072 0073 0074 0075 0076 0077 007' +
      '8 0079 0080 0081 0082 0083 0084 ' +
      '0085 0086 0087 0088 0089 0090 00' +
      '91 0093 0094 0095 0096 0097 0098' +
      ' 0099 0100 0101 0102 0104 0105 0' +
      '106 0107 0108 0109 0110 0111 011' +
      '2 0113 0114 0115 0116 0117 0118 ' +
      '0119 0120 0121 0122 0123 0124 01' +
      '25 0126 0127 0128 0129 0130 0131' +
      ' 0132 0133 0134 0135 0136 0137 0' +
      '138 0139 0140 0141 0142 0143 014' +
      '4 0145 0146 0147 0148 0149 0150 ' +
      '0151 0152 0153 0154 0155 0156 01' +
      '57 0158 0159 0160 0161 0162 0163' +
      ' 0164 0165 0166 0167 0168 0169 0' +
      '170 0171 0172 0173 0174 0175 017' +
      '6 0177 0178 0179 0180 0183 0184 ' +
      '0185 0186 0187 0188 0189 0190 01' +
      '91 0192 0193 0194 0195 0196 0197' +
      ' 0198 0199 0200 0201 0202 0203 0' +
      '204 0205 0206 0207 0208 0209 021' +
      '0 0211 0212 0213 0214 0215 0216 ' +
      '0217 0218 0219 0220 0221 0222 02' +
      '23 0224 0225 0226 0227 0228 0229' +
      ' 0230 0231 0232 0233 0234 0235 0' +
      '236 0237 0238 0239 0240 0241 024' +
      '2 0243 0244 0245 0246 0247 0248 ' +
      '0249 0250 0251 ';
     Primero: 5012; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5012; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5014; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' SEPA ';
     Primero: 5016; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5016; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5018; Cantidad: 2),
    (Clase: ciEje; Texto:
      'ancestor::cac:AccountingSupplier' +
      'Party';
     Primero: 5020; Cantidad: 0),
    (Clase: ciEje; Texto:
      'ancestor::cac:PayeeParty';
     Primero: 5020; Cantidad: 0),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5020; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5022; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5024; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5026; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5028; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5030; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5032; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5034; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5036; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 5038; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5039; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 5041; Cantidad: 1),
    (Clase: ciCadena; Texto:
      ' AA AB AC AD AE AF AG AH AI AJ A' +
      'K AL AM AN AO AP AQ AR AS AT AU ' +
      'AV AW AX AY AZ BA BB BC BD BE BF' +
      ' BG BH BI BJ BK BL BM BN BO BP B' +
      'Q BR BS BT BU BV BW BX BY BZ CC ' +
      'CG CL CR CV DR DW EC EF EMD EN F' +
      'S GB GN GMN GS HS IB IN IS IT IZ' +
      ' MA MF MN MP NB ON PD PL PO PPI ' +
      'PV QS RC RN RU RY SA SG SK SN SR' +
      'S SRT SRU SRV SRW SRX SRY SRZ SS' +
      ' SSA SSB SSC SSD SSE SSF SSG SSH' +
      ' SSI SSJ SSK SSL SSM SSN SSO SSP' +
      ' SSQ SSR SSS SST SSU SSV SSW SSX' +
      ' SSY SSZ ST STA STB STC STD STE ' +
      'STF STG STH STI STJ STK STL STM ' +
      'STN STO STP STQ STR STS STT STU ' +
      'STV STW STX STY STZ SUA SUB SUC ' +
      'SUD SUE SUF SUG SUH SUI SUJ SUK ' +
      'SUL SUM TG TSN TSO TSP TSQ TSR T' +
      'SS TST TSU UA UP VN VP VS VX ZZZ' +
      ' ';
     Primero: 5042; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 5042; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5045; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5047; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5049; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 1A AD AE AF AG AI AL AM AO AQ A' +
      'R AS AT AU AW AX AZ BA BB BD BE ' +
      'BF BG BH BI BJ BL BM BN BO BQ BR' +
      ' BS BT BV BW BY BZ CA CC CD CF C' +
      'G CH CI CK CL CM CN CO CR CU CV ' +
      'CW CX CY CZ DE DJ DK DM DO DZ EC' +
      ' EE EG EH ER ES ET FI FJ FK FM F' +
      'O FR GA GB GD GE GF GG GH GI GL ' +
      'GM GN GP GQ GR GS GT GU GW GY HK' +
      ' HM HN HR HT HU ID IE IL IM IN I' +
      'O IQ IR IS IT JE JM JO JP KE KG ' +
      'KH KI KM KN KP KR KW KY KZ LA LB' +
      ' LC LI LK LR LS LT LU LV LY MA M' +
      'C MD ME MF MG MH MK ML MM MN MO ' +
      'MP MQ MR MS MT MU MV MW MX MY MZ' +
      ' NA NC NE NF NG NI NL NO NP NR N' +
      'U NZ OM PA PE PF PG PH PK PL PM ' +
      'PN PR PS PT PW PY QA RE RO RS RU' +
      ' RW SA SB SC SD SE SG SH SI SJ S' +
      'K SL SM SN SO SR SS ST SV SX SY ' +
      'SZ TC TD TF TG TH TJ TK TL TM TN' +
      ' TO TR TT TV TW TZ UA UG UM US U' +
      'Y UZ VA VC VE VG VI VN VU WF WS ' +
      'XI YE YT ZA ZM ZW ';
     Primero: 5051; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5051; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5053; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5055; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5057; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5059; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 1 2 3 4 5 6 7 8 9 10 11 12 13 1' +
      '4 15 16 17 18 19 20 21 22 23 24 ' +
      '25 26 27 28 29 30 31 32 33 34 35' +
      ' 36 37 38 39 40 41 42 43 44 45 4' +
      '6 47 48 49 50 51 52 53 54 55 56 ' +
      '57 58 59 60 61 62 63 64 65 66 67' +
      ' 68 69 70 74 75 76 77 78 91 92 9' +
      '3 94 95 96 97 98 ZZZ ';
     Primero: 5061; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5061; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5063; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5065; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5067; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' AE L M E S Z G O K B ';
     Primero: 5069; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5069; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5071; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5073; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5075; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5077; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5079; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 41 42 60 62 63 64 65 66 67 68 7' +
      '0 71 88 95 100 102 103 104 105 ';
     Primero: 5081; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5081; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5083; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5085; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5087; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' AA AAA AAC AAD AAE AAF AAH AAI ' +
      'AAS AAT AAV AAY AAZ ABA ABB ABC ' +
      'ABD ABF ABK ABL ABN ABR ABS ABT ' +
      'ABU ACF ACG ACH ACI ACJ ACK ACL ' +
      'ACM ACS ADC ADE ADJ ADK ADL ADM ' +
      'ADN ADO ADP ADQ ADR ADT ADW ADY ' +
      'ADZ AEA AEB AEC AED AEF AEH AEI ' +
      'AEJ AEK AEL AEM AEN AEO AEP AES ' +
      'AET AEU AEV AEW AEX AEY AEZ AJ A' +
      'U CA CAB CAD CAE CAF CAI CAJ CAK' +
      ' CAL CAM CAN CAO CAP CAQ CAR CAS' +
      ' CAT CAU CAV CAW CAX CAY CAZ CD ' +
      'CG CS CT DAB DAD DAC DAF DAG DAH' +
      ' DAI DAJ DAK DAL DAM DAN DAO DAP' +
      ' DAQ DL EG EP ER FAA FAB FAC FC ' +
      'FH FI GAA HAA HD HH IAA IAB ID I' +
      'F IR IS KO L1 LA LAA LAB LF MAE ' +
      'MI ML NAA OA PA PAA PC PL PRV RA' +
      'B RAC RAD RAF RE RF RH RV SA SAA' +
      ' SAD SAE SAI SG SH SM SU TAB TAC' +
      ' TT TV V1 V2 WH XAA YY ZZZ ';
     Primero: 5089; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5089; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5091; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5093; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5095; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5097; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' VATEX-EU-79-C VATEX-EU-132 VATE' +
      'X-EU-132-1A VATEX-EU-132-1B VATE' +
      'X-EU-132-1C VATEX-EU-132-1D VATE' +
      'X-EU-132-1E VATEX-EU-132-1F VATE' +
      'X-EU-132-1G VATEX-EU-132-1H VATE' +
      'X-EU-132-1I VATEX-EU-132-1J VATE' +
      'X-EU-132-1K VATEX-EU-132-1L VATE' +
      'X-EU-132-1M VATEX-EU-132-1N VATE' +
      'X-EU-132-1O VATEX-EU-132-1P VATE' +
      'X-EU-132-1Q VATEX-EU-135-1 VATEX' +
      '-EU-143 VATEX-EU-143-1A VATEX-EU' +
      '-143-1B VATEX-EU-143-1C VATEX-EU' +
      '-143-1D VATEX-EU-143-1E VATEX-EU' +
      '-143-1F VATEX-EU-143-1FA VATEX-E' +
      'U-143-1G VATEX-EU-143-1H VATEX-E' +
      'U-143-1I VATEX-EU-143-1J VATEX-E' +
      'U-143-1K VATEX-EU-143-1L VATEX-E' +
      'U-144 VATEX-EU-146-1E VATEX-EU-1' +
      '59 VATEX-EU-309 VATEX-EU-148 VAT' +
      'EX-EU-148-A VATEX-EU-148-B VATEX' +
      '-EU-148-C VATEX-EU-148-D VATEX-E' +
      'U-148-E VATEX-EU-148-F VATEX-EU-' +
      '148-G VATEX-EU-151 VATEX-EU-151-' +
      '1A VATEX-EU-151-1AA VATEX-EU-151' +
      '-1B VATEX-EU-151-1C VATEX-EU-151' +
      '-1D VATEX-EU-151-1E VATEX-EU-G V' +
      'ATEX-EU-O VATEX-EU-IC VATEX-EU-A' +
      'E VATEX-EU-D VATEX-EU-F VATEX-EU' +
      '-I VATEX-EU-J VATEX-FR-FRANCHISE' +
      ' VATEX-FR-CNWVAT VATEX-EU-153 VA' +
      'TEX-FR-CGI261-1 VATEX-FR-CGI261-' +
      '2 VATEX-FR-CGI261-3 VATEX-FR-CGI' +
      '261-4 VATEX-FR-CGI261-5 VATEX-FR' +
      '-CGI261-7 VATEX-FR-CGI261-8 VATE' +
      'X-FR-CGI261A VATEX-FR-CGI261B VA' +
      'TEX-FR-CGI261C-1 VATEX-FR-CGI261' +
      'C-2 VATEX-FR-CGI261C-3 VATEX-FR-' +
      'CGI261D-1 VATEX-FR-CGI261D-1BIS ' +
      'VATEX-FR-CGI261D-2 VATEX-FR-CGI2' +
      '61D-3 VATEX-FR-CGI261D-4 VATEX-F' +
      'R-CGI261E-1 VATEX-FR-CGI261E-2 V' +
      'ATEX-FR-CGI277A VATEX-FR-CGI275 ' +
      'VATEX-FR-298SEXDECIESA VATEX-FR-' +
      'CGI295 VATEX-FR-AE VATEX-ES-N1 V' +
      'ATEX-ES-N2 VATEX-ES-IVA20 VATEX-' +
      'ES-IVA21 VATEX-ES-IVA22 VATEX-ES' +
      '-IVA23/24 VATEX-ES-IVA25 VATEX-E' +
      'S-IVA140BIS VATEX-ES-OTROS VATEX' +
      '-ES-IGIC1TR VATEX-ES-IGIC11 VATE' +
      'X-ES-IGIC12 VATEX-ES-IGIC13 VATE' +
      'X-ES-IGIC25 VATEX-ES-IGIC47 VATE' +
      'X-ES-IGIC90 VATEX-ES-IPSI7 VATEX' +
      '-ES-IPSI8 ';
     Primero: 5099; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'upper-case';
     Primero: 5099; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 5100; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 5101; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5104; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5106; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5108; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:BaseQuantity';
     Primero: 5110; Cantidad: 0),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5110; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 5112; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5114; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '|';
     Primero: 5116; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5118; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'normalize-space';
     Primero: 5120; Cantidad: 1),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5121; Cantidad: 2),
    (Clase: ciFuncion; Texto:
      'not';
     Primero: 5123; Cantidad: 1),
    (Clase: ciCadena; Texto:
      ' 10 11 13 14 15 20 21 22 23 24 2' +
      '5 27 28 33 34 35 37 38 40 41 56 ' +
      '57 58 59 60 61 74 77 80 81 85 87' +
      ' 89 91 1I 2A 2B 2C 2G 2H 2I 2J 2' +
      'K 2L 2M 2N 2P 2Q 2R 2U 2X 2Y 2Z ' +
      '3B 3C 4C 4G 4H 4K 4L 4M 4N 4O 4P' +
      ' 4Q 4R 4T 4U 4W 4X 5A 5B 5E 5J A' +
      '10 A11 A12 A13 A14 A15 A16 A17 A' +
      '18 A19 A2 A20 A21 A22 A23 A24 A2' +
      '6 A27 A28 A29 A3 A30 A31 A32 A33' +
      ' A34 A35 A36 A37 A38 A39 A4 A40 ' +
      'A41 A42 A43 A44 A45 A47 A48 A49 ' +
      'A5 A53 A54 A55 A56 A59 A6 A68 A6' +
      '9 A7 A70 A71 A73 A74 A75 A76 A8 ' +
      'A84 A85 A86 A87 A88 A89 A9 A90 A' +
      '91 A93 A94 A95 A96 A97 A98 A99 A' +
      'A AB ACR ACT AD AE AH AI AK AL A' +
      'MH AMP ANN APZ AQ AS ASM ASU ATM' +
      ' AWG AY AZ B1 B10 B11 B12 B13 B1' +
      '4 B15 B16 B17 B18 B19 B20 B21 B2' +
      '2 B23 B24 B25 B26 B27 B28 B29 B3' +
      ' B30 B31 B32 B33 B34 B35 B4 B41 ' +
      'B42 B43 B44 B45 B46 B47 B48 B49 ' +
      'B50 B52 B53 B54 B55 B56 B57 B58 ' +
      'B59 B60 B61 B62 B63 B64 B66 B67 ' +
      'B68 B69 B7 B70 B71 B72 B73 B74 B' +
      '75 B76 B77 B78 B79 B8 B80 B81 B8' +
      '2 B83 B84 B85 B86 B87 B88 B89 B9' +
      '0 B91 B92 B93 B94 B95 B96 B97 B9' +
      '8 B99 BAR BB BFT BHP BIL BLD BLL' +
      ' BP BPM BQL BTU BUA BUI C0 C10 C' +
      '11 C12 C13 C14 C15 C16 C17 C18 C' +
      '19 C20 C21 C22 C23 C24 C25 C26 C' +
      '27 C28 C29 C3 C30 C31 C32 C33 C3' +
      '4 C35 C36 C37 C38 C39 C40 C41 C4' +
      '2 C43 C44 C45 C46 C47 C48 C49 C5' +
      '0 C51 C52 C53 C54 C55 C56 C57 C5' +
      '8 C59 C60 C61 C62 C63 C64 C65 C6' +
      '6 C67 C68 C69 C7 C70 C71 C72 C73' +
      ' C74 C75 C76 C78 C79 C8 C80 C81 ' +
      'C82 C83 C84 C85 C86 C87 C88 C89 ' +
      'C9 C90 C91 C92 C93 C94 C95 C96 C' +
      '97 C99 CCT CDL CEL CEN CG CGM CK' +
      'G CLF CLT CMK CMQ CMT CNP CNT CO' +
      'U CTG CTM CTN CUR CWA CWI D03 D0' +
      '4 D1 D10 D11 D12 D13 D15 D16 D17' +
      ' D18 D19 D2 D20 D21 D22 D23 D24 ' +
      'D25 D26 D27 D29 D30 D31 D32 D33 ' +
      'D34 D36 D41 D42 D43 D44 D45 D46 ' +
      'D47 D48 D49 D5 D50 D51 D52 D53 D' +
      '54 D55 D56 D57 D58 D59 D6 D60 D6' +
      '1 D62 D63 D65 D68 D69 D73 D74 D7' +
      '7 D78 D80 D81 D82 D83 D85 D86 D8' +
      '7 D88 D89 D91 D93 D94 D95 DAA DA' +
      'D DAY DB DBM DBW DD DEC DG DJ DL' +
      'T DMA DMK DMO DMQ DMT DN DPC DPR' +
      ' DPT DRA DRI DRL DT DTN DWT DZN ' +
      'DZP E01 E07 E08 E09 E10 E12 E14 ' +
      'E15 E16 E17 E18 E19 E20 E21 E22 ' +
      'E23 E25 E27 E28 E30 E31 E32 E33 ' +
      'E34 E35 E36 E37 E38 E39 E4 E40 E' +
      '41 E42 E43 E44 E45 E46 E47 E48 E' +
      '49 E50 E51 E52 E53 E54 E55 E56 E' +
      '57 E58 E59 E60 E61 E62 E63 E64 E' +
      '65 E66 E67 E68 E69 E70 E71 E72 E' +
      '73 E74 E75 E76 E77 E78 E79 E80 E' +
      '81 E82 E83 E84 E85 E86 E87 E88 E' +
      '89 E90 E91 E92 E93 E94 E95 E96 E' +
      '97 E98 E99 EA EB EQ F01 F02 F03 ' +
      'F04 F05 F06 F07 F08 F10 F11 F12 ' +
      'F13 F14 F15 F16 F17 F18 F19 F20 ' +
      'F21 F22 F23 F24 F25 F26 F27 F28 ' +
      'F29 F30 F31 F32 F33 F34 F35 F36 ' +
      'F37 F38 F39 F40 F41 F42 F43 F44 ' +
      'F45 F46 F47 F48 F49 F50 F51 F52 ' +
      'F53 F54 F55 F56 F57 F58 F59 F60 ' +
      'F61 F62 F63 F64 F65 F66 F67 F68 ' +
      'F69 F70 F71 F72 F73 F74 F75 F76 ' +
      'F77 F78 F79 F80 F81 F82 F83 F84 ' +
      'F85 F86 F87 F88 F89 F90 F91 F92 ' +
      'F93 F94 F95 F96 F97 F98 F99 FAH ' +
      'FAR FBM FC FF FH FIT FL FNU FOT ' +
      'FP FR FS FTK FTQ G01 G04 G05 G06' +
      ' G08 G09 G10 G11 G12 G13 G14 G15' +
      ' G16 G17 G18 G19 G2 G20 G21 G23 ' +
      'G24 G25 G26 G27 G28 G29 G3 G30 G' +
      '31 G32 G33 G34 G35 G36 G37 G38 G' +
      '39 G40 G41 G42 G43 G44 G45 G46 G' +
      '47 G48 G49 G50 G51 G52 G53 G54 G' +
      '55 G56 G57 G58 G59 G60 G61 G62 G' +
      '63 G64 G65 G66 G67 G68 G69 G70 G' +
      '71 G72 G73 G74 G75 G76 G77 G78 G' +
      '79 G80 G81 G82 G83 G84 G85 G86 G' +
      '87 G88 G89 G90 G91 G92 G93 G94 G' +
      '95 G96 G97 G98 G99 GB GBQ GDW GE' +
      ' GF GFI GGR GIA GIC GII GIP GJ G' +
      'L GLD GLI GLL GM GO GP GQ GRM GR' +
      'N GRO GV GWH H03 H04 H05 H06 H07' +
      ' H08 H09 H10 H11 H12 H13 H14 H15' +
      ' H16 H18 H19 H20 H21 H22 H23 H24' +
      ' H25 H26 H27 H28 H29 H30 H31 H32' +
      ' H33 H34 H35 H36 H37 H38 H39 H40' +
      ' H41 H42 H43 H44 H45 H46 H47 H48' +
      ' H49 H50 H51 H52 H53 H54 H55 H56' +
      ' H57 H58 H59 H60 H61 H62 H63 H64' +
      ' H65 H66 H67 H68 H69 H70 H71 H72' +
      ' H73 H74 H75 H76 H77 H79 H80 H81' +
      ' H82 H83 H84 H85 H87 H88 H89 H90' +
      ' H91 H92 H93 H94 H95 H96 H98 H99' +
      ' HA HAD HBA HBX HC HDW HEA HGM H' +
      'H HIU HKM HLT HM HMO HMQ HMT HPA' +
      ' HTZ HUR HWE IA IE INH INK INQ I' +
      'SD IU IUG IV J10 J12 J13 J14 J15' +
      ' J16 J17 J18 J19 J2 J20 J21 J22 ' +
      'J23 J24 J25 J26 J27 J28 J29 J30 ' +
      'J31 J32 J33 J34 J35 J36 J38 J39 ' +
      'J40 J41 J42 J43 J44 J45 J46 J47 ' +
      'J48 J49 J50 J51 J52 J53 J54 J55 ' +
      'J56 J57 J58 J59 J60 J61 J62 J63 ' +
      'J64 J65 J66 J67 J68 J69 J70 J71 ' +
      'J72 J73 J74 J75 J76 J78 J79 J81 ' +
      'J82 J83 J84 J85 J87 J90 J91 J92 ' +
      'J93 J95 J96 J97 J98 J99 JE JK JM' +
      ' JNT JOU JPS JWL K1 K10 K11 K12 ' +
      'K13 K14 K15 K16 K17 K18 K19 K2 K' +
      '20 K21 K22 K23 K26 K27 K28 K3 K3' +
      '0 K31 K32 K33 K34 K35 K36 K37 K3' +
      '8 K39 K40 K41 K42 K43 K45 K46 K4' +
      '7 K48 K49 K50 K51 K52 K53 K54 K5' +
      '5 K58 K59 K6 K60 K61 K62 K63 K64' +
      ' K65 K66 K67 K68 K69 K70 K71 K73' +
      ' K74 K75 K76 K77 K78 K79 K80 K81' +
      ' K82 K83 K84 K85 K86 K87 K88 K89' +
      ' K90 K91 K92 K93 K94 K95 K96 K97' +
      ' K98 K99 KA KAT KB KBA KCC KDW K' +
      'EL KGM KGS KHY KHZ KI KIC KIP KJ' +
      ' KJO KL KLK KLX KMA KMH KMK KMQ ' +
      'KMT KNI KNM KNS KNT KO KPA KPH K' +
      'PO KPP KR KSD KSH KT KTN KUR KVA' +
      ' KVR KVT KW KWH KWN KWO KWS KWT ' +
      'KWY KX L10 L11 L12 L13 L14 L15 L' +
      '16 L17 L18 L19 L2 L20 L21 L23 L2' +
      '4 L25 L26 L27 L28 L29 L30 L31 L3' +
      '2 L33 L34 L35 L36 L37 L38 L39 L4' +
      '0 L41 L42 L43 L44 L45 L46 L47 L4' +
      '8 L49 L50 L51 L52 L53 L54 L55 L5' +
      '6 L57 L58 L59 L60 L63 L64 L65 L6' +
      '6 L67 L68 L69 L70 L71 L72 L73 L7' +
      '4 L75 L76 L77 L78 L79 L80 L81 L8' +
      '2 L83 L84 L85 L86 L87 L88 L89 L9' +
      '0 L91 L92 L93 L94 L95 L96 L98 L9' +
      '9 LA LAC LBR LBT LD LEF LF LH LK' +
      ' LM LN LO LP LPA LR LS LTN LTR L' +
      'UB LUM LUX LY M1 M10 M11 M12 M13' +
      ' M14 M15 M16 M17 M18 M19 M20 M21' +
      ' M22 M23 M24 M25 M26 M27 M29 M30' +
      ' M31 M32 M33 M34 M35 M36 M37 M38' +
      ' M39 M4 M40 M41 M42 M43 M44 M45 ' +
      'M46 M47 M48 M49 M5 M50 M51 M52 M' +
      '53 M55 M56 M57 M58 M59 M60 M61 M' +
      '62 M63 M64 M65 M66 M67 M68 M69 M' +
      '7 M70 M71 M72 M73 M74 M75 M76 M7' +
      '7 M78 M79 M80 M81 M82 M83 M84 M8' +
      '5 M86 M87 M88 M89 M9 M90 M91 M92' +
      ' M93 M94 M95 M96 M97 M98 M99 MAH' +
      ' MAL MAM MAR MAW MBE MBF MBR MC ' +
      'MCU MD MGM MHZ MIK MIL MIN MIO M' +
      'IU MKD MKM MKW MLD MLT MMK MMQ M' +
      'MT MND MNJ MON MPA MQD MQH MQM M' +
      'QS MQW MRD MRM MRW MSK MTK MTQ M' +
      'TR MTS MTZ MVA MWH N1 N10 N11 N1' +
      '2 N13 N14 N15 N16 N17 N18 N19 N2' +
      '0 N21 N22 N23 N24 N25 N26 N27 N2' +
      '8 N29 N3 N30 N31 N32 N33 N34 N35' +
      ' N36 N37 N38 N39 N40 N41 N42 N43' +
      ' N44 N45 N46 N47 N48 N49 N50 N51' +
      ' N52 N53 N54 N55 N56 N57 N58 N59' +
      ' N60 N61 N62 N63 N64 N65 N66 N67' +
      ' N68 N69 N70 N71 N72 N73 N74 N75' +
      ' N76 N77 N78 N79 N80 N81 N82 N83' +
      ' N84 N85 N86 N87 N88 N89 N90 N91' +
      ' N92 N93 N94 N95 N96 N97 N98 N99' +
      ' NA NAR NCL NEW NF NIL NIU NL NM' +
      '3 NMI NMP NPT NT NTU NU NX OA OD' +
      'E ODG ODK ODM OHM ON ONZ OPM OT ' +
      'OZA OZI P1 P10 P11 P12 P13 P14 P' +
      '15 P16 P17 P18 P19 P2 P20 P21 P2' +
      '2 P23 P24 P25 P26 P27 P28 P29 P3' +
      '0 P31 P32 P33 P34 P35 P36 P37 P3' +
      '8 P39 P40 P41 P42 P43 P44 P45 P4' +
      '6 P47 P48 P49 P5 P50 P51 P52 P53' +
      ' P54 P55 P56 P57 P58 P59 P60 P61' +
      ' P62 P63 P64 P65 P66 P67 P68 P69' +
      ' P70 P71 P72 P73 P74 P75 P76 P77' +
      ' P78 P79 P80 P81 P82 P83 P84 P85' +
      ' P86 P87 P88 P89 P90 P91 P92 P93' +
      ' P94 P95 P96 P97 P98 P99 PAL PD ' +
      'PFL PGL PI PLA PO PQ PR PS PTD P' +
      'TI PTL PTN Q10 Q11 Q12 Q13 Q14 Q' +
      '15 Q16 Q17 Q18 Q19 Q20 Q21 Q22 Q' +
      '23 Q24 Q25 Q26 Q27 Q28 Q29 Q3 Q3' +
      '0 Q31 Q32 Q33 Q34 Q35 Q36 Q37 Q3' +
      '8 Q39 Q40 Q41 Q42 QA QAN QB QR Q' +
      'TD QTI QTL QTR R1 R9 RH RM ROM R' +
      'P RPM RPS RT S3 S4 SAN SCO SCR S' +
      'EC SET SG SIE SM3 SMI SQ SQR SR ' +
      'STC STI STK STL STN STW SW SX SY' +
      'R T0 T3 TAH TAN TI TIC TIP TKM T' +
      'MS TNE TP TPI TPR TQD TRL TST TT' +
      'S U1 U2 UB UC VA VLT VP W2 WA WB' +
      ' WCD WE WEB WEE WG WHR WM WSD WT' +
      'T X1 YDK YDQ YRD Z11 Z9 ZP ZZ X1' +
      'A X1B X1D X1F X1G X1W X2C X3A X3' +
      'H X43 X44 X4A X4B X4C X4D X4F X4' +
      'G X4H X5H X5L X5M X6H X6P X7A X7' +
      'B X8A X8B X8C XAA XAB XAC XAD XA' +
      'E XAF XAG XAH XAI XAJ XAL XAM XA' +
      'P XAT XAV XB4 XBA XBB XBC XBD XB' +
      'E XBF XBG XBH XBI XBJ XBK XBL XB' +
      'M XBN XBO XBP XBQ XBR XBS XBT XB' +
      'U XBV XBW XBX XBY XBZ XCA XCB XC' +
      'C XCD XCE XCF XCG XCH XCI XCJ XC' +
      'K XCL XCM XCN XCO XCP XCQ XCR XC' +
      'S XCT XCU XCV XCW XCX XCY XCZ XD' +
      'A XDB XDC XDG XDH XDI XDJ XDK XD' +
      'L XDM XDN XDP XDR XDS XDT XDU XD' +
      'V XDW XDX XDY XEC XED XEE XEF XE' +
      'G XEH XEI XEN XFB XFC XFD XFE XF' +
      'I XFL XFO XFP XFR XFT XFW XFX XG' +
      'B XGI XGL XGR XGU XGY XGZ XHA XH' +
      'B XHC XHG XHN XHR XIA XIB XIC XI' +
      'D XIE XIF XIG XIH XIK XIL XIN XI' +
      'Z XJB XJC XJG XJR XJT XJY XKG XK' +
      'I XLE XLG XLT XLU XLV XLZ XMA XM' +
      'B XMC XME XMR XMS XMT XMW XMX XN' +
      'A XNE XNF XNG XNS XNT XNU XNV XO' +
      '1 XO2 XO3 XO4 XO5 XO6 XO7 XO8 XO' +
      '9 XOA XOB XOC XOD XOE XOF XOG XO' +
      'H XOI XOJ XOK XOL XOM XON XOP XO' +
      'Q XOR XOS XOT XOU XOV XOW XOX XO' +
      'Y XOZ XP1 XP2 XP3 XP4 XPA XPB XP' +
      'C XPD XPE XPF XPG XPH XPI XPJ XP' +
      'K XPL XPN XPO XPP XPR XPT XPU XP' +
      'V XPX XPY XPZ XQA XQB XQC XQD XQ' +
      'F XQG XQH XQJ XQK XQL XQM XQN XQ' +
      'P XQQ XQR XQS XRD XRG XRJ XRK XR' +
      'L XRO XRT XRZ XSA XSB XSC XSD XS' +
      'E XSH XSI XSK XSL XSM XSO XSP XS' +
      'S XST XSU XSV XSW XSX XSY XSZ XT' +
      '1 XTB XTC XTD XTE XTG XTI XTK XT' +
      'L XTN XTO XTR XTS XTT XTU XTV XT' +
      'W XTY XTZ XUC XUN XVA XVG XVI XV' +
      'K XVL XVN XVO XVP XVQ XVR XVS XV' +
      'Y XWA XWB XWC XWD XWF XWG XWH XW' +
      'J XWK XWL XWM XWN XWP XWQ XWR XW' +
      'S XWT XWU XWV XWW XWX XWY XWZ XX' +
      'A XXB XXC XXD XXF XXG XXH XXJ XX' +
      'K XYA XYB XYC XYD XYF XYG XYH XY' +
      'J XYK XYL XYM XYN XYP XYQ XYR XY' +
      'S XYT XYV XYW XYX XYY XYZ XZA XZ' +
      'B XZC XZD XZF XZG XZH XZJ XZK XZ' +
      'L XZM XZN XZP XZQ XZR XZS XZT XZ' +
      'U XZV XZW XZX XZY XZZ ';
     Primero: 5124; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'concat';
     Primero: 5124; Cantidad: 3),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5127; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5129; Cantidad: 2),
    (Clase: ciHijo; Texto:
      'cbc:EmbeddedDocumentBinaryObject';
     Primero: 5131; Cantidad: 0),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5131; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5133; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'application/pdf';
     Primero: 5135; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 5135; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'image/png';
     Primero: 5137; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 5137; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5139; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'image/jpeg';
     Primero: 5141; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 5141; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5143; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'text/csv';
     Primero: 5145; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 5145; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5147; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'application/vnd.openxmlformats-o' +
      'fficedocument.spreadsheetml.shee' +
      't';
     Primero: 5149; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 5149; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5151; Cantidad: 2),
    (Clase: ciCadena; Texto:
      'application/vnd.oasis.opendocume' +
      'nt.spreadsheet';
     Primero: 5153; Cantidad: 0),
    (Clase: ciOperador; Texto:
      '=';
     Primero: 5153; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'or';
     Primero: 5155; Cantidad: 2),
    (Clase: ciFiltro; Texto:
      '';
     Primero: 5157; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5159; Cantidad: 2),
    (Clase: ciCadena; Texto:
      ' 0002 0007 0009 0037 0060 0088 0' +
      '096 0097 0106 0130 0135 0142 014' +
      '7 0151 0154 0158 0170 0177 0183 ' +
      '0184 0188 0190 0191 0192 0193 01' +
      '94 0195 0196 0198 0199 0200 0201' +
      ' 0202 0203 0204 0205 0208 0209 0' +
      '210 0211 0212 0213 0215 0216 021' +
      '7 0218 0221 0225 0230 0235 0240 ' +
      '0244 0242 0245 0246 0248 9910 99' +
      '13 9914 9915 9918 9919 9920 9922' +
      ' 9923 9924 9925 9926 9927 9928 9' +
      '929 9930 9931 9932 9933 9934 993' +
      '5 9936 9937 9938 9939 9940 9941 ' +
      '9942 9943 9944 9945 9946 9947 99' +
      '48 9949 9950 9951 9952 9953 9957' +
      ' 9959 9960 AN AQ AS AU EM ';
     Primero: 5161; Cantidad: 0),
    (Clase: ciFuncion; Texto:
      'contains';
     Primero: 5161; Cantidad: 2),
    (Clase: ciOperador; Texto:
      'and';
     Primero: 5163; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5165; Cantidad: 2),
    (Clase: ciOperador; Texto:
      '/';
     Primero: 5167; Cantidad: 2));
  EnlacesEn: array[0..5168] of Integer = (
    0, 1, 2, 4, 5, 6, 8, 9, 10, 11,
    1, 12, 14, 10, 16, 1, 17, 19, 20, 21,
    22, 6, 24, 25, 26, 27, 1, 28, 30, 31,
    32, 33, 35, 36, 37, 38, 1, 39, 21, 0,
    42, 45, 46, 44, 47, 43, 48, 0, 50, 51,
    48, 49, 52, 54, 4, 58, 57, 59, 60, 61,
    56, 62, 63, 4, 64, 66, 68, 67, 69, 54,
    72, 73, 74, 75, 77, 72, 78, 79, 75, 45,
    71, 44, 81, 43, 82, 51, 82, 83, 84, 1,
    86, 88, 90, 92, 94, 88, 97, 98, 1, 99,
    100, 96, 101, 102, 33, 103, 33, 104, 105, 106,
    107, 96, 108, 110, 112, 48, 54, 113, 114, 115,
    116, 33, 117, 33, 118, 119, 106, 111, 120, 110,
    113, 122, 123, 121, 124, 126, 112, 82, 128, 114,
    129, 130, 33, 131, 33, 132, 133, 106, 127, 134,
    126, 128, 136, 137, 135, 138, 126, 110, 90, 96,
    127, 142, 111, 143, 33, 144, 33, 145, 146, 106,
    141, 147, 140, 148, 136, 110, 96, 111, 151, 33,
    152, 33, 153, 154, 106, 141, 155, 150, 156, 149,
    157, 126, 122, 142, 33, 160, 33, 161, 162, 106,
    141, 163, 159, 164, 158, 165, 136, 122, 141, 96,
    167, 168, 166, 169, 171, 173, 174, 172, 175, 94,
    92, 171, 178, 179, 180, 33, 181, 33, 182, 183,
    106, 177, 184, 176, 185, 172, 187, 175, 177, 178,
    188, 189, 186, 190, 172, 174, 173, 177, 193, 194,
    33, 195, 33, 196, 197, 106, 198, 184, 192, 199,
    191, 200, 187, 174, 198, 178, 202, 203, 201, 204,
    88, 72, 206, 207, 75, 110, 72, 209, 210, 75,
    126, 72, 212, 213, 75, 90, 72, 215, 216, 75,
    92, 72, 218, 219, 75, 171, 72, 221, 222, 75,
    173, 72, 224, 225, 75, 94, 72, 227, 228, 75,
    43, 51, 231, 232, 6, 234, 235, 6, 237, 238,
    6, 240, 241, 6, 239, 242, 244, 245, 6, 247,
    9, 248, 249, 250, 251, 252, 253, 6, 10, 249,
    255, 251, 256, 257, 6, 248, 16, 259, 17, 97,
    98, 262, 263, 1, 266, 269, 270, 268, 271, 267,
    272, 273, 265, 274, 1, 63, 31, 277, 4, 278,
    276, 279, 280, 282, 62, 1, 283, 284, 279, 285,
    281, 286, 266, 288, 289, 63, 290, 279, 291, 292,
    293, 287, 294, 280, 285, 296, 297, 295, 298, 5,
    277, 282, 300, 301, 62, 1, 302, 303, 1, 247,
    305, 9, 306, 307, 308, 309, 310, 1, 312, 59,
    61, 57, 314, 307, 315, 313, 316, 317, 309, 318,
    311, 319, 304, 320, 1, 8, 322, 9, 323, 316,
    324, 309, 325, 323, 249, 327, 309, 328, 326, 329,
    321, 330, 304, 331, 332, 1, 48, 56, 300, 335,
    62, 334, 336, 337, 338, 320, 339, 330, 338, 340,
    341, 1, 82, 343, 336, 344, 345, 320, 346, 330,
    345, 347, 348, 350, 352, 353, 354, 351, 355, 350,
    354, 357, 358, 356, 359, 357, 355, 360, 361, 269,
    363, 268, 364, 365, 266, 366, 367, 368, 293, 86,
    178, 86, 141, 371, 367, 372, 33, 373, 33, 374,
    375, 106, 370, 376, 369, 377, 244, 378, 289, 269,
    244, 268, 381, 267, 382, 383, 72, 384, 385, 75,
    383, 386, 383, 387, 388, 269, 265, 268, 390, 267,
    391, 392, 72, 393, 394, 75, 392, 395, 392, 396,
    397, 31, 399, 4, 400, 276, 401, 402, 284, 401,
    404, 403, 405, 290, 401, 407, 408, 293, 406, 409,
    402, 404, 411, 412, 410, 413, 5, 399, 282, 415,
    416, 62, 1, 417, 418, 419, 320, 419, 420, 421,
    56, 415, 423, 62, 334, 424, 425, 426, 320, 426,
    427, 428, 343, 424, 430, 431, 320, 431, 432, 433,
    31, 435, 4, 436, 276, 437, 438, 284, 437, 440,
    439, 441, 290, 437, 443, 444, 293, 442, 445, 438,
    440, 447, 448, 446, 449, 5, 435, 282, 451, 452,
    62, 1, 453, 454, 306, 316, 456, 309, 457, 458,
    319, 455, 459, 455, 460, 461, 56, 451, 334, 463,
    464, 465, 459, 463, 62, 334, 467, 468, 469, 466,
    470, 343, 463, 472, 473, 459, 343, 467, 475, 476,
    474, 477, 31, 479, 4, 480, 276, 481, 482, 284,
    481, 484, 483, 485, 290, 481, 487, 488, 293, 486,
    489, 482, 484, 491, 492, 490, 493, 5, 479, 282,
    495, 496, 62, 1, 497, 498, 499, 459, 500, 326,
    498, 501, 502, 56, 495, 504, 62, 334, 505, 506,
    507, 459, 508, 326, 507, 509, 510, 343, 505, 512,
    513, 459, 514, 326, 513, 515, 516, 487, 35, 519,
    520, 521, 293, 352, 523, 522, 524, 518, 525, 487,
    526, 527, 39, 19, 529, 20, 530, 531, 293, 518,
    532, 533, 527, 1, 44, 5, 536, 56, 537, 538,
    62, 535, 539, 540, 282, 537, 542, 62, 1, 543,
    544, 541, 545, 546, 547, 4, 536, 56, 549, 289,
    550, 551, 552, 547, 548, 553, 546, 547, 289, 539,
    556, 557, 547, 555, 558, 554, 559, 544, 561, 320,
    561, 562, 563, 334, 539, 565, 566, 320, 566, 567,
    568, 343, 539, 570, 571, 320, 550, 62, 343, 573,
    574, 575, 572, 576, 5, 578, 56, 579, 580, 62,
    535, 581, 582, 282, 579, 584, 62, 1, 585, 586,
    583, 587, 588, 547, 4, 578, 56, 590, 591, 62,
    289, 592, 593, 594, 547, 589, 595, 588, 547, 289,
    581, 598, 599, 547, 597, 600, 596, 601, 586, 603,
    320, 603, 604, 605, 334, 581, 607, 608, 320, 608,
    609, 610, 343, 581, 612, 613, 320, 613, 614, 615,
    31, 617, 4, 618, 276, 619, 620, 284, 619, 622,
    621, 623, 290, 619, 625, 626, 293, 624, 627, 620,
    622, 629, 630, 628, 631, 5, 617, 282, 633, 634,
    62, 1, 635, 636, 457, 318, 638, 639, 325, 640,
    641, 637, 642, 636, 643, 644, 230, 48, 56, 633,
    647, 62, 646, 648, 649, 650, 642, 650, 651, 652,
    230, 82, 654, 648, 655, 656, 642, 656, 657, 658,
    625, 5, 617, 56, 661, 662, 62, 289, 663, 664,
    665, 547, 660, 666, 625, 667, 668, 282, 661, 670,
    62, 1, 671, 672, 673, 547, 660, 674, 675, 668,
    334, 663, 677, 678, 547, 660, 679, 680, 668, 343,
    663, 682, 683, 547, 660, 684, 685, 668, 5, 687,
    56, 688, 535, 689, 690, 282, 688, 1, 692, 693,
    691, 694, 695, 547, 289, 689, 697, 698, 547, 696,
    699, 695, 547, 698, 547, 701, 702, 700, 703, 692,
    62, 1, 705, 706, 707, 320, 693, 709, 708, 710,
    689, 62, 334, 712, 713, 714, 320, 714, 715, 716,
    343, 712, 718, 719, 320, 719, 720, 721, 31, 723,
    4, 724, 276, 725, 726, 284, 725, 728, 727, 729,
    290, 725, 731, 732, 293, 730, 733, 726, 728, 735,
    736, 734, 737, 5, 723, 282, 739, 740, 62, 1,
    741, 742, 743, 320, 743, 744, 745, 56, 739, 747,
    62, 334, 748, 749, 750, 320, 750, 751, 752, 343,
    748, 754, 755, 320, 755, 756, 757, 1, 20, 759,
    760, 761, 1, 56, 763, 4, 764, 765, 1, 282,
    767, 4, 768, 765, 766, 769, 762, 770, 770, 771,
    772, 289, 56, 774, 4, 775, 765, 44, 56, 777,
    4, 778, 765, 776, 779, 780, 769, 775, 687, 778,
    687, 782, 783, 768, 687, 784, 785, 786, 781, 787,
    781, 788, 789, 791, 793, 792, 794, 791, 796, 797,
    793, 796, 799, 798, 800, 802, 803, 804, 805, 6,
    807, 808, 809, 809, 547, 807, 44, 812, 77, 813,
    547, 813, 815, 814, 816, 282, 315, 802, 818, 819,
    4, 1, 97, 821, 48, 1, 98, 823, 48, 822,
    824, 821, 82, 823, 82, 826, 827, 97, 352, 98,
    352, 829, 830, 1, 831, 833, 835, 834, 836, 833,
    835, 838, 839, 837, 840, 836, 841, 842, 834, 843,
    844, 836, 834, 1, 352, 353, 848, 842, 849, 844,
    846, 850, 1, 852, 803, 855, 854, 856, 97, 802,
    858, 859, 860, 861, 98, 802, 863, 859, 864, 861,
    862, 865, 1, 866, 868, 858, 870, 871, 4, 863,
    870, 873, 4, 872, 874, 1, 875, 43, 877, 51,
    877, 878, 879, 30, 881, 30, 881, 883, 881, 884,
    885, 886, 882, 887, 889, 884, 888, 890, 882, 891,
    892, 887, 893, 894, 1, 896, 898, 803, 899, 112,
    247, 901, 9, 902, 898, 903, 803, 899, 904, 905,
    907, 4, 902, 907, 909, 4, 908, 910, 911, 906,
    912, 900, 913, 915, 916, 915, 918, 917, 919, 24,
    920, 921, 922, 1, 923, 1, 24, 915, 922, 4,
    927, 915, 929, 916, 929, 918, 930, 931, 928, 932,
    929, 916, 929, 918, 934, 935, 933, 936, 1, 938,
    940, 4, 941, 307, 62, 9, 943, 944, 309, 945,
    9, 907, 14, 948, 949, 4, 950, 947, 951, 952,
    946, 953, 9, 249, 955, 309, 956, 954, 957, 248,
    11, 1, 959, 1, 259, 899, 962, 6, 16, 316,
    309, 965, 312, 16, 1, 967, 43, 266, 51, 266,
    969, 970, 268, 288, 972, 973, 974, 33, 975, 33,
    976, 977, 106, 972, 978, 288, 979, 980, 1, 289,
    983, 268, 63, 986, 987, 63, 5, 989, 617, 988,
    990, 986, 63, 992, 993, 994, 547, 972, 996, 547,
    995, 997, 994, 547, 972, 1000, 293, 983, 1002, 993,
    106, 1003, 1004, 1005, 33, 1006, 33, 1007, 1008, 106,
    1001, 1009, 1000, 293, 1011, 1009, 1010, 1012, 999, 1013,
    998, 1014, 993, 1016, 1017, 997, 1015, 1018, 983, 72,
    1020, 1021, 75, 268, 72, 1023, 1024, 75, 1, 943,
    309, 293, 75, 1028, 1029, 1028, 1027, 1030, 0, 523,
    1032, 266, 1033, 288, 1034, 336, 821, 112, 983, 1037,
    112, 112, 1039, 112, 802, 282, 1041, 5, 1042, 277,
    97, 1043, 1040, 1044, 1045, 96, 1046, 56, 5, 1048,
    277, 82, 1049, 1040, 1050, 1051, 114, 1052, 1047, 1053,
    48, 1049, 1040, 1055, 1056, 114, 1057, 1054, 1058, 1038,
    1059, 1036, 1060, 823, 98, 1043, 1040, 1063, 1064, 96,
    1065, 1066, 1053, 1067, 1058, 1038, 1068, 1062, 1069, 1061,
    1070, 112, 268, 1072, 1073, 547, 1075, 1077, 1076, 1078,
    48, 336, 1, 1080, 992, 547, 82, 336, 1, 1083,
    858, 302, 863, 302, 1085, 1086, 1, 1087, 1034, 424,
    1042, 399, 97, 1090, 1040, 1091, 1092, 96, 1093, 1048,
    399, 82, 1095, 1040, 1096, 1097, 114, 1098, 1094, 1099,
    48, 1095, 1040, 1101, 1102, 114, 1103, 1100, 1104, 1038,
    1105, 1036, 1106, 98, 1090, 1040, 1108, 1109, 96, 1110,
    1111, 1099, 1112, 1104, 1038, 1113, 1062, 1114, 1107, 1115,
    48, 424, 1, 1117, 82, 424, 1, 1119, 858, 417,
    863, 417, 1121, 1122, 1, 1123, 1034, 467, 1042, 435,
    97, 1126, 1040, 1127, 1128, 96, 1129, 1048, 435, 82,
    1131, 1040, 1132, 1133, 114, 1134, 1130, 1135, 48, 1131,
    1040, 1137, 1138, 114, 1139, 1136, 1140, 1038, 1141, 1036,
    1142, 98, 1126, 1040, 1144, 1145, 96, 1146, 1147, 1135,
    1148, 1140, 1038, 1149, 1062, 1150, 1143, 1151, 48, 467,
    1, 1153, 82, 467, 1, 1155, 858, 453, 863, 453,
    1157, 1158, 1, 1159, 1034, 505, 1042, 479, 97, 1162,
    1040, 1163, 1164, 96, 1165, 1048, 479, 82, 1167, 1040,
    1168, 1169, 114, 1170, 1166, 1171, 48, 1167, 1040, 1173,
    1174, 114, 1175, 1172, 1176, 1038, 1177, 1036, 1178, 98,
    1162, 1040, 1180, 1181, 96, 1182, 1183, 1171, 1184, 1176,
    1038, 1185, 1062, 1186, 1179, 1187, 48, 505, 1, 1189,
    82, 505, 1, 1191, 858, 497, 863, 497, 1193, 1194,
    1, 1195, 1034, 539, 983, 293, 1198, 112, 1199, 1042,
    536, 97, 1201, 1041, 992, 1203, 1204, 1202, 1205, 1040,
    1206, 1207, 96, 1208, 1048, 536, 82, 1210, 56, 992,
    1212, 1204, 1211, 1213, 1040, 1214, 1215, 114, 1216, 1209,
    1217, 48, 1210, 1219, 1213, 1040, 1220, 1221, 114, 1222,
    1218, 1223, 1200, 1224, 983, 293, 1226, 112, 1227, 1228,
    1224, 1225, 1229, 1036, 1230, 98, 1201, 1232, 1205, 1040,
    1233, 1234, 96, 1235, 1236, 1217, 1237, 1223, 1200, 1238,
    1228, 1238, 1239, 1240, 1062, 1241, 1231, 1242, 992, 1243,
    1073, 1245, 293, 1038, 992, 106, 1247, 1248, 1249, 33,
    1250, 33, 1251, 1252, 106, 1246, 1253, 1245, 293, 1255,
    1253, 1254, 1256, 1075, 1077, 1258, 1259, 48, 539, 1,
    1261, 986, 547, 82, 539, 1, 1264, 858, 543, 863,
    543, 1266, 1267, 1, 1268, 1034, 581, 1042, 578, 97,
    1271, 1272, 1205, 1040, 1273, 1274, 96, 1275, 1048, 578,
    82, 1277, 1278, 1213, 1040, 1279, 1280, 114, 1281, 1276,
    1282, 48, 1277, 1284, 1213, 1040, 1285, 1286, 114, 1287,
    1283, 1288, 1200, 1289, 1228, 1289, 1290, 1291, 1036, 1292,
    98, 1271, 1294, 1205, 1040, 1295, 1296, 96, 1297, 1298,
    1282, 1299, 1288, 1200, 1300, 1228, 1300, 1301, 1302, 1062,
    1303, 1293, 1304, 992, 1305, 48, 581, 1, 1307, 82,
    581, 1, 1309, 858, 585, 863, 585, 1311, 1312, 1,
    1313, 1034, 648, 1042, 617, 97, 1316, 1040, 1317, 1318,
    96, 1319, 1048, 617, 82, 1321, 1040, 1322, 1323, 114,
    1324, 1320, 1325, 48, 1321, 1040, 1327, 1328, 114, 1329,
    1326, 1330, 1038, 1331, 1036, 1332, 98, 1316, 1040, 1334,
    1335, 96, 1336, 1337, 1325, 1338, 1330, 1038, 1339, 1062,
    1340, 1333, 1341, 48, 648, 1, 1343, 986, 82, 648,
    1, 1346, 858, 635, 863, 635, 1348, 1349, 1, 1350,
    1034, 712, 1042, 687, 97, 1353, 1354, 1205, 1, 1355,
    1356, 1048, 687, 44, 1358, 1359, 1213, 1, 1360, 1361,
    1357, 1362, 1040, 1355, 1364, 96, 1365, 82, 1358, 1367,
    1213, 1040, 1368, 1369, 114, 1370, 1366, 1371, 48, 1358,
    1373, 1213, 1040, 1374, 1375, 114, 1376, 1372, 1377, 1200,
    1378, 1228, 1378, 1379, 1380, 1363, 1381, 98, 1353, 1383,
    1205, 1, 1384, 1385, 1386, 1362, 1040, 1384, 1388, 96,
    1389, 1390, 1371, 1391, 1377, 1200, 1392, 1228, 1392, 1393,
    1394, 1387, 1395, 1382, 1396, 992, 1397, 48, 712, 1,
    1399, 986, 547, 82, 712, 1, 1402, 858, 705, 863,
    705, 1404, 1405, 1, 1406, 1034, 748, 1042, 723, 97,
    1409, 1040, 1410, 1411, 96, 1412, 1048, 723, 82, 1414,
    1040, 1415, 1416, 114, 1417, 1413, 1418, 48, 1414, 1040,
    1420, 1421, 114, 1422, 1419, 1423, 1038, 1424, 1036, 1425,
    98, 1409, 1040, 1427, 1428, 96, 1429, 1430, 1418, 1431,
    1423, 1038, 1432, 1062, 1433, 1426, 1434, 1075, 1077, 1436,
    48, 748, 1, 1438, 82, 748, 1, 1440, 858, 741,
    863, 741, 1442, 1443, 1, 1444, 1, 16, 1, 38,
    1446, 1447, 1449, 1449, 1451, 293, 1450, 1452, 1, 248,
    307, 1455, 75, 1457, 1458, 293, 1460, 1461, 1032, 1463,
    1464, 1460, 1466, 1465, 1467, 1462, 1468, 4, 14, 1470,
    1460, 1471, 1472, 1469, 1473, 1475, 1476, 1475, 1478, 1479,
    1477, 1480, 1482, 44, 1483, 1481, 1484, 523, 1485, 1,
    1486, 30, 72, 1488, 1489, 75, 1475, 1491, 523, 1492,
    1, 1493, 1, 35, 1498, 1498, 898, 1500, 803, 1501,
    1502, 293, 1499, 1503, 66, 1505, 293, 1, 307, 57,
    4, 1508, 309, 1509, 1510, 1512, 1514, 1514, 1516, 1515,
    1517, 1519, 1521, 1523, 1525, 1527, 1529, 1531, 1533, 1535,
    352, 1537, 1538, 352, 1540, 1541, 352, 1543, 1544, 352,
    1546, 1547, 1549, 1521, 1550, 1549, 1523, 1552, 1549, 234,
    1554, 1549, 1525, 1556, 1549, 1558, 1559, 1549, 1561, 1562,
    1549, 1564, 1565, 938, 940, 1567, 1521, 1568, 1567, 1523,
    1570, 1567, 1525, 1572, 1567, 1460, 1574, 1567, 1576, 1577,
    1567, 1579, 1580, 1567, 1582, 1583, 1567, 1585, 1586, 1567,
    1588, 1589, 1567, 1591, 1592, 1567, 1457, 1594, 1567, 1596,
    1597, 1567, 1599, 1600, 1567, 1602, 1603, 1567, 1605, 1606,
    938, 1608, 1609, 938, 1611, 1612, 938, 1614, 1615, 938,
    1617, 1618, 938, 1620, 1621, 938, 2, 1623, 938, 1625,
    1626, 1628, 1521, 1629, 1628, 1523, 1631, 1628, 234, 1633,
    1628, 1525, 1635, 1628, 1460, 1637, 1628, 1576, 1639, 1628,
    1579, 1641, 1628, 1582, 1643, 1628, 1585, 1645, 1628, 1588,
    1647, 1628, 1591, 1649, 1628, 1457, 1651, 1628, 1596, 1653,
    1628, 1599, 1655, 1628, 1602, 1657, 1628, 1605, 1659, 1661,
    1521, 1662, 1661, 1523, 1664, 1661, 234, 1666, 1661, 1525,
    1668, 1661, 1460, 1670, 1661, 1576, 1672, 1661, 1579, 1674,
    1661, 1582, 1676, 1661, 1585, 1678, 1661, 1588, 1680, 1661,
    1591, 1682, 1661, 1457, 1684, 1661, 1596, 1686, 1661, 1599,
    1688, 1661, 1602, 1690, 1661, 1605, 1692, 1694, 1696, 1521,
    1697, 1696, 1523, 1699, 1696, 234, 1701, 1696, 1525, 1703,
    1696, 1460, 1705, 1696, 1576, 1707, 1696, 1579, 1709, 1696,
    1582, 1711, 1696, 1585, 1713, 1696, 1588, 1715, 1696, 1591,
    1717, 1696, 1457, 1719, 1696, 1596, 1721, 1696, 1599, 1723,
    1696, 1602, 1725, 1696, 1605, 1727, 1729, 1521, 1730, 1729,
    1523, 1732, 1729, 234, 1734, 1729, 1525, 1736, 1729, 1460,
    1738, 1729, 1576, 1740, 1729, 1579, 1742, 1729, 1582, 1744,
    1729, 1585, 1746, 1729, 1588, 1748, 1729, 1591, 1750, 1729,
    1457, 1752, 1729, 1596, 1754, 1729, 1599, 1756, 1729, 1602,
    1758, 1729, 1605, 1760, 2, 1521, 1762, 2, 1523, 1764,
    2, 234, 1766, 2, 1525, 1768, 2, 1576, 1770, 2,
    1579, 1772, 2, 1582, 1774, 2, 1585, 1776, 2, 1588,
    1778, 2, 1591, 1780, 2, 1596, 1782, 1783, 1784, 1785,
    1786, 1784, 1788, 1789, 1784, 1791, 1792, 1784, 1794, 1795,
    1784, 1797, 1798, 1784, 1800, 1801, 1784, 1803, 1804, 1784,
    1806, 1807, 1784, 1809, 1810, 1784, 1546, 1812, 2, 1599,
    1814, 2, 1602, 1816, 2, 1605, 1818, 1820, 1523, 1821,
    1820, 234, 1823, 1820, 1825, 1826, 1828, 247, 1830, 1831,
    247, 1833, 1834, 247, 1836, 1837, 248, 1839, 1840, 248,
    1842, 1843, 248, 1845, 1846, 248, 1848, 1849, 248, 1851,
    1852, 248, 1854, 1855, 259, 4, 1857, 259, 1859, 1860,
    259, 1862, 1863, 259, 1865, 1866, 259, 1868, 1869, 259,
    1871, 1872, 259, 1874, 1875, 259, 1877, 1878, 259, 1880,
    1881, 259, 1883, 1884, 259, 1886, 1887, 259, 1889, 1890,
    259, 1892, 1893, 259, 1895, 1896, 259, 1898, 1899, 259,
    1901, 1902, 259, 1904, 1905, 259, 1907, 1908, 259, 1910,
    1911, 259, 19, 1913, 803, 1914, 259, 1916, 1917, 248,
    1919, 1920, 248, 307, 1922, 251, 1923, 1922, 1925, 1926,
    1922, 1928, 1929, 1922, 1931, 1932, 1922, 1934, 1935, 1922,
    57, 1937, 803, 1938, 1937, 1940, 1941, 1937, 1943, 1944,
    1937, 1946, 1947, 250, 1949, 1950, 250, 1952, 1953, 250,
    1955, 1956, 250, 1958, 1959, 250, 1961, 1962, 250, 1964,
    1965, 250, 1967, 1968, 250, 1934, 1970, 250, 1972, 1973,
    250, 1975, 1976, 250, 1978, 1979, 248, 1981, 1982, 4,
    1983, 1982, 1985, 1986, 1982, 877, 1988, 1982, 1990, 1991,
    248, 1993, 1994, 248, 1996, 1997, 248, 1999, 2000, 248,
    2002, 2003, 248, 2005, 2006, 247, 2008, 2009, 247, 2011,
    2012, 247, 2014, 2015, 8, 1830, 2017, 8, 2019, 2020,
    8, 1833, 2022, 10, 1839, 2024, 10, 1842, 2026, 10,
    1845, 2028, 10, 1848, 2030, 10, 1851, 2032, 10, 1854,
    2034, 17, 4, 2036, 17, 1859, 2038, 17, 1862, 2040,
    17, 1865, 2042, 17, 1868, 2044, 17, 1871, 2046, 17,
    1874, 2048, 17, 1877, 2050, 17, 1880, 2052, 17, 1883,
    2054, 17, 1886, 2056, 17, 1889, 2058, 17, 1892, 2060,
    17, 1895, 2062, 17, 1898, 2064, 17, 1901, 2066, 17,
    1904, 2068, 17, 1907, 2070, 17, 1910, 2072, 17, 19,
    2074, 803, 2075, 17, 1916, 2077, 10, 1919, 2079, 10,
    307, 2081, 251, 2082, 2081, 1925, 2084, 2081, 1928, 2086,
    2081, 1931, 2088, 2081, 1934, 2090, 2081, 57, 2092, 803,
    2093, 2092, 1940, 2095, 2092, 1943, 2097, 2092, 1946, 2099,
    255, 1949, 2101, 255, 1952, 2103, 255, 1955, 2105, 255,
    2107, 2108, 255, 1958, 2110, 255, 1961, 2112, 255, 1964,
    2114, 255, 1967, 2116, 255, 1934, 2118, 255, 1972, 2120,
    255, 1975, 2122, 255, 1978, 2124, 10, 1981, 2126, 4,
    2127, 2126, 1985, 2129, 2126, 877, 2131, 2126, 1990, 2133,
    10, 1993, 2135, 10, 1996, 2137, 10, 1999, 2139, 10,
    2002, 2141, 10, 2005, 2143, 8, 2145, 2146, 8, 2011,
    2148, 8, 2150, 2151, 896, 1839, 2153, 896, 1842, 2155,
    896, 1845, 2157, 896, 1848, 2159, 896, 11, 2161, 896,
    1851, 2163, 896, 1854, 2165, 896, 16, 2167, 896, 1919,
    2169, 896, 307, 2171, 896, 249, 2173, 251, 2174, 2173,
    1949, 2176, 2173, 1952, 2178, 2173, 1955, 2180, 2173, 2107,
    2182, 2173, 1958, 2184, 2173, 1961, 2186, 2173, 1964, 2188,
    2173, 1967, 2190, 2173, 1934, 2192, 2173, 1972, 2194, 2173,
    1975, 2196, 2173, 1978, 2198, 896, 1981, 2200, 896, 1993,
    2202, 896, 1996, 2204, 896, 1999, 2206, 896, 2002, 2208,
    896, 2005, 2210, 2212, 2214, 312, 1839, 2216, 312, 1842,
    2218, 312, 1845, 2220, 312, 1848, 2222, 312, 11, 2224,
    312, 1851, 2226, 312, 907, 2228, 312, 1854, 2230, 967,
    4, 2232, 967, 1859, 2234, 967, 1862, 2236, 967, 1865,
    2238, 967, 1868, 2240, 967, 1871, 2242, 967, 1874, 2244,
    967, 1877, 2246, 967, 1880, 2248, 967, 1883, 2250, 967,
    1886, 2252, 967, 1889, 2254, 967, 1892, 2256, 967, 1895,
    2258, 967, 1898, 2260, 967, 1901, 2262, 967, 1904, 2264,
    967, 1907, 2266, 967, 1910, 2268, 967, 19, 2270, 803,
    2271, 967, 1916, 2273, 312, 1919, 2275, 312, 307, 2277,
    251, 2278, 2277, 1925, 2280, 2277, 1928, 2282, 2277, 1931,
    2284, 2277, 1934, 2286, 2277, 57, 2288, 803, 2289, 2288,
    1940, 2291, 2288, 1943, 2293, 2288, 1946, 2295, 312, 249,
    2297, 312, 1981, 2299, 312, 1993, 2301, 312, 1996, 2303,
    312, 1999, 2305, 312, 2002, 2307, 312, 2005, 2309, 35,
    4, 2311, 35, 2313, 2314, 35, 2316, 2317, 35, 2319,
    2320, 35, 2322, 2323, 35, 2325, 2326, 35, 2328, 2329,
    35, 2331, 2332, 35, 2334, 2335, 37, 1546, 2337, 37,
    2339, 2340, 37, 2342, 2343, 37, 1901, 2345, 37, 2347,
    2348, 37, 2350, 2351, 37, 803, 2353, 37, 1599, 2355,
    39, 4, 2357, 39, 1859, 2359, 39, 1862, 2361, 39,
    1865, 2363, 39, 1868, 2365, 39, 1871, 2367, 39, 1874,
    2369, 39, 1877, 2371, 39, 1880, 2373, 39, 1883, 2375,
    39, 1886, 2377, 39, 1889, 2379, 39, 1892, 2381, 39,
    1895, 2383, 39, 1898, 2385, 39, 1901, 2387, 39, 1904,
    2389, 39, 1907, 2391, 39, 1910, 2393, 529, 803, 2395,
    39, 1916, 2397, 37, 2399, 2400, 37, 1916, 2402, 35,
    2404, 2405, 35, 2407, 2408, 35, 2410, 2411, 35, 2413,
    2414, 35, 1498, 2416, 1839, 2417, 2416, 1842, 2419, 2416,
    1845, 2421, 2416, 1848, 2423, 2416, 11, 2425, 2416, 1851,
    2427, 2416, 907, 2429, 2416, 1854, 2431, 2416, 16, 2433,
    2416, 1919, 2435, 2416, 307, 2437, 2416, 249, 2439, 2416,
    1981, 2441, 2416, 1993, 2443, 2416, 1996, 2445, 2416, 1999,
    2447, 2416, 2002, 2449, 2416, 2005, 2451, 35, 2453, 2454,
    35, 2456, 2457, 35, 2459, 2460, 35, 2462, 2463, 35,
    2465, 2466, 35, 2468, 2469, 2459, 24, 4, 2472, 24,
    2474, 2475, 112, 50, 2476, 2477, 24, 2479, 2480, 24,
    2482, 2483, 26, 2485, 2486, 26, 2488, 2489, 26, 1791,
    2491, 26, 2493, 2494, 26, 2496, 2497, 26, 2499, 2500,
    26, 2502, 2503, 26, 2505, 2506, 24, 922, 2508, 2509,
    2510, 2508, 2512, 2513, 2508, 2515, 2516, 2508, 1943, 2518,
    2508, 2520, 2521, 2508, 2523, 2524, 803, 2525, 2524, 2527,
    2528, 803, 2529, 2528, 38, 2531, 2524, 38, 2533, 2508,
    19, 2535, 24, 2537, 2538, 24, 2540, 2541, 2542, 2543,
    2541, 2545, 2546, 2541, 2548, 2549, 2541, 2551, 2552, 2541,
    2554, 2555, 2541, 2557, 2558, 803, 2559, 2558, 2509, 2561,
    2558, 2512, 2563, 2558, 2515, 2565, 2558, 1943, 2567, 2558,
    2520, 2569, 2558, 2523, 2571, 2558, 19, 2573, 2541, 1599,
    2575, 2541, 2577, 2578, 2541, 2580, 2581, 24, 2583, 2584,
    2586, 4, 2587, 2586, 2589, 2590, 2586, 2592, 2593, 2586,
    2595, 2596, 2586, 2598, 2599, 2586, 2601, 2602, 2586, 2604,
    2605, 2586, 54, 2607, 2586, 2609, 2610, 2586, 2612, 2613,
    2586, 2615, 2616, 2586, 2474, 2618, 2586, 2620, 2621, 2586,
    2623, 2624, 2586, 2626, 2627, 2586, 2629, 2630, 2586, 2632,
    2633, 2586, 1599, 2635, 2637, 44, 4, 2639, 44, 2641,
    2642, 44, 2644, 2645, 44, 1533, 2647, 44, 2649, 2650,
    44, 2652, 2653, 777, 803, 2655, 777, 2657, 2658, 777,
    2652, 2660, 777, 1077, 2662, 777, 1075, 2664, 777, 2666,
    2667, 777, 2669, 2670, 777, 57, 2672, 803, 2673, 2672,
    1940, 2675, 2672, 1943, 2677, 2672, 1946, 2679, 44, 266,
    2681, 44, 24, 2683, 2685, 2687, 2689, 2691, 266, 2693,
    2694, 266, 2696, 2697, 266, 2699, 2700, 289, 2702, 2703,
    289, 2705, 2706, 289, 986, 2708, 289, 2657, 2710, 289,
    2652, 2712, 289, 2666, 2714, 289, 2669, 2716, 774, 803,
    2718, 774, 2657, 2720, 774, 2652, 2722, 774, 2666, 2724,
    774, 2669, 2726, 774, 57, 2728, 803, 2729, 2728, 1940,
    2731, 2728, 1943, 2733, 2728, 1946, 2735, 2737, 86, 2739,
    2740, 99, 1523, 2742, 99, 350, 2744, 99, 1533, 2746,
    99, 2748, 2749, 99, 2751, 2752, 99, 352, 2754, 1537,
    2755, 2754, 1540, 2757, 2754, 1543, 2759, 2754, 353, 2761,
    2754, 1546, 2763, 99, 2765, 2766, 2767, 2768, 2766, 1523,
    2770, 2766, 2772, 2773, 2766, 1549, 2775, 99, 2777, 2778,
    99, 2780, 2781, 99, 938, 2783, 99, 1564, 2785, 1521,
    2786, 2785, 1523, 2788, 2785, 234, 2790, 2785, 1525, 2792,
    2785, 1576, 2794, 2785, 1579, 2796, 2785, 1582, 2798, 2785,
    1585, 2800, 2785, 1588, 2802, 2785, 1591, 2804, 2785, 1457,
    2806, 2785, 1596, 2808, 2785, 1599, 2810, 2785, 1602, 2812,
    2785, 1605, 2814, 99, 2816, 2817, 99, 2819, 2820, 99,
    35, 2822, 99, 2586, 2824, 99, 44, 2826, 4, 2827,
    2826, 2641, 2829, 2826, 2644, 2831, 2826, 1533, 2833, 2826,
    2649, 2835, 2826, 2652, 2837, 2826, 56, 2839, 2826, 266,
    2841, 2826, 24, 2843, 99, 266, 2845, 99, 2737, 2847,
    99, 802, 2849, 2850, 2851, 2849, 2853, 2854, 2849, 2856,
    2857, 2849, 2859, 2860, 2849, 2862, 2863, 2849, 2865, 2866,
    2849, 2868, 2869, 2849, 2871, 2872, 2849, 2874, 2875, 2876,
    2877, 2875, 2879, 2880, 2875, 2882, 2883, 2875, 2885, 2886,
    2875, 1602, 2888, 2849, 2890, 2891, 2876, 2892, 2891, 2879,
    2894, 2891, 2882, 2896, 2891, 2885, 2898, 2891, 1602, 2900,
    2849, 2902, 2903, 2849, 870, 2905, 2876, 2906, 2905, 2879,
    2908, 2905, 2882, 2910, 2905, 2885, 2912, 2905, 1602, 2914,
    2849, 2916, 2917, 2849, 2919, 2920, 2849, 2922, 2923, 2849,
    2925, 2926, 2849, 2928, 2929, 803, 2930, 2849, 859, 2932,
    2933, 2934, 2932, 2936, 2937, 2932, 2939, 2940, 2849, 2942,
    2943, 2849, 2945, 2946, 2849, 282, 2948, 803, 2949, 2948,
    2657, 2951, 2948, 2652, 2953, 2948, 1077, 2955, 2948, 1075,
    2957, 2948, 2666, 2959, 2948, 2669, 2961, 2948, 57, 2963,
    803, 2964, 2963, 1940, 2966, 2963, 1943, 2968, 2963, 1946,
    2970, 2849, 852, 2972, 4, 2973, 2972, 2975, 2976, 2972,
    2978, 2979, 2972, 2981, 2982, 2972, 2984, 2985, 2972, 2987,
    2988, 2972, 2990, 2991, 2972, 2993, 2994, 2972, 2996, 2997,
    2972, 2999, 3000, 2972, 3002, 3003, 2849, 3005, 3006, 2849,
    3008, 3009, 2849, 3011, 3012, 2849, 3014, 3015, 2849, 3017,
    3018, 2849, 3020, 3021, 99, 807, 3023, 3024, 3025, 3023,
    3027, 3028, 3023, 3030, 3031, 3023, 3033, 3034, 3023, 3036,
    3037, 3023, 3039, 3040, 3023, 44, 3042, 4, 3043, 3042,
    68, 3045, 3042, 66, 3047, 3042, 3049, 3050, 3042, 2641,
    3052, 3042, 2644, 3054, 3042, 1533, 3056, 3042, 2649, 3058,
    3042, 2652, 3060, 3042, 56, 3062, 3042, 266, 3064, 3042,
    24, 3066, 3023, 2687, 3068, 99, 2459, 3070, 99, 3072,
    3073, 99, 3075, 3076, 231, 14, 3078, 3080, 14, 3081,
    3083, 14, 3084, 1507, 309, 3086, 14, 3087, 24, 3089,
    3090, 14, 3091, 2508, 4, 3093, 14, 3094, 2524, 4,
    3096, 14, 3097, 237, 868, 3099, 244, 868, 3101, 265,
    868, 3103, 2, 1460, 3105, 868, 3106, 1, 19, 3108,
    20, 3109, 868, 3110, 24, 915, 3112, 868, 3113, 1,
    68, 3115, 868, 3116, 1, 3118, 3119, 1, 2527, 3121,
    1460, 1461, 3123, 1472, 2, 3124, 1, 3125, 3126, 4,
    3127, 14, 3128, 2, 1462, 1, 3130, 3131, 1596, 3132,
    1, 2874, 3134, 4, 3135, 14, 3136, 1, 2890, 3138,
    4, 3139, 14, 3140, 1, 807, 3142, 44, 3143, 68,
    3144, 3143, 66, 3146, 3143, 3049, 3148, 240, 868, 3150,
    3131, 1457, 3152, 1, 27, 3154, 14, 3155, 1, 25,
    3157, 3158, 3159, 14, 3160, 1, 2540, 3162, 4, 3163,
    14, 3164, 3162, 2557, 3166, 4, 3167, 14, 3168, 764,
    14, 3170, 768, 14, 3172, 925, 2557, 3174, 24, 3176,
    3177, 35, 3179, 3180, 1, 3182, 3183, 1, 3185, 3186,
    1, 3188, 3189, 1, 3191, 3192, 1, 3194, 3195, 1,
    3197, 3198, 1, 3200, 3201, 1, 3203, 3204, 1, 3206,
    3207, 1, 3209, 3210, 1, 3212, 3213, 1, 915, 3215,
    3212, 3216, 3214, 3217, 3218, 547, 1, 3220, 3221, 1,
    3223, 3224, 1, 3226, 3227, 1, 3229, 3230, 1, 3232,
    3233, 1, 3235, 3236, 1, 3238, 3239, 1, 3241, 3242,
    1, 3244, 3245, 1, 3247, 3248, 1729, 4, 3250, 3251,
    293, 1661, 4, 3253, 3254, 293, 1628, 4, 3256, 3257,
    293, 3130, 4, 3259, 3260, 293, 2586, 877, 3262, 3263,
    293, 352, 3265, 293, 252, 3267, 293, 248, 898, 3269,
    803, 3270, 3271, 293, 250, 309, 3273, 3274, 293, 57,
    58, 3276, 61, 307, 3277, 248, 3278, 3279, 309, 3280,
    3281, 293, 3276, 61, 307, 3283, 248, 3284, 3285, 309,
    3286, 3287, 293, 250, 2107, 3289, 3290, 293, 256, 3292,
    293, 10, 907, 3294, 4, 3295, 3296, 293, 255, 309,
    3298, 3299, 293, 10, 3278, 3301, 309, 3302, 3303, 293,
    35, 3305, 293, 1, 907, 14, 3308, 948, 4, 3309,
    3307, 3310, 3311, 3312, 293, 1820, 4, 3314, 3315, 293,
    10, 898, 3317, 803, 3318, 3319, 293, 1, 3089, 3321,
    3322, 3323, 293, 2475, 3325, 293, 3112, 3212, 3327, 3328,
    293, 3330, 30, 3331, 30, 3332, 915, 3333, 1, 3334,
    3335, 3336, 293, 354, 3338, 293, 26, 3340, 293, 2541,
    3342, 293, 1696, 4, 3344, 3345, 293, 250, 3347, 293,
    255, 3349, 293, 3348, 3350, 2173, 3352, 293, 3351, 3353,
    2297, 3355, 293, 3354, 3356, 877, 3358, 293, 2765, 3360,
    3361, 3362, 293, 812, 54, 3364, 3365, 293, 1041, 3367,
    293, 802, 1546, 3369, 3370, 293, 1564, 3372, 293, 899,
    3374, 293, 902, 249, 3376, 251, 899, 3377, 3375, 3378,
    3308, 948, 4, 3380, 907, 3381, 3382, 3383, 293, 3384,
    3378, 249, 309, 3386, 3387, 293, 3388, 3378, 3089, 3390,
    293, 915, 3392, 293, 2540, 4, 3394, 3395, 293, 922,
    2523, 3397, 3397, 4, 3399, 3400, 293, 3398, 3401, 922,
    927, 3404, 293, 3403, 3405, 940, 3407, 293, 307, 309,
    3409, 3410, 293, 1, 288, 56, 1075, 3413, 3414, 293,
    237, 240, 1, 3416, 31, 1028, 3419, 1028, 31, 1028,
    3421, 3422, 3420, 3423, 3418, 3424, 3427, 3422, 3420, 3428,
    3426, 3429, 3425, 3430, 54, 77, 3432, 808, 3433, 268,
    3434, 983, 3435, 88, 3436, 90, 3437, 92, 3438, 110,
    3439, 126, 3440, 171, 3441, 173, 3442, 94, 1, 3443,
    269, 3445, 1028, 3446, 1028, 3445, 1028, 3448, 3449, 3447,
    3450, 1, 244, 3448, 3422, 3420, 3453, 1, 265, 1,
    354, 3457, 3422, 3420, 3458, 4, 14, 3130, 3460, 1564,
    1462, 3462, 3460, 3461, 3463, 1, 3464, 14, 3466, 1028,
    3467, 1028, 3466, 1028, 3469, 3470, 3468, 3471, 907, 3460,
    1, 3473, 3475, 3470, 3468, 3476, 3478, 3470, 3468, 3479,
    3481, 3482, 3480, 3483, 3477, 3484, 309, 14, 249, 3486,
    1, 3487, 861, 868, 859, 3489, 1, 3490, 868, 3492,
    1028, 3493, 1028, 3492, 1028, 3495, 3496, 3494, 3497, 1,
    21, 3500, 3422, 3420, 3501, 2928, 20, 1, 3503, 1,
    3112, 3506, 3422, 3420, 3507, 56, 4, 1, 3509, 3511,
    3422, 3420, 3512, 282, 4, 1, 3514, 48, 68, 1,
    3516, 3518, 3422, 3420, 3519, 82, 68, 1, 3521, 3523,
    3422, 3420, 3524, 870, 3460, 1, 3526, 1, 1077, 30,
    3530, 1028, 3531, 1028, 3529, 3532, 3420, 3533, 791, 796,
    3536, 796, 3535, 3537, 793, 796, 3538, 3539, 1, 3540,
    796, 3542, 1028, 3543, 1028, 3542, 1028, 3545, 3546, 3544,
    3547, 3549, 1495, 1, 3550, 1495, 3552, 1495, 3554, 3553,
    3555, 1495, 3557, 3556, 3558, 1495, 3560, 3559, 3561, 1495,
    3563, 3562, 3564, 1495, 3566, 3565, 3567, 11, 14, 1,
    3569, 3571, 3470, 3468, 3572, 36, 3460, 1, 3574);
  ContextosEn: array[0..103] of
    TContextoSpfe = (
    (Patron: 'UBL-model';
     Expresion: 'cac:AdditionalDocumentReference';
     Instruccion: 3),
    (Patron: 'UBL-model';
     Expresion: 'cac:AccountingCustomerParty/cac:' +
      'Party/cbc:EndpointID';
     Instruccion: 13),
    (Patron: 'UBL-model';
     Expresion: 'cac:AccountingCustomerParty/cac:' +
      'Party/cac:PostalAddress';
     Instruccion: 18),
    (Patron: 'UBL-model';
     Expresion: 'cac:PaymentMeans/cac:CardAccount' +
      '/cbc:PrimaryAccountNumberID';
     Instruccion: 29),
    (Patron: 'UBL-model';
     Expresion: 'cac:Delivery/cac:DeliveryLocatio' +
      'n/cac:Address';
     Instruccion: 40),
    (Patron: 'UBL-model';
     Expresion: '/ubl:Invoice/cac:AllowanceCharge' +
      '[cbc:ChargeIndicator = false()] ' +
      '| /cn:CreditNote/cac:AllowanceCh' +
      'arge[cbc:ChargeIndicator = false' +
      '()]';
     Instruccion: 53),
    (Patron: 'UBL-model';
     Expresion: '/ubl:Invoice/cac:AllowanceCharge' +
      '[cbc:ChargeIndicator = true()] |' +
      ' /cn:CreditNote/cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator = true()' +
      ']';
     Instruccion: 85),
    (Patron: 'UBL-model';
     Expresion: 'cac:LegalMonetaryTotal';
     Instruccion: 87),
    (Patron: 'UBL-model';
     Expresion: '/ubl:Invoice | /cn:CreditNote';
     Instruccion: 230),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine | cac:CreditNote' +
      'Line';
     Instruccion: 100),
    (Patron: 'UBL-model';
     Expresion: '//cac:InvoiceLine/cac:AllowanceC' +
      'harge[cbc:ChargeIndicator = fals' +
      'e()] | //cac:CreditNoteLine/cac:' +
      'AllowanceCharge[cbc:ChargeIndica' +
      'tor = false()]';
     Instruccion: 825),
    (Patron: 'UBL-model';
     Expresion: '//cac:InvoiceLine/cac:AllowanceC' +
      'harge[cbc:ChargeIndicator = true' +
      '()] | //cac:CreditNoteLine/cac:A' +
      'llowanceCharge[cbc:ChargeIndicat' +
      'or = true()]';
     Instruccion: 828),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:InvoicePerio' +
      'd | cac:CreditNoteLine/cac:Invoi' +
      'cePeriod';
     Instruccion: 832),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoicePeriod';
     Instruccion: 847),
    (Patron: 'UBL-model';
     Expresion: '//cac:AdditionalItemProperty';
     Instruccion: 853),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Com' +
      'modityClassification/cbc:ItemCla' +
      'ssificationCode | cac:CreditNote' +
      'Line/cac:Item/cac:CommodityClass' +
      'ification/cbc:ItemClassification' +
      'Code';
     Instruccion: 867),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Sta' +
      'ndardItemIdentification/cbc:ID |' +
      ' cac:CreditNoteLine/cac:Item/cac' +
      ':StandardItemIdentification/cbc:' +
      'ID';
     Instruccion: 876),
    (Patron: 'UBL-model';
     Expresion: '/ubl:Invoice/cbc:Note | /cn:Cred' +
      'itNote/cbc:Note';
     Instruccion: 880),
    (Patron: 'UBL-model';
     Expresion: 'cac:PayeeParty';
     Instruccion: 897),
    (Patron: 'UBL-model';
     Expresion: 'cac:PaymentMeans[cbc:PaymentMean' +
      'sCode=''30'' or cbc:PaymentMeansCo' +
      'de=''58'']/cac:PayeeFinancialAccou' +
      'nt';
     Instruccion: 924),
    (Patron: 'UBL-model';
     Expresion: 'cac:PaymentMeans';
     Instruccion: 925),
    (Patron: 'UBL-model';
     Expresion: 'cac:BillingReference';
     Instruccion: 939),
    (Patron: 'UBL-model';
     Expresion: 'cac:AccountingSupplierParty';
     Instruccion: 305),
    (Patron: 'UBL-model';
     Expresion: 'cac:AccountingSupplierParty/cac:' +
      'Party/cbc:EndpointID';
     Instruccion: 960),
    (Patron: 'UBL-model';
     Expresion: 'cac:AccountingSupplierParty/cac:' +
      'Party/cac:PostalAddress';
     Instruccion: 961),
    (Patron: 'UBL-model';
     Expresion: 'cac:TaxRepresentativeParty';
     Instruccion: 313),
    (Patron: 'UBL-model';
     Expresion: 'cac:TaxRepresentativeParty/cac:P' +
      'ostalAddress';
     Instruccion: 968),
    (Patron: 'UBL-model';
     Expresion: '/ubl:Invoice/cac:TaxTotal | /cn:' +
      'CreditNote/cac:TaxTotal';
     Instruccion: 971),
    (Patron: 'UBL-model';
     Expresion: 'cac:TaxTotal/cac:TaxSubtotal';
     Instruccion: 982),
    (Patron: 'UBL-model';
     Expresion: '//cac:PartyTaxScheme[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']';
     Instruccion: 1026),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''AE''][cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']';
     Instruccion: 1035),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''AE''][c' +
      'ac:TaxScheme/normalize-space(upp' +
      'er-case(cbc:ID))=''VAT'']';
     Instruccion: 1081),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''AE''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1084),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''AE''][cac:TaxScheme' +
      '/normalize-space(upper-case(cbc:' +
      'ID))=''VAT''] | cac:CreditNoteLine' +
      '/cac:Item/cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''A' +
      'E''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1088),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''E''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1089),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''E''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1118),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''E''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1120),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''E''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT''] | cac:CreditNoteLine/' +
      'cac:Item/cac:ClassifiedTaxCatego' +
      'ry[normalize-space(cbc:ID) = ''E''' +
      '][cac:TaxScheme/normalize-space(' +
      'upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1124),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''G''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1125),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''G''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1154),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''G''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1156),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''G''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT''] | cac:CreditNoteLine/' +
      'cac:Item/cac:ClassifiedTaxCatego' +
      'ry[normalize-space(cbc:ID) = ''G''' +
      '][cac:TaxScheme/normalize-space(' +
      'upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1160),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''K''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1161),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''K''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1190),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''K''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1192),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''K''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT''] | cac:CreditNoteLine/' +
      'cac:Item/cac:ClassifiedTaxCatego' +
      'ry[normalize-space(cbc:ID) = ''K''' +
      '][cac:TaxScheme/normalize-space(' +
      'upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1196),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''L''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1197),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''L''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1262),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''L''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1265),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''L''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT'']| cac:CreditNoteLine/c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y[normalize-space(cbc:ID) = ''L'']' +
      '[cac:TaxScheme/normalize-space(u' +
      'pper-case(cbc:ID))=''VAT'']';
     Instruccion: 1269),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''M''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1270),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''M''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1308),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''M''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1310),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''M''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT'']| cac:CreditNoteLine/c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y[normalize-space(cbc:ID) = ''M'']' +
      '[cac:TaxScheme/normalize-space(u' +
      'pper-case(cbc:ID))=''VAT'']';
     Instruccion: 1314),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''O''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1315),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''O''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1344),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''O''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1347),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''O''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT''] | cac:CreditNoteLine/' +
      'cac:Item/cac:ClassifiedTaxCatego' +
      'ry[normalize-space(cbc:ID) = ''O''' +
      '][cac:TaxScheme/normalize-space(' +
      'upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1351),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''S''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1352),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''S''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1400),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''S''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1403),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''S''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT''] | cac:CreditNoteLine/' +
      'cac:Item/cac:ClassifiedTaxCatego' +
      'ry[normalize-space(cbc:ID) = ''S''' +
      '][cac:TaxScheme/normalize-space(' +
      'upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1407),
    (Patron: 'UBL-model';
     Expresion: '/*/cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''Z''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']';
     Instruccion: 1408),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]/cac:TaxCategory' +
      '[normalize-space(cbc:ID)=''Z''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']';
     Instruccion: 1439),
    (Patron: 'UBL-model';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=true()]/cac:TaxCategory[' +
      'normalize-space(cbc:ID)=''Z''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']';
     Instruccion: 1441),
    (Patron: 'UBL-model';
     Expresion: 'cac:InvoiceLine/cac:Item/cac:Cla' +
      'ssifiedTaxCategory[normalize-spa' +
      'ce(cbc:ID) = ''Z''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT''] | cac:CreditNoteLine/' +
      'cac:Item/cac:ClassifiedTaxCatego' +
      'ry[normalize-space(cbc:ID) = ''Z''' +
      '][cac:TaxScheme/normalize-space(' +
      'upper-case(cbc:ID))=''VAT'']';
     Instruccion: 1445),
    (Patron: 'UBL-syntax';
     Expresion: '//cac:PostalAddress | //cac:Addr' +
      'ess';
     Instruccion: 1448),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:AccountingSupplierParty/cac:' +
      'Party';
     Instruccion: 1454),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:AdditionalDocumentReference';
     Instruccion: 3),
    (Patron: 'UBL-syntax';
     Expresion: '//*[ends-with(name(), ''Amount'') ' +
      'and not(ends-with(name(),''PriceA' +
      'mount'')) and not(ancestor::cac:P' +
      'rice/cac:AllowanceCharge)]';
     Instruccion: 1487),
    (Patron: 'UBL-syntax';
     Expresion: '//*[ends-with(name(), ''BinaryObj' +
      'ect'')]';
     Instruccion: 1494),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:Delivery';
     Instruccion: 1497),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator = false()]';
     Instruccion: 334),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator = true()]';
     Instruccion: 343),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:PartyTaxScheme';
     Instruccion: 1507),
    (Patron: 'UBL-syntax';
     Expresion: '/ubl:Invoice | /cn:CreditNote';
     Instruccion: 230),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:InvoiceLine | cac:CreditNote' +
      'Line';
     Instruccion: 100),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:PayeeParty';
     Instruccion: 897),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:PaymentMeans';
     Instruccion: 925),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:BillingReference';
     Instruccion: 939),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:TaxRepresentativeParty';
     Instruccion: 313),
    (Patron: 'UBL-syntax';
     Expresion: 'cac:TaxSubtotal';
     Instruccion: 3412),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:InvoiceTypeCode | cbc:Credit' +
      'NoteTypeCode';
     Instruccion: 3417),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:Amount | cbc:BaseAmount | cb' +
      'c:PriceAmount | cbc:TaxAmount | ' +
      'cbc:TaxableAmount | cbc:LineExte' +
      'nsionAmount | cbc:TaxExclusiveAm' +
      'ount | cbc:TaxInclusiveAmount | ' +
      'cbc:AllowanceTotalAmount | cbc:C' +
      'hargeTotalAmount | cbc:PrepaidAm' +
      'ount | cbc:PayableRoundingAmount' +
      ' | cbc:PayableAmount';
     Instruccion: 3444),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:DocumentCurrencyCode';
     Instruccion: 3452),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:TaxCurrencyCode';
     Instruccion: 3455),
    (Patron: 'Codesmodel';
     Expresion: 'cac:InvoicePeriod/cbc:Descriptio' +
      'nCode';
     Instruccion: 3456),
    (Patron: 'Codesmodel';
     Expresion: 'cac:AdditionalDocumentReference[' +
      'cbc:DocumentTypeCode = ''130'']/cb' +
      'c:ID[@schemeID] | cac:DocumentRe' +
      'ference[cbc:DocumentTypeCode = ''' +
      '130'']/cbc:ID[@schemeID]';
     Instruccion: 3465),
    (Patron: 'Codesmodel';
     Expresion: 'cac:PartyIdentification/cbc:ID[@' +
      'schemeID]';
     Instruccion: 3474),
    (Patron: 'Codesmodel';
     Expresion: 'cac:PartyLegalEntity/cbc:Company' +
      'ID[@schemeID]';
     Instruccion: 3488),
    (Patron: 'Codesmodel';
     Expresion: 'cac:CommodityClassification/cbc:' +
      'ItemClassificationCode[@listID]';
     Instruccion: 3491),
    (Patron: 'Codesmodel';
     Expresion: 'cac:Country/cbc:IdentificationCo' +
      'de';
     Instruccion: 3499),
    (Patron: 'Codesmodel';
     Expresion: 'cac:OriginCountry/cbc:Identifica' +
      'tionCode';
     Instruccion: 3504),
    (Patron: 'Codesmodel';
     Expresion: 'cac:PaymentMeans/cbc:PaymentMean' +
      'sCode';
     Instruccion: 3505),
    (Patron: 'Codesmodel';
     Expresion: 'cac:TaxCategory/cbc:ID';
     Instruccion: 3510),
    (Patron: 'Codesmodel';
     Expresion: 'cac:ClassifiedTaxCategory/cbc:ID';
     Instruccion: 3515),
    (Patron: 'Codesmodel';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator = false()]/cbc:Allowance' +
      'ChargeReasonCode';
     Instruccion: 3517),
    (Patron: 'Codesmodel';
     Expresion: 'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator = true()]/cbc:AllowanceC' +
      'hargeReasonCode';
     Instruccion: 3522),
    (Patron: 'Codesmodel';
     Expresion: 'cac:StandardItemIdentification/c' +
      'bc:ID[@schemeID]';
     Instruccion: 3527),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:TaxExemptionReasonCode';
     Instruccion: 3528),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:InvoicedQuantity[@unitCode] ' +
      '| cbc:BaseQuantity[@unitCode] | ' +
      'cbc:CreditedQuantity[@unitCode]';
     Instruccion: 3541),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:EmbeddedDocumentBinaryObject' +
      '[@mimeCode]';
     Instruccion: 3551),
    (Patron: 'Codesmodel';
     Expresion: 'cbc:EndpointID[@schemeID]';
     Instruccion: 3570),
    (Patron: 'Codesmodel';
     Expresion: 'cac:DeliveryLocation/cbc:ID[@sch' +
      'emeID]';
     Instruccion: 3575));
  ReglasEn: array[0..981] of TReglaSpfe = (
    (Identificador: 'BR-52';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:ID) != ''''';
     Mensaje: '[BR-52]-Each Additional supporti' +
      'ng document (BG-24) shall contai' +
      'n a Supporting document referenc' +
      'e (BT-122).';
     Contexto: 0;
     Instruccion: 7),
    (Identificador: 'BR-63';
     Bandera: 'fatal';
     Prueba: 'exists(@schemeID)';
     Mensaje: '[BR-63]-The Buyer electronic add' +
      'ress (BT-49) shall have a Scheme' +
      ' identifier.';
     Contexto: 1;
     Instruccion: 15),
    (Identificador: 'BR-11';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:Country/cbc:' +
      'IdentificationCode) != ''''';
     Mensaje: '[BR-11]-The Buyer postal address' +
      ' shall contain a Buyer country c' +
      'ode (BT-55).';
     Contexto: 2;
     Instruccion: 23),
    (Identificador: 'BR-51';
     Bandera: 'warning';
     Prueba: 'string-length(normalize-space(.)' +
      ')<=10';
     Mensaje: '[BR-51]-In accordance with card ' +
      'payments security standards an i' +
      'nvoice should never include a fu' +
      'll card primary account number (' +
      'BT-87). At the moment PCI Securi' +
      'ty Standards Council has defined' +
      ' that the first 6 digits and las' +
      't 4 digits are the maximum numbe' +
      'r of digits to be shown.';
     Contexto: 3;
     Instruccion: 34),
    (Identificador: 'BR-57';
     Bandera: 'fatal';
     Prueba: 'exists(cac:Country/cbc:Identific' +
      'ationCode)';
     Mensaje: '[BR-57]-Each Deliver to address ' +
      '(BG-15) shall contain a Deliver ' +
      'to country code (BT-80).';
     Contexto: 4;
     Instruccion: 41),
    (Identificador: 'BR-31';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:Amount)';
     Mensaje: '[BR-31]-Each Document level allo' +
      'wance (BG-20) shall have a Docum' +
      'ent level allowance amount (BT-9' +
      '2).';
     Contexto: 5;
     Instruccion: 55),
    (Identificador: 'BR-32';
     Bandera: 'fatal';
     Prueba: 'exists(cac:TaxCategory[cac:TaxSc' +
      'heme/normalize-space(upper-case(' +
      'cbc:ID))=''VAT'']/cbc:ID)';
     Mensaje: '[BR-32]-Each Document level allo' +
      'wance (BG-20) shall have a Docum' +
      'ent level allowance VAT category' +
      ' code (BT-95).';
     Contexto: 5;
     Instruccion: 65),
    (Identificador: 'BR-33';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-33]-Each Document level allo' +
      'wance (BG-20) shall have a Docum' +
      'ent level allowance reason (BT-9' +
      '7) or a Document level allowance' +
      ' reason code (BT-98).';
     Contexto: 5;
     Instruccion: 70),
    (Identificador: 'BR-CO-05';
     Bandera: 'fatal';
     Prueba: 'true()';
     Mensaje: '[BR-CO-05]-Document level allowa' +
      'nce reason code (BT-98) and Docu' +
      'ment level allowance reason (BT-' +
      '97) shall indicate the same type' +
      ' of allowance.';
     Contexto: 5;
     Instruccion: 71),
    (Identificador: 'BR-CO-21';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-CO-21]-Each Document level a' +
      'llowance (BG-20) shall contain a' +
      ' Document level allowance reason' +
      ' (BT-97) or a Document level all' +
      'owance reason code (BT-98), or b' +
      'oth.';
     Contexto: 5;
     Instruccion: 70),
    (Identificador: 'BR-DEC-01';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:Amount,''.''))<=2';
     Mensaje: '[BR-DEC-01]-The allowed maximum ' +
      'number of decimals for the Docum' +
      'ent level allowance amount (BT-9' +
      '2) is 2.';
     Contexto: 5;
     Instruccion: 76),
    (Identificador: 'BR-DEC-02';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:BaseAmount,''.''))<=2';
     Mensaje: '[BR-DEC-02]-The allowed maximum ' +
      'number of decimals for the Docum' +
      'ent level allowance base amount ' +
      '(BT-93) is 2.';
     Contexto: 5;
     Instruccion: 80),
    (Identificador: 'BR-36';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:Amount)';
     Mensaje: '[BR-36]-Each Document level char' +
      'ge (BG-21) shall have a Document' +
      ' level charge amount (BT-99).';
     Contexto: 6;
     Instruccion: 55),
    (Identificador: 'BR-37';
     Bandera: 'fatal';
     Prueba: 'exists(cac:TaxCategory[cac:TaxSc' +
      'heme/normalize-space(upper-case(' +
      'cbc:ID))=''VAT'']/cbc:ID)';
     Mensaje: '[BR-37]-Each Document level char' +
      'ge (BG-21) shall have a Document' +
      ' level charge VAT category code ' +
      '(BT-102).';
     Contexto: 6;
     Instruccion: 65),
    (Identificador: 'BR-38';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-38]-Each Document level char' +
      'ge (BG-21) shall have a Document' +
      ' level charge reason (BT-104) or' +
      ' a Document level charge reason ' +
      'code (BT-105).';
     Contexto: 6;
     Instruccion: 70),
    (Identificador: 'BR-CO-06';
     Bandera: 'fatal';
     Prueba: 'true()';
     Mensaje: '[BR-CO-06]-Document level charge' +
      ' reason code (BT-105) and Docume' +
      'nt level charge reason (BT-104) ' +
      'shall indicate the same type of ' +
      'charge.';
     Contexto: 6;
     Instruccion: 71),
    (Identificador: 'BR-CO-22';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-CO-22]-Each Document level c' +
      'harge (BG-21) shall contain a Do' +
      'cument level charge reason (BT-1' +
      '04) or a Document level charge r' +
      'eason code (BT-105), or both.';
     Contexto: 6;
     Instruccion: 70),
    (Identificador: 'BR-DEC-05';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:Amount,''.''))<=2';
     Mensaje: '[BR-DEC-05]-The allowed maximum ' +
      'number of decimals for the Docum' +
      'ent level charge amount (BT-99) ' +
      'is 2.';
     Contexto: 6;
     Instruccion: 76),
    (Identificador: 'BR-DEC-06';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:BaseAmount,''.''))<=2';
     Mensaje: '[BR-DEC-06]-The allowed maximum ' +
      'number of decimals for the Docum' +
      'ent level charge base amount (BT' +
      '-100) is 2.';
     Contexto: 6;
     Instruccion: 80),
    (Identificador: 'BR-12';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:LineExtensionAmount)';
     Mensaje: '[BR-12]-An Invoice shall have th' +
      'e Sum of Invoice line net amount' +
      ' (BT-106).';
     Contexto: 7;
     Instruccion: 89),
    (Identificador: 'BR-13';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxExclusiveAmount)';
     Mensaje: '[BR-13]-An Invoice shall have th' +
      'e Invoice total amount without V' +
      'AT (BT-109).';
     Contexto: 7;
     Instruccion: 91),
    (Identificador: 'BR-14';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxInclusiveAmount)';
     Mensaje: '[BR-14]-An Invoice shall have th' +
      'e Invoice total amount with VAT ' +
      '(BT-112).';
     Contexto: 7;
     Instruccion: 93),
    (Identificador: 'BR-15';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:PayableAmount)';
     Mensaje: '[BR-15]-An Invoice shall have th' +
      'e Amount due for payment (BT-115' +
      ').';
     Contexto: 7;
     Instruccion: 95),
    (Identificador: 'BR-CO-10';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:LineExtensionAmo' +
      'unt) = xs:decimal(round(sum(//(c' +
      'ac:InvoiceLine|cac:CreditNoteLin' +
      'e)/xs:decimal(cbc:LineExtensionA' +
      'mount)) * 10 * 10) div 100))';
     Mensaje: '[BR-CO-10]-Sum of Invoice line n' +
      'et amount (BT-106) = Σ Invoice l' +
      'ine net amount (BT-131).';
     Contexto: 7;
     Instruccion: 109),
    (Identificador: 'BR-CO-11';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(cbc:AllowanceTotalAmo' +
      'unt) = (round(sum(../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=fal' +
      'se()]/xs:decimal(cbc:Amount)) * ' +
      '10 * 10) div 100) or  (not(cbc:A' +
      'llowanceTotalAmount) and not(../' +
      'cac:AllowanceCharge[cbc:ChargeIn' +
      'dicator=false()]))';
     Mensaje: '[BR-CO-11]-Sum of allowances on ' +
      'document level (BT-107) = Σ Docu' +
      'ment level allowance amount (BT-' +
      '92).';
     Contexto: 7;
     Instruccion: 125),
    (Identificador: 'BR-CO-12';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(cbc:ChargeTotalAmount' +
      ') = (round(sum(../cac:AllowanceC' +
      'harge[cbc:ChargeIndicator=true()' +
      ']/xs:decimal(cbc:Amount)) * 10 *' +
      ' 10) div 100) or (not(cbc:Charge' +
      'TotalAmount) and not(../cac:Allo' +
      'wanceCharge[cbc:ChargeIndicator=' +
      'true()]))';
     Mensaje: '[BR-CO-12]-Sum of charges on doc' +
      'ument level (BT-108) = Σ Documen' +
      't level charge amount (BT-99).';
     Contexto: 7;
     Instruccion: 139),
    (Identificador: 'BR-CO-13';
     Bandera: 'fatal';
     Prueba: '((cbc:ChargeTotalAmount) and (cb' +
      'c:AllowanceTotalAmount) and (xs:' +
      'decimal(cbc:TaxExclusiveAmount) ' +
      '= round((xs:decimal(cbc:LineExte' +
      'nsionAmount) + xs:decimal(cbc:Ch' +
      'argeTotalAmount) - xs:decimal(cb' +
      'c:AllowanceTotalAmount)) * 10 * ' +
      '10) div 100 ))  or (not(cbc:Char' +
      'geTotalAmount) and (cbc:Allowanc' +
      'eTotalAmount) and (xs:decimal(cb' +
      'c:TaxExclusiveAmount) = round((x' +
      's:decimal(cbc:LineExtensionAmoun' +
      't) - xs:decimal(cbc:AllowanceTot' +
      'alAmount)) * 10 * 10 ) div 100))' +
      ' or ((cbc:ChargeTotalAmount) and' +
      ' not(cbc:AllowanceTotalAmount) a' +
      'nd (xs:decimal(cbc:TaxExclusiveA' +
      'mount) = round((xs:decimal(cbc:L' +
      'ineExtensionAmount) + xs:decimal' +
      '(cbc:ChargeTotalAmount)) * 10 * ' +
      '10 ) div 100)) or (not(cbc:Charg' +
      'eTotalAmount) and not(cbc:Allowa' +
      'nceTotalAmount) and (xs:decimal(' +
      'cbc:TaxExclusiveAmount) = xs:dec' +
      'imal(cbc:LineExtensionAmount)))';
     Mensaje: '[BR-CO-13]-Invoice total amount ' +
      'without VAT (BT-109) = Σ Invoice' +
      ' line net amount (BT-131) - Sum ' +
      'of allowances on document level ' +
      '(BT-107) + Sum of charges on doc' +
      'ument level (BT-108).';
     Contexto: 7;
     Instruccion: 170),
    (Identificador: 'BR-CO-16';
     Bandera: 'fatal';
     Prueba: '(exists(cbc:PrepaidAmount) and n' +
      'ot(exists(cbc:PayableRoundingAmo' +
      'unt)) and (xs:decimal(cbc:Payabl' +
      'eAmount) = (round((xs:decimal(cb' +
      'c:TaxInclusiveAmount) - xs:decim' +
      'al(cbc:PrepaidAmount)) * 10 * 10' +
      ') div 100))) or (not(exists(cbc:' +
      'PrepaidAmount)) and not(exists(c' +
      'bc:PayableRoundingAmount)) and x' +
      's:decimal(cbc:PayableAmount) = x' +
      's:decimal(cbc:TaxInclusiveAmount' +
      ')) or (exists(cbc:PrepaidAmount)' +
      ' and exists(cbc:PayableRoundingA' +
      'mount) and ((round((xs:decimal(c' +
      'bc:PayableAmount) - xs:decimal(c' +
      'bc:PayableRoundingAmount)) * 10 ' +
      '* 10) div 100) = (round((xs:deci' +
      'mal(cbc:TaxInclusiveAmount) - xs' +
      ':decimal(cbc:PrepaidAmount)) * 1' +
      '0 * 10) div 100))) or  (not(exis' +
      'ts(cbc:PrepaidAmount)) and exist' +
      's(cbc:PayableRoundingAmount) and' +
      ' ((round((xs:decimal(cbc:Payable' +
      'Amount) - xs:decimal(cbc:Payable' +
      'RoundingAmount)) * 10 * 10) div ' +
      '100) = xs:decimal(cbc:TaxInclusi' +
      'veAmount)))';
     Mensaje: '[BR-CO-16]-Amount due for paymen' +
      't (BT-115) = Invoice total amoun' +
      't with VAT (BT-112) -Paid amount' +
      ' (BT-113) +Rounding amount (BT-1' +
      '14).';
     Contexto: 7;
     Instruccion: 205),
    (Identificador: 'BR-DEC-09';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:LineExtensionAmount,''.''))<=2';
     Mensaje: '[BR-DEC-09]-The allowed maximum ' +
      'number of decimals for the Sum o' +
      'f Invoice line net amount (BT-10' +
      '6) is 2.';
     Contexto: 7;
     Instruccion: 208),
    (Identificador: 'BR-DEC-10';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:AllowanceTotalAmount,''.''))<=2';
     Mensaje: '[BR-DEC-10]-The allowed maximum ' +
      'number of decimals for the Sum o' +
      'f allowanced on document level (' +
      'BT-107) is 2.';
     Contexto: 7;
     Instruccion: 211),
    (Identificador: 'BR-DEC-11';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:ChargeTotalAmount,''.''))<=2';
     Mensaje: '[BR-DEC-11]-The allowed maximum ' +
      'number of decimals for the Sum o' +
      'f charges on document level (BT-' +
      '108) is 2.';
     Contexto: 7;
     Instruccion: 214),
    (Identificador: 'BR-DEC-12';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:TaxExclusiveAmount,''.''))<=2';
     Mensaje: '[BR-DEC-12]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce total amount without VAT (BT-' +
      '109) is 2.';
     Contexto: 7;
     Instruccion: 217),
    (Identificador: 'BR-DEC-14';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:TaxInclusiveAmount,''.''))<=2';
     Mensaje: '[BR-DEC-14]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce total amount with VAT (BT-112' +
      ') is 2.';
     Contexto: 7;
     Instruccion: 220),
    (Identificador: 'BR-DEC-16';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:PrepaidAmount,''.''))<=2';
     Mensaje: '[BR-DEC-16]-The allowed maximum ' +
      'number of decimals for the Paid ' +
      'amount (BT-113) is 2.';
     Contexto: 7;
     Instruccion: 223),
    (Identificador: 'BR-DEC-17';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:PayableRoundingAmount,''.''))<=2';
     Mensaje: '[BR-DEC-17]-The allowed maximum ' +
      'number of decimals for the Round' +
      'ing amount (BT-114) is 2.';
     Contexto: 7;
     Instruccion: 226),
    (Identificador: 'BR-DEC-18';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:PayableAmount,''.''))<=2';
     Mensaje: '[BR-DEC-18]-The allowed maximum ' +
      'number of decimals for the Amoun' +
      't due for payment (BT-115) is 2.' +
      '  ';
     Contexto: 7;
     Instruccion: 229),
    (Identificador: 'BR-01';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:Customizatio' +
      'nID) != ''''';
     Mensaje: '[BR-01]-An Invoice shall have a ' +
      'Specification identifier (BT-24)' +
      '.   ';
     Contexto: 8;
     Instruccion: 233),
    (Identificador: 'BR-02';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:ID) != ''''';
     Mensaje: '[BR-02]-An Invoice shall have an' +
      ' Invoice number (BT-1).';
     Contexto: 8;
     Instruccion: 7),
    (Identificador: 'BR-03';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:IssueDate) !' +
      '= ''''';
     Mensaje: '[BR-03]-An Invoice shall have an' +
      ' Invoice issue date (BT-2).';
     Contexto: 8;
     Instruccion: 236),
    (Identificador: 'BR-04';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:InvoiceTypeC' +
      'ode) != '''' or normalize-space(cb' +
      'c:CreditNoteTypeCode) !=''''';
     Mensaje: '[BR-04]-An Invoice shall have an' +
      ' Invoice type code (BT-3).';
     Contexto: 8;
     Instruccion: 243),
    (Identificador: 'BR-05';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:DocumentCurr' +
      'encyCode) != ''''';
     Mensaje: '[BR-05]-An Invoice shall have an' +
      ' Invoice currency code (BT-5).';
     Contexto: 8;
     Instruccion: 246),
    (Identificador: 'BR-06';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:AccountingSu' +
      'pplierParty/cac:Party/cac:PartyL' +
      'egalEntity/cbc:RegistrationName)' +
      ' != ''''';
     Mensaje: '[BR-06]-An Invoice shall contain' +
      ' the Seller name (BT-27).';
     Contexto: 8;
     Instruccion: 254),
    (Identificador: 'BR-07';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:AccountingCu' +
      'stomerParty/cac:Party/cac:PartyL' +
      'egalEntity/cbc:RegistrationName)' +
      ' != ''''';
     Mensaje: '[BR-07]-An Invoice shall contain' +
      ' the Buyer name (BT-44).';
     Contexto: 8;
     Instruccion: 258),
    (Identificador: 'BR-08';
     Bandera: 'fatal';
     Prueba: 'exists(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PostalAddress)';
     Mensaje: '[BR-08]-An Invoice shall contain' +
      ' the Seller postal address. ';
     Contexto: 8;
     Instruccion: 260),
    (Identificador: 'BR-10';
     Bandera: 'fatal';
     Prueba: 'exists(cac:AccountingCustomerPar' +
      'ty/cac:Party/cac:PostalAddress)';
     Mensaje: '[BR-10]-An Invoice shall contain' +
      ' the Buyer postal address (BG-8)' +
      '.';
     Contexto: 8;
     Instruccion: 261),
    (Identificador: 'BR-16';
     Bandera: 'fatal';
     Prueba: 'exists(cac:InvoiceLine) or exist' +
      's(cac:CreditNoteLine)';
     Mensaje: '[BR-16]-An Invoice shall have at' +
      ' least one Invoice line (BG-25)';
     Contexto: 8;
     Instruccion: 264),
    (Identificador: 'BR-53';
     Bandera: 'fatal';
     Prueba: 'every $taxcurrency in cbc:TaxCur' +
      'rencyCode satisfies exists(//cac' +
      ':TaxTotal/cbc:TaxAmount[@currenc' +
      'yID=$taxcurrency])';
     Mensaje: '[BR-53]-If the VAT accounting cu' +
      'rrency code (BT-6) is present, t' +
      'hen the Invoice total VAT amount' +
      ' in accounting currency (BT-111)' +
      ' shall be provided.';
     Contexto: 8;
     Instruccion: 275),
    (Identificador: 'BR-AE-01';
     Bandera: 'fatal';
     Prueba: '((exists(//cac:TaxCategory[cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']/cbc:ID[norma' +
      'lize-space(.) = ''AE'']) or exists' +
      '(//cac:ClassifiedTaxCategory[cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']/cbc:ID[nor' +
      'malize-space(.) = ''AE''])) and (c' +
      'ount(cac:TaxTotal/cac:TaxSubtota' +
      'l/cac:TaxCategory[cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT'']/cbc:ID[normalize-spac' +
      'e(.) = ''AE'']) = 1)) or (not(//ca' +
      'c:TaxCategory[cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']/cbc:ID[normalize-space(.)' +
      ' = ''AE'']) and not(//cac:Classifi' +
      'edTaxCategory[cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']/cbc:ID[normalize-space(.)' +
      ' = ''AE'']))';
     Mensaje: '[BR-AE-01]-An Invoice that conta' +
      'ins an Invoice line (BG-25), a D' +
      'ocument level allowance (BG-20) ' +
      'or a Document level charge (BG-2' +
      '1) where the VAT category code (' +
      'BT-151, BT-95 or BT-102) is "Rev' +
      'erse charge" shall contain in th' +
      'e VAT Breakdown (BG-23) exactly ' +
      'one VAT category code (BT-118) e' +
      'qual with "VAT reverse charge".';
     Contexto: 8;
     Instruccion: 299),
    (Identificador: 'BR-AE-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''A' +
      'E''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']) an' +
      'd (exists(//cac:AccountingSuppli' +
      'erParty/cac:Party/cac:PartyTaxSc' +
      'heme/cbc:CompanyID) or exists(//' +
      'cac:TaxRepresentativeParty/cac:P' +
      'artyTaxScheme[cac:TaxScheme/(nor' +
      'malize-space(upper-case(cbc:ID))' +
      ' = ''VAT'')]/cbc:CompanyID)) and (' +
      'exists(//cac:AccountingCustomerP' +
      'arty/cac:Party/cac:PartyTaxSchem' +
      'e[cac:TaxScheme/(normalize-space' +
      '(upper-case(cbc:ID)) = ''VAT'')]/c' +
      'bc:CompanyID) or exists(//cac:Ac' +
      'countingCustomerParty/cac:Party/' +
      'cac:PartyLegalEntity/cbc:Company' +
      'ID))) or not(exists(//cac:Classi' +
      'fiedTaxCategory[normalize-space(' +
      'cbc:ID) = ''AE''][cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']))';
     Mensaje: '[BR-AE-02]-An Invoice that conta' +
      'ins an Invoice line (BG-25) wher' +
      'e the Invoiced item VAT category' +
      ' code (BT-151) is "Reverse charg' +
      'e" shall contain the Seller VAT ' +
      'Identifier (BT-31), the Seller T' +
      'ax registration identifier (BT-3' +
      '2) and/or the Seller tax represe' +
      'ntative VAT identifier (BT-63) a' +
      'nd the Buyer VAT identifier (BT-' +
      '48) and/or the Buyer legal regis' +
      'tration identifier (BT-47).';
     Contexto: 8;
     Instruccion: 333),
    (Identificador: 'BR-AE-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D) = ''AE''][cac:TaxScheme/normali' +
      'ze-space(upper-case(cbc:ID))=''VA' +
      'T'']) and (exists(//cac:Accountin' +
      'gSupplierParty/cac:Party/cac:Par' +
      'tyTaxScheme/cbc:CompanyID) or ex' +
      'ists(//cac:TaxRepresentativePart' +
      'y/cac:PartyTaxScheme[cac:TaxSche' +
      'me/(normalize-space(upper-case(c' +
      'bc:ID)) = ''VAT'')]/cbc:CompanyID)' +
      ') and (exists(//cac:AccountingCu' +
      'stomerParty/cac:Party/cac:PartyT' +
      'axScheme[cac:TaxScheme/(normaliz' +
      'e-space(upper-case(cbc:ID)) = ''V' +
      'AT'')]/cbc:CompanyID) or exists(/' +
      '/cac:AccountingCustomerParty/cac' +
      ':Party/cac:PartyLegalEntity/cbc:' +
      'CompanyID))) or not(exists(//cac' +
      ':AllowanceCharge[cbc:ChargeIndic' +
      'ator=false()]/cac:TaxCategory[no' +
      'rmalize-space(cbc:ID) = ''AE''][ca' +
      'c:TaxScheme/normalize-space(uppe' +
      'r-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-AE-03]-An Invoice that conta' +
      'ins a Document level allowance (' +
      'BG-20) where the Document level ' +
      'allowance VAT category code (BT-' +
      '95) is "Reverse charge" shall co' +
      'ntain the Seller VAT Identifier ' +
      '(BT-31), the Seller tax registra' +
      'tion identifier (BT-32) and/or t' +
      'he Seller tax representative VAT' +
      ' identifier (BT-63) and the Buye' +
      'r VAT identifier (BT-48) and/or ' +
      'the Buyer legal registration ide' +
      'ntifier (BT-47).';
     Contexto: 8;
     Instruccion: 342),
    (Identificador: 'BR-AE-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ') = ''AE''][cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']) and (exists(//cac:Accounting' +
      'SupplierParty/cac:Party/cac:Part' +
      'yTaxScheme/cbc:CompanyID) or exi' +
      'sts(//cac:TaxRepresentativeParty' +
      '/cac:PartyTaxScheme[cac:TaxSchem' +
      'e/(normalize-space(upper-case(cb' +
      'c:ID)) = ''VAT'')]/cbc:CompanyID))' +
      ' and (exists(//cac:AccountingCus' +
      'tomerParty/cac:Party/cac:PartyTa' +
      'xScheme[cac:TaxScheme/(normalize' +
      '-space(upper-case(cbc:ID)) = ''VA' +
      'T'')]/cbc:CompanyID) or exists(//' +
      'cac:AccountingCustomerParty/cac:' +
      'Party/cac:PartyLegalEntity/cbc:C' +
      'ompanyID))) or not(exists(//cac:' +
      'AllowanceCharge[cbc:ChargeIndica' +
      'tor=true()]/cac:TaxCategory[norm' +
      'alize-space(cbc:ID) = ''AE''][cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-AE-04]-An Invoice that conta' +
      'ins a Document level charge (BG-' +
      '21) where the Document level cha' +
      'rge VAT category code (BT-102) i' +
      's "Reverse charge" shall contain' +
      ' the Seller VAT Identifier (BT-3' +
      '1), the Seller tax registration ' +
      'identifier (BT-32) and/or the Se' +
      'ller tax representative VAT iden' +
      'tifier (BT-63) and the Buyer VAT' +
      ' identifier (BT-48) and/or the B' +
      'uyer legal registration identifi' +
      'er (BT-47).';
     Contexto: 8;
     Instruccion: 349),
    (Identificador: 'BR-CO-03';
     Bandera: 'fatal';
     Prueba: '(exists(cbc:TaxPointDate) and no' +
      't(cac:InvoicePeriod/cbc:Descript' +
      'ionCode)) or (not(cbc:TaxPointDa' +
      'te) and exists(cac:InvoicePeriod' +
      '/cbc:DescriptionCode)) or (not(c' +
      'bc:TaxPointDate) and not(cac:Inv' +
      'oicePeriod/cbc:DescriptionCode))';
     Mensaje: '[BR-CO-03]-Value added tax point' +
      ' date (BT-7) and Value added tax' +
      ' point date code (BT-8) are mutu' +
      'ally exclusive.';
     Contexto: 8;
     Instruccion: 362),
    (Identificador: 'BR-CO-15';
     Bandera: 'fatal';
     Prueba: 'every $Currency in cbc:DocumentC' +
      'urrencyCode satisfies (count(cac' +
      ':TaxTotal/xs:decimal(cbc:TaxAmou' +
      'nt[@currencyID=$Currency])) eq 1' +
      ') and (cac:LegalMonetaryTotal/xs' +
      ':decimal(cbc:TaxInclusiveAmount)' +
      ' = round( (cac:LegalMonetaryTota' +
      'l/xs:decimal(cbc:TaxExclusiveAmo' +
      'unt) + cac:TaxTotal/xs:decimal(c' +
      'bc:TaxAmount[@currencyID=$Curren' +
      'cy])) * 10 * 10) div 100)';
     Mensaje: '[BR-CO-15]-Invoice total amount ' +
      'with VAT (BT-112) = Invoice tota' +
      'l amount without VAT (BT-109) + ' +
      'Invoice total VAT amount (BT-110' +
      ').';
     Contexto: 8;
     Instruccion: 379),
    (Identificador: 'BR-CO-18';
     Bandera: 'fatal';
     Prueba: 'exists(cac:TaxTotal/cac:TaxSubto' +
      'tal)';
     Mensaje: '[BR-CO-18]-An Invoice shall at l' +
      'east have one VAT breakdown grou' +
      'p (BG-23).';
     Contexto: 8;
     Instruccion: 380),
    (Identificador: 'BR-DEC-13';
     Bandera: 'fatal';
     Prueba: '(//cac:TaxTotal/cbc:TaxAmount[@c' +
      'urrencyID = cbc:DocumentCurrency' +
      'Code] and (string-length(substri' +
      'ng-after(//cac:TaxTotal/cbc:TaxA' +
      'mount[@currencyID = cbc:Document' +
      'CurrencyCode],''.''))<=2)) or (not' +
      '(//cac:TaxTotal/cbc:TaxAmount[@c' +
      'urrencyID = cbc:DocumentCurrency' +
      'Code]))';
     Mensaje: '[BR-DEC-13]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce total VAT amount (BT-110) is ' +
      '2.';
     Contexto: 8;
     Instruccion: 389),
    (Identificador: 'BR-DEC-15';
     Bandera: 'fatal';
     Prueba: '(//cac:TaxTotal/cbc:TaxAmount[@c' +
      'urrencyID = cbc:TaxCurrencyCode]' +
      ' and (string-length(substring-af' +
      'ter(//cac:TaxTotal/cbc:TaxAmount' +
      '[@currencyID = cbc:TaxCurrencyCo' +
      'de],''.''))<=2)) or (not(//cac:Tax' +
      'Total/cbc:TaxAmount[@currencyID ' +
      '= cbc:TaxCurrencyCode]))';
     Mensaje: '[BR-DEC-15]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce total VAT amount in accountin' +
      'g currency (BT-111) is 2.';
     Contexto: 8;
     Instruccion: 398),
    (Identificador: 'BR-E-01';
     Bandera: 'fatal';
     Prueba: '((exists(//cac:TaxCategory[cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']/cbc:ID[norma' +
      'lize-space(.) = ''E'']) or exists(' +
      '//cac:ClassifiedTaxCategory[cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']/cbc:ID[norm' +
      'alize-space(.) = ''E''])) and (cou' +
      'nt(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']/cbc:ID[normalize-space(' +
      '.) = ''E'']) = 1)) or (not(//cac:T' +
      'axCategory[cac:TaxScheme/normali' +
      'ze-space(upper-case(cbc:ID))=''VA' +
      'T'']/cbc:ID[normalize-space(.) = ' +
      '''E'']) and not(//cac:ClassifiedTa' +
      'xCategory[cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']/cbc:ID[normalize-space(.) = ''' +
      'E'']))';
     Mensaje: '[BR-E-01]-An Invoice that contai' +
      'ns an Invoice line (BG-25), a Do' +
      'cument level allowance (BG-20) o' +
      'r a Document level charge (BG-21' +
      ') where the VAT category code (B' +
      'T-151, BT-95 or BT-102) is "Exem' +
      'pt from VAT" shall contain exact' +
      'ly one VAT breakdown (BG-23) wit' +
      'h the VAT category code (BT-118)' +
      ' equal to "Exempt from VAT".';
     Contexto: 8;
     Instruccion: 414),
    (Identificador: 'BR-E-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''E' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme/cbc:CompanyID) or exists(//c' +
      'ac:TaxRepresentativeParty/cac:Pa' +
      'rtyTaxScheme[cac:TaxScheme/(norm' +
      'alize-space(upper-case(cbc:ID)) ' +
      '= ''VAT'')]/cbc:CompanyID))) or no' +
      't(exists(//cac:ClassifiedTaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'E''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-E-02]-An Invoice that contai' +
      'ns an Invoice line (BG-25) where' +
      ' the Invoiced item VAT category ' +
      'code (BT-151) is "Exempt from VA' +
      'T" shall contain the Seller VAT ' +
      'Identifier (BT-31), the Seller t' +
      'ax registration identifier (BT-3' +
      '2) and/or the Seller tax represe' +
      'ntative VAT identifier (BT-63).';
     Contexto: 8;
     Instruccion: 422),
    (Identificador: 'BR-E-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D)=''E''][cac:TaxScheme/normalize-' +
      'space(upper-case(cbc:ID))=''VAT'']' +
      ') and (exists(//cac:AccountingSu' +
      'pplierParty/cac:Party/cac:PartyT' +
      'axScheme/cbc:CompanyID) or exist' +
      's(//cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme[cac:TaxScheme/' +
      '(normalize-space(upper-case(cbc:' +
      'ID)) = ''VAT'')]/cbc:CompanyID))) ' +
      'or not(exists(//cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=false()]' +
      '/cac:TaxCategory[normalize-space' +
      '(cbc:ID)=''E''][cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']))';
     Mensaje: '[BR-E-03]-An Invoice that contai' +
      'ns a Document level allowance (B' +
      'G-20) where the Document level a' +
      'llowance VAT category code (BT-9' +
      '5) is "Exempt from VAT" shall co' +
      'ntain the Seller VAT Identifier ' +
      '(BT-31), the Seller tax registra' +
      'tion identifier (BT-32) and/or t' +
      'he Seller tax representative VAT' +
      ' identifier (BT-63).';
     Contexto: 8;
     Instruccion: 429),
    (Identificador: 'BR-E-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ')=''E''][cac:TaxScheme/normalize-s' +
      'pace(upper-case(cbc:ID))=''VAT''])' +
      ' and (exists(//cac:AccountingSup' +
      'plierParty/cac:Party/cac:PartyTa' +
      'xScheme/cbc:CompanyID) or exists' +
      '(//cac:TaxRepresentativeParty/ca' +
      'c:PartyTaxScheme[cac:TaxScheme/(' +
      'normalize-space(upper-case(cbc:I' +
      'D)) = ''VAT'')]/cbc:CompanyID))) o' +
      'r not(exists(//cac:AllowanceChar' +
      'ge[cbc:ChargeIndicator=true()]/c' +
      'ac:TaxCategory[normalize-space(c' +
      'bc:ID)=''E''][cac:TaxScheme/normal' +
      'ize-space(upper-case(cbc:ID))=''V' +
      'AT'']))';
     Mensaje: '[BR-E-04]-An Invoice that contai' +
      'ns a Document level charge (BG-2' +
      '1) where the Document level char' +
      'ge VAT category code (BT-102) is' +
      ' "Exempt from VAT" shall contain' +
      ' the Seller VAT Identifier (BT-3' +
      '1), the Seller tax registration ' +
      'identifier (BT-32) and/or the Se' +
      'ller tax representative VAT iden' +
      'tifier (BT-63).';
     Contexto: 8;
     Instruccion: 434),
    (Identificador: 'BR-G-01';
     Bandera: 'fatal';
     Prueba: '((exists(//cac:TaxCategory[cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']/cbc:ID[norma' +
      'lize-space(.) = ''G'']) or exists(' +
      '//cac:ClassifiedTaxCategory[cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']/cbc:ID[norm' +
      'alize-space(.) = ''G''])) and (cou' +
      'nt(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']/cbc:ID[normalize-space(' +
      '.) = ''G'']) = 1)) or (not(//cac:T' +
      'axCategory[cac:TaxScheme/normali' +
      'ze-space(upper-case(cbc:ID))=''VA' +
      'T'']/cbc:ID[normalize-space(.) = ' +
      '''G'']) and not(//cac:ClassifiedTa' +
      'xCategory[cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']/cbc:ID[normalize-space(.) = ''' +
      'G'']))';
     Mensaje: '[BR-G-01]-An Invoice that contai' +
      'ns an Invoice line (BG-25), a Do' +
      'cument level allowance (BG-20) o' +
      'r a Document level charge (BG-21' +
      ') where the VAT category code (B' +
      'T-151, BT-95 or BT-102) is "Expo' +
      'rt outside the EU" shall contain' +
      ' in the VAT breakdown (BG-23) ex' +
      'actly one VAT category code (BT-' +
      '118) equal with "Export outside ' +
      'the EU".';
     Contexto: 8;
     Instruccion: 450),
    (Identificador: 'BR-G-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''G' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme[cac:TaxScheme/(normalize-spa' +
      'ce(upper-case(cbc:ID)) = ''VAT'')]' +
      '/cbc:CompanyID) or exists(//cac:' +
      'TaxRepresentativeParty/cac:Party' +
      'TaxScheme[cac:TaxScheme/(normali' +
      'ze-space(upper-case(cbc:ID)) = ''' +
      'VAT'')]/cbc:CompanyID))) or not(e' +
      'xists(//cac:ClassifiedTaxCategor' +
      'y[normalize-space(cbc:ID) = ''G'']' +
      '[cac:TaxScheme/normalize-space(u' +
      'pper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-G-02]-An Invoice that contai' +
      'ns an Invoice line (BG-25) where' +
      ' the Invoiced item VAT category ' +
      'code (BT-151) is "Export outside' +
      ' the EU" shall contain the Selle' +
      'r VAT Identifier (BT-31) or the ' +
      'Seller tax representative VAT id' +
      'entifier (BT-63).';
     Contexto: 8;
     Instruccion: 462),
    (Identificador: 'BR-G-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D)=''G'']) and (exists(//cac:Accou' +
      'ntingSupplierParty/cac:Party/cac' +
      ':PartyTaxScheme[cac:TaxScheme/(n' +
      'ormalize-space(upper-case(cbc:ID' +
      ')) = ''VAT'')]/cbc:CompanyID) or e' +
      'xists(//cac:TaxRepresentativePar' +
      'ty/cac:PartyTaxScheme[cac:TaxSch' +
      'eme/(normalize-space(upper-case(' +
      'cbc:ID)) = ''VAT'')]/cbc:CompanyID' +
      '))) or not(exists(//cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()]/cac:TaxCategory[normalize-s' +
      'pace(cbc:ID)=''G''][cac:TaxScheme/' +
      'normalize-space(upper-case(cbc:I' +
      'D))=''VAT'']))';
     Mensaje: '[BR-G-03]-An Invoice that contai' +
      'ns a Document level allowance (B' +
      'G-20) where the Document level a' +
      'llowance VAT category code (BT-9' +
      '5) is "Export outside the EU" sh' +
      'all contain the Seller VAT Ident' +
      'ifier (BT-31) or the Seller tax ' +
      'representative VAT identifier (B' +
      'T-63).';
     Contexto: 8;
     Instruccion: 471),
    (Identificador: 'BR-G-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ')=''G'']) and (exists(//cac:Accoun' +
      'tingSupplierParty/cac:Party/cac:' +
      'PartyTaxScheme[cac:TaxScheme/(no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ') = ''VAT'')]/cbc:CompanyID) or ex' +
      'ists(//cac:TaxRepresentativePart' +
      'y/cac:PartyTaxScheme[cac:TaxSche' +
      'me/(normalize-space(upper-case(c' +
      'bc:ID)) = ''VAT'')]/cbc:CompanyID)' +
      ')) or not(exists(//cac:Allowance' +
      'Charge[cbc:ChargeIndicator=true(' +
      ')]/cac:TaxCategory[normalize-spa' +
      'ce(cbc:ID)=''G''][cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']))';
     Mensaje: '[BR-G-04]-An Invoice that contai' +
      'ns a Document level charge (BG-2' +
      '1) where the Document level char' +
      'ge VAT category code (BT-102) is' +
      ' "Export outside the EU" shall c' +
      'ontain the Seller VAT Identifier' +
      ' (BT-31) or the Seller tax repre' +
      'sentative VAT identifier (BT-63)' +
      '.';
     Contexto: 8;
     Instruccion: 478),
    (Identificador: 'BR-IC-01';
     Bandera: 'fatal';
     Prueba: '((exists(//cac:TaxCategory[cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']/cbc:ID[norma' +
      'lize-space(.) = ''K'']) or exists(' +
      '//cac:ClassifiedTaxCategory[cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']/cbc:ID[norm' +
      'alize-space(.) = ''K''])) and (cou' +
      'nt(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']/cbc:ID[normalize-space(' +
      '.) = ''K'']) = 1)) or (not(//cac:T' +
      'axCategory[cac:TaxScheme/normali' +
      'ze-space(upper-case(cbc:ID))=''VA' +
      'T'']/cbc:ID[normalize-space(.) = ' +
      '''K'']) and not(//cac:ClassifiedTa' +
      'xCategory[cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']/cbc:ID[normalize-space(.) = ''' +
      'K'']))';
     Mensaje: '[BR-IC-01]-An Invoice that conta' +
      'ins an Invoice line (BG-25), a D' +
      'ocument level allowance (BG-20) ' +
      'or a Document level charge (BG-2' +
      '1) where the VAT category code (' +
      'BT-151, BT-95 or BT-102) is "Int' +
      'ra-community supply" shall conta' +
      'in in the VAT breakdown (BG-23) ' +
      'exactly one VAT category code (B' +
      'T-118) equal with "Intra-communi' +
      'ty supply".';
     Contexto: 8;
     Instruccion: 494),
    (Identificador: 'BR-IC-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''K' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme[cac:TaxScheme/(normalize-spa' +
      'ce(upper-case(cbc:ID)) = ''VAT'')]' +
      '/cbc:CompanyID) or exists(//cac:' +
      'TaxRepresentativeParty/cac:Party' +
      'TaxScheme[cac:TaxScheme/(normali' +
      'ze-space(upper-case(cbc:ID)) = ''' +
      'VAT'')]/cbc:CompanyID)) and (exis' +
      'ts(//cac:AccountingCustomerParty' +
      '/cac:Party/cac:PartyTaxScheme[ca' +
      'c:TaxScheme/(normalize-space(upp' +
      'er-case(cbc:ID)) = ''VAT'')]/cbc:C' +
      'ompanyID))) or not(//cac:Classif' +
      'iedTaxCategory[normalize-space(c' +
      'bc:ID) = ''K''][cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT''])';
     Mensaje: '[BR-IC-02]-An Invoice that conta' +
      'ins an Invoice line (BG-25) wher' +
      'e the Invoiced item VAT category' +
      ' code (BT-151) is "Intra-communi' +
      'ty supply" shall contain the Sel' +
      'ler VAT Identifier (BT-31) or th' +
      'e Seller tax representative VAT ' +
      'identifier (BT-63) and the Buyer' +
      ' VAT identifier (BT-48).';
     Contexto: 8;
     Instruccion: 503),
    (Identificador: 'BR-IC-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D) = ''K''][cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']) and (exists(//cac:Accounting' +
      'SupplierParty/cac:Party/cac:Part' +
      'yTaxScheme[cac:TaxScheme/(normal' +
      'ize-space(upper-case(cbc:ID)) = ' +
      '''VAT'')]/cbc:CompanyID) or exists' +
      '(//cac:TaxRepresentativeParty/ca' +
      'c:PartyTaxScheme[cac:TaxScheme/(' +
      'normalize-space(upper-case(cbc:I' +
      'D)) = ''VAT'')]/cbc:CompanyID)) an' +
      'd (exists(//cac:AccountingCustom' +
      'erParty/cac:Party/cac:PartyTaxSc' +
      'heme[cac:TaxScheme/(normalize-sp' +
      'ace(upper-case(cbc:ID)) = ''VAT'')' +
      ']/cbc:CompanyID))) or not(exists' +
      '(//cac:AllowanceCharge[cbc:Charg' +
      'eIndicator=false()]/cac:TaxCateg' +
      'ory[normalize-space(cbc:ID) = ''K' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-IC-03]-An Invoice that conta' +
      'ins a Document level allowance (' +
      'BG-20) where the Document level ' +
      'allowance VAT category code (BT-' +
      '95) is "Intra-community supply" ' +
      'shall contain the Seller VAT Ide' +
      'ntifier (BT-31) or the Seller ta' +
      'x representative VAT identifier ' +
      '(BT-63) and the Buyer VAT identi' +
      'fier (BT-48).';
     Contexto: 8;
     Instruccion: 511),
    (Identificador: 'BR-IC-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ') = ''K''][cac:TaxScheme/normalize' +
      '-space(upper-case(cbc:ID))=''VAT''' +
      ']) and (exists(//cac:AccountingS' +
      'upplierParty/cac:Party/cac:Party' +
      'TaxScheme[cac:TaxScheme/(normali' +
      'ze-space(upper-case(cbc:ID)) = ''' +
      'VAT'')]/cbc:CompanyID) or exists(' +
      '//cac:TaxRepresentativeParty/cac' +
      ':PartyTaxScheme[cac:TaxScheme/(n' +
      'ormalize-space(upper-case(cbc:ID' +
      ')) = ''VAT'')]/cbc:CompanyID)) and' +
      ' (exists(//cac:AccountingCustome' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme[cac:TaxScheme/(normalize-spa' +
      'ce(upper-case(cbc:ID)) = ''VAT'')]' +
      '/cbc:CompanyID))) or not(exists(' +
      '//cac:AllowanceCharge[cbc:Charge' +
      'Indicator=true()]/cac:TaxCategor' +
      'y[normalize-space(cbc:ID) = ''K'']' +
      '[cac:TaxScheme/normalize-space(u' +
      'pper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-IC-04]-An Invoice that conta' +
      'ins a Document level charge (BG-' +
      '21) where the Document level cha' +
      'rge VAT category code (BT-102) i' +
      's "Intra-community supply" shall' +
      ' contain the Seller VAT Identifi' +
      'er (BT-31) or the Seller tax rep' +
      'resentative VAT identifier (BT-6' +
      '3) and the Buyer VAT identifier ' +
      '(BT-48).';
     Contexto: 8;
     Instruccion: 517),
    (Identificador: 'BR-IC-11';
     Bandera: 'fatal';
     Prueba: '(exists(cac:TaxTotal/cac:TaxSubt' +
      'otal/cac:TaxCategory[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']/cbc:ID[normalize-s' +
      'pace(.) = ''K''])  and (string-len' +
      'gth(cac:Delivery/cbc:ActualDeliv' +
      'eryDate) > 1 or (cac:InvoicePeri' +
      'od/*))) or (not(cac:TaxTotal/cac' +
      ':TaxSubtotal/cac:TaxCategory[cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']/cbc:ID[nor' +
      'malize-space(.) = ''K'']))';
     Mensaje: '[BR-IC-11]-In an Invoice with a ' +
      'VAT breakdown (BG-23) where the ' +
      'VAT category code (BT-118) is "I' +
      'ntra-community supply" the Actua' +
      'l delivery date (BT-72) or the I' +
      'nvoicing period (BG-14) shall no' +
      't be blank.';
     Contexto: 8;
     Instruccion: 528),
    (Identificador: 'BR-IC-12';
     Bandera: 'fatal';
     Prueba: '(exists(cac:TaxTotal/cac:TaxSubt' +
      'otal/cac:TaxCategory[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']/cbc:ID[normalize-s' +
      'pace(.) = ''K'']) and (string-leng' +
      'th(cac:Delivery/cac:DeliveryLoca' +
      'tion/cac:Address/cac:Country/cbc' +
      ':IdentificationCode) >1)) or (no' +
      't(cac:TaxTotal/cac:TaxSubtotal/c' +
      'ac:TaxCategory[cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']/cbc:ID[normalize-space(.' +
      ') = ''K'']))';
     Mensaje: '[BR-IC-12]-In an Invoice with a ' +
      'VAT breakdown (BG-23) where the ' +
      'VAT category code (BT-118) is "I' +
      'ntra-community supply" the Deliv' +
      'er to country code (BT-80) shall' +
      ' not be blank.';
     Contexto: 8;
     Instruccion: 534),
    (Identificador: 'BR-IG-01';
     Bandera: 'fatal';
     Prueba: '((count(//cac:AllowanceCharge/ca' +
      'c:TaxCategory[normalize-space(cb' +
      'c:ID) = ''L''][cac:TaxScheme/norma' +
      'lize-space(upper-case(cbc:ID))=''' +
      'VAT'']) + count(//cac:ClassifiedT' +
      'axCategory[normalize-space(cbc:I' +
      'D) = ''L''][cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      '''])) > 0 and count(cac:TaxTotal/' +
      'cac:TaxSubtotal/cac:TaxCategory[' +
      'cbc:ID = ''L'']) > 0) or ((count(/' +
      '/cac:AllowanceCharge/cac:TaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'L''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']) + ' +
      'count(//cac:ClassifiedTaxCategor' +
      'y[normalize-space(cbc:ID) = ''L'']' +
      '[cac:TaxScheme/normalize-space(u' +
      'pper-case(cbc:ID))=''VAT''])) = 0 ' +
      'and count(cac:TaxTotal/cac:TaxSu' +
      'btotal/cac:TaxCategory[normalize' +
      '-space(cbc:ID) = ''L''][cac:TaxSch' +
      'eme/normalize-space(upper-case(c' +
      'bc:ID))=''VAT'']) = 0)';
     Mensaje: '[BR-IG-01]-An Invoice that conta' +
      'ins an Invoice line (BG-25), a D' +
      'ocument level allowance (BG-20) ' +
      'or a Document level charge (BG-2' +
      '1) where the VAT category code (' +
      'BT-151, BT-95 or BT-102) is "IGI' +
      'C" shall contain in the VAT brea' +
      'kdown (BG-23) at least one VAT c' +
      'ategory code (BT-118) equal with' +
      ' "IGIC".';
     Contexto: 8;
     Instruccion: 560),
    (Identificador: 'BR-IG-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''L' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme/cbc:CompanyID) or exists(//c' +
      'ac:TaxRepresentativeParty/cac:Pa' +
      'rtyTaxScheme[cac:TaxScheme/(norm' +
      'alize-space(upper-case(cbc:ID)) ' +
      '= ''VAT'')]/cbc:CompanyID))) or no' +
      't(exists(//cac:ClassifiedTaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'L''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-IG-02]-An Invoice that conta' +
      'ins an Invoice line (BG-25) wher' +
      'e the Invoiced item VAT category' +
      ' code (BT-151) is "IGIC" shall c' +
      'ontain the Seller VAT Identifier' +
      ' (BT-31), the Seller tax registr' +
      'ation identifier (BT-32) and/or ' +
      'the Seller tax representative VA' +
      'T identifier (BT-63).';
     Contexto: 8;
     Instruccion: 564),
    (Identificador: 'BR-IG-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D)=''L''][cac:TaxScheme/normalize-' +
      'space(upper-case(cbc:ID))=''VAT'']' +
      ') and (exists(//cac:AccountingSu' +
      'pplierParty/cac:Party/cac:PartyT' +
      'axScheme/cbc:CompanyID) or exist' +
      's(//cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme[cac:TaxScheme/' +
      '(normalize-space(upper-case(cbc:' +
      'ID)) = ''VAT'')]/cbc:CompanyID))) ' +
      'or not(exists(//cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=false()]' +
      '/cac:TaxCategory[normalize-space' +
      '(cbc:ID)=''L''][cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']))';
     Mensaje: '[BR-IG-03]-An Invoice that conta' +
      'ins a Document level allowance (' +
      'BG-20) where the Document level ' +
      'allowance VAT category code (BT-' +
      '95) is "IGIC" shall contain the ' +
      'Seller VAT Identifier (BT-31), t' +
      'he Seller tax registration ident' +
      'ifier (BT-32) and/or the Seller ' +
      'tax representative VAT identifie' +
      'r (BT-63).';
     Contexto: 8;
     Instruccion: 569),
    (Identificador: 'BR-IG-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ')=''L''][cac:TaxScheme/normalize-s' +
      'pace(upper-case(cbc:ID))=''VAT''])' +
      ' and (exists(//cac:AccountingSup' +
      'plierParty/cac:Party/cac:PartyTa' +
      'xScheme/cbc:CompanyID) or exists' +
      '(//cac:TaxRepresentativeParty/ca' +
      'c:PartyTaxScheme[cac:TaxScheme/(' +
      'normalize-space(upper-case(cbc:I' +
      'D)) = ''VAT'')]/cbc:CompanyID))) o' +
      'r not(exists(//cac:AllowanceChar' +
      'ge[cbc:ChargeIndicator=true()]/c' +
      'ac:TaxCategory[cbc:ID=''L''][cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-IG-04]-An Invoice that conta' +
      'ins a Document level charge (BG-' +
      '21) where the Document level cha' +
      'rge VAT category code (BT-102) i' +
      's "IGIC" shall contain the Selle' +
      'r VAT Identifier (BT-31), the Se' +
      'ller Tax registration identifier' +
      ' (BT-32) and/or the Seller tax r' +
      'epresentative VAT identifier (BT' +
      '-63).';
     Contexto: 8;
     Instruccion: 577),
    (Identificador: 'BR-IP-01';
     Bandera: 'fatal';
     Prueba: '((count(//cac:AllowanceCharge/ca' +
      'c:TaxCategory[normalize-space(cb' +
      'c:ID) = ''M''][cac:TaxScheme/norma' +
      'lize-space(upper-case(cbc:ID))=''' +
      'VAT'']) + count(//cac:ClassifiedT' +
      'axCategory[normalize-space(cbc:I' +
      'D) = ''M''][cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      '''])) > 0 and count(cac:TaxTotal/' +
      'cac:TaxSubtotal/cac:TaxCategory[' +
      'cbc:ID = ''M''][cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']) > 0) or ((count(//cac:Al' +
      'lowanceCharge/cac:TaxCategory[no' +
      'rmalize-space(cbc:ID) = ''M''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']) + count(/' +
      '/cac:ClassifiedTaxCategory[norma' +
      'lize-space(cbc:ID) = ''M''][cac:Ta' +
      'xScheme/normalize-space(upper-ca' +
      'se(cbc:ID))=''VAT''])) = 0 and cou' +
      'nt(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''M''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']) = 0)';
     Mensaje: '[BR-IP-01]-An Invoice that conta' +
      'ins an Invoice line (BG-25), a D' +
      'ocument level allowance (BG-20) ' +
      'or a Document level charge (BG-2' +
      '1) where the VAT category code (' +
      'BT-151, BT-95 or BT-102) is "IPS' +
      'I" shall contain in the VAT brea' +
      'kdown (BG-23) at least one VAT c' +
      'ategory code (BT-118) equal with' +
      ' "IPSI".';
     Contexto: 8;
     Instruccion: 602),
    (Identificador: 'BR-IP-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''M' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme/cbc:CompanyID) or exists(//c' +
      'ac:TaxRepresentativeParty/cac:Pa' +
      'rtyTaxScheme[cac:TaxScheme/(norm' +
      'alize-space(upper-case(cbc:ID)) ' +
      '= ''VAT'')]/cbc:CompanyID))) or no' +
      't(exists(//cac:ClassifiedTaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'M''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-IP-02]-An Invoice that conta' +
      'ins an Invoice line (BG-25) wher' +
      'e the Invoiced item VAT category' +
      ' code (BT-151) is "IPSI" shall c' +
      'ontain the Seller VAT Identifier' +
      ' (BT-31), the Seller tax registr' +
      'ation identifier (BT-32) and/or ' +
      'the Seller tax representative VA' +
      'T identifier (BT-63).';
     Contexto: 8;
     Instruccion: 606),
    (Identificador: 'BR-IP-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D)=''M''][cac:TaxScheme/normalize-' +
      'space(upper-case(cbc:ID))=''VAT'']' +
      ') and (exists(//cac:AccountingSu' +
      'pplierParty/cac:Party/cac:PartyT' +
      'axScheme/cbc:CompanyID) or exist' +
      's(//cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme[cac:TaxScheme/' +
      '(normalize-space(upper-case(cbc:' +
      'ID)) = ''VAT'')]/cbc:CompanyID))) ' +
      'or not(exists(//cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=false()]' +
      '/cac:TaxCategory[normalize-space' +
      '(cbc:ID)=''M''][cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']))';
     Mensaje: '[BR-IP-03]-An Invoice that conta' +
      'ins a Document level allowance (' +
      'BG-20) where the Document level ' +
      'allowance VAT category code (BT-' +
      '95) is "IPSI" shall contain the ' +
      'Seller VAT Identifier (BT-31), t' +
      'he Seller Tax registration ident' +
      'ifier (BT-32) and/or the Seller ' +
      'tax representative VAT identifie' +
      'r (BT-63).';
     Contexto: 8;
     Instruccion: 611),
    (Identificador: 'BR-IP-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ')=''M''][cac:TaxScheme/normalize-s' +
      'pace(upper-case(cbc:ID))=''VAT''])' +
      ' and (exists(//cac:AccountingSup' +
      'plierParty/cac:Party/cac:PartyTa' +
      'xScheme/cbc:CompanyID) or exists' +
      '(//cac:TaxRepresentativeParty/ca' +
      'c:PartyTaxScheme[cac:TaxScheme/(' +
      'normalize-space(upper-case(cbc:I' +
      'D)) = ''VAT'')]/cbc:CompanyID))) o' +
      'r not(exists(//cac:AllowanceChar' +
      'ge[cbc:ChargeIndicator=true()]/c' +
      'ac:TaxCategory[normalize-space(c' +
      'bc:ID)=''M''][cac:TaxScheme/normal' +
      'ize-space(upper-case(cbc:ID))=''V' +
      'AT'']))';
     Mensaje: '[BR-IP-04]-An Invoice that conta' +
      'ins a Document level charge (BG-' +
      '21) where the Document level cha' +
      'rge VAT category code (BT-102) i' +
      's "IPSI" shall contain the Selle' +
      'r VAT Identifier (BT-31), the Se' +
      'ller Tax registration identifier' +
      ' (BT-32) and/or the Seller tax r' +
      'epresentative VAT identifier (BT' +
      '-63).';
     Contexto: 8;
     Instruccion: 616),
    (Identificador: 'BR-O-01';
     Bandera: 'fatal';
     Prueba: '((exists(//cac:TaxCategory[cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']/cbc:ID[norma' +
      'lize-space(.) = ''O'']) or exists(' +
      '//cac:ClassifiedTaxCategory[cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']/cbc:ID[norm' +
      'alize-space(.) = ''O''])) and (cou' +
      'nt(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']/cbc:ID[normalize-space(' +
      '.) = ''O'']) = 1)) or (not(//cac:T' +
      'axCategory[cac:TaxScheme/normali' +
      'ze-space(upper-case(cbc:ID))=''VA' +
      'T'']/cbc:ID[normalize-space(.) = ' +
      '''O'']) and not(//cac:ClassifiedTa' +
      'xCategory[cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']/cbc:ID[normalize-space(.) = ''' +
      'O'']))';
     Mensaje: '[BR-O-01]-An Invoice that contai' +
      'ns an Invoice line (BG-25), a Do' +
      'cument level allowance (BG-20) o' +
      'r a Document level charge (BG-21' +
      ') where the VAT category code (B' +
      'T-151, BT-95 or BT-102) is "Not ' +
      'subject to VAT" shall contain ex' +
      'actly one VAT breakdown group (B' +
      'G-23) with the VAT category code' +
      ' (BT-118) equal to "Not subject ' +
      'to VAT".';
     Contexto: 8;
     Instruccion: 632),
    (Identificador: 'BR-O-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''O' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (not(//cac:AccountingSupplierPa' +
      'rty/cac:Party/cac:PartyTaxScheme' +
      '[cac:TaxScheme/(normalize-space(' +
      'upper-case(cbc:ID)) = ''VAT'')]/cb' +
      'c:CompanyID) and not(//cac:TaxRe' +
      'presentativeParty/cac:PartyTaxSc' +
      'heme[cac:TaxScheme/(normalize-sp' +
      'ace(upper-case(cbc:ID)) = ''VAT'')' +
      ']/cbc:CompanyID) and not(//cac:A' +
      'ccountingCustomerParty/cac:Party' +
      '/cac:PartyTaxScheme[cac:TaxSchem' +
      'e/(normalize-space(upper-case(cb' +
      'c:ID)) = ''VAT'')]/cbc:CompanyID))' +
      ') or not(//cac:ClassifiedTaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'O''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT''])';
     Mensaje: '[BR-O-02]-An Invoice that contai' +
      'ns an Invoice line (BG-25) where' +
      ' the Invoiced item VAT category ' +
      'code (BT-151) is "Not subject to' +
      ' VAT" shall not contain the Sell' +
      'er VAT identifier (BT-31), the S' +
      'eller tax representative VAT ide' +
      'ntifier (BT-63) or the Buyer VAT' +
      ' identifier (BT-48).';
     Contexto: 8;
     Instruccion: 645),
    (Identificador: 'BR-O-03';
     Bandera: 'fatal';
     Prueba: '(exists((/ubl:Invoice|/cn:Credit' +
      'Note)/cac:AllowanceCharge[cbc:Ch' +
      'argeIndicator=false()]/cac:TaxCa' +
      'tegory[normalize-space(cbc:ID) =' +
      ' ''O''][cac:TaxScheme/normalize-sp' +
      'ace(upper-case(cbc:ID))=''VAT'']) ' +
      'and (not(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme[cac:TaxScheme/(normalize-spa' +
      'ce(upper-case(cbc:ID)) = ''VAT'')]' +
      '/cbc:CompanyID) and not(//cac:Ta' +
      'xRepresentativeParty/cac:PartyTa' +
      'xScheme[cac:TaxScheme/(normalize' +
      '-space(upper-case(cbc:ID)) = ''VA' +
      'T'')]/cbc:CompanyID) and not(//ca' +
      'c:AccountingCustomerParty/cac:Pa' +
      'rty/cac:PartyTaxScheme[cac:TaxSc' +
      'heme/(normalize-space(upper-case' +
      '(cbc:ID)) = ''VAT'')]/cbc:CompanyI' +
      'D))) or not(exists((/ubl:Invoice' +
      '|/cn:CreditNote)/cac:AllowanceCh' +
      'arge[cbc:ChargeIndicator=false()' +
      ']/cac:TaxCategory[normalize-spac' +
      'e(cbc:ID) = ''O''][cac:TaxScheme/n' +
      'ormalize-space(upper-case(cbc:ID' +
      '))=''VAT'']))';
     Mensaje: '[BR-O-03]-An Invoice that contai' +
      'ns a Document level allowance (B' +
      'G-20) where the Document level a' +
      'llowance VAT category code (BT-9' +
      '5) is "Not subject to VAT" shall' +
      ' not contain the Seller VAT iden' +
      'tifier (BT-31), the Seller tax r' +
      'epresentative VAT identifier (BT' +
      '-63) or the Buyer VAT identifier' +
      ' (BT-48).';
     Contexto: 8;
     Instruccion: 653),
    (Identificador: 'BR-O-04';
     Bandera: 'fatal';
     Prueba: '(exists((/ubl:Invoice|/cn:Credit' +
      'Note)/cac:AllowanceCharge[cbc:Ch' +
      'argeIndicator=true()]/cac:TaxCat' +
      'egory[normalize-space(cbc:ID) = ' +
      '''O''][cac:TaxScheme/normalize-spa' +
      'ce(upper-case(cbc:ID))=''VAT'']) a' +
      'nd (not(//cac:AccountingSupplier' +
      'Party/cac:Party/cac:PartyTaxSche' +
      'me[cac:TaxScheme/(normalize-spac' +
      'e(upper-case(cbc:ID)) = ''VAT'')]/' +
      'cbc:CompanyID) and not(//cac:Tax' +
      'RepresentativeParty/cac:PartyTax' +
      'Scheme[cac:TaxScheme/(normalize-' +
      'space(upper-case(cbc:ID)) = ''VAT' +
      ''')]/cbc:CompanyID) and not(//cac' +
      ':AccountingCustomerParty/cac:Par' +
      'ty/cac:PartyTaxScheme[cac:TaxSch' +
      'eme/(normalize-space(upper-case(' +
      'cbc:ID)) = ''VAT'')]/cbc:CompanyID' +
      '))) or not(exists((/ubl:Invoice|' +
      '/cn:CreditNote)/cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=true()]/' +
      'cac:TaxCategory[normalize-space(' +
      'cbc:ID) = ''O''][cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']))';
     Mensaje: '[BR-O-04]-An Invoice that contai' +
      'ns a Document level charge (BG-2' +
      '1) where the Document level char' +
      'ge VAT category code (BT-102) is' +
      ' "Not subject to VAT" shall not ' +
      'contain the Seller VAT identifie' +
      'r (BT-31), the Seller tax repres' +
      'entative VAT identifier (BT-63) ' +
      'or the Buyer VAT identifier (BT-' +
      '48).';
     Contexto: 8;
     Instruccion: 659),
    (Identificador: 'BR-O-11';
     Bandera: 'fatal';
     Prueba: '(exists(cac:TaxTotal/cac:TaxSubt' +
      'otal/cac:TaxCategory[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']/cbc:ID[normalize-s' +
      'pace(.) = ''O'']) and count(cac:Ta' +
      'xTotal/cac:TaxSubtotal/cac:TaxCa' +
      'tegory[normalize-space(cbc:ID) !' +
      '= ''O''][cac:TaxScheme/normalize-s' +
      'pace(upper-case(cbc:ID))=''VAT''])' +
      ' = 0) or not(cac:TaxTotal/cac:Ta' +
      'xSubtotal/cac:TaxCategory[cac:Ta' +
      'xScheme/normalize-space(upper-ca' +
      'se(cbc:ID))=''VAT'']/cbc:ID[normal' +
      'ize-space(.) = ''O''])';
     Mensaje: '[BR-O-11]-An Invoice that contai' +
      'ns a VAT breakdown group (BG-23)' +
      ' with a VAT category code (BT-11' +
      '8) "Not subject to VAT" shall no' +
      't contain other VAT breakdown gr' +
      'oups (BG-23).';
     Contexto: 8;
     Instruccion: 669),
    (Identificador: 'BR-O-12';
     Bandera: 'fatal';
     Prueba: '(exists(cac:TaxTotal/cac:TaxSubt' +
      'otal/cac:TaxCategory[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']/cbc:ID[normalize-s' +
      'pace(.) = ''O'']) and count(//cac:' +
      'ClassifiedTaxCategory[normalize-' +
      'space(cbc:ID) != ''O''][cac:TaxSch' +
      'eme/normalize-space(upper-case(c' +
      'bc:ID))=''VAT'']) = 0) or not(cac:' +
      'TaxTotal/cac:TaxSubtotal/cac:Tax' +
      'Category[cac:TaxScheme/normalize' +
      '-space(upper-case(cbc:ID))=''VAT''' +
      ']/cbc:ID[normalize-space(.) = ''O' +
      '''])';
     Mensaje: '[BR-O-12]-An Invoice that contai' +
      'ns a VAT breakdown group (BG-23)' +
      ' with a VAT category code (BT-11' +
      '8) "Not subject to VAT" shall no' +
      't contain an Invoice line (BG-25' +
      ') where the Invoiced item VAT ca' +
      'tegory code (BT-151) is not "Not' +
      ' subject to VAT".';
     Contexto: 8;
     Instruccion: 676),
    (Identificador: 'BR-O-13';
     Bandera: 'fatal';
     Prueba: '(exists(cac:TaxTotal/cac:TaxSubt' +
      'otal/cac:TaxCategory[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']/cbc:ID[normalize-s' +
      'pace(.) = ''O'']) and count(//cac:' +
      'AllowanceCharge[cbc:ChargeIndica' +
      'tor=false()]/cac:TaxCategory[nor' +
      'malize-space(cbc:ID) != ''O''][cac' +
      ':TaxScheme/normalize-space(upper' +
      '-case(cbc:ID))=''VAT'']) = 0) or n' +
      'ot(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']/cbc:ID[normalize-space(' +
      '.) = ''O''])';
     Mensaje: '[BR-O-13]-An Invoice that contai' +
      'ns a VAT breakdown group (BG-23)' +
      ' with a VAT category code (BT-11' +
      '8) "Not subject to VAT" shall no' +
      't contain Document level allowan' +
      'ces (BG-20) where Document level' +
      ' allowance VAT category code (BT' +
      '-95) is not "Not subject to VAT"' +
      '.';
     Contexto: 8;
     Instruccion: 681),
    (Identificador: 'BR-O-14';
     Bandera: 'fatal';
     Prueba: '(exists(cac:TaxTotal/cac:TaxSubt' +
      'otal/cac:TaxCategory[cac:TaxSche' +
      'me/normalize-space(upper-case(cb' +
      'c:ID))=''VAT'']/cbc:ID[normalize-s' +
      'pace(.) = ''O'']) and count(//cac:' +
      'AllowanceCharge[cbc:ChargeIndica' +
      'tor=true()]/cac:TaxCategory[norm' +
      'alize-space(cbc:ID) != ''O''][cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']) = 0) or no' +
      't(cac:TaxTotal/cac:TaxSubtotal/c' +
      'ac:TaxCategory[cac:TaxScheme/nor' +
      'malize-space(upper-case(cbc:ID))' +
      '=''VAT'']/cbc:ID[normalize-space(.' +
      ') = ''O''])';
     Mensaje: '[BR-O-14]-An Invoice that contai' +
      'ns a VAT breakdown group (BG-23)' +
      ' with a VAT category code (BT-11' +
      '8) "Not subject to VAT" shall no' +
      't contain Document level charges' +
      ' (BG-21) where Document level ch' +
      'arge VAT category code (BT-102) ' +
      'is not "Not subject to VAT".';
     Contexto: 8;
     Instruccion: 686),
    (Identificador: 'BR-S-01';
     Bandera: 'fatal';
     Prueba: '((count(//cac:AllowanceCharge/ca' +
      'c:TaxCategory[normalize-space(cb' +
      'c:ID) = ''S'']) + count(//cac:Clas' +
      'sifiedTaxCategory[normalize-spac' +
      'e(cbc:ID) = ''S''])) > 0 and count' +
      '(cac:TaxTotal/cac:TaxSubtotal/ca' +
      'c:TaxCategory[normalize-space(cb' +
      'c:ID) = ''S'']) > 0) or ((count(//' +
      'cac:AllowanceCharge/cac:TaxCateg' +
      'ory[normalize-space(cbc:ID) = ''S' +
      ''']) + count(//cac:ClassifiedTaxC' +
      'ategory[normalize-space(cbc:ID) ' +
      '= ''S''])) = 0 and count(cac:TaxTo' +
      'tal/cac:TaxSubtotal/cac:TaxCateg' +
      'ory[normalize-space(cbc:ID) = ''S' +
      ''']) = 0)';
     Mensaje: '[BR-S-01]-An Invoice that contai' +
      'ns an Invoice line (BG-25), a Do' +
      'cument level allowance (BG-20) o' +
      'r a Document level charge (BG-21' +
      ') where the VAT category code (B' +
      'T-151, BT-95 or BT-102) is "Stan' +
      'dard rated" shall contain in the' +
      ' VAT breakdown (BG-23) at least ' +
      'one VAT category code (BT-118) e' +
      'qual with "Standard rated".';
     Contexto: 8;
     Instruccion: 704),
    (Identificador: 'BR-S-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''S' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme/cbc:CompanyID) or exists(//c' +
      'ac:TaxRepresentativeParty/cac:Pa' +
      'rtyTaxScheme[cac:TaxScheme/(norm' +
      'alize-space(upper-case(cbc:ID)) ' +
      '= ''VAT'')]/cbc:CompanyID))) or no' +
      't(exists(//cac:ClassifiedTaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'S'']))';
     Mensaje: '[BR-S-02]-An Invoice that contai' +
      'ns an Invoice line (BG-25) where' +
      ' the Invoiced item VAT category ' +
      'code (BT-151) is "Standard rated' +
      '" shall contain the Seller VAT I' +
      'dentifier (BT-31), the Seller ta' +
      'x registration identifier (BT-32' +
      ') and/or the Seller tax represen' +
      'tative VAT identifier (BT-63).';
     Contexto: 8;
     Instruccion: 711),
    (Identificador: 'BR-S-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D)=''S''][cac:TaxScheme/normalize-' +
      'space(upper-case(cbc:ID))=''VAT'']' +
      ') and (exists(//cac:AccountingSu' +
      'pplierParty/cac:Party/cac:PartyT' +
      'axScheme/cbc:CompanyID) or exist' +
      's(//cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme[cac:TaxScheme/' +
      '(normalize-space(upper-case(cbc:' +
      'ID)) = ''VAT'')]/cbc:CompanyID))) ' +
      'or not(exists(//cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=false()]' +
      '/cac:TaxCategory[normalize-space' +
      '(cbc:ID)=''S''][cac:TaxScheme/norm' +
      'alize-space(upper-case(cbc:ID))=' +
      '''VAT'']))';
     Mensaje: '[BR-S-03]-An Invoice that contai' +
      'ns a Document level allowance (B' +
      'G-20) where the Document level a' +
      'llowance VAT category code (BT-9' +
      '5) is "Standard rated" shall con' +
      'tain the Seller VAT Identifier (' +
      'BT-31), the Seller tax registrat' +
      'ion identifier (BT-32) and/or th' +
      'e Seller tax representative VAT ' +
      'identifier (BT-63).';
     Contexto: 8;
     Instruccion: 717),
    (Identificador: 'BR-S-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ')=''S''][cac:TaxScheme/normalize-s' +
      'pace(upper-case(cbc:ID))=''VAT''])' +
      ' and (exists(//cac:AccountingSup' +
      'plierParty/cac:Party/cac:PartyTa' +
      'xScheme/cbc:CompanyID) or exists' +
      '(//cac:TaxRepresentativeParty/ca' +
      'c:PartyTaxScheme[cac:TaxScheme/(' +
      'normalize-space(upper-case(cbc:I' +
      'D)) = ''VAT'')]/cbc:CompanyID))) o' +
      'r not(exists(//cac:AllowanceChar' +
      'ge[cbc:ChargeIndicator=true()]/c' +
      'ac:TaxCategory[normalize-space(c' +
      'bc:ID)=''S''][cac:TaxScheme/normal' +
      'ize-space(upper-case(cbc:ID))=''V' +
      'AT'']))';
     Mensaje: '[BR-S-04]-An Invoice that contai' +
      'ns a Document level charge (BG-2' +
      '1) where the Document level char' +
      'ge VAT category code (BT-102) is' +
      ' "Standard rated" shall contain ' +
      'the Seller VAT Identifier (BT-31' +
      '), the Seller tax registration i' +
      'dentifier (BT-32) and/or the Sel' +
      'ler tax representative VAT ident' +
      'ifier (BT-63).';
     Contexto: 8;
     Instruccion: 722),
    (Identificador: 'BR-Z-01';
     Bandera: 'fatal';
     Prueba: '((exists(//cac:TaxCategory[cac:T' +
      'axScheme/normalize-space(upper-c' +
      'ase(cbc:ID))=''VAT'']/cbc:ID[norma' +
      'lize-space(.) = ''Z'']) or exists(' +
      '//cac:ClassifiedTaxCategory[cac:' +
      'TaxScheme/normalize-space(upper-' +
      'case(cbc:ID))=''VAT'']/cbc:ID[norm' +
      'alize-space(.) = ''Z''])) and (cou' +
      'nt(cac:TaxTotal/cac:TaxSubtotal/' +
      'cac:TaxCategory[cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']/cbc:ID[normalize-space(' +
      '.) = ''Z'']) = 1)) or (not(//cac:T' +
      'axCategory[cac:TaxScheme/normali' +
      'ze-space(upper-case(cbc:ID))=''VA' +
      'T'']/cbc:ID[normalize-space(.) = ' +
      '''Z'']) and not(//cac:ClassifiedTa' +
      'xCategory[cac:TaxScheme/normaliz' +
      'e-space(upper-case(cbc:ID))=''VAT' +
      ''']/cbc:ID[normalize-space(.) = ''' +
      'Z'']))';
     Mensaje: '[BR-Z-01]-An Invoice that contai' +
      'ns an Invoice line (BG-25), a Do' +
      'cument level allowance (BG-20) o' +
      'r a Document level charge (BG-21' +
      ') where the VAT category code (B' +
      'T-151, BT-95 or BT-102) is "Zero' +
      ' rated" shall contain in the VAT' +
      ' breakdown (BG-23) exactly one V' +
      'AT category code (BT-118) equal ' +
      'with "Zero rated".';
     Contexto: 8;
     Instruccion: 738),
    (Identificador: 'BR-Z-02';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:ClassifiedTaxCateg' +
      'ory[normalize-space(cbc:ID) = ''Z' +
      '''][cac:TaxScheme/normalize-space' +
      '(upper-case(cbc:ID))=''VAT'']) and' +
      ' (exists(//cac:AccountingSupplie' +
      'rParty/cac:Party/cac:PartyTaxSch' +
      'eme/cbc:CompanyID) or exists(//c' +
      'ac:TaxRepresentativeParty/cac:Pa' +
      'rtyTaxScheme[cac:TaxScheme/(norm' +
      'alize-space(upper-case(cbc:ID)) ' +
      '= ''VAT'')]/cbc:CompanyID))) or no' +
      't(exists(//cac:ClassifiedTaxCate' +
      'gory[normalize-space(cbc:ID) = ''' +
      'Z''][cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']))';
     Mensaje: '[BR-Z-02]-An Invoice that contai' +
      'ns an Invoice line where the Inv' +
      'oiced item VAT category code (BT' +
      '-151) is "Zero rated" shall cont' +
      'ain the Seller VAT Identifier (B' +
      'T-31), the Seller tax registrati' +
      'on identifier (BT-32) and/or the' +
      ' Seller tax representative VAT i' +
      'dentifier (BT-63).';
     Contexto: 8;
     Instruccion: 746),
    (Identificador: 'BR-Z-03';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()]/cac:T' +
      'axCategory[normalize-space(cbc:I' +
      'D)=''Z''][cac:TaxScheme/normalize-' +
      'space(upper-case(cbc:ID))=''VAT'']' +
      ') and (exists(//cac:AccountingSu' +
      'pplierParty/cac:Party/cac:PartyT' +
      'axScheme/cbc:CompanyID) or exist' +
      's(//cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme[cac:TaxScheme/' +
      '(normalize-space(upper-case(cbc:' +
      'ID)) = ''VAT'')]/cbc:CompanyID))) ' +
      'or not(exists(//cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=false()]' +
      '/cac:TaxCategory[normalize-space' +
      '(cbc:ID) = ''Z''][cac:TaxScheme/no' +
      'rmalize-space(upper-case(cbc:ID)' +
      ')=''VAT'']))';
     Mensaje: '[BR-Z-03]-An Invoice that contai' +
      'ns a Document level allowance (B' +
      'G-20) where the Document level a' +
      'llowance VAT category code (BT-9' +
      '5) is "Zero rated" shall contain' +
      ' the Seller VAT Identifier (BT-3' +
      '1), the Seller tax registration ' +
      'identifier (BT-32) and/or the Se' +
      'ller tax representative VAT iden' +
      'tifier (BT-63).';
     Contexto: 8;
     Instruccion: 753),
    (Identificador: 'BR-Z-04';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=true()]/cac:Ta' +
      'xCategory[normalize-space(cbc:ID' +
      ')=''Z''][cac:TaxScheme/normalize-s' +
      'pace(upper-case(cbc:ID))=''VAT''])' +
      ' and (exists(//cac:AccountingSup' +
      'plierParty/cac:Party/cac:PartyTa' +
      'xScheme/cbc:CompanyID)or exists(' +
      '//cac:TaxRepresentativeParty/cac' +
      ':PartyTaxScheme[cac:TaxScheme/(n' +
      'ormalize-space(upper-case(cbc:ID' +
      ')) = ''VAT'')]/cbc:CompanyID))) or' +
      ' not(exists(//cac:AllowanceCharg' +
      'e[cbc:ChargeIndicator=true()]/ca' +
      'c:TaxCategory[normalize-space(cb' +
      'c:ID) = ''Z''][cac:TaxScheme/norma' +
      'lize-space(upper-case(cbc:ID))=''' +
      'VAT'']))';
     Mensaje: '[BR-Z-04]-An Invoice that contai' +
      'ns a Document level charge where' +
      ' the Document level charge VAT c' +
      'ategory code (BT-102) is "Zero r' +
      'ated" shall contain the Seller V' +
      'AT Identifier (BT-31), the Selle' +
      'r tax registration identifier (B' +
      'T-32) and/or the Seller tax repr' +
      'esentative VAT identifier (BT-63' +
      ').';
     Contexto: 8;
     Instruccion: 758),
    (Identificador: 'BR-B-01';
     Bandera: 'fatal';
     Prueba: '(not(//cbc:IdentificationCode !=' +
      ' ''IT'') and (//cac:TaxCategory/cb' +
      'c:ID =''B'' or //cac:ClassifiedTax' +
      'Category/cbc:ID = ''B'')) or (not(' +
      '//cac:TaxCategory/cbc:ID =''B'' or' +
      ' //cac:ClassifiedTaxCategory/cbc' +
      ':ID = ''B''))';
     Mensaje: '[BR-B-01]-An Invoice where the V' +
      'AT category code (BT-151, BT-95 ' +
      'or BT-102) is “Split payment” sh' +
      'all be a domestic Italian invoic' +
      'e.';
     Contexto: 8;
     Instruccion: 773),
    (Identificador: 'BR-B-02';
     Bandera: 'fatal';
     Prueba: '((cac:TaxTotal/cac:TaxSubtotal/c' +
      'ac:TaxCategory/cbc:ID =''B'' or ca' +
      'c:AllowanceCharge/cac:TaxCategor' +
      'y/cbc:ID =''B'' or //cac:Classifie' +
      'dTaxCategory/cbc:ID = ''B'') and (' +
      'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cbc:ID =''S'' or ' +
      'cac:AllowanceCharge/cac:TaxCateg' +
      'ory/cbc:ID =''S'' or //cac:Classif' +
      'iedTaxCategory/cbc:ID = ''S''))) o' +
      'r (not(cac:TaxTotal/cac:TaxSubto' +
      'tal/cac:TaxCategory/cbc:ID =''B'' ' +
      'or cac:AllowanceCharge/cac:TaxCa' +
      'tegory/cbc:ID =''B'' or //cac:Clas' +
      'sifiedTaxCategory/cbc:ID = ''B''))';
     Mensaje: '[BR-B-02]-An Invoice that contai' +
      'ns an Invoice line (BG-25), a Do' +
      'cument level allowance (BG-20) o' +
      'r a Document level charge (BG-21' +
      ') where the VAT category code (B' +
      'T-151, BT-95, BT-118 or BT-102) ' +
      'is “Split payment" shall not con' +
      'tain an invoice line (BG-25), a ' +
      'Document level allowance (BG-20)' +
      ' or  a Document level charge (BG' +
      '-21) where the VAT category code' +
      ' (BT-151, BT-95, BT-118 or BT-10' +
      '2) is “Standard rated”.';
     Contexto: 8;
     Instruccion: 790),
    (Identificador: 'BR-21';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:ID) != ''''';
     Mensaje: '[BR-21]-Each Invoice line (BG-25' +
      ') shall have an Invoice line ide' +
      'ntifier (BT-126).';
     Contexto: 9;
     Instruccion: 7),
    (Identificador: 'BR-22';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:InvoicedQuantity) or ' +
      'exists(cbc:CreditedQuantity)';
     Mensaje: '[BR-22]-Each Invoice line (BG-25' +
      ') shall have an Invoiced quantit' +
      'y (BT-129).';
     Contexto: 9;
     Instruccion: 795),
    (Identificador: 'BR-23';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:InvoicedQuantity/@uni' +
      'tCode) or exists(cbc:CreditedQua' +
      'ntity/@unitCode)';
     Mensaje: '[BR-23]-An Invoice line (BG-25) ' +
      'shall have an Invoiced quantity ' +
      'unit of measure code (BT-130).';
     Contexto: 9;
     Instruccion: 801),
    (Identificador: 'BR-24';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:LineExtensionAmount)';
     Mensaje: '[BR-24]-Each Invoice line (BG-25' +
      ') shall have an Invoice line net' +
      ' amount (BT-131).';
     Contexto: 9;
     Instruccion: 89),
    (Identificador: 'BR-25';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:Item/cbc:Nam' +
      'e) != ''''';
     Mensaje: '[BR-25]-Each Invoice line (BG-25' +
      ') shall contain the Item name (B' +
      'T-153).';
     Contexto: 9;
     Instruccion: 806),
    (Identificador: 'BR-26';
     Bandera: 'fatal';
     Prueba: 'exists(cac:Price/cbc:PriceAmount' +
      ')';
     Mensaje: '[BR-26]-Each Invoice line (BG-25' +
      ') shall contain the Item net pri' +
      'ce (BT-146).';
     Contexto: 9;
     Instruccion: 810),
    (Identificador: 'BR-27';
     Bandera: 'fatal';
     Prueba: '(cac:Price/cbc:PriceAmount) >= 0';
     Mensaje: '[BR-27]-The Item net price (BT-1' +
      '46) shall NOT be negative.';
     Contexto: 9;
     Instruccion: 811),
    (Identificador: 'BR-28';
     Bandera: 'fatal';
     Prueba: '(cac:Price/cac:AllowanceCharge/c' +
      'bc:BaseAmount) >= 0 or not(exist' +
      's(cac:Price/cac:AllowanceCharge/' +
      'cbc:BaseAmount))';
     Mensaje: '[BR-28]-The Item gross price (BT' +
      '-148) shall NOT be negative.';
     Contexto: 9;
     Instruccion: 817),
    (Identificador: 'BR-CO-04';
     Bandera: 'fatal';
     Prueba: '(cac:Item/cac:ClassifiedTaxCateg' +
      'ory[cac:TaxScheme/(normalize-spa' +
      'ce(upper-case(cbc:ID))=''VAT'')]/c' +
      'bc:ID)';
     Mensaje: '[BR-CO-04]-Each Invoice line (BG' +
      '-25) shall be categorized with a' +
      'n Invoiced item VAT category cod' +
      'e (BT-151).';
     Contexto: 9;
     Instruccion: 820),
    (Identificador: 'BR-DEC-23';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:LineExtensionAmount,''.''))<=2';
     Mensaje: '[BR-DEC-23]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce line net amount (BT-131) is 2' +
      '.';
     Contexto: 9;
     Instruccion: 208),
    (Identificador: 'BR-41';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:Amount)';
     Mensaje: '[BR-41]-Each Invoice line allowa' +
      'nce (BG-27) shall have an Invoic' +
      'e line allowance amount (BT-136)' +
      '.';
     Contexto: 10;
     Instruccion: 55),
    (Identificador: 'BR-42';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-42]-Each Invoice line allowa' +
      'nce (BG-27) shall have an Invoic' +
      'e line allowance reason (BT-139)' +
      ' or an Invoice line allowance re' +
      'ason code (BT-140).';
     Contexto: 10;
     Instruccion: 70),
    (Identificador: 'BR-CO-07';
     Bandera: 'fatal';
     Prueba: 'true()';
     Mensaje: '[BR-CO-07]-Invoice line allowanc' +
      'e reason code (BT-140) and Invoi' +
      'ce line allowance reason (BT-139' +
      ') shall indicate the same type o' +
      'f allowance reason.';
     Contexto: 10;
     Instruccion: 71),
    (Identificador: 'BR-CO-23';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-CO-23]-Each Invoice line all' +
      'owance (BG-27) shall contain an ' +
      'Invoice line allowance reason (B' +
      'T-139) or an Invoice line allowa' +
      'nce reason code (BT-140), or bot' +
      'h.';
     Contexto: 10;
     Instruccion: 70),
    (Identificador: 'BR-DEC-24';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:Amount,''.''))<=2';
     Mensaje: '[BR-DEC-24]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce line allowance amount (BT-136' +
      ') is 2.';
     Contexto: 10;
     Instruccion: 76),
    (Identificador: 'BR-DEC-25';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:BaseAmount,''.''))<=2';
     Mensaje: '[BR-DEC-25]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce line allowance base amount (B' +
      'T-137) is 2.';
     Contexto: 10;
     Instruccion: 80),
    (Identificador: 'BR-43';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:Amount)';
     Mensaje: '[BR-43]-Each Invoice line charge' +
      ' (BG-28) shall have an Invoice l' +
      'ine charge amount (BT-141).';
     Contexto: 11;
     Instruccion: 55),
    (Identificador: 'BR-44';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-44]-Each Invoice line charge' +
      ' shall have an Invoice line char' +
      'ge reason or an invoice line all' +
      'owance reason code. ';
     Contexto: 11;
     Instruccion: 70),
    (Identificador: 'BR-CO-08';
     Bandera: 'fatal';
     Prueba: 'true()';
     Mensaje: '[BR-CO-08]-Invoice line charge r' +
      'eason code (BT-145) and Invoice ' +
      'line charge reason (BT-144) shal' +
      'l indicate the same type of char' +
      'ge reason.';
     Contexto: 11;
     Instruccion: 71),
    (Identificador: 'BR-CO-24';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:AllowanceChargeReason' +
      ') or exists(cbc:AllowanceChargeR' +
      'easonCode)';
     Mensaje: '[BR-CO-24]-Each Invoice line cha' +
      'rge (BG-28) shall contain an Inv' +
      'oice line charge reason (BT-144)' +
      ' or an Invoice line charge reaso' +
      'n code (BT-145), or both.';
     Contexto: 11;
     Instruccion: 70),
    (Identificador: 'BR-DEC-27';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:Amount,''.''))<=2';
     Mensaje: '[BR-DEC-27]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce line charge amount (BT-141) i' +
      's 2.';
     Contexto: 11;
     Instruccion: 76),
    (Identificador: 'BR-DEC-28';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:BaseAmount,''.''))<=2';
     Mensaje: '[BR-DEC-28]-The allowed maximum ' +
      'number of decimals for the Invoi' +
      'ce line charge base amount (BT-1' +
      '42) is 2.';
     Contexto: 11;
     Instruccion: 80),
    (Identificador: 'BR-30';
     Bandera: 'fatal';
     Prueba: '(exists(cbc:EndDate) and exists(' +
      'cbc:StartDate) and xs:date(cbc:E' +
      'ndDate) >= xs:date(cbc:StartDate' +
      ')) or not(exists(cbc:StartDate))' +
      ' or not(exists(cbc:EndDate))';
     Mensaje: '[BR-30]-If both Invoice line per' +
      'iod start date (BT-134) and Invo' +
      'ice line period end date (BT-135' +
      ') are given then the Invoice lin' +
      'e period end date (BT-135) shall' +
      ' be later or equal to the Invoic' +
      'e line period start date (BT-134' +
      ').';
     Contexto: 12;
     Instruccion: 845),
    (Identificador: 'BR-CO-20';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:StartDate) or exists(' +
      'cbc:EndDate)';
     Mensaje: '[BR-CO-20]-If Invoice line perio' +
      'd (BG-26) is used, the Invoice l' +
      'ine period start date (BT-134) o' +
      'r the Invoice line period end da' +
      'te (BT-135) shall be filled, or ' +
      'both.';
     Contexto: 12;
     Instruccion: 846),
    (Identificador: 'BR-29';
     Bandera: 'fatal';
     Prueba: '(exists(cbc:EndDate) and exists(' +
      'cbc:StartDate) and xs:date(cbc:E' +
      'ndDate) >= xs:date(cbc:StartDate' +
      ')) or not(exists(cbc:StartDate))' +
      ' or not(exists(cbc:EndDate))';
     Mensaje: '[BR-29]-If both Invoicing period' +
      ' start date (BT-73) and Invoicin' +
      'g period end date (BT-74) are gi' +
      'ven then the Invoicing period en' +
      'd date (BT-74) shall be later or' +
      ' equal to the Invoicing period s' +
      'tart date (BT-73).';
     Contexto: 13;
     Instruccion: 845),
    (Identificador: 'BR-CO-19';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:StartDate) or exists(' +
      'cbc:EndDate) or (exists(cbc:Desc' +
      'riptionCode) and not(exists(cbc:' +
      'StartDate)) and not(exists(cbc:E' +
      'ndDate)))';
     Mensaje: '[BR-CO-19]-If Invoicing period (' +
      'BG-14) is used, the Invoicing pe' +
      'riod start date (BT-73) or the I' +
      'nvoicing period end date (BT-74)' +
      ' shall be filled, or both.';
     Contexto: 13;
     Instruccion: 851),
    (Identificador: 'BR-54';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:Name) and exists(cbc:' +
      'Value)';
     Mensaje: '[BR-54]-Each Item attribute (BG-' +
      '32) shall contain an Item attrib' +
      'ute name (BT-160) and an Item at' +
      'tribute value (BT-161).';
     Contexto: 14;
     Instruccion: 857),
    (Identificador: 'BR-65';
     Bandera: 'fatal';
     Prueba: 'exists(@listID)';
     Mensaje: '[BR-65]-The Item classification ' +
      'identifier (BT-158) shall have a' +
      ' Scheme identifier.';
     Contexto: 15;
     Instruccion: 869),
    (Identificador: 'BR-64';
     Bandera: 'fatal';
     Prueba: 'exists(@schemeID)';
     Mensaje: '[BR-64]-The Item standard identi' +
      'fier (BT-157) shall have a Schem' +
      'e identifier.';
     Contexto: 16;
     Instruccion: 15),
    (Identificador: 'BR-CL-08';
     Bandera: 'fatal';
     Prueba: '(contains(.,''#'') and string-leng' +
      'th(substring-before(substring-af' +
      'ter(.,''#''),''#''))=3 and ( ( conta' +
      'ins('' AAA AAB AAC AAD AAE AAF AA' +
      'G AAI AAJ AAK AAL AAM AAN AAO AA' +
      'P AAQ AAR AAS AAT AAU AAV AAW AA' +
      'X AAY AAZ ABA ABB ABC ABD ABE AB' +
      'F ABG ABH ABI ABJ ABK ABL ABM AB' +
      'N ABO ABP ABQ ABR ABS ABT ABU AB' +
      'V ABW ABX ABZ ACA ACB ACC ACD AC' +
      'E ACF ACG ACH ACI ACJ ACK ACL AC' +
      'M ACN ACO ACP ACQ ACR ACS ACT AC' +
      'U ACV ACW ACX ACY ACZ ADA ADB AD' +
      'C ADD ADE ADF ADG ADH ADI ADJ AD' +
      'K ADL ADM ADN ADO ADP ADQ ADR AD' +
      'S ADT ADU ADV ADW ADX ADY ADZ AE' +
      'A AEB AEC AED AEE AEF AEG AEH AE' +
      'I AEJ AEK AEL AEM AEN AEO AEP AE' +
      'Q AER AES AET AEU AEV AEW AEX AE' +
      'Y AEZ AFA AFB AFC AFD AFE AFF AF' +
      'G AFH AFI AFJ AFK AFL AFM AFN AF' +
      'O AFP AFQ AFR AFS AFT AFU AFV AF' +
      'W AFX AFY AFZ AGA AGB AGC AGD AG' +
      'E AGF AGG AGH AGI AGJ AGK AGL AG' +
      'M AGN AGO AGP AGQ AGR AGS AGT AG' +
      'U AGV AGW AGX AGY AGZ AHA AHB AH' +
      'C AHD AHE AHF AHG AHH AHI AHJ AH' +
      'K AHL AHM AHN AHO AHP AHQ AHR AH' +
      'S AHT AHU AHV AHW AHX AHY AHZ AI' +
      'A AIB AIC AID AIE AIF AIG AIH AI' +
      'I AIJ AIK AIL AIM AIN AIO AIP AI' +
      'Q AIR AIS AIT AIU AIV AIW AIX AI' +
      'Y AIZ AJA AJB ALC ALD ALE ALF AL' +
      'G ALH ALI ALJ ALK ALL ALM ALN AL' +
      'O ALP ALQ ARR ARS AUT AUU AUV AU' +
      'W AUX AUY AUZ AVA AVB AVC AVD AV' +
      'E AVF BAG BAH BAI BAJ BAK BAL BA' +
      'M BAN BAO BAP BAQ BAR BAS BAT BA' +
      'U BAV BAW BAX BAY BAZ BBA BBB BL' +
      'C BLD BLE BLF BLG BLH BLI BLJ BL' +
      'K BLL BLM BLN BLO BLP BLQ BLR BL' +
      'S BLT BLU BLV BLW BLX BLY BLZ BM' +
      'A BMB BMC BMD BME BMF BMG BMH CC' +
      'J CCK CCL CCM CCN CCO CCI CEX CH' +
      'G CIP CLP CLR COI CUR CUS DAR DC' +
      'L DEL DIN DOC DUT EUR FBC GBL GE' +
      'N GS7 HAN HAZ ICN IIN IMI IND IN' +
      'S INV IRP ITR ITS LAN LIN LOI MC' +
      'O MDH MKS ORI OSI PAC PAI PAY PK' +
      'G PKT PMD PMT PRD PRF PRI PUR QI' +
      'N QQD QUT RAH REG RET REV RQR SA' +
      'F SIC SIN SLR SPA SPG SPH SPP SP' +
      'T SRN SSR SUR TCA TDT TRA TRR TX' +
      'D WHI ZZZ '',substring-before(sub' +
      'string-after(.,''#''),''#'') ) ) )) ' +
      'or not(contains(.,''#'')) or not(s' +
      'tring-length(substring-before(su' +
      'bstring-after(.,''#''),''#''))=3)';
     Mensaje: '[BR-CL-08]-Invoiced note subject' +
      ' code shall be coded using UNCL4' +
      '451';
     Contexto: 17;
     Instruccion: 895),
    (Identificador: 'BR-17';
     Bandera: 'fatal';
     Prueba: 'exists(cac:PartyName/cbc:Name) a' +
      'nd (not(cac:PartyName/cbc:Name =' +
      ' ../cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyName/cbc:Name' +
      ') and not(cac:PartyIdentificatio' +
      'n/cbc:ID = ../cac:AccountingSupp' +
      'lierParty/cac:Party/cac:PartyIde' +
      'ntification/cbc:ID) )';
     Mensaje: '[BR-17]-The Payee name (BT-59) s' +
      'hall be provided in the Invoice,' +
      ' if the Payee (BG-10) is differe' +
      'nt from the Seller (BG-4)';
     Contexto: 18;
     Instruccion: 914),
    (Identificador: 'BR-50';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cbc:ID) != ''''';
     Mensaje: '[BR-50]-A Payment account identi' +
      'fier (BT-84) shall be present if' +
      ' Credit transfer (BG-17) informa' +
      'tion is provided in the Invoice.';
     Contexto: 19;
     Instruccion: 7),
    (Identificador: 'BR-49';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:PaymentMeansCode)';
     Mensaje: '[BR-49]-A Payment instruction (B' +
      'G-16) shall specify the Payment ' +
      'means type code (BT-81).';
     Contexto: 20;
     Instruccion: 926),
    (Identificador: 'BR-61';
     Bandera: 'fatal';
     Prueba: '(exists(cac:PayeeFinancialAccoun' +
      't/cbc:ID) and ((normalize-space(' +
      'cbc:PaymentMeansCode) = ''30'') or' +
      ' (normalize-space(cbc:PaymentMea' +
      'nsCode) = ''58'') )) or ((normaliz' +
      'e-space(cbc:PaymentMeansCode) !=' +
      ' ''30'') and (normalize-space(cbc:' +
      'PaymentMeansCode) != ''58''))';
     Mensaje: '[BR-61]-If the Payment means typ' +
      'e code (BT-81) means SEPA credit' +
      ' transfer, Local credit transfer' +
      ' or Non-SEPA international credi' +
      't transfer, the Payment account ' +
      'identifier (BT-84) shall be pres' +
      'ent.';
     Contexto: 20;
     Instruccion: 937),
    (Identificador: 'BR-55';
     Bandera: 'fatal';
     Prueba: 'exists(cac:InvoiceDocumentRefere' +
      'nce/cbc:ID)';
     Mensaje: '[BR-55]-Each Preceding Invoice r' +
      'eference (BG-3) shall contain a ' +
      'Preceding Invoice reference (BT-' +
      '25).';
     Contexto: 21;
     Instruccion: 942),
    (Identificador: 'BR-CO-26';
     Bandera: 'fatal';
     Prueba: 'exists(cac:Party/cac:PartyTaxSch' +
      'eme[cac:TaxScheme/normalize-spac' +
      'e(upper-case(cbc:ID))=''VAT'']/cbc' +
      ':CompanyID) or exists(cac:Party/' +
      'cac:PartyIdentification/cbc:ID[n' +
      'ot(@schemeID = ''SEPA'')]) or exis' +
      'ts(cac:Party/cac:PartyLegalEntit' +
      'y/cbc:CompanyID)';
     Mensaje: '[BR-CO-26]-In order for the buye' +
      'r to automatically identify a su' +
      'pplier, the Seller identifier (B' +
      'T-29), the Seller legal registra' +
      'tion identifier (BT-30) and/or t' +
      'he Seller VAT identifier (BT-31)' +
      ' shall be present.  ';
     Contexto: 22;
     Instruccion: 958),
    (Identificador: 'BR-62';
     Bandera: 'fatal';
     Prueba: 'exists(@schemeID)';
     Mensaje: '[BR-62]-The Seller electronic ad' +
      'dress (BT-34) shall have a Schem' +
      'e identifier.';
     Contexto: 23;
     Instruccion: 15),
    (Identificador: 'BR-09';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:Country/cbc:' +
      'IdentificationCode) != ''''';
     Mensaje: '[BR-09]-The Seller postal addres' +
      's (BG-5) shall contain a Seller ' +
      'country code (BT-40).';
     Contexto: 24;
     Instruccion: 23),
    (Identificador: 'BR-18';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:PartyName/cb' +
      'c:Name) != ''''';
     Mensaje: '[BR-18]-The Seller tax represent' +
      'ative name (BT-62) shall be prov' +
      'ided in the Invoice, if the Sell' +
      'er (BG-4) has a Seller tax repre' +
      'sentative party (BG-11)';
     Contexto: 25;
     Instruccion: 963),
    (Identificador: 'BR-19';
     Bandera: 'fatal';
     Prueba: 'exists(cac:PostalAddress)';
     Mensaje: '[BR-19]-The Seller tax represent' +
      'ative postal address (BG-12) sha' +
      'll be provided in the Invoice, i' +
      'f the Seller (BG-4) has a Seller' +
      ' tax representative party (BG-11' +
      ').';
     Contexto: 25;
     Instruccion: 964),
    (Identificador: 'BR-56';
     Bandera: 'fatal';
     Prueba: 'exists(cac:PartyTaxScheme[cac:Ta' +
      'xScheme/(normalize-space(upper-c' +
      'ase(cbc:ID)) = ''VAT'')]/cbc:Compa' +
      'nyID)';
     Mensaje: '[BR-56]-Each Seller tax represen' +
      'tative party (BG-11) shall have ' +
      'a Seller tax representative VAT ' +
      'identifier (BT-63).';
     Contexto: 25;
     Instruccion: 966),
    (Identificador: 'BR-20';
     Bandera: 'fatal';
     Prueba: 'normalize-space(cac:Country/cbc:' +
      'IdentificationCode) != ''''';
     Mensaje: '[BR-20]-The Seller tax represent' +
      'ative postal address (BG-12) sha' +
      'll contain a Tax representative ' +
      'country code (BT-69), if the Sel' +
      'ler (BG-4) has a Seller tax repr' +
      'esentative party (BG-11).';
     Contexto: 26;
     Instruccion: 23),
    (Identificador: 'BR-CO-14';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(child::cbc:TaxAmount' +
      ')= round((sum(cac:TaxSubtotal/xs' +
      ':decimal(cbc:TaxAmount)) * 10 * ' +
      '10)) div 100) or not(cac:TaxSubt' +
      'otal)';
     Mensaje: '[BR-CO-14]-Invoice total VAT amo' +
      'unt (BT-110) = Σ VAT category ta' +
      'x amount (BT-117).';
     Contexto: 27;
     Instruccion: 981),
    (Identificador: 'BR-45';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxableAmount)';
     Mensaje: '[BR-45]-Each VAT breakdown (BG-2' +
      '3) shall have a VAT category tax' +
      'able amount (BT-116).';
     Contexto: 28;
     Instruccion: 984),
    (Identificador: 'BR-46';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxAmount)';
     Mensaje: '[BR-46]-Each VAT breakdown (BG-2' +
      '3) shall have a VAT category tax' +
      ' amount (BT-117).';
     Contexto: 28;
     Instruccion: 985),
    (Identificador: 'BR-47';
     Bandera: 'fatal';
     Prueba: 'exists(cac:TaxCategory[cac:TaxSc' +
      'heme/normalize-space(upper-case(' +
      'cbc:ID))=''VAT'']/cbc:ID)';
     Mensaje: '[BR-47]-Each VAT breakdown (BG-2' +
      '3) shall be defined through a VA' +
      'T category code (BT-118).';
     Contexto: 28;
     Instruccion: 65),
    (Identificador: 'BR-48';
     Bandera: 'fatal';
     Prueba: 'exists(cac:TaxCategory[cac:TaxSc' +
      'heme/normalize-space(upper-case(' +
      'cbc:ID))=''VAT'']/cbc:Percent) or ' +
      '(cac:TaxCategory[cac:TaxScheme/n' +
      'ormalize-space(upper-case(cbc:ID' +
      '))=''VAT'']/normalize-space(cbc:ID' +
      ')=''O'')';
     Mensaje: '[BR-48]-Each VAT breakdown (BG-2' +
      '3) shall have a VAT category rat' +
      'e (BT-119), except if the Invoic' +
      'e is not subject to VAT.';
     Contexto: 28;
     Instruccion: 991),
    (Identificador: 'BR-CO-17';
     Bandera: 'fatal';
     Prueba: '(round(cac:TaxCategory[cac:TaxSc' +
      'heme/normalize-space(upper-case(' +
      'cbc:ID))=''VAT'']/xs:decimal(cbc:P' +
      'ercent)) = 0 and (round(xs:decim' +
      'al(cbc:TaxAmount)) = 0)) or (rou' +
      'nd(cac:TaxCategory[cac:TaxScheme' +
      '/normalize-space(upper-case(cbc:' +
      'ID))=''VAT'']/xs:decimal(cbc:Perce' +
      'nt)) != 0 and ((abs(xs:decimal(c' +
      'bc:TaxAmount)) - 1 < round(abs(x' +
      's:decimal(cbc:TaxableAmount)) * ' +
      '(cac:TaxCategory[cac:TaxScheme/n' +
      'ormalize-space(upper-case(cbc:ID' +
      '))=''VAT'']/xs:decimal(cbc:Percent' +
      ') div 100) * 10 * 10) div 100 ) ' +
      'and (abs(xs:decimal(cbc:TaxAmoun' +
      't)) + 1 > round(abs(xs:decimal(c' +
      'bc:TaxableAmount)) * (cac:TaxCat' +
      'egory[cac:TaxScheme/normalize-sp' +
      'ace(upper-case(cbc:ID))=''VAT'']/x' +
      's:decimal(cbc:Percent) div 100) ' +
      '* 10 * 10) div 100 )))  or (not(' +
      'exists(cac:TaxCategory[cac:TaxSc' +
      'heme/normalize-space(upper-case(' +
      'cbc:ID))=''VAT'']/xs:decimal(cbc:P' +
      'ercent))) and (round(xs:decimal(' +
      'cbc:TaxAmount)) = 0))';
     Mensaje: '[BR-CO-17]-VAT category tax amou' +
      'nt (BT-117) = VAT category taxab' +
      'le amount (BT-116) x (VAT catego' +
      'ry rate (BT-119) / 100), rounded' +
      ' to two decimals.';
     Contexto: 28;
     Instruccion: 1019),
    (Identificador: 'BR-DEC-19';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:TaxableAmount,''.''))<=2';
     Mensaje: '[BR-DEC-19]-The allowed maximum ' +
      'number of decimals for the VAT c' +
      'ategory taxable amount (BT-116) ' +
      'is 2.';
     Contexto: 28;
     Instruccion: 1022),
    (Identificador: 'BR-DEC-20';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(cb' +
      'c:TaxAmount,''.''))<=2';
     Mensaje: '[BR-DEC-20]-The allowed maximum ' +
      'number of decimals for the VAT c' +
      'ategory tax amount (BT-117) is 2' +
      '.    ';
     Contexto: 28;
     Instruccion: 1025),
    (Identificador: 'BR-CO-09';
     Bandera: 'fatal';
     Prueba: '( contains( '' 1A AD AE AF AG AI ' +
      'AL AM AO AQ AR AS AT AU AW AX AZ' +
      ' BA BB BD BE BF BG BH BI BL BJ B' +
      'M BN BO BQ BR BS BT BV BW BY BZ ' +
      'CA CC CD CF CG CH CI CK CL CM CN' +
      ' CO CR CU CV CW CX CY CZ DE DJ D' +
      'K DM DO DZ EC EE EG EH ER ES ET ' +
      'FI FJ FK FM FO FR GA GB GD GE GF' +
      ' GG GH GI GL GM GN GP GQ GR GS G' +
      'T GU GW GY HK HM HN HR HT HU ID ' +
      'IE IL IM IN IO IQ IR IS IT JE JM' +
      ' JO JP KE KG KH KI KM KN KP KR K' +
      'W KY KZ LA LB LC LI LK LR LS LT ' +
      'LU LV LY MA MC MD ME MF MG MH MK' +
      ' ML MM MN MO MP MQ MR MS MT MU M' +
      'V MW MX MY MZ NA NC NE NF NG NI ' +
      'NL NO NP NR NU NZ OM PA PE PF PG' +
      ' PH PK PL PM PN PR PS PT PW PY Q' +
      'A RE RO RS RU RW SA SB SC SD SE ' +
      'SG SH SI SJ SK SL SM SN SO SR SS' +
      ' ST SV SX SY SZ TC TD TF TG TH T' +
      'J TK TL TM TN TO TR TT TV TW TZ ' +
      'UA UG UM US UY UZ VA VC VE VG VI' +
      ' VN VU WF WS XI YE YT ZA ZM ZW ''' +
      ', concat('' '', substring(cbc:Comp' +
      'anyID,1,2), '' '')) )';
     Mensaje: '[BR-CO-09]-The Seller VAT identi' +
      'fier (BT-31), the Seller tax rep' +
      'resentative VAT identifier (BT-6' +
      '3) and the Buyer VAT identifier ' +
      '(BT-48) shall have a prefix in a' +
      'ccordance with ISO code ISO 3166' +
      '-1 alpha-2 by which the country ' +
      'of issue may be identified. Neve' +
      'rtheless, Greece may use the pre' +
      'fix ‘EL’.';
     Contexto: 29;
     Instruccion: 1031),
    (Identificador: 'BR-AE-08';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:InvoiceLine) and (' +
      'xs:decimal(../cbc:TaxableAmount)' +
      ' = (sum(../../../cac:InvoiceLine' +
      '[cac:Item/cac:ClassifiedTaxCateg' +
      'ory/normalize-space(cbc:ID)=''AE''' +
      ']/xs:decimal(cbc:LineExtensionAm' +
      'ount)) + sum(../../../cac:Allowa' +
      'nceCharge[cbc:ChargeIndicator=tr' +
      'ue()][cac:TaxCategory/normalize-' +
      'space(cbc:ID)=''AE'']/xs:decimal(c' +
      'bc:Amount)) - sum(../../../cac:A' +
      'llowanceCharge[cbc:ChargeIndicat' +
      'or=false()][cac:TaxCategory/norm' +
      'alize-space(cbc:ID)=''AE'']/xs:dec' +
      'imal(cbc:Amount))))) or (exists(' +
      '//cac:CreditNoteLine) and (xs:de' +
      'cimal(../cbc:TaxableAmount) = (s' +
      'um(../../../cac:CreditNoteLine[c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y/normalize-space(cbc:ID)=''AE'']/' +
      'xs:decimal(cbc:LineExtensionAmou' +
      'nt)) + sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=true' +
      '()][cac:TaxCategory/normalize-sp' +
      'ace(cbc:ID)=''AE'']/xs:decimal(cbc' +
      ':Amount)) - sum(../../../cac:All' +
      'owanceCharge[cbc:ChargeIndicator' +
      '=false()][cac:TaxCategory/normal' +
      'ize-space(cbc:ID)=''AE'']/xs:decim' +
      'al(cbc:Amount)))))';
     Mensaje: '[BR-AE-08]-In a VAT breakdown (B' +
      'G-23) where the VAT category cod' +
      'e (BT-118) is "Reverse charge" t' +
      'he VAT category taxable amount (' +
      'BT-116) shall equal the sum of I' +
      'nvoice line net amounts (BT-131)' +
      ' minus the sum of Document level' +
      ' allowance amounts (BT-92) plus ' +
      'the sum of Document level charge' +
      ' amounts (BT-99) where the VAT c' +
      'ategory codes (BT-151, BT-95, BT' +
      '-102) are "Reverse charge".';
     Contexto: 30;
     Instruccion: 1071),
    (Identificador: 'BR-AE-09';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(../cbc:TaxAmount) = 0';
     Mensaje: '[BR-AE-09]-The VAT category tax ' +
      'amount (BT-117) in a VAT breakdo' +
      'wn (BG-23) where the VAT categor' +
      'y code (BT-118) is "Reverse char' +
      'ge" shall be 0 (zero).';
     Contexto: 30;
     Instruccion: 1074),
    (Identificador: 'BR-AE-10';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxExemptionReason) o' +
      'r (exists(cbc:TaxExemptionReason' +
      'Code) )';
     Mensaje: '[BR-AE-10]-A VAT breakdown (BG-2' +
      '3) with VAT Category code (BT-11' +
      '8) "Reverse charge" shall have a' +
      ' VAT exemption reason code (BT-1' +
      '21), meaning "Reverse charge" or' +
      ' the VAT exemption reason text (' +
      'BT-120) "Reverse charge" (or the' +
      ' equivalent standard text in ano' +
      'ther language).';
     Contexto: 30;
     Instruccion: 1079),
    (Identificador: 'BR-AE-06';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-AE-06]-In a Document level a' +
      'llowance (BG-20) where the Docum' +
      'ent level allowance VAT category' +
      ' code (BT-95) is "Reverse charge' +
      '" the Document level allowance V' +
      'AT rate (BT-96) shall be 0 (zero' +
      ').';
     Contexto: 31;
     Instruccion: 1082),
    (Identificador: 'BR-AE-07';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-AE-07]-In a Document level c' +
      'harge (BG-21) where the Document' +
      ' level charge VAT category code ' +
      '(BT-102) is "Reverse charge" the' +
      ' Document level charge VAT rate ' +
      '(BT-103) shall be 0 (zero).';
     Contexto: 32;
     Instruccion: 1082),
    (Identificador: 'BR-AE-05';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-AE-05]-In an Invoice line (B' +
      'G-25) where the Invoiced item VA' +
      'T category code (BT-151) is "Rev' +
      'erse charge" the Invoiced item V' +
      'AT rate (BT-152) shall be 0 (zer' +
      'o).';
     Contexto: 33;
     Instruccion: 1082),
    (Identificador: 'BR-E-08';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:InvoiceLine) and (' +
      'xs:decimal(../cbc:TaxableAmount)' +
      ' = (sum(../../../cac:InvoiceLine' +
      '[cac:Item/cac:ClassifiedTaxCateg' +
      'ory/normalize-space(cbc:ID)=''E'']' +
      '/xs:decimal(cbc:LineExtensionAmo' +
      'unt)) + sum(../../../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=tru' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''E'']/xs:decimal(cbc' +
      ':Amount)) - sum(../../../cac:All' +
      'owanceCharge[cbc:ChargeIndicator' +
      '=false()][cac:TaxCategory/normal' +
      'ize-space(cbc:ID)=''E'']/xs:decima' +
      'l(cbc:Amount))))) or (exists(//c' +
      'ac:CreditNoteLine) and (xs:decim' +
      'al(../cbc:TaxableAmount) = (sum(' +
      '../../../cac:CreditNoteLine[cac:' +
      'Item/cac:ClassifiedTaxCategory/n' +
      'ormalize-space(cbc:ID)=''E'']/xs:d' +
      'ecimal(cbc:LineExtensionAmount))' +
      ' + sum(../../../cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=true()][' +
      'cac:TaxCategory/normalize-space(' +
      'cbc:ID)=''E'']/xs:decimal(cbc:Amou' +
      'nt)) - sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''E'']/xs:decimal(cbc' +
      ':Amount)))))';
     Mensaje: '[BR-E-08]-In a VAT breakdown (BG' +
      '-23) where the VAT category code' +
      ' (BT-118) is "Exempt from VAT" t' +
      'he VAT category taxable amount (' +
      'BT-116) shall equal the sum of I' +
      'nvoice line net amounts (BT-131)' +
      ' minus the sum of Document level' +
      ' allowance amounts (BT-92) plus ' +
      'the sum of Document level charge' +
      ' amounts (BT-99) where the VAT c' +
      'ategory codes (BT-151, BT-95, BT' +
      '-102) are "Exempt from VAT".';
     Contexto: 34;
     Instruccion: 1116),
    (Identificador: 'BR-E-09';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(../cbc:TaxAmount) = 0';
     Mensaje: '[BR-E-09]-The VAT category tax a' +
      'mount (BT-117) In a VAT breakdow' +
      'n (BG-23) where the VAT category' +
      ' code (BT-118) equals "Exempt fr' +
      'om VAT" shall equal 0 (zero).';
     Contexto: 34;
     Instruccion: 1074),
    (Identificador: 'BR-E-10';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxExemptionReason) o' +
      'r exists(cbc:TaxExemptionReasonC' +
      'ode)';
     Mensaje: '[BR-E-10]-A VAT breakdown (BG-23' +
      ') with VAT Category code (BT-118' +
      ') "Exempt from VAT" shall have a' +
      ' VAT exemption reason code (BT-1' +
      '21) or a VAT exemption reason te' +
      'xt (BT-120).';
     Contexto: 34;
     Instruccion: 1079),
    (Identificador: 'BR-E-06';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-E-06]-In a Document level al' +
      'lowance (BG-20) where the Docume' +
      'nt level allowance VAT category ' +
      'code (BT-95) is "Exempt from VAT' +
      '", the Document level allowance ' +
      'VAT rate (BT-96) shall be 0 (zer' +
      'o).';
     Contexto: 35;
     Instruccion: 1082),
    (Identificador: 'BR-E-07';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-E-07]-In a Document level ch' +
      'arge (BG-21) where the Document ' +
      'level charge VAT category code (' +
      'BT-102) is "Exempt from VAT", th' +
      'e Document level charge VAT rate' +
      ' (BT-103) shall be 0 (zero).';
     Contexto: 36;
     Instruccion: 1082),
    (Identificador: 'BR-E-05';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-E-05]-In an Invoice line (BG' +
      '-25) where the Invoiced item VAT' +
      ' category code (BT-151) is "Exem' +
      'pt from VAT", the Invoiced item ' +
      'VAT rate (BT-152) shall be 0 (ze' +
      'ro).';
     Contexto: 37;
     Instruccion: 1082),
    (Identificador: 'BR-G-08';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:InvoiceLine) and (' +
      'xs:decimal(../cbc:TaxableAmount)' +
      ' = (sum(../../../cac:InvoiceLine' +
      '[cac:Item/cac:ClassifiedTaxCateg' +
      'ory/normalize-space(cbc:ID)=''G'']' +
      '/xs:decimal(cbc:LineExtensionAmo' +
      'unt)) + sum(../../../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=tru' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''G'']/xs:decimal(cbc' +
      ':Amount)) - sum(../../../cac:All' +
      'owanceCharge[cbc:ChargeIndicator' +
      '=false()][cac:TaxCategory/normal' +
      'ize-space(cbc:ID)=''G'']/xs:decima' +
      'l(cbc:Amount))))) or (exists(//c' +
      'ac:CreditNoteLine) and (xs:decim' +
      'al(../cbc:TaxableAmount) = (sum(' +
      '../../../cac:CreditNoteLine[cac:' +
      'Item/cac:ClassifiedTaxCategory/n' +
      'ormalize-space(cbc:ID)=''G'']/xs:d' +
      'ecimal(cbc:LineExtensionAmount))' +
      ' + sum(../../../cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=true()][' +
      'cac:TaxCategory/normalize-space(' +
      'cbc:ID)=''G'']/xs:decimal(cbc:Amou' +
      'nt)) - sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''G'']/xs:decimal(cbc' +
      ':Amount)))))';
     Mensaje: '[BR-G-08]-In a VAT breakdown (BG' +
      '-23) where the VAT category code' +
      ' (BT-118) is "Export outside the' +
      ' EU" the VAT category taxable am' +
      'ount (BT-116) shall equal the su' +
      'm of Invoice line net amounts (B' +
      'T-131) minus the sum of Document' +
      ' level allowance amounts (BT-92)' +
      ' plus the sum of Document level ' +
      'charge amounts (BT-99) where the' +
      ' VAT category codes (BT-151, BT-' +
      '95, BT-102) are "Export outside ' +
      'the EU".';
     Contexto: 38;
     Instruccion: 1152),
    (Identificador: 'BR-G-09';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(../cbc:TaxAmount) = 0';
     Mensaje: '[BR-G-09]-The VAT category tax a' +
      'mount (BT-117) in a VAT breakdow' +
      'n (BG-23) where the VAT category' +
      ' code (BT-118) is "Export outsid' +
      'e the EU" shall be 0 (zero).';
     Contexto: 38;
     Instruccion: 1074),
    (Identificador: 'BR-G-10';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxExemptionReason) o' +
      'r (exists(cbc:TaxExemptionReason' +
      'Code) )';
     Mensaje: '[BR-G-10]-A VAT breakdown (BG-23' +
      ') with the VAT Category code (BT' +
      '-118) "Export outside the EU" sh' +
      'all have a VAT exemption reason ' +
      'code (BT-121), meaning "Export o' +
      'utside the EU" or the VAT exempt' +
      'ion reason text (BT-120) "Export' +
      ' outside the EU" (or the equival' +
      'ent standard text in another lan' +
      'guage).';
     Contexto: 38;
     Instruccion: 1079),
    (Identificador: 'BR-G-06';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-G-06]-In a Document level al' +
      'lowance (BG-20) where the Docume' +
      'nt level allowance VAT category ' +
      'code (BT-95) is "Export outside ' +
      'the EU" the Document level allow' +
      'ance VAT rate (BT-96) shall be 0' +
      ' (zero).';
     Contexto: 39;
     Instruccion: 1082),
    (Identificador: 'BR-G-07';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-G-07]-In a Document level ch' +
      'arge (BG-21) where the Document ' +
      'level charge VAT category code (' +
      'BT-102) is "Export outside the E' +
      'U" the Document level charge VAT' +
      ' rate (BT-103) shall be 0 (zero)' +
      '.';
     Contexto: 40;
     Instruccion: 1082),
    (Identificador: 'BR-G-05';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-G-05]-In an Invoice line (BG' +
      '-25) where the Invoiced item VAT' +
      ' category code (BT-151) is "Expo' +
      'rt outside the EU" the Invoiced ' +
      'item VAT rate (BT-152) shall be ' +
      '0 (zero).';
     Contexto: 41;
     Instruccion: 1082),
    (Identificador: 'BR-IC-08';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:InvoiceLine) and (' +
      'xs:decimal(../cbc:TaxableAmount)' +
      ' = (sum(../../../cac:InvoiceLine' +
      '[cac:Item/cac:ClassifiedTaxCateg' +
      'ory/normalize-space(cbc:ID)=''K'']' +
      '/xs:decimal(cbc:LineExtensionAmo' +
      'unt)) + sum(../../../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=tru' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''K'']/xs:decimal(cbc' +
      ':Amount)) - sum(../../../cac:All' +
      'owanceCharge[cbc:ChargeIndicator' +
      '=false()][cac:TaxCategory/normal' +
      'ize-space(cbc:ID)=''K'']/xs:decima' +
      'l(cbc:Amount))))) or (exists(//c' +
      'ac:CreditNoteLine) and (xs:decim' +
      'al(../cbc:TaxableAmount) = (sum(' +
      '../../../cac:CreditNoteLine[cac:' +
      'Item/cac:ClassifiedTaxCategory/n' +
      'ormalize-space(cbc:ID)=''K'']/xs:d' +
      'ecimal(cbc:LineExtensionAmount))' +
      ' + sum(../../../cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=true()][' +
      'cac:TaxCategory/normalize-space(' +
      'cbc:ID)=''K'']/xs:decimal(cbc:Amou' +
      'nt)) - sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''K'']/xs:decimal(cbc' +
      ':Amount)))))';
     Mensaje: '[BR-IC-08]-In a VAT breakdown (B' +
      'G-23) where the VAT category cod' +
      'e (BT-118) is "Intra-community s' +
      'upply" the VAT category taxable ' +
      'amount (BT-116) shall equal the ' +
      'sum of Invoice line net amounts ' +
      '(BT-131) minus the sum of Docume' +
      'nt level allowance amounts (BT-9' +
      '2) plus the sum of Document leve' +
      'l charge amounts (BT-99) where t' +
      'he VAT category codes (BT-151, B' +
      'T-95, BT-102) are "Intra-communi' +
      'ty supply".';
     Contexto: 42;
     Instruccion: 1188),
    (Identificador: 'BR-IC-09';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(../cbc:TaxAmount) = 0';
     Mensaje: '[BR-IC-09]-The VAT category tax ' +
      'amount (BT-117) in a VAT breakdo' +
      'wn (BG-23) where the VAT categor' +
      'y code (BT-118) is "Intra-commun' +
      'ity supply" shall be 0 (zero).';
     Contexto: 42;
     Instruccion: 1074),
    (Identificador: 'BR-IC-10';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxExemptionReason) o' +
      'r (exists(cbc:TaxExemptionReason' +
      'Code) )';
     Mensaje: '[BR-IC-10]-A VAT breakdown (BG-2' +
      '3) with the VAT Category code (B' +
      'T-118) "Intra-community supply" ' +
      'shall have a VAT exemption reaso' +
      'n code (BT-121), meaning "Intra-' +
      'community supply" or the VAT exe' +
      'mption reason text (BT-120) "Int' +
      'ra-community supply" (or the equ' +
      'ivalent standard text in another' +
      ' language).';
     Contexto: 42;
     Instruccion: 1079),
    (Identificador: 'BR-IC-06';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-IC-06]-In a Document level a' +
      'llowance (BG-20) where the Docum' +
      'ent level allowance VAT category' +
      ' code (BT-95) is "Intra-communit' +
      'y supply" the Document level all' +
      'owance VAT rate (BT-96) shall be' +
      ' 0 (zero).';
     Contexto: 43;
     Instruccion: 1082),
    (Identificador: 'BR-IC-07';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-IC-07]-In a Document level c' +
      'harge (BG-21) where the Document' +
      ' level charge VAT category code ' +
      '(BT-102) is "Intra-community sup' +
      'ply" the Document level charge V' +
      'AT rate (BT-103) shall be 0 (zer' +
      'o).';
     Contexto: 44;
     Instruccion: 1082),
    (Identificador: 'BR-IC-05';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-IC-05]-In an Invoice line (B' +
      'G-25) where the Invoiced item VA' +
      'T category code (BT-151) is "Int' +
      'racommunity supply" the Invoiced' +
      ' item VAT rate (BT-152) shall be' +
      ' 0 (zero).';
     Contexto: 45;
     Instruccion: 1082),
    (Identificador: 'BR-IG-08';
     Bandera: 'fatal';
     Prueba: 'every $rate in xs:decimal(cbc:Pe' +
      'rcent) satisfies ((exists(//cac:' +
      'InvoiceLine) and ((../xs:decimal' +
      '(cbc:TaxableAmount - 1) < (sum(.' +
      './../../cac:InvoiceLine[cac:Item' +
      '/cac:ClassifiedTaxCategory/norma' +
      'lize-space(cbc:ID)=''L''][cac:Item' +
      '/cac:ClassifiedTaxCategory/xs:de' +
      'cimal(cbc:Percent) =$rate]/xs:de' +
      'cimal(cbc:LineExtensionAmount)) ' +
      '+ sum(../../../cac:AllowanceChar' +
      'ge[cbc:ChargeIndicator=true()][c' +
      'ac:TaxCategory/normalize-space(c' +
      'bc:ID)=''L''][cac:TaxCategory/xs:d' +
      'ecimal(cbc:Percent) = $rate]/xs:' +
      'decimal(cbc:Amount)) - sum(../..' +
      '/../cac:AllowanceCharge[cbc:Char' +
      'geIndicator=false()][cac:TaxCate' +
      'gory/normalize-space(cbc:ID)=''L''' +
      '][cac:TaxCategory/xs:decimal(cbc' +
      ':Percent) = $rate]/xs:decimal(cb' +
      'c:Amount)))) and (../xs:decimal(' +
      'cbc:TaxableAmount + 1) > (sum(..' +
      '/../../cac:InvoiceLine[cac:Item/' +
      'cac:ClassifiedTaxCategory/normal' +
      'ize-space(cbc:ID)=''L''][cac:Item/' +
      'cac:ClassifiedTaxCategory/xs:dec' +
      'imal(cbc:Percent) =$rate]/xs:dec' +
      'imal(cbc:LineExtensionAmount)) +' +
      ' sum(../../../cac:AllowanceCharg' +
      'e[cbc:ChargeIndicator=true()][ca' +
      'c:TaxCategory/normalize-space(cb' +
      'c:ID)=''L''][cac:TaxCategory/xs:de' +
      'cimal(cbc:Percent) = $rate]/xs:d' +
      'ecimal(cbc:Amount)) - sum(../../' +
      '../cac:AllowanceCharge[cbc:Charg' +
      'eIndicator=false()][cac:TaxCateg' +
      'ory/normalize-space(cbc:ID)=''L'']' +
      '[cac:TaxCategory/xs:decimal(cbc:' +
      'Percent) = $rate]/xs:decimal(cbc' +
      ':Amount)))))) or (exists(//cac:C' +
      'reditNoteLine) and ((../xs:decim' +
      'al(cbc:TaxableAmount - 1) < (sum' +
      '(../../../cac:CreditNoteLine[cac' +
      ':Item/cac:ClassifiedTaxCategory/' +
      'normalize-space(cbc:ID)=''L''][cac' +
      ':Item/cac:ClassifiedTaxCategory/' +
      'xs:decimal(cbc:Percent) =$rate]/' +
      'xs:decimal(cbc:LineExtensionAmou' +
      'nt)) + sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=true' +
      '()][cac:TaxCategory/normalize-sp' +
      'ace(cbc:ID)=''L''][cac:TaxCategory' +
      '/xs:decimal(cbc:Percent) = $rate' +
      ']/xs:decimal(cbc:Amount)) - sum(' +
      '../../../cac:AllowanceCharge[cbc' +
      ':ChargeIndicator=false()][cac:Ta' +
      'xCategory/normalize-space(cbc:ID' +
      ')=''L''][cac:TaxCategory/xs:decima' +
      'l(cbc:Percent) = $rate]/xs:decim' +
      'al(cbc:Amount)))) and (../xs:dec' +
      'imal(cbc:TaxableAmount + 1) > (s' +
      'um(../../../cac:CreditNoteLine[c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y/normalize-space(cbc:ID)=''L''][c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y/xs:decimal(cbc:Percent) =$rate' +
      ']/xs:decimal(cbc:LineExtensionAm' +
      'ount)) + sum(../../../cac:Allowa' +
      'nceCharge[cbc:ChargeIndicator=tr' +
      'ue()][cac:TaxCategory/normalize-' +
      'space(cbc:ID)=''L''][cac:TaxCatego' +
      'ry/xs:decimal(cbc:Percent) = $ra' +
      'te]/xs:decimal(cbc:Amount)) - su' +
      'm(../../../cac:AllowanceCharge[c' +
      'bc:ChargeIndicator=false()][cac:' +
      'TaxCategory/normalize-space(cbc:' +
      'ID)=''L''][cac:TaxCategory/xs:deci' +
      'mal(cbc:Percent) = $rate]/xs:dec' +
      'imal(cbc:Amount)))))))';
     Mensaje: '[BR-IG-08]-For each different va' +
      'lue of VAT category rate (BT-119' +
      ') where the VAT category code (B' +
      'T-118) is "IGIC", the VAT catego' +
      'ry taxable amount (BT-116) in a ' +
      'VAT breakdown (BG-23) shall equa' +
      'l the sum of Invoice line net am' +
      'ounts (BT-131) plus the sum of d' +
      'ocument level charge amounts (BT' +
      '-99) minus the sum of document l' +
      'evel allowance amounts (BT-92) w' +
      'here the VAT category code (BT-1' +
      '51, BT-102, BT-95) is "IGIC" and' +
      ' the VAT rate (BT-152, BT-103, B' +
      'T-96) equals the VAT category ra' +
      'te (BT-119).';
     Contexto: 46;
     Instruccion: 1244),
    (Identificador: 'BR-IG-09';
     Bandera: 'fatal';
     Prueba: '(abs(xs:decimal(../cbc:TaxAmount' +
      ')) - 1 <  round((abs(xs:decimal(' +
      '../cbc:TaxableAmount)) * (xs:dec' +
      'imal(cbc:Percent) div 100)) * 10' +
      ' * 10) div 100 ) and (abs(xs:dec' +
      'imal(../cbc:TaxAmount)) + 1 >  r' +
      'ound((abs(xs:decimal(../cbc:Taxa' +
      'bleAmount)) * (xs:decimal(cbc:Pe' +
      'rcent) div 100)) * 10 * 10) div ' +
      '100 )';
     Mensaje: '[BR-IG-09]-The VAT category tax ' +
      'amount (BT-117) in a VAT breakdo' +
      'wn (BG-23) where VAT category co' +
      'de (BT-118) is "IGIC" shall equa' +
      'l the VAT category taxable amoun' +
      't (BT-116) multiplied by the VAT' +
      ' category rate (BT-119).';
     Contexto: 46;
     Instruccion: 1257),
    (Identificador: 'BR-IG-10';
     Bandera: 'fatal';
     Prueba: 'not(cbc:TaxExemptionReason) and ' +
      'not(cbc:TaxExemptionReasonCode)';
     Mensaje: '[BR-IG-10]-A VAT breakdown (BG-2' +
      '3) with VAT Category code (BT-11' +
      '8) "IGIC" shall not have a VAT e' +
      'xemption reason code (BT-121) or' +
      ' VAT exemption reason text (BT-1' +
      '20).';
     Contexto: 46;
     Instruccion: 1260),
    (Identificador: 'BR-IG-06';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) >= 0';
     Mensaje: '[BR-IG-06]-In a Document level a' +
      'llowance (BG-20) where the Docum' +
      'ent level allowance VAT category' +
      ' code (BT-95) is "IGIC" the Docu' +
      'ment level allowance VAT rate (B' +
      'T-96) shall be 0 (zero) or great' +
      'er than zero.';
     Contexto: 47;
     Instruccion: 1263),
    (Identificador: 'BR-IG-07';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) >= 0';
     Mensaje: '[BR-IG-07]-In a Document level c' +
      'harge (BG-21) where the Document' +
      ' level charge VAT category code ' +
      '(BT-102) is "IGIC" the Document ' +
      'level charge VAT rate (BT-103) s' +
      'hall be 0 (zero) or greater than' +
      ' zero.';
     Contexto: 48;
     Instruccion: 1263),
    (Identificador: 'BR-IG-05';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) >= 0';
     Mensaje: '[BR-IG-05]-In an Invoice line (B' +
      'G-25) where the Invoiced item VA' +
      'T category code (BT-151) is "IGI' +
      'C" the invoiced item VAT rate (B' +
      'T-152) shall be 0 (zero) or grea' +
      'ter than zero.';
     Contexto: 49;
     Instruccion: 1263),
    (Identificador: 'BR-IP-08';
     Bandera: 'fatal';
     Prueba: 'every $rate in xs:decimal(cbc:Pe' +
      'rcent) satisfies ((exists(//cac:' +
      'InvoiceLine) and ((../xs:decimal' +
      '(cbc:TaxableAmount - 1) < (sum(.' +
      './../../cac:InvoiceLine[cac:Item' +
      '/cac:ClassifiedTaxCategory/norma' +
      'lize-space(cbc:ID)=''M''][cac:Item' +
      '/cac:ClassifiedTaxCategory/xs:de' +
      'cimal(cbc:Percent) =$rate]/xs:de' +
      'cimal(cbc:LineExtensionAmount)) ' +
      '+ sum(../../../cac:AllowanceChar' +
      'ge[cbc:ChargeIndicator=true()][c' +
      'ac:TaxCategory/normalize-space(c' +
      'bc:ID)=''M''][cac:TaxCategory/xs:d' +
      'ecimal(cbc:Percent) = $rate]/xs:' +
      'decimal(cbc:Amount)) - sum(../..' +
      '/../cac:AllowanceCharge[cbc:Char' +
      'geIndicator=false()][cac:TaxCate' +
      'gory/normalize-space(cbc:ID)=''M''' +
      '][cac:TaxCategory/xs:decimal(cbc' +
      ':Percent) = $rate]/xs:decimal(cb' +
      'c:Amount)))) and (../xs:decimal(' +
      'cbc:TaxableAmount + 1) > (sum(..' +
      '/../../cac:InvoiceLine[cac:Item/' +
      'cac:ClassifiedTaxCategory/normal' +
      'ize-space(cbc:ID)=''M''][cac:Item/' +
      'cac:ClassifiedTaxCategory/xs:dec' +
      'imal(cbc:Percent) =$rate]/xs:dec' +
      'imal(cbc:LineExtensionAmount)) +' +
      ' sum(../../../cac:AllowanceCharg' +
      'e[cbc:ChargeIndicator=true()][ca' +
      'c:TaxCategory/normalize-space(cb' +
      'c:ID)=''M''][cac:TaxCategory/xs:de' +
      'cimal(cbc:Percent) = $rate]/xs:d' +
      'ecimal(cbc:Amount)) - sum(../../' +
      '../cac:AllowanceCharge[cbc:Charg' +
      'eIndicator=false()][cac:TaxCateg' +
      'ory/normalize-space(cbc:ID)=''M'']' +
      '[cac:TaxCategory/xs:decimal(cbc:' +
      'Percent) = $rate]/xs:decimal(cbc' +
      ':Amount)))))) or (exists(//cac:C' +
      'reditNoteLine) and ((../xs:decim' +
      'al(cbc:TaxableAmount - 1) < (sum' +
      '(../../../cac:CreditNoteLine[cac' +
      ':Item/cac:ClassifiedTaxCategory/' +
      'normalize-space(cbc:ID)=''M''][cac' +
      ':Item/cac:ClassifiedTaxCategory/' +
      'xs:decimal(cbc:Percent) =$rate]/' +
      'xs:decimal(cbc:LineExtensionAmou' +
      'nt)) + sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=true' +
      '()][cac:TaxCategory/normalize-sp' +
      'ace(cbc:ID)=''M''][cac:TaxCategory' +
      '/xs:decimal(cbc:Percent) = $rate' +
      ']/xs:decimal(cbc:Amount)) - sum(' +
      '../../../cac:AllowanceCharge[cbc' +
      ':ChargeIndicator=false()][cac:Ta' +
      'xCategory/normalize-space(cbc:ID' +
      ')=''M''][cac:TaxCategory/xs:decima' +
      'l(cbc:Percent) = $rate]/xs:decim' +
      'al(cbc:Amount)))) and (../xs:dec' +
      'imal(cbc:TaxableAmount + 1) > (s' +
      'um(../../../cac:CreditNoteLine[c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y/normalize-space(cbc:ID)=''M''][c' +
      'ac:Item/cac:ClassifiedTaxCategor' +
      'y/xs:decimal(cbc:Percent) =$rate' +
      ']/xs:decimal(cbc:LineExtensionAm' +
      'ount)) + sum(../../../cac:Allowa' +
      'nceCharge[cbc:ChargeIndicator=tr' +
      'ue()][cac:TaxCategory/normalize-' +
      'space(cbc:ID)=''M''][cac:TaxCatego' +
      'ry/xs:decimal(cbc:Percent) = $ra' +
      'te]/xs:decimal(cbc:Amount)) - su' +
      'm(../../../cac:AllowanceCharge[c' +
      'bc:ChargeIndicator=false()][cac:' +
      'TaxCategory/normalize-space(cbc:' +
      'ID)=''M''][cac:TaxCategory/xs:deci' +
      'mal(cbc:Percent) = $rate]/xs:dec' +
      'imal(cbc:Amount)))))))';
     Mensaje: '[BR-IP-08]-For each different va' +
      'lue of VAT category rate (BT-119' +
      ') where the VAT category code (B' +
      'T-118) is "IPSI", the VAT catego' +
      'ry taxable amount (BT-116) in a ' +
      'VAT breakdown (BG-23) shall equa' +
      'l the sum of Invoice line net am' +
      'ounts (BT-131) plus the sum of d' +
      'ocument level charge amounts (BT' +
      '-99) minus the sum of document l' +
      'evel allowance amounts (BT-92) w' +
      'here the VAT category code (BT-1' +
      '51, BT-102, BT-95) is "IPSI" and' +
      ' the VAT rate (BT-152, BT-103, B' +
      'T-96) equals the VAT category ra' +
      'te (BT-119).';
     Contexto: 50;
     Instruccion: 1306),
    (Identificador: 'BR-IP-09';
     Bandera: 'fatal';
     Prueba: '(abs(xs:decimal(../cbc:TaxAmount' +
      ')) - 1 <  round((abs(xs:decimal(' +
      '../cbc:TaxableAmount)) * (xs:dec' +
      'imal(cbc:Percent) div 100)) * 10' +
      ' * 10) div 100 ) and (abs(xs:dec' +
      'imal(../cbc:TaxAmount)) + 1 >  r' +
      'ound((abs(xs:decimal(../cbc:Taxa' +
      'bleAmount)) * (xs:decimal(cbc:Pe' +
      'rcent) div 100)) * 10 * 10) div ' +
      '100 )';
     Mensaje: '[BR-IP-09]-The VAT category tax ' +
      'amount (BT-117) in a VAT breakdo' +
      'wn (BG-23) where VAT category co' +
      'de (BT-118) is "IPSI" shall equa' +
      'l the VAT category taxable amoun' +
      't (BT-116) multiplied by the VAT' +
      ' category rate (BT-119).';
     Contexto: 50;
     Instruccion: 1257),
    (Identificador: 'BR-IP-10';
     Bandera: 'fatal';
     Prueba: 'not(cbc:TaxExemptionReason) and ' +
      'not(cbc:TaxExemptionReasonCode)';
     Mensaje: '[BR-IP-10]-A VAT breakdown (BG-2' +
      '3) with VAT Category code (BT-11' +
      '8) "IPSI" shall not have a VAT e' +
      'xemption reason code (BT-121) or' +
      ' VAT exemption reason text (BT-1' +
      '20).';
     Contexto: 50;
     Instruccion: 1260),
    (Identificador: 'BR-IP-06';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) >= 0';
     Mensaje: '[BR-IP-06]-In a Document level a' +
      'llowance (BG-20) where the Docum' +
      'ent level allowance VAT category' +
      ' code (BT-95) is "IPSI" the Docu' +
      'ment level allowance VAT rate (B' +
      'T-96) shall be 0 (zero) or great' +
      'er than zero.';
     Contexto: 51;
     Instruccion: 1263),
    (Identificador: 'BR-IP-07';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) >= 0';
     Mensaje: '[BR-IP-07]-In a Document level c' +
      'harge (BG-21) where the Document' +
      ' level charge VAT category code ' +
      '(BT-102) is "IPSI" the Document ' +
      'level charge VAT rate (BT-103) s' +
      'hall be 0 (zero) or greater than' +
      ' zero.';
     Contexto: 52;
     Instruccion: 1263),
    (Identificador: 'BR-IP-05';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) >= 0';
     Mensaje: '[BR-IP-05]-In an Invoice line (B' +
      'G-25) where the Invoiced item VA' +
      'T category code (BT-151) is "IPS' +
      'I" the Invoiced item VAT rate (B' +
      'T-152) shall be 0 (zero) or grea' +
      'ter than zero.';
     Contexto: 53;
     Instruccion: 1263),
    (Identificador: 'BR-O-08';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:InvoiceLine) and (' +
      'xs:decimal(../cbc:TaxableAmount)' +
      ' = (sum(../../../cac:InvoiceLine' +
      '[cac:Item/cac:ClassifiedTaxCateg' +
      'ory/normalize-space(cbc:ID)=''O'']' +
      '/xs:decimal(cbc:LineExtensionAmo' +
      'unt)) + sum(../../../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=tru' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''O'']/xs:decimal(cbc' +
      ':Amount)) - sum(../../../cac:All' +
      'owanceCharge[cbc:ChargeIndicator' +
      '=false()][cac:TaxCategory/normal' +
      'ize-space(cbc:ID)=''O'']/xs:decima' +
      'l(cbc:Amount))))) or (exists(//c' +
      'ac:CreditNoteLine) and (xs:decim' +
      'al(../cbc:TaxableAmount) = (sum(' +
      '../../../cac:CreditNoteLine[cac:' +
      'Item/cac:ClassifiedTaxCategory/n' +
      'ormalize-space(cbc:ID)=''O'']/xs:d' +
      'ecimal(cbc:LineExtensionAmount))' +
      ' + sum(../../../cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=true()][' +
      'cac:TaxCategory/normalize-space(' +
      'cbc:ID)=''O'']/xs:decimal(cbc:Amou' +
      'nt)) - sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''O'']/xs:decimal(cbc' +
      ':Amount)))))';
     Mensaje: '[BR-O-08]-In a VAT breakdown (BG' +
      '-23) where the VAT category code' +
      ' (BT-118) is " Not subject to VA' +
      'T" the VAT category taxable amou' +
      'nt (BT-116) shall equal the sum ' +
      'of Invoice line net amounts (BT-' +
      '131) minus the sum of Document l' +
      'evel allowance amounts (BT-92) p' +
      'lus the sum of Document level ch' +
      'arge amounts (BT-99) where the V' +
      'AT category codes (BT-151, BT-95' +
      ', BT-102) are "Not subject to VA' +
      'T".';
     Contexto: 54;
     Instruccion: 1342),
    (Identificador: 'BR-O-09';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(../cbc:TaxAmount) = 0';
     Mensaje: '[BR-O-09]-The VAT category tax a' +
      'mount (BT-117) in a VAT breakdow' +
      'n (BG-23) where the VAT category' +
      ' code (BT-118) is "Not subject t' +
      'o VAT" shall be 0 (zero).';
     Contexto: 54;
     Instruccion: 1074),
    (Identificador: 'BR-O-10';
     Bandera: 'fatal';
     Prueba: 'exists(cbc:TaxExemptionReason) o' +
      'r (exists(cbc:TaxExemptionReason' +
      'Code) )';
     Mensaje: '[BR-O-10]-A VAT breakdown (BG-23' +
      ') with VAT Category code (BT-118' +
      ') " Not subject to VAT" shall ha' +
      've a VAT exemption reason code (' +
      'BT-121), meaning " Not subject t' +
      'o VAT" or a VAT exemption reason' +
      ' text (BT-120) " Not subject to ' +
      'VAT" (or the equivalent standard' +
      ' text in another language).';
     Contexto: 54;
     Instruccion: 1079),
    (Identificador: 'BR-O-06';
     Bandera: 'fatal';
     Prueba: 'not(cbc:Percent)';
     Mensaje: '[BR-O-06]-A Document level allow' +
      'ance (BG-20) where VAT category ' +
      'code (BT-95) is "Not subject to ' +
      'VAT" shall not contain a Documen' +
      't level allowance VAT rate (BT-9' +
      '6).';
     Contexto: 55;
     Instruccion: 1345),
    (Identificador: 'BR-O-07';
     Bandera: 'fatal';
     Prueba: 'not(cbc:Percent)';
     Mensaje: '[BR-O-07]-A Document level charg' +
      'e (BG-21) where the VAT category' +
      ' code (BT-102) is "Not subject t' +
      'o VAT" shall not contain a Docum' +
      'ent level charge VAT rate (BT-10' +
      '3).';
     Contexto: 56;
     Instruccion: 1345),
    (Identificador: 'BR-O-05';
     Bandera: 'fatal';
     Prueba: 'not(cbc:Percent)';
     Mensaje: '[BR-O-05]-An Invoice line (BG-25' +
      ') where the VAT category code (B' +
      'T-151) is "Not subject to VAT" s' +
      'hall not contain an Invoiced ite' +
      'm VAT rate (BT-152).';
     Contexto: 57;
     Instruccion: 1345),
    (Identificador: 'BR-S-08';
     Bandera: 'fatal';
     Prueba: 'every $rate in xs:decimal(cbc:Pe' +
      'rcent) satisfies (((exists(//cac' +
      ':InvoiceLine[cac:Item/cac:Classi' +
      'fiedTaxCategory/normalize-space(' +
      'cbc:ID) = ''S''][cac:Item/cac:Clas' +
      'sifiedTaxCategory/xs:decimal(cbc' +
      ':Percent) =$rate]) or exists(//c' +
      'ac:AllowanceCharge[cac:TaxCatego' +
      'ry/normalize-space(cbc:ID)=''S''][' +
      'cac:TaxCategory/xs:decimal(cbc:P' +
      'ercent) = $rate])) and ((../xs:d' +
      'ecimal(cbc:TaxableAmount - 1) < ' +
      '(sum(../../../cac:InvoiceLine[ca' +
      'c:Item/cac:ClassifiedTaxCategory' +
      '/normalize-space(cbc:ID)=''S''][ca' +
      'c:Item/cac:ClassifiedTaxCategory' +
      '/xs:decimal(cbc:Percent) =$rate]' +
      '/xs:decimal(cbc:LineExtensionAmo' +
      'unt)) + sum(../../../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=tru' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''S''][cac:TaxCategor' +
      'y/xs:decimal(cbc:Percent) = $rat' +
      'e]/xs:decimal(cbc:Amount)) - sum' +
      '(../../../cac:AllowanceCharge[cb' +
      'c:ChargeIndicator=false()][cac:T' +
      'axCategory/normalize-space(cbc:I' +
      'D)=''S''][cac:TaxCategory/xs:decim' +
      'al(cbc:Percent) = $rate]/xs:deci' +
      'mal(cbc:Amount)))) and (../xs:de' +
      'cimal(cbc:TaxableAmount + 1) > (' +
      'sum(../../../cac:InvoiceLine[cac' +
      ':Item/cac:ClassifiedTaxCategory/' +
      'normalize-space(cbc:ID)=''S''][cac' +
      ':Item/cac:ClassifiedTaxCategory/' +
      'xs:decimal(cbc:Percent) =$rate]/' +
      'xs:decimal(cbc:LineExtensionAmou' +
      'nt)) + sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=true' +
      '()][cac:TaxCategory/normalize-sp' +
      'ace(cbc:ID)=''S''][cac:TaxCategory' +
      '/xs:decimal(cbc:Percent) = $rate' +
      ']/xs:decimal(cbc:Amount)) - sum(' +
      '../../../cac:AllowanceCharge[cbc' +
      ':ChargeIndicator=false()][cac:Ta' +
      'xCategory/normalize-space(cbc:ID' +
      ')=''S''][cac:TaxCategory/xs:decima' +
      'l(cbc:Percent) = $rate]/xs:decim' +
      'al(cbc:Amount)))))) or (exists(/' +
      '/cac:CreditNoteLine[cac:Item/cac' +
      ':ClassifiedTaxCategory/normalize' +
      '-space(cbc:ID) = ''S''][cac:Item/c' +
      'ac:ClassifiedTaxCategory/xs:deci' +
      'mal(cbc:Percent) =$rate]) or exi' +
      'sts(//cac:AllowanceCharge[cac:Ta' +
      'xCategory/normalize-space(cbc:ID' +
      ')=''S''][cac:TaxCategory/xs:decima' +
      'l(cbc:Percent) = $rate])) and ((' +
      '../xs:decimal(cbc:TaxableAmount ' +
      '- 1) < (sum(../../../cac:CreditN' +
      'oteLine[cac:Item/cac:ClassifiedT' +
      'axCategory/normalize-space(cbc:I' +
      'D)=''S''][cac:Item/cac:ClassifiedT' +
      'axCategory/xs:decimal(cbc:Percen' +
      't) =$rate]/xs:decimal(cbc:LineEx' +
      'tensionAmount)) + sum(../../../c' +
      'ac:AllowanceCharge[cbc:ChargeInd' +
      'icator=true()][cac:TaxCategory/n' +
      'ormalize-space(cbc:ID)=''S''][cac:' +
      'TaxCategory/xs:decimal(cbc:Perce' +
      'nt) = $rate]/xs:decimal(cbc:Amou' +
      'nt)) - sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''S''][cac:TaxCategor' +
      'y/xs:decimal(cbc:Percent) = $rat' +
      'e]/xs:decimal(cbc:Amount)))) and' +
      ' (../xs:decimal(cbc:TaxableAmoun' +
      't + 1) > (sum(../../../cac:Credi' +
      'tNoteLine[cac:Item/cac:Classifie' +
      'dTaxCategory/normalize-space(cbc' +
      ':ID)=''S''][cac:Item/cac:Classifie' +
      'dTaxCategory/xs:decimal(cbc:Perc' +
      'ent) =$rate]/xs:decimal(cbc:Line' +
      'ExtensionAmount)) + sum(../../..' +
      '/cac:AllowanceCharge[cbc:ChargeI' +
      'ndicator=true()][cac:TaxCategory' +
      '/normalize-space(cbc:ID)=''S''][ca' +
      'c:TaxCategory/xs:decimal(cbc:Per' +
      'cent) = $rate]/xs:decimal(cbc:Am' +
      'ount)) - sum(../../../cac:Allowa' +
      'nceCharge[cbc:ChargeIndicator=fa' +
      'lse()][cac:TaxCategory/normalize' +
      '-space(cbc:ID)=''S''][cac:TaxCateg' +
      'ory/xs:decimal(cbc:Percent) = $r' +
      'ate]/xs:decimal(cbc:Amount))))))';
     Mensaje: '[BR-S-08]-For each different val' +
      'ue of VAT category rate (BT-119)' +
      ' where the VAT category code (BT' +
      '-118) is "Standard rated", the V' +
      'AT category taxable amount (BT-1' +
      '16) in a VAT breakdown (BG-23) s' +
      'hall equal the sum of Invoice li' +
      'ne net amounts (BT-131) plus the' +
      ' sum of document level charge am' +
      'ounts (BT-99) minus the sum of d' +
      'ocument level allowance amounts ' +
      '(BT-92) where the VAT category c' +
      'ode (BT-151, BT-102, BT-95) is "' +
      'Standard rated" and the VAT rate' +
      ' (BT-152, BT-103, BT-96) equals ' +
      'the VAT category rate (BT-119).';
     Contexto: 58;
     Instruccion: 1398),
    (Identificador: 'BR-S-09';
     Bandera: 'fatal';
     Prueba: '(abs(xs:decimal(../cbc:TaxAmount' +
      ')) - 1 <  round((abs(xs:decimal(' +
      '../cbc:TaxableAmount)) * (xs:dec' +
      'imal(cbc:Percent) div 100)) * 10' +
      ' * 10) div 100 ) and (abs(xs:dec' +
      'imal(../cbc:TaxAmount)) + 1 >  r' +
      'ound((abs(xs:decimal(../cbc:Taxa' +
      'bleAmount)) * (xs:decimal(cbc:Pe' +
      'rcent) div 100)) * 10 * 10) div ' +
      '100 )';
     Mensaje: '[BR-S-09]-The VAT category tax a' +
      'mount (BT-117) in a VAT breakdow' +
      'n (BG-23) where VAT category cod' +
      'e (BT-118) is "Standard rated" s' +
      'hall equal the VAT category taxa' +
      'ble amount (BT-116) multiplied b' +
      'y the VAT category rate (BT-119)' +
      '.';
     Contexto: 58;
     Instruccion: 1257),
    (Identificador: 'BR-S-10';
     Bandera: 'fatal';
     Prueba: 'not(cbc:TaxExemptionReason) and ' +
      'not(cbc:TaxExemptionReasonCode)';
     Mensaje: '[BR-S-10]-A VAT breakdown (BG-23' +
      ') with VAT Category code (BT-118' +
      ') "Standard rate" shall not have' +
      ' a VAT exemption reason code (BT' +
      '-121) or VAT exemption reason te' +
      'xt (BT-120).';
     Contexto: 58;
     Instruccion: 1260),
    (Identificador: 'BR-S-06';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) > 0';
     Mensaje: '[BR-S-06]-In a Document level al' +
      'lowance (BG-20) where the Docume' +
      'nt level allowance VAT category ' +
      'code (BT-95) is "Standard rated"' +
      ' the Document level allowance VA' +
      'T rate (BT-96) shall be greater ' +
      'than zero.';
     Contexto: 59;
     Instruccion: 1401),
    (Identificador: 'BR-S-07';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) > 0';
     Mensaje: '[BR-S-07]-In a Document level ch' +
      'arge (BG-21) where the Document ' +
      'level charge VAT category code (' +
      'BT-102) is "Standard rated" the ' +
      'Document level charge VAT rate (' +
      'BT-103) shall be greater than ze' +
      'ro.  ';
     Contexto: 60;
     Instruccion: 1401),
    (Identificador: 'BR-S-05';
     Bandera: 'fatal';
     Prueba: '(cbc:Percent) > 0';
     Mensaje: '[BR-S-05]-In an Invoice line (BG' +
      '-25) where the Invoiced item VAT' +
      ' category code (BT-151) is "Stan' +
      'dard rated" the Invoiced item VA' +
      'T rate (BT-152) shall be greater' +
      ' than zero.';
     Contexto: 61;
     Instruccion: 1401),
    (Identificador: 'BR-Z-08';
     Bandera: 'fatal';
     Prueba: '(exists(//cac:InvoiceLine) and (' +
      'xs:decimal(../cbc:TaxableAmount)' +
      ' = (sum(../../../cac:InvoiceLine' +
      '[cac:Item/cac:ClassifiedTaxCateg' +
      'ory/normalize-space(cbc:ID)=''Z'']' +
      '/xs:decimal(cbc:LineExtensionAmo' +
      'unt)) + sum(../../../cac:Allowan' +
      'ceCharge[cbc:ChargeIndicator=tru' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''Z'']/xs:decimal(cbc' +
      ':Amount)) - sum(../../../cac:All' +
      'owanceCharge[cbc:ChargeIndicator' +
      '=false()][cac:TaxCategory/normal' +
      'ize-space(cbc:ID)=''Z'']/xs:decima' +
      'l(cbc:Amount))))) or (exists(//c' +
      'ac:CreditNoteLine) and (xs:decim' +
      'al(../cbc:TaxableAmount) = (sum(' +
      '../../../cac:CreditNoteLine[cac:' +
      'Item/cac:ClassifiedTaxCategory/n' +
      'ormalize-space(cbc:ID)=''Z'']/xs:d' +
      'ecimal(cbc:LineExtensionAmount))' +
      ' + sum(../../../cac:AllowanceCha' +
      'rge[cbc:ChargeIndicator=true()][' +
      'cac:TaxCategory/normalize-space(' +
      'cbc:ID)=''Z'']/xs:decimal(cbc:Amou' +
      'nt)) - sum(../../../cac:Allowanc' +
      'eCharge[cbc:ChargeIndicator=fals' +
      'e()][cac:TaxCategory/normalize-s' +
      'pace(cbc:ID)=''Z'']/xs:decimal(cbc' +
      ':Amount)))))';
     Mensaje: '[BR-Z-08]-In a VAT breakdown (BG' +
      '-23) where VAT category code (BT' +
      '-118) is "Zero rated" the VAT ca' +
      'tegory taxable amount (BT-116) s' +
      'hall equal the sum of Invoice li' +
      'ne net amount (BT-131) minus the' +
      ' sum of Document level allowance' +
      ' amounts (BT-92) plus the sum of' +
      ' Document level charge amounts (' +
      'BT-99) where the VAT category co' +
      'des (BT-151, BT-95, BT-102) are ' +
      '"Zero rated".';
     Contexto: 62;
     Instruccion: 1435),
    (Identificador: 'BR-Z-09';
     Bandera: 'fatal';
     Prueba: 'xs:decimal(../cbc:TaxAmount) = 0';
     Mensaje: '[BR-Z-09]-The VAT category tax a' +
      'mount (BT-117) in a VAT breakdow' +
      'n (BG-23) where VAT category cod' +
      'e (BT-118) is "Zero rated" shall' +
      ' equal 0 (zero).';
     Contexto: 62;
     Instruccion: 1074),
    (Identificador: 'BR-Z-10';
     Bandera: 'fatal';
     Prueba: 'not((cbc:TaxExemptionReason) or ' +
      '(cbc:TaxExemptionReasonCode))';
     Mensaje: '[BR-Z-10]-A VAT breakdown (BG-23' +
      ') with VAT Category code (BT-118' +
      ') "Zero rated" shall not have a ' +
      'VAT exemption reason code (BT-12' +
      '1) or VAT exemption reason text ' +
      '(BT-120).';
     Contexto: 62;
     Instruccion: 1437),
    (Identificador: 'BR-Z-06';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-Z-06]-In a Document level al' +
      'lowance (BG-20) where the Docume' +
      'nt level allowance VAT category ' +
      'code (BT-95) is "Zero rated" the' +
      ' Document level allowance VAT ra' +
      'te (BT-96) shall be 0 (zero).';
     Contexto: 63;
     Instruccion: 1082),
    (Identificador: 'BR-Z-07';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-Z-07]-In a Document level ch' +
      'arge (BG-21) where the Document ' +
      'level charge VAT category code (' +
      'BT-102) is "Zero rated" the Docu' +
      'ment level charge VAT rate (BT-1' +
      '03) shall be 0 (zero).';
     Contexto: 64;
     Instruccion: 1082),
    (Identificador: 'BR-Z-05';
     Bandera: 'fatal';
     Prueba: '(xs:decimal(cbc:Percent) = 0)';
     Mensaje: '[BR-Z-05]-In an Invoice line (BG' +
      '-25) where the Invoiced item VAT' +
      ' category code (BT-151) is "Zero' +
      ' rated" the Invoiced item VAT ra' +
      'te (BT-152) shall be 0 (zero).';
     Contexto: 65;
     Instruccion: 1082),
    (Identificador: 'UBL-SR-51';
     Bandera: 'fatal';
     Prueba: 'not(cac:AddressLine) or count(ca' +
      'c:AddressLine) = 1';
     Mensaje: '[UBL-SR-51]-An address can only ' +
      'have one third line.';
     Contexto: 66;
     Instruccion: 1453),
    (Identificador: 'UBL-SR-42';
     Bandera: 'fatal';
     Prueba: '(count(cac:PartyTaxScheme) <= 2)';
     Mensaje: '[UBL-SR-42]-Party tax scheme sha' +
      'll occur maximum twice in accoun' +
      'ting supplier party';
     Contexto: 67;
     Instruccion: 1456),
    (Identificador: 'UBL-SR-33';
     Bandera: 'fatal';
     Prueba: '(count(cbc:DocumentDescription) ' +
      '<= 1)';
     Mensaje: '[UBL-SR-33]-Supporting document ' +
      'description shall occur maximum ' +
      'once';
     Contexto: 68;
     Instruccion: 1459),
    (Identificador: 'UBL-SR-43';
     Bandera: 'fatal';
     Prueba: '((cbc:DocumentTypeCode=''130'') or' +
      ' ((local-name(/*) = ''CreditNote''' +
      ') and (cbc:DocumentTypeCode=''50''' +
      ')) or (not(cbc:ID/@schemeID) and' +
      ' not(cbc:DocumentTypeCode)))';
     Mensaje: '[UBL-SR-43]-Scheme identifier sh' +
      'all only be used for invoiced ob' +
      'ject (document type code with va' +
      'lue 130 or 50)';
     Contexto: 68;
     Instruccion: 1474),
    (Identificador: 'UBL-DT-01';
     Bandera: 'fatal';
     Prueba: 'string-length(substring-after(.,' +
      '''.''))<=2';
     Mensaje: '[UBL-DT-01]-Amounts shall be dec' +
      'imal up to two fraction digits';
     Contexto: 69;
     Instruccion: 1490),
    (Identificador: 'UBL-DT-06';
     Bandera: 'fatal';
     Prueba: '(@mimeCode)';
     Mensaje: '[UBL-DT-06]-Binary object elemen' +
      'ts shall contain the mime code a' +
      'ttribute';
     Contexto: 70;
     Instruccion: 1495),
    (Identificador: 'UBL-DT-07';
     Bandera: 'fatal';
     Prueba: '(@filename)';
     Mensaje: '[UBL-DT-07]-Binary object elemen' +
      'ts shall contain the file name a' +
      'ttribute';
     Contexto: 70;
     Instruccion: 1496),
    (Identificador: 'UBL-SR-25';
     Bandera: 'fatal';
     Prueba: 'not(cac:DeliveryParty) or count(' +
      'cac:DeliveryParty/cac:PartyName/' +
      'cbc:Name) = 1';
     Mensaje: '[UBL-SR-25]-Deliver to party nam' +
      'e shall occur maximum once';
     Contexto: 71;
     Instruccion: 1504),
    (Identificador: 'UBL-SR-30';
     Bandera: 'fatal';
     Prueba: '(count(cbc:AllowanceChargeReason' +
      ') <= 1)';
     Mensaje: '[UBL-SR-30]-Document level allow' +
      'ance reason shall occur maximum ' +
      'once';
     Contexto: 72;
     Instruccion: 1506),
    (Identificador: 'UBL-SR-31';
     Bandera: 'fatal';
     Prueba: '(count(cbc:AllowanceChargeReason' +
      ') <= 1)';
     Mensaje: '[UBL-SR-31]-Document level charg' +
      'e reason shall occur maximum onc' +
      'e';
     Contexto: 73;
     Instruccion: 1506),
    (Identificador: 'UBL-SR-53';
     Bandera: 'fatal';
     Prueba: 'exists(cac:TaxScheme/cbc:ID) and' +
      ' exists(cbc:CompanyID)';
     Mensaje: '[UBL-SR-53]- CompanyID (VAT Iden' +
      'tifier) must be stated when prov' +
      'iding the PartyTaxScheme/TaxSche' +
      'me/ID.';
     Contexto: 74;
     Instruccion: 1511),
    (Identificador: 'UBL-CR-001';
     Bandera: 'warning';
     Prueba: 'not(ext:UBLExtensions)';
     Mensaje: '[UBL-CR-001]-A UBL invoice shoul' +
      'd not include extensions';
     Contexto: 75;
     Instruccion: 1513),
    (Identificador: 'UBL-CR-002';
     Bandera: 'warning';
     Prueba: 'not(cbc:UBLVersionID) or cbc:UBL' +
      'VersionID = ''2.1''';
     Mensaje: '[UBL-CR-002]-A UBL invoice shoul' +
      'd not include the UBLVersionID o' +
      'r it should be 2.1';
     Contexto: 75;
     Instruccion: 1518),
    (Identificador: 'UBL-CR-003';
     Bandera: 'warning';
     Prueba: 'not(cbc:ProfileExecutionID)';
     Mensaje: '[UBL-CR-003]-A UBL invoice shoul' +
      'd not include the ProfileExecuti' +
      'onID ';
     Contexto: 75;
     Instruccion: 1520),
    (Identificador: 'UBL-CR-004';
     Bandera: 'warning';
     Prueba: 'not(cbc:CopyIndicator)';
     Mensaje: '[UBL-CR-004]-A UBL invoice shoul' +
      'd not include the CopyIndicator ';
     Contexto: 75;
     Instruccion: 1522),
    (Identificador: 'UBL-CR-005';
     Bandera: 'warning';
     Prueba: 'not(cbc:UUID)';
     Mensaje: '[UBL-CR-005]-A UBL invoice shoul' +
      'd not include the UUID ';
     Contexto: 75;
     Instruccion: 1524),
    (Identificador: 'UBL-CR-006';
     Bandera: 'warning';
     Prueba: 'not(cbc:IssueTime)';
     Mensaje: '[UBL-CR-006]-A UBL invoice shoul' +
      'd not include the IssueTime ';
     Contexto: 75;
     Instruccion: 1526),
    (Identificador: 'UBL-CR-007';
     Bandera: 'warning';
     Prueba: 'not(cbc:PricingCurrencyCode)';
     Mensaje: '[UBL-CR-007]-A UBL invoice shoul' +
      'd not include the PricingCurrenc' +
      'yCode';
     Contexto: 75;
     Instruccion: 1528),
    (Identificador: 'UBL-CR-008';
     Bandera: 'warning';
     Prueba: 'not(cbc:PaymentCurrencyCode)';
     Mensaje: '[UBL-CR-008]-A UBL invoice shoul' +
      'd not include the PaymentCurrenc' +
      'yCode';
     Contexto: 75;
     Instruccion: 1530),
    (Identificador: 'UBL-CR-009';
     Bandera: 'warning';
     Prueba: 'not(cbc:PaymentAlternativeCurren' +
      'cyCode)';
     Mensaje: '[UBL-CR-009]-A UBL invoice shoul' +
      'd not include the PaymentAlterna' +
      'tiveCurrencyCode';
     Contexto: 75;
     Instruccion: 1532),
    (Identificador: 'UBL-CR-010';
     Bandera: 'warning';
     Prueba: 'not(cbc:AccountingCostCode)';
     Mensaje: '[UBL-CR-010]-A UBL invoice shoul' +
      'd not include the AccountingCost' +
      'Code';
     Contexto: 75;
     Instruccion: 1534),
    (Identificador: 'UBL-CR-011';
     Bandera: 'warning';
     Prueba: 'not(cbc:LineCountNumeric)';
     Mensaje: '[UBL-CR-011]-A UBL invoice shoul' +
      'd not include the LineCountNumer' +
      'ic';
     Contexto: 75;
     Instruccion: 1536),
    (Identificador: 'UBL-CR-012';
     Bandera: 'warning';
     Prueba: 'not(cac:InvoicePeriod/cbc:StartT' +
      'ime)';
     Mensaje: '[UBL-CR-012]-A UBL invoice shoul' +
      'd not include the InvoicePeriod ' +
      'StartTime';
     Contexto: 75;
     Instruccion: 1539),
    (Identificador: 'UBL-CR-013';
     Bandera: 'warning';
     Prueba: 'not(cac:InvoicePeriod/cbc:EndTim' +
      'e)';
     Mensaje: '[UBL-CR-013]-A UBL invoice shoul' +
      'd not include the InvoicePeriod ' +
      'EndTime';
     Contexto: 75;
     Instruccion: 1542),
    (Identificador: 'UBL-CR-014';
     Bandera: 'warning';
     Prueba: 'not(cac:InvoicePeriod/cbc:Durati' +
      'onMeasure)';
     Mensaje: '[UBL-CR-014]-A UBL invoice shoul' +
      'd not include the InvoicePeriod ' +
      'DurationMeasure';
     Contexto: 75;
     Instruccion: 1545),
    (Identificador: 'UBL-CR-015';
     Bandera: 'warning';
     Prueba: 'not(cac:InvoicePeriod/cbc:Descri' +
      'ption)';
     Mensaje: '[UBL-CR-015]-A UBL invoice shoul' +
      'd not include the InvoicePeriod ' +
      'Description';
     Contexto: 75;
     Instruccion: 1548),
    (Identificador: 'UBL-CR-016';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cbc:CopyI' +
      'ndicator)';
     Mensaje: '[UBL-CR-016]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' CopyIndicator';
     Contexto: 75;
     Instruccion: 1551),
    (Identificador: 'UBL-CR-017';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cbc:UUID)';
     Mensaje: '[UBL-CR-017]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' UUID';
     Contexto: 75;
     Instruccion: 1553),
    (Identificador: 'UBL-CR-018';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cbc:Issue' +
      'Date)';
     Mensaje: '[UBL-CR-018]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' IssueDate';
     Contexto: 75;
     Instruccion: 1555),
    (Identificador: 'UBL-CR-019';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cbc:Issue' +
      'Time)';
     Mensaje: '[UBL-CR-019]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' IssueTime';
     Contexto: 75;
     Instruccion: 1557),
    (Identificador: 'UBL-CR-020';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cbc:Custo' +
      'merReference)';
     Mensaje: '[UBL-CR-020]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' CustomerReference';
     Contexto: 75;
     Instruccion: 1560),
    (Identificador: 'UBL-CR-021';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cbc:Order' +
      'TypeCode)';
     Mensaje: '[UBL-CR-021]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' OrderTypeCode';
     Contexto: 75;
     Instruccion: 1563),
    (Identificador: 'UBL-CR-022';
     Bandera: 'warning';
     Prueba: 'not(cac:OrderReference/cac:Docum' +
      'entReference)';
     Mensaje: '[UBL-CR-022]-A UBL invoice shoul' +
      'd not include the OrderReference' +
      ' DocumentReference';
     Contexto: 75;
     Instruccion: 1566),
    (Identificador: 'UBL-CR-023';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:CopyIn' +
      'dicator)';
     Mensaje: '[UBL-CR-023]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce CopyIndicator';
     Contexto: 75;
     Instruccion: 1569),
    (Identificador: 'UBL-CR-024';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:UUID)';
     Mensaje: '[UBL-CR-024]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce UUID';
     Contexto: 75;
     Instruccion: 1571),
    (Identificador: 'UBL-CR-025';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:IssueT' +
      'ime)';
     Mensaje: '[UBL-CR-025]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce IssueTime';
     Contexto: 75;
     Instruccion: 1573),
    (Identificador: 'UBL-CR-026';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Docume' +
      'ntTypeCode)';
     Mensaje: '[UBL-CR-026]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce DocumentTypeCode';
     Contexto: 75;
     Instruccion: 1575),
    (Identificador: 'UBL-CR-027';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Docume' +
      'ntType)';
     Mensaje: '[UBL-CR-027]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce DocumentType';
     Contexto: 75;
     Instruccion: 1578),
    (Identificador: 'UBL-CR-028';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:XPath)';
     Mensaje: '[UBL-CR-028]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce Xpath';
     Contexto: 75;
     Instruccion: 1581),
    (Identificador: 'UBL-CR-029';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Langua' +
      'geID)';
     Mensaje: '[UBL-CR-029]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce LanguageID';
     Contexto: 75;
     Instruccion: 1584),
    (Identificador: 'UBL-CR-030';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Locale' +
      'Code)';
     Mensaje: '[UBL-CR-030]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce LocaleCode';
     Contexto: 75;
     Instruccion: 1587),
    (Identificador: 'UBL-CR-031';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Versio' +
      'nID)';
     Mensaje: '[UBL-CR-031]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce VersionID';
     Contexto: 75;
     Instruccion: 1590),
    (Identificador: 'UBL-CR-032';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Docume' +
      'ntStatusCode)';
     Mensaje: '[UBL-CR-032]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce DocumentStatusCode';
     Contexto: 75;
     Instruccion: 1593),
    (Identificador: 'UBL-CR-033';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cbc:Docume' +
      'ntDescription)';
     Mensaje: '[UBL-CR-033]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce DocumenDescription';
     Contexto: 75;
     Instruccion: 1595),
    (Identificador: 'UBL-CR-034';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cac:Attach' +
      'ment)';
     Mensaje: '[UBL-CR-034]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce Attachment';
     Contexto: 75;
     Instruccion: 1598),
    (Identificador: 'UBL-CR-035';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cac:Validi' +
      'tyPeriod)';
     Mensaje: '[UBL-CR-035]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce ValidityPeriod';
     Contexto: 75;
     Instruccion: 1601),
    (Identificador: 'UBL-CR-036';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cac:Issuer' +
      'Party)';
     Mensaje: '[UBL-CR-036]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce IssuerParty';
     Contexto: 75;
     Instruccion: 1604),
    (Identificador: 'UBL-CR-037';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Inv' +
      'oiceDocumentReference/cac:Result' +
      'OfVerification)';
     Mensaje: '[UBL-CR-037]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce ResultOfVerification';
     Contexto: 75;
     Instruccion: 1607),
    (Identificador: 'UBL-CR-038';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Sel' +
      'fBilledInvoiceDocumentReference)';
     Mensaje: '[UBL-CR-038]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce SelfBilledInvoiceDocumentRefe' +
      'rence';
     Contexto: 75;
     Instruccion: 1610),
    (Identificador: 'UBL-CR-039';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Cre' +
      'ditNoteDocumentReference)';
     Mensaje: '[UBL-CR-039]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce CreditNoteDocumentReference';
     Contexto: 75;
     Instruccion: 1613),
    (Identificador: 'UBL-CR-040';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Sel' +
      'fBilledCreditNoteDocumentReferen' +
      'ce)';
     Mensaje: '[UBL-CR-040]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce SelfBilledCreditNoteDocumentR' +
      'eference';
     Contexto: 75;
     Instruccion: 1616),
    (Identificador: 'UBL-CR-041';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Deb' +
      'itNoteDocumentReference)';
     Mensaje: '[UBL-CR-041]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce DebitNoteDocumentReference';
     Contexto: 75;
     Instruccion: 1619),
    (Identificador: 'UBL-CR-042';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Rem' +
      'inderDocumentReference)';
     Mensaje: '[UBL-CR-042]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce ReminderDocumentReference';
     Contexto: 75;
     Instruccion: 1622),
    (Identificador: 'UBL-CR-043';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Add' +
      'itionalDocumentReference)';
     Mensaje: '[UBL-CR-043]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce AdditionalDocumentReference';
     Contexto: 75;
     Instruccion: 1624),
    (Identificador: 'UBL-CR-044';
     Bandera: 'warning';
     Prueba: 'not(cac:BillingReference/cac:Bil' +
      'lingReferenceLine)';
     Mensaje: '[UBL-CR-044]-A UBL invoice shoul' +
      'd not include the BillingReferen' +
      'ce BillingReferenceLine';
     Contexto: 75;
     Instruccion: 1627),
    (Identificador: 'UBL-CR-045';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:CopyIndicator)';
     Mensaje: '[UBL-CR-045]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference CopyIndicator';
     Contexto: 75;
     Instruccion: 1630),
    (Identificador: 'UBL-CR-046';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:UUID)';
     Mensaje: '[UBL-CR-046]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference UUID';
     Contexto: 75;
     Instruccion: 1632),
    (Identificador: 'UBL-CR-047';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:IssueDate)';
     Mensaje: '[UBL-CR-047]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference IssueDate';
     Contexto: 75;
     Instruccion: 1634),
    (Identificador: 'UBL-CR-048';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:IssueTime)';
     Mensaje: '[UBL-CR-048]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference IssueTime';
     Contexto: 75;
     Instruccion: 1636),
    (Identificador: 'UBL-CR-049';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:DocumentTypeCode)';
     Mensaje: '[UBL-CR-049]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference DocumentTypeCode';
     Contexto: 75;
     Instruccion: 1638),
    (Identificador: 'UBL-CR-050';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:DocumentType)';
     Mensaje: '[UBL-CR-050]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference DocumentType';
     Contexto: 75;
     Instruccion: 1640),
    (Identificador: 'UBL-CR-051';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:XPath)';
     Mensaje: '[UBL-CR-051]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference Xpath';
     Contexto: 75;
     Instruccion: 1642),
    (Identificador: 'UBL-CR-052';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:LanguageID)';
     Mensaje: '[UBL-CR-052]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference LanguageID';
     Contexto: 75;
     Instruccion: 1644),
    (Identificador: 'UBL-CR-053';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:LocaleCode)';
     Mensaje: '[UBL-CR-053]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference LocaleCode';
     Contexto: 75;
     Instruccion: 1646),
    (Identificador: 'UBL-CR-054';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:VersionID)';
     Mensaje: '[UBL-CR-054]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference VersionID';
     Contexto: 75;
     Instruccion: 1648),
    (Identificador: 'UBL-CR-055';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:DocumentStatusCode)';
     Mensaje: '[UBL-CR-055]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference DocumentStatusCode';
     Contexto: 75;
     Instruccion: 1650),
    (Identificador: 'UBL-CR-056';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cbc:DocumentDescription)';
     Mensaje: '[UBL-CR-056]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference DocumentDescription';
     Contexto: 75;
     Instruccion: 1652),
    (Identificador: 'UBL-CR-057';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cac:Attachment)';
     Mensaje: '[UBL-CR-057]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference Attachment';
     Contexto: 75;
     Instruccion: 1654),
    (Identificador: 'UBL-CR-058';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-058]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference ValidityPeriod';
     Contexto: 75;
     Instruccion: 1656),
    (Identificador: 'UBL-CR-059';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cac:IssuerParty)';
     Mensaje: '[UBL-CR-059]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference IssuerParty';
     Contexto: 75;
     Instruccion: 1658),
    (Identificador: 'UBL-CR-060';
     Bandera: 'warning';
     Prueba: 'not(cac:DespatchDocumentReferenc' +
      'e/cac:ResultOfVerification)';
     Mensaje: '[UBL-CR-060]-A UBL invoice shoul' +
      'd not include the DespatchDocume' +
      'ntReference ResultOfVerification';
     Contexto: 75;
     Instruccion: 1660),
    (Identificador: 'UBL-CR-061';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:CopyIndicator)';
     Mensaje: '[UBL-CR-061]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference CopyIndicator';
     Contexto: 75;
     Instruccion: 1663),
    (Identificador: 'UBL-CR-062';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:UUID)';
     Mensaje: '[UBL-CR-062]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference UUID';
     Contexto: 75;
     Instruccion: 1665),
    (Identificador: 'UBL-CR-063';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:IssueDate)';
     Mensaje: '[UBL-CR-063]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference IssueDate';
     Contexto: 75;
     Instruccion: 1667),
    (Identificador: 'UBL-CR-064';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:IssueTime)';
     Mensaje: '[UBL-CR-064]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference IssueTime';
     Contexto: 75;
     Instruccion: 1669),
    (Identificador: 'UBL-CR-065';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:DocumentTypeCode)';
     Mensaje: '[UBL-CR-065]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference DocumentTypeCode';
     Contexto: 75;
     Instruccion: 1671),
    (Identificador: 'UBL-CR-066';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:DocumentType)';
     Mensaje: '[UBL-CR-066]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference DocumentType';
     Contexto: 75;
     Instruccion: 1673),
    (Identificador: 'UBL-CR-067';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:XPath)';
     Mensaje: '[UBL-CR-067]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference Xpath';
     Contexto: 75;
     Instruccion: 1675),
    (Identificador: 'UBL-CR-068';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:LanguageID)';
     Mensaje: '[UBL-CR-068]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference LanguageID';
     Contexto: 75;
     Instruccion: 1677),
    (Identificador: 'UBL-CR-069';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:LocaleCode)';
     Mensaje: '[UBL-CR-069]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference LocaleCode';
     Contexto: 75;
     Instruccion: 1679),
    (Identificador: 'UBL-CR-070';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:VersionID)';
     Mensaje: '[UBL-CR-070]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference VersionID';
     Contexto: 75;
     Instruccion: 1681),
    (Identificador: 'UBL-CR-071';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:DocumentStatusCode)';
     Mensaje: '[UBL-CR-071]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference DocumentStatusCode';
     Contexto: 75;
     Instruccion: 1683),
    (Identificador: 'UBL-CR-072';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cbc:DocumentDescription)';
     Mensaje: '[UBL-CR-072]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference DocumentDescription';
     Contexto: 75;
     Instruccion: 1685),
    (Identificador: 'UBL-CR-073';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cac:Attachment)';
     Mensaje: '[UBL-CR-073]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference Attachment';
     Contexto: 75;
     Instruccion: 1687),
    (Identificador: 'UBL-CR-074';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-074]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference ValidityPeriod';
     Contexto: 75;
     Instruccion: 1689),
    (Identificador: 'UBL-CR-075';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cac:IssuerParty)';
     Mensaje: '[UBL-CR-075]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference IssuerParty';
     Contexto: 75;
     Instruccion: 1691),
    (Identificador: 'UBL-CR-076';
     Bandera: 'warning';
     Prueba: 'not(cac:ReceiptDocumentReference' +
      '/cac:ResultOfVerification)';
     Mensaje: '[UBL-CR-076]-A UBL invoice shoul' +
      'd not include the ReceiptDocumen' +
      'tReference ResultOfVerification';
     Contexto: 75;
     Instruccion: 1693),
    (Identificador: 'UBL-CR-077';
     Bandera: 'warning';
     Prueba: 'not(cac:StatementDocumentReferen' +
      'ce)';
     Mensaje: '[UBL-CR-077]-A UBL invoice shoul' +
      'd not include the StatementDocum' +
      'entReference';
     Contexto: 75;
     Instruccion: 1695),
    (Identificador: 'UBL-CR-078';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:CopyIndicator)';
     Mensaje: '[UBL-CR-078]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference CopyIndicator';
     Contexto: 75;
     Instruccion: 1698),
    (Identificador: 'UBL-CR-079';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:UUID)';
     Mensaje: '[UBL-CR-079]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference UUID';
     Contexto: 75;
     Instruccion: 1700),
    (Identificador: 'UBL-CR-080';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:IssueDate)';
     Mensaje: '[UBL-CR-080]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference IssueDate';
     Contexto: 75;
     Instruccion: 1702),
    (Identificador: 'UBL-CR-081';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:IssueTime)';
     Mensaje: '[UBL-CR-081]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference IssueTime';
     Contexto: 75;
     Instruccion: 1704),
    (Identificador: 'UBL-CR-082';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:DocumentTypeCode)';
     Mensaje: '[UBL-CR-082]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference DocumentTypeCode';
     Contexto: 75;
     Instruccion: 1706),
    (Identificador: 'UBL-CR-083';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:DocumentType)';
     Mensaje: '[UBL-CR-083]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference DocumentType';
     Contexto: 75;
     Instruccion: 1708),
    (Identificador: 'UBL-CR-084';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:XPath)';
     Mensaje: '[UBL-CR-084]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference Xpath';
     Contexto: 75;
     Instruccion: 1710),
    (Identificador: 'UBL-CR-085';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:LanguageID)';
     Mensaje: '[UBL-CR-085]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference LanguageID';
     Contexto: 75;
     Instruccion: 1712),
    (Identificador: 'UBL-CR-086';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:LocaleCode)';
     Mensaje: '[UBL-CR-086]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference LocaleCode';
     Contexto: 75;
     Instruccion: 1714),
    (Identificador: 'UBL-CR-087';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:VersionID)';
     Mensaje: '[UBL-CR-087]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference VersionID';
     Contexto: 75;
     Instruccion: 1716),
    (Identificador: 'UBL-CR-088';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:DocumentStatusCode)';
     Mensaje: '[UBL-CR-088]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference DocumentStatusCode';
     Contexto: 75;
     Instruccion: 1718),
    (Identificador: 'UBL-CR-089';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cbc:DocumentDescription)';
     Mensaje: '[UBL-CR-089]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference DocumentDescriptio' +
      'n';
     Contexto: 75;
     Instruccion: 1720),
    (Identificador: 'UBL-CR-090';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cac:Attachment)';
     Mensaje: '[UBL-CR-090]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference Attachment';
     Contexto: 75;
     Instruccion: 1722),
    (Identificador: 'UBL-CR-091';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-091]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference ValidityPeriod';
     Contexto: 75;
     Instruccion: 1724),
    (Identificador: 'UBL-CR-092';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cac:IssuerParty)';
     Mensaje: '[UBL-CR-092]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference IssuerParty';
     Contexto: 75;
     Instruccion: 1726),
    (Identificador: 'UBL-CR-093';
     Bandera: 'warning';
     Prueba: 'not(cac:OriginatorDocumentRefere' +
      'nce/cac:ResultOfVerification)';
     Mensaje: '[UBL-CR-093]-A UBL invoice shoul' +
      'd not include the OriginatorDocu' +
      'mentReference ResultOfVerificati' +
      'on';
     Contexto: 75;
     Instruccion: 1728),
    (Identificador: 'UBL-CR-094';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:CopyIndicator)';
     Mensaje: '[UBL-CR-094]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference CopyIndicator';
     Contexto: 75;
     Instruccion: 1731),
    (Identificador: 'UBL-CR-095';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:UUID)';
     Mensaje: '[UBL-CR-095]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference UUID';
     Contexto: 75;
     Instruccion: 1733),
    (Identificador: 'UBL-CR-096';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:IssueDate)';
     Mensaje: '[UBL-CR-096]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference IssueDate';
     Contexto: 75;
     Instruccion: 1735),
    (Identificador: 'UBL-CR-097';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:IssueTime)';
     Mensaje: '[UBL-CR-097]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference IssueTime';
     Contexto: 75;
     Instruccion: 1737),
    (Identificador: 'UBL-CR-098';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:DocumentTypeCode)';
     Mensaje: '[UBL-CR-098]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference DocumentTypeCode';
     Contexto: 75;
     Instruccion: 1739),
    (Identificador: 'UBL-CR-099';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:DocumentType)';
     Mensaje: '[UBL-CR-099]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference DocumentType';
     Contexto: 75;
     Instruccion: 1741),
    (Identificador: 'UBL-CR-100';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:XPath)';
     Mensaje: '[UBL-CR-100]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference Xpath';
     Contexto: 75;
     Instruccion: 1743),
    (Identificador: 'UBL-CR-101';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:LanguageID)';
     Mensaje: '[UBL-CR-101]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference LanguageID';
     Contexto: 75;
     Instruccion: 1745),
    (Identificador: 'UBL-CR-102';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:LocaleCode)';
     Mensaje: '[UBL-CR-102]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference LocaleCode';
     Contexto: 75;
     Instruccion: 1747),
    (Identificador: 'UBL-CR-103';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:VersionID)';
     Mensaje: '[UBL-CR-103]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference VersionID';
     Contexto: 75;
     Instruccion: 1749),
    (Identificador: 'UBL-CR-104';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:DocumentStatusCode)';
     Mensaje: '[UBL-CR-104]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference DocumentStatusCode';
     Contexto: 75;
     Instruccion: 1751),
    (Identificador: 'UBL-CR-105';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cbc:DocumentDescription)';
     Mensaje: '[UBL-CR-105]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference DocumentDescription';
     Contexto: 75;
     Instruccion: 1753),
    (Identificador: 'UBL-CR-106';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cac:Attachment)';
     Mensaje: '[UBL-CR-106]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference Attachment';
     Contexto: 75;
     Instruccion: 1755),
    (Identificador: 'UBL-CR-107';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-107]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference ValidityPeriod';
     Contexto: 75;
     Instruccion: 1757),
    (Identificador: 'UBL-CR-108';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cac:IssuerParty)';
     Mensaje: '[UBL-CR-108]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference IssuerParty';
     Contexto: 75;
     Instruccion: 1759),
    (Identificador: 'UBL-CR-109';
     Bandera: 'warning';
     Prueba: 'not(cac:ContractDocumentReferenc' +
      'e/cac:ResultOfVerification)';
     Mensaje: '[UBL-CR-109]-A UBL invoice shoul' +
      'd not include the ContractDocume' +
      'ntReference ResultOfVerification';
     Contexto: 75;
     Instruccion: 1761),
    (Identificador: 'UBL-CR-110';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:CopyIndicator)';
     Mensaje: '[UBL-CR-110]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference CopyIndicator';
     Contexto: 75;
     Instruccion: 1763),
    (Identificador: 'UBL-CR-111';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:UUID)';
     Mensaje: '[UBL-CR-111]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference UUID';
     Contexto: 75;
     Instruccion: 1765),
    (Identificador: 'UBL-CR-112';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:IssueDate)';
     Mensaje: '[UBL-CR-112]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference IssueDate';
     Contexto: 75;
     Instruccion: 1767),
    (Identificador: 'UBL-CR-113';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:IssueTime)';
     Mensaje: '[UBL-CR-113]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference IssueTime';
     Contexto: 75;
     Instruccion: 1769),
    (Identificador: 'UBL-CR-114';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:DocumentType)';
     Mensaje: '[UBL-CR-114]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference DocumentType';
     Contexto: 75;
     Instruccion: 1771),
    (Identificador: 'UBL-CR-115';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:XPath)';
     Mensaje: '[UBL-CR-115]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Xpath';
     Contexto: 75;
     Instruccion: 1773),
    (Identificador: 'UBL-CR-116';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:LanguageID)';
     Mensaje: '[UBL-CR-116]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference LanguageID';
     Contexto: 75;
     Instruccion: 1775),
    (Identificador: 'UBL-CR-117';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:LocaleCode)';
     Mensaje: '[UBL-CR-117]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference LocaleCode';
     Contexto: 75;
     Instruccion: 1777),
    (Identificador: 'UBL-CR-118';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:VersionID)';
     Mensaje: '[UBL-CR-118]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference VersionID';
     Contexto: 75;
     Instruccion: 1779),
    (Identificador: 'UBL-CR-119';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:DocumentStatusCode)';
     Mensaje: '[UBL-CR-119]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference DocumentStatusCode';
     Contexto: 75;
     Instruccion: 1781),
    (Identificador: 'UBL-CR-121';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:DocumentHash)';
     Mensaje: '[UBL-CR-121]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l DocumentHash';
     Contexto: 75;
     Instruccion: 1787),
    (Identificador: 'UBL-CR-122';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:HashAlgorithmMethod' +
      ')';
     Mensaje: '[UBL-CR-122]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l HashAlgorithmMethod';
     Contexto: 75;
     Instruccion: 1790),
    (Identificador: 'UBL-CR-123';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:ExpiryDate)';
     Mensaje: '[UBL-CR-123]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l ExpiryDate';
     Contexto: 75;
     Instruccion: 1793),
    (Identificador: 'UBL-CR-124';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:ExpiryTime)';
     Mensaje: '[UBL-CR-124]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l ExpiryTime';
     Contexto: 75;
     Instruccion: 1796),
    (Identificador: 'UBL-CR-125';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:MimeCode)';
     Mensaje: '[UBL-CR-125]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l MimeCode';
     Contexto: 75;
     Instruccion: 1799),
    (Identificador: 'UBL-CR-126';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:FormatCode)';
     Mensaje: '[UBL-CR-126]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l FormatCode';
     Contexto: 75;
     Instruccion: 1802),
    (Identificador: 'UBL-CR-127';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:EncodingCode)';
     Mensaje: '[UBL-CR-127]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l EncodingCode';
     Contexto: 75;
     Instruccion: 1805),
    (Identificador: 'UBL-CR-128';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:CharacterSetCode)';
     Mensaje: '[UBL-CR-128]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l CharacterSetCode';
     Contexto: 75;
     Instruccion: 1808),
    (Identificador: 'UBL-CR-129';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:FileName)';
     Mensaje: '[UBL-CR-129]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l FileName';
     Contexto: 75;
     Instruccion: 1811),
    (Identificador: 'UBL-CR-130';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:Attachment/cac:ExternalR' +
      'eference/cbc:Description)';
     Mensaje: '[UBL-CR-130]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference Attachment Externa' +
      'l Descriprion';
     Contexto: 75;
     Instruccion: 1813),
    (Identificador: 'UBL-CR-131';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-131]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference ValidityPeriod';
     Contexto: 75;
     Instruccion: 1815),
    (Identificador: 'UBL-CR-132';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:IssuerParty)';
     Mensaje: '[UBL-CR-132]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference IssuerParty';
     Contexto: 75;
     Instruccion: 1817),
    (Identificador: 'UBL-CR-133';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cac:ResultOfVerification)';
     Mensaje: '[UBL-CR-133]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference ResultOfVerificati' +
      'on';
     Contexto: 75;
     Instruccion: 1819),
    (Identificador: 'UBL-CR-134';
     Bandera: 'warning';
     Prueba: 'not(cac:ProjectReference/cbc:UUI' +
      'D)';
     Mensaje: '[UBL-CR-134]-A UBL invoice shoul' +
      'd not include the ProjectReferen' +
      'ce UUID';
     Contexto: 75;
     Instruccion: 1822),
    (Identificador: 'UBL-CR-135';
     Bandera: 'warning';
     Prueba: 'not(cac:ProjectReference/cbc:Iss' +
      'ueDate)';
     Mensaje: '[UBL-CR-135]-A UBL invoice shoul' +
      'd not include the ProjectReferen' +
      'ce IssueDate';
     Contexto: 75;
     Instruccion: 1824),
    (Identificador: 'UBL-CR-136';
     Bandera: 'warning';
     Prueba: 'not(cac:ProjectReference/cac:Wor' +
      'kPhaseReference)';
     Mensaje: '[UBL-CR-136]-A UBL invoice shoul' +
      'd not include the ProjectReferen' +
      'ce WorkPhaseReference';
     Contexto: 75;
     Instruccion: 1827),
    (Identificador: 'UBL-CR-137';
     Bandera: 'warning';
     Prueba: 'not(cac:Signature)';
     Mensaje: '[UBL-CR-137]-A UBL invoice shoul' +
      'd not include the Signature';
     Contexto: 75;
     Instruccion: 1829),
    (Identificador: 'UBL-CR-138';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cbc:CustomerAssignedAccountID)';
     Mensaje: '[UBL-CR-138]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty CustomerAssignedAccoun' +
      'tID';
     Contexto: 75;
     Instruccion: 1832),
    (Identificador: 'UBL-CR-139';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cbc:AdditionalAccountID)';
     Mensaje: '[UBL-CR-139]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty AdditionalAccountID';
     Contexto: 75;
     Instruccion: 1835),
    (Identificador: 'UBL-CR-140';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cbc:DataSendingCapability)';
     Mensaje: '[UBL-CR-140]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty DataSendingCapability';
     Contexto: 75;
     Instruccion: 1838),
    (Identificador: 'UBL-CR-141';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cbc:MarkCareIndicator)';
     Mensaje: '[UBL-CR-141]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party MarkCareIndicato' +
      'r';
     Contexto: 75;
     Instruccion: 1841),
    (Identificador: 'UBL-CR-142';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cbc:MarkAttentionIndic' +
      'ator)';
     Mensaje: '[UBL-CR-142]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party MarkAttentionInd' +
      'icator';
     Contexto: 75;
     Instruccion: 1844),
    (Identificador: 'UBL-CR-143';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cbc:WebsiteURI)';
     Mensaje: '[UBL-CR-143]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party WebsiteURI';
     Contexto: 75;
     Instruccion: 1847),
    (Identificador: 'UBL-CR-144';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cbc:LogoReferenceID)';
     Mensaje: '[UBL-CR-144]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party LogoReferenceID';
     Contexto: 75;
     Instruccion: 1850),
    (Identificador: 'UBL-CR-145';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cbc:IndustryClassifica' +
      'tionCode)';
     Mensaje: '[UBL-CR-145]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party IndustryClassifi' +
      'cationCode';
     Contexto: 75;
     Instruccion: 1853),
    (Identificador: 'UBL-CR-146';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:Language)';
     Mensaje: '[UBL-CR-146]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party Language';
     Contexto: 75;
     Instruccion: 1856),
    (Identificador: 'UBL-CR-147';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'ID)';
     Mensaje: '[UBL-CR-147]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress ID';
     Contexto: 75;
     Instruccion: 1858),
    (Identificador: 'UBL-CR-148';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'AddressTypeCode)';
     Mensaje: '[UBL-CR-148]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ad' +
      'dressTypeCode';
     Contexto: 75;
     Instruccion: 1861),
    (Identificador: 'UBL-CR-149';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'AddressFormatCode)';
     Mensaje: '[UBL-CR-149]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ad' +
      'dressFormatCode';
     Contexto: 75;
     Instruccion: 1864),
    (Identificador: 'UBL-CR-150';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Postbox)';
     Mensaje: '[UBL-CR-150]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Po' +
      'stbox';
     Contexto: 75;
     Instruccion: 1867),
    (Identificador: 'UBL-CR-151';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Floor)';
     Mensaje: '[UBL-CR-151]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Fl' +
      'oor';
     Contexto: 75;
     Instruccion: 1870),
    (Identificador: 'UBL-CR-152';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Room)';
     Mensaje: '[UBL-CR-152]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ro' +
      'om';
     Contexto: 75;
     Instruccion: 1873),
    (Identificador: 'UBL-CR-153';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'BlockName)';
     Mensaje: '[UBL-CR-153]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Bl' +
      'ockName';
     Contexto: 75;
     Instruccion: 1876),
    (Identificador: 'UBL-CR-154';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'BuildingName)';
     Mensaje: '[UBL-CR-154]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Bu' +
      'ildingName';
     Contexto: 75;
     Instruccion: 1879),
    (Identificador: 'UBL-CR-155';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'BuildingNumber)';
     Mensaje: '[UBL-CR-155]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Bu' +
      'ildingNumber';
     Contexto: 75;
     Instruccion: 1882),
    (Identificador: 'UBL-CR-156';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'InhouseMail)';
     Mensaje: '[UBL-CR-156]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress In' +
      'houseMail';
     Contexto: 75;
     Instruccion: 1885),
    (Identificador: 'UBL-CR-157';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Department)';
     Mensaje: '[UBL-CR-157]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress De' +
      'partment';
     Contexto: 75;
     Instruccion: 1888),
    (Identificador: 'UBL-CR-158';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'MarkAttention)';
     Mensaje: '[UBL-CR-158]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ma' +
      'rkAttention';
     Contexto: 75;
     Instruccion: 1891),
    (Identificador: 'UBL-CR-159';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'MarkCare)';
     Mensaje: '[UBL-CR-159]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ma' +
      'rkCare';
     Contexto: 75;
     Instruccion: 1894),
    (Identificador: 'UBL-CR-160';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'PlotIdentification)';
     Mensaje: '[UBL-CR-160]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Pl' +
      'otIdentification';
     Contexto: 75;
     Instruccion: 1897),
    (Identificador: 'UBL-CR-161';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'CitySubdivisionName)';
     Mensaje: '[UBL-CR-161]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ci' +
      'tySubdivisionName';
     Contexto: 75;
     Instruccion: 1900),
    (Identificador: 'UBL-CR-162';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'CountrySubentityCode)';
     Mensaje: '[UBL-CR-162]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Co' +
      'untrySubentityCode';
     Contexto: 75;
     Instruccion: 1903),
    (Identificador: 'UBL-CR-163';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Region)';
     Mensaje: '[UBL-CR-163]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Re' +
      'gion';
     Contexto: 75;
     Instruccion: 1906),
    (Identificador: 'UBL-CR-164';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'District)';
     Mensaje: '[UBL-CR-164]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Di' +
      'strict';
     Contexto: 75;
     Instruccion: 1909),
    (Identificador: 'UBL-CR-165';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'TimezoneOffset)';
     Mensaje: '[UBL-CR-165]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Ti' +
      'mezoneOffset';
     Contexto: 75;
     Instruccion: 1912),
    (Identificador: 'UBL-CR-166';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cac:' +
      'Country/cbc:Name)';
     Mensaje: '[UBL-CR-166]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Co' +
      'untry Name';
     Contexto: 75;
     Instruccion: 1915),
    (Identificador: 'UBL-CR-167';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PostalAddress/cac:' +
      'LocationCoordinate)';
     Mensaje: '[UBL-CR-167]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PostalAddress Lo' +
      'cationCoordinate';
     Contexto: 75;
     Instruccion: 1918),
    (Identificador: 'UBL-CR-168';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PhysicalLocation)';
     Mensaje: '[UBL-CR-168]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PhysicalLocation';
     Contexto: 75;
     Instruccion: 1921),
    (Identificador: 'UBL-CR-169';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':RegistrationName)';
     Mensaje: '[UBL-CR-169]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme R' +
      'egistrationName';
     Contexto: 75;
     Instruccion: 1924),
    (Identificador: 'UBL-CR-170';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':TaxLevelCode)';
     Mensaje: '[UBL-CR-170]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme T' +
      'axLevelCode';
     Contexto: 75;
     Instruccion: 1927),
    (Identificador: 'UBL-CR-171';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':ExemptionReasonCode)';
     Mensaje: '[UBL-CR-171]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme E' +
      'xemptionReasonCode';
     Contexto: 75;
     Instruccion: 1930),
    (Identificador: 'UBL-CR-172';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':ExemptionReason)';
     Mensaje: '[UBL-CR-172]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme E' +
      'xemptionReason';
     Contexto: 75;
     Instruccion: 1933),
    (Identificador: 'UBL-CR-173';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':RegistrationAddress)';
     Mensaje: '[UBL-CR-173]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme R' +
      'egistrationAddress';
     Contexto: 75;
     Instruccion: 1936),
    (Identificador: 'UBL-CR-174';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cbc:Name)';
     Mensaje: '[UBL-CR-174]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme T' +
      'axScheme Name';
     Contexto: 75;
     Instruccion: 1939),
    (Identificador: 'UBL-CR-175';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cbc:TaxTypeCode)';
     Mensaje: '[UBL-CR-175]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme T' +
      'axScheme TaxTypeCode';
     Contexto: 75;
     Instruccion: 1942),
    (Identificador: 'UBL-CR-176';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cbc:CurrencyCode)';
     Mensaje: '[UBL-CR-176]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme T' +
      'axScheme CurrencyCode';
     Contexto: 75;
     Instruccion: 1945),
    (Identificador: 'UBL-CR-177';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cac:JurisdictionRegio' +
      'nAddress)';
     Mensaje: '[UBL-CR-177]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyTaxScheme T' +
      'axScheme JurisdictionRegionAddre' +
      'ss';
     Contexto: 75;
     Instruccion: 1948),
    (Identificador: 'UBL-CR-178';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:RegistrationDate)';
     Mensaje: '[UBL-CR-178]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' RegistrationDate';
     Contexto: 75;
     Instruccion: 1951),
    (Identificador: 'UBL-CR-179';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:RegistrationExpirationDate)';
     Mensaje: '[UBL-CR-179]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' RegistrationExpirationDate';
     Contexto: 75;
     Instruccion: 1954),
    (Identificador: 'UBL-CR-180';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CompanyLegalFormCode)';
     Mensaje: '[UBL-CR-180]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' CompanyLegalFormCode';
     Contexto: 75;
     Instruccion: 1957),
    (Identificador: 'UBL-CR-181';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:SoleProprietorshipIndicator)';
     Mensaje: '[UBL-CR-181]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' SoleProprietorshipIndicator';
     Contexto: 75;
     Instruccion: 1960),
    (Identificador: 'UBL-CR-182';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CompanyLiquidationStatusCode)';
     Mensaje: '[UBL-CR-182]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' CompanyLiquidationStatusCode';
     Contexto: 75;
     Instruccion: 1963),
    (Identificador: 'UBL-CR-183';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CorporateStockAmount)';
     Mensaje: '[UBL-CR-183]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' CorporateStockAmount';
     Contexto: 75;
     Instruccion: 1966),
    (Identificador: 'UBL-CR-184';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:FullyPaidSharesIndicator)';
     Mensaje: '[UBL-CR-184]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' FullyPaidSharesIndicator';
     Contexto: 75;
     Instruccion: 1969),
    (Identificador: 'UBL-CR-185';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:RegistrationAddress)';
     Mensaje: '[UBL-CR-185]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' RegistrationAddress';
     Contexto: 75;
     Instruccion: 1971),
    (Identificador: 'UBL-CR-186';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:CorporateRegistrationScheme)';
     Mensaje: '[UBL-CR-186]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' CorporateRegistrationScheme';
     Contexto: 75;
     Instruccion: 1974),
    (Identificador: 'UBL-CR-187';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:HeadOfficeParty)';
     Mensaje: '[UBL-CR-187]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' HeadOfficeParty';
     Contexto: 75;
     Instruccion: 1977),
    (Identificador: 'UBL-CR-188';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:ShareholderParty)';
     Mensaje: '[UBL-CR-188]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PartyLegalEntity' +
      ' ShareholderParty';
     Contexto: 75;
     Instruccion: 1980),
    (Identificador: 'UBL-CR-189';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:Contact/cbc:ID)';
     Mensaje: '[UBL-CR-189]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party Contact ID';
     Contexto: 75;
     Instruccion: 1984),
    (Identificador: 'UBL-CR-190';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:Contact/cbc:Telefa' +
      'x)';
     Mensaje: '[UBL-CR-190]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party Contact Telefax';
     Contexto: 75;
     Instruccion: 1987),
    (Identificador: 'UBL-CR-191';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:Contact/cbc:Note)';
     Mensaje: '[UBL-CR-191]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party Contact Note';
     Contexto: 75;
     Instruccion: 1989),
    (Identificador: 'UBL-CR-192';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:Contact/cac:OtherC' +
      'ommunication)';
     Mensaje: '[UBL-CR-192]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party Contact OtherCom' +
      'munication';
     Contexto: 75;
     Instruccion: 1992),
    (Identificador: 'UBL-CR-193';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:Person)';
     Mensaje: '[UBL-CR-193]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party Person';
     Contexto: 75;
     Instruccion: 1995),
    (Identificador: 'UBL-CR-194';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:AgentParty)';
     Mensaje: '[UBL-CR-194]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party AgentParty';
     Contexto: 75;
     Instruccion: 1998),
    (Identificador: 'UBL-CR-195';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:ServiceProviderPar' +
      'ty)';
     Mensaje: '[UBL-CR-195]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party ServiceProviderP' +
      'arty';
     Contexto: 75;
     Instruccion: 2001),
    (Identificador: 'UBL-CR-196';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:PowerOfAttorney)';
     Mensaje: '[UBL-CR-196]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party PowerOfAttorney';
     Contexto: 75;
     Instruccion: 2004),
    (Identificador: 'UBL-CR-197';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:Party/cac:FinancialAccount)';
     Mensaje: '[UBL-CR-197]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty Party FinancialAccount';
     Contexto: 75;
     Instruccion: 2007),
    (Identificador: 'UBL-CR-198';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:DespatchContact)';
     Mensaje: '[UBL-CR-198]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty DespatchContact';
     Contexto: 75;
     Instruccion: 2010),
    (Identificador: 'UBL-CR-199';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:AccountingContact)';
     Mensaje: '[UBL-CR-199]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty AccountingContact';
     Contexto: 75;
     Instruccion: 2013),
    (Identificador: 'UBL-CR-200';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingSupplierParty/' +
      'cac:SellerContact)';
     Mensaje: '[UBL-CR-200]-A UBL invoice shoul' +
      'd not include the AccountingSupp' +
      'lierParty SellerContact';
     Contexto: 75;
     Instruccion: 2016),
    (Identificador: 'UBL-CR-201';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cbc:CustomerAssignedAccountID)';
     Mensaje: '[UBL-CR-201]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty CustomerAssignedAccoun' +
      'tID';
     Contexto: 75;
     Instruccion: 2018),
    (Identificador: 'UBL-CR-202';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cbc:SupplierAssignedAccountID)';
     Mensaje: '[UBL-CR-202]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty SupplierAssignedAccoun' +
      'tID';
     Contexto: 75;
     Instruccion: 2021),
    (Identificador: 'UBL-CR-203';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cbc:AdditionalAccountID)';
     Mensaje: '[UBL-CR-203]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty AdditionalAccountID';
     Contexto: 75;
     Instruccion: 2023),
    (Identificador: 'UBL-CR-204';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cbc:MarkCareIndicator)';
     Mensaje: '[UBL-CR-204]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party MarkCareIndicato' +
      'r';
     Contexto: 75;
     Instruccion: 2025),
    (Identificador: 'UBL-CR-205';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cbc:MarkAttentionIndic' +
      'ator)';
     Mensaje: '[UBL-CR-205]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party MarkAttentionInd' +
      'icator';
     Contexto: 75;
     Instruccion: 2027),
    (Identificador: 'UBL-CR-206';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cbc:WebsiteURI)';
     Mensaje: '[UBL-CR-206]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party WebsiteURI';
     Contexto: 75;
     Instruccion: 2029),
    (Identificador: 'UBL-CR-207';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cbc:LogoReferenceID)';
     Mensaje: '[UBL-CR-207]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party LogoReferenceID';
     Contexto: 75;
     Instruccion: 2031),
    (Identificador: 'UBL-CR-208';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cbc:IndustryClassifica' +
      'tionCode)';
     Mensaje: '[UBL-CR-208]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party IndustryClassifi' +
      'cationCode';
     Contexto: 75;
     Instruccion: 2033),
    (Identificador: 'UBL-CR-209';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:Language)';
     Mensaje: '[UBL-CR-209]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party Language';
     Contexto: 75;
     Instruccion: 2035),
    (Identificador: 'UBL-CR-210';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'ID)';
     Mensaje: '[UBL-CR-210]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress ID';
     Contexto: 75;
     Instruccion: 2037),
    (Identificador: 'UBL-CR-211';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'AddressTypeCode)';
     Mensaje: '[UBL-CR-211]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ad' +
      'dressTypeCode';
     Contexto: 75;
     Instruccion: 2039),
    (Identificador: 'UBL-CR-212';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'AddressFormatCode)';
     Mensaje: '[UBL-CR-212]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ad' +
      'dressFormatCode';
     Contexto: 75;
     Instruccion: 2041),
    (Identificador: 'UBL-CR-213';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Postbox)';
     Mensaje: '[UBL-CR-213]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Po' +
      'stbox';
     Contexto: 75;
     Instruccion: 2043),
    (Identificador: 'UBL-CR-214';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Floor)';
     Mensaje: '[UBL-CR-214]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Fl' +
      'oor';
     Contexto: 75;
     Instruccion: 2045),
    (Identificador: 'UBL-CR-215';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Room)';
     Mensaje: '[UBL-CR-215]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ro' +
      'om';
     Contexto: 75;
     Instruccion: 2047),
    (Identificador: 'UBL-CR-216';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'BlockName)';
     Mensaje: '[UBL-CR-216]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Bl' +
      'ockName';
     Contexto: 75;
     Instruccion: 2049),
    (Identificador: 'UBL-CR-217';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'BuildingName)';
     Mensaje: '[UBL-CR-217]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Bu' +
      'ildingName';
     Contexto: 75;
     Instruccion: 2051),
    (Identificador: 'UBL-CR-218';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'BuildingNumber)';
     Mensaje: '[UBL-CR-218]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Bu' +
      'ildingNumber';
     Contexto: 75;
     Instruccion: 2053),
    (Identificador: 'UBL-CR-219';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'InhouseMail)';
     Mensaje: '[UBL-CR-219]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress In' +
      'houseMail';
     Contexto: 75;
     Instruccion: 2055),
    (Identificador: 'UBL-CR-220';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Department)';
     Mensaje: '[UBL-CR-220]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress De' +
      'partment';
     Contexto: 75;
     Instruccion: 2057),
    (Identificador: 'UBL-CR-221';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'MarkAttention)';
     Mensaje: '[UBL-CR-221]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ma' +
      'rkAttention';
     Contexto: 75;
     Instruccion: 2059),
    (Identificador: 'UBL-CR-222';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'MarkCare)';
     Mensaje: '[UBL-CR-222]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ma' +
      'rkCare';
     Contexto: 75;
     Instruccion: 2061),
    (Identificador: 'UBL-CR-223';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'PlotIdentification)';
     Mensaje: '[UBL-CR-223]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Pl' +
      'otIdentification';
     Contexto: 75;
     Instruccion: 2063),
    (Identificador: 'UBL-CR-224';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'CitySubdivisionName)';
     Mensaje: '[UBL-CR-224]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ci' +
      'tySubdivisionName';
     Contexto: 75;
     Instruccion: 2065),
    (Identificador: 'UBL-CR-225';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'CountrySubentityCode)';
     Mensaje: '[UBL-CR-225]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Co' +
      'untrySubentityCode';
     Contexto: 75;
     Instruccion: 2067),
    (Identificador: 'UBL-CR-226';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'Region)';
     Mensaje: '[UBL-CR-226]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Re' +
      'gion';
     Contexto: 75;
     Instruccion: 2069),
    (Identificador: 'UBL-CR-227';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'District)';
     Mensaje: '[UBL-CR-227]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Di' +
      'strict';
     Contexto: 75;
     Instruccion: 2071),
    (Identificador: 'UBL-CR-228';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cbc:' +
      'TimezoneOffset)';
     Mensaje: '[UBL-CR-228]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Ti' +
      'mezoneOffset';
     Contexto: 75;
     Instruccion: 2073),
    (Identificador: 'UBL-CR-229';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cac:' +
      'Country/cbc:Name)';
     Mensaje: '[UBL-CR-229]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Co' +
      'untry Name';
     Contexto: 75;
     Instruccion: 2076),
    (Identificador: 'UBL-CR-230';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PostalAddress/cac:' +
      'LocationCoordinate)';
     Mensaje: '[UBL-CR-230]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PostalAddress Lo' +
      'cationCoordinate';
     Contexto: 75;
     Instruccion: 2078),
    (Identificador: 'UBL-CR-231';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PhysicalLocation)';
     Mensaje: '[UBL-CR-231]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PhysicalLocation';
     Contexto: 75;
     Instruccion: 2080),
    (Identificador: 'UBL-CR-232';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':RegistrationName)';
     Mensaje: '[UBL-CR-232]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme R' +
      'egistrationName';
     Contexto: 75;
     Instruccion: 2083),
    (Identificador: 'UBL-CR-233';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':TaxLevelCode)';
     Mensaje: '[UBL-CR-233]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme T' +
      'axLevelCode';
     Contexto: 75;
     Instruccion: 2085),
    (Identificador: 'UBL-CR-234';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':ExemptionReasonCode)';
     Mensaje: '[UBL-CR-234]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme E' +
      'xemptionReasonCode';
     Contexto: 75;
     Instruccion: 2087),
    (Identificador: 'UBL-CR-235';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cbc' +
      ':ExemptionReason)';
     Mensaje: '[UBL-CR-235]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme E' +
      'xemptionReason';
     Contexto: 75;
     Instruccion: 2089),
    (Identificador: 'UBL-CR-236';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':RegistrationAddress)';
     Mensaje: '[UBL-CR-236]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme R' +
      'egistrationAddress';
     Contexto: 75;
     Instruccion: 2091),
    (Identificador: 'UBL-CR-237';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cbc:Name)';
     Mensaje: '[UBL-CR-237]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme T' +
      'axScheme Name';
     Contexto: 75;
     Instruccion: 2094),
    (Identificador: 'UBL-CR-238';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cbc:TaxTypeCode)';
     Mensaje: '[UBL-CR-238]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme T' +
      'axScheme TaxTypeCode';
     Contexto: 75;
     Instruccion: 2096),
    (Identificador: 'UBL-CR-239';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cbc:CurrencyCode)';
     Mensaje: '[UBL-CR-239]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme T' +
      'axScheme CurrencyCode';
     Contexto: 75;
     Instruccion: 2098),
    (Identificador: 'UBL-CR-240';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyTaxScheme/cac' +
      ':TaxScheme/cac:JurisdictionRegio' +
      'nAddress)';
     Mensaje: '[UBL-CR-240]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyTaxScheme T' +
      'axScheme JurisdictionRegionAddre' +
      'ss';
     Contexto: 75;
     Instruccion: 2100),
    (Identificador: 'UBL-CR-241';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:RegistrationDate)';
     Mensaje: '[UBL-CR-241]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' RegistrationDate';
     Contexto: 75;
     Instruccion: 2102),
    (Identificador: 'UBL-CR-242';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:RegistrationExpirationDate)';
     Mensaje: '[UBL-CR-242]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' RegistrationExpirationDate';
     Contexto: 75;
     Instruccion: 2104),
    (Identificador: 'UBL-CR-243';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CompanyLegalFormCode)';
     Mensaje: '[UBL-CR-243]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' CompanyLegalFormCode';
     Contexto: 75;
     Instruccion: 2106),
    (Identificador: 'UBL-CR-244';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CompanyLegalForm)';
     Mensaje: '[UBL-CR-244]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' CompanyLegalForm';
     Contexto: 75;
     Instruccion: 2109),
    (Identificador: 'UBL-CR-245';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:SoleProprietorshipIndicator)';
     Mensaje: '[UBL-CR-245]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' SoleProprietorshipIndicator';
     Contexto: 75;
     Instruccion: 2111),
    (Identificador: 'UBL-CR-246';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CompanyLiquidationStatusCode)';
     Mensaje: '[UBL-CR-246]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' CompanyLiquidationStatusCode';
     Contexto: 75;
     Instruccion: 2113),
    (Identificador: 'UBL-CR-247';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:CorporateStockAmount)';
     Mensaje: '[UBL-CR-247]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' CorporateStockAmount';
     Contexto: 75;
     Instruccion: 2115),
    (Identificador: 'UBL-CR-248';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'bc:FullyPaidSharesIndicator)';
     Mensaje: '[UBL-CR-248]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' FullyPaidSharesIndicator';
     Contexto: 75;
     Instruccion: 2117),
    (Identificador: 'UBL-CR-249';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:RegistrationAddress)';
     Mensaje: '[UBL-CR-249]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' RegistrationAddress';
     Contexto: 75;
     Instruccion: 2119),
    (Identificador: 'UBL-CR-250';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:CorporateRegistrationScheme)';
     Mensaje: '[UBL-CR-250]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' CorporateRegistrationScheme';
     Contexto: 75;
     Instruccion: 2121),
    (Identificador: 'UBL-CR-251';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:HeadOfficeParty)';
     Mensaje: '[UBL-CR-251]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' HeadOfficeParty';
     Contexto: 75;
     Instruccion: 2123),
    (Identificador: 'UBL-CR-252';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PartyLegalEntity/c' +
      'ac:ShareholderParty)';
     Mensaje: '[UBL-CR-252]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PartyLegalEntity' +
      ' ShareholderParty';
     Contexto: 75;
     Instruccion: 2125),
    (Identificador: 'UBL-CR-253';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:Contact/cbc:ID)';
     Mensaje: '[UBL-CR-253]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party Contact ID';
     Contexto: 75;
     Instruccion: 2128),
    (Identificador: 'UBL-CR-254';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:Contact/cbc:Telefa' +
      'x)';
     Mensaje: '[UBL-CR-254]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party Contact Telefax';
     Contexto: 75;
     Instruccion: 2130),
    (Identificador: 'UBL-CR-255';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:Contact/cbc:Note)';
     Mensaje: '[UBL-CR-255]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party Contact Note';
     Contexto: 75;
     Instruccion: 2132),
    (Identificador: 'UBL-CR-256';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:Contact/cac:OtherC' +
      'ommunication)';
     Mensaje: '[UBL-CR-256]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party Contact OtherCom' +
      'munication';
     Contexto: 75;
     Instruccion: 2134),
    (Identificador: 'UBL-CR-257';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:Person)';
     Mensaje: '[UBL-CR-257]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party Person';
     Contexto: 75;
     Instruccion: 2136),
    (Identificador: 'UBL-CR-258';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:AgentParty)';
     Mensaje: '[UBL-CR-258]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party AgentParty';
     Contexto: 75;
     Instruccion: 2138),
    (Identificador: 'UBL-CR-259';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:ServiceProviderPar' +
      'ty)';
     Mensaje: '[UBL-CR-259]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party ServiceProviderP' +
      'arty';
     Contexto: 75;
     Instruccion: 2140),
    (Identificador: 'UBL-CR-260';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:PowerOfAttorney)';
     Mensaje: '[UBL-CR-260]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party PowerOfAttorney';
     Contexto: 75;
     Instruccion: 2142),
    (Identificador: 'UBL-CR-261';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:Party/cac:FinancialAccount)';
     Mensaje: '[UBL-CR-261]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty Party FinancialAccount';
     Contexto: 75;
     Instruccion: 2144),
    (Identificador: 'UBL-CR-262';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:DeliveryContact)';
     Mensaje: '[UBL-CR-262]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty DeliveryContact';
     Contexto: 75;
     Instruccion: 2147),
    (Identificador: 'UBL-CR-263';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:AccountingContact)';
     Mensaje: '[UBL-CR-263]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty AccountingContact';
     Contexto: 75;
     Instruccion: 2149),
    (Identificador: 'UBL-CR-264';
     Bandera: 'warning';
     Prueba: 'not(cac:AccountingCustomerParty/' +
      'cac:BuyerContact)';
     Mensaje: '[UBL-CR-264]-A UBL invoice shoul' +
      'd not include the AccountingCust' +
      'omerParty BuyerContact';
     Contexto: 75;
     Instruccion: 2152),
    (Identificador: 'UBL-CR-265';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cbc:MarkCareI' +
      'ndicator)';
     Mensaje: '[UBL-CR-265]-A UBL invoice shoul' +
      'd not include the PayeeParty Mar' +
      'kCareIndicator';
     Contexto: 75;
     Instruccion: 2154),
    (Identificador: 'UBL-CR-266';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cbc:MarkAtten' +
      'tionIndicator)';
     Mensaje: '[UBL-CR-266]-A UBL invoice shoul' +
      'd not include the PayeeParty Mar' +
      'kAttentionIndicator';
     Contexto: 75;
     Instruccion: 2156),
    (Identificador: 'UBL-CR-267';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cbc:WebsiteUR' +
      'I)';
     Mensaje: '[UBL-CR-267]-A UBL invoice shoul' +
      'd not include the PayeeParty Web' +
      'siteURI';
     Contexto: 75;
     Instruccion: 2158),
    (Identificador: 'UBL-CR-268';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cbc:LogoRefer' +
      'enceID)';
     Mensaje: '[UBL-CR-268]-A UBL invoice shoul' +
      'd not include the PayeeParty Log' +
      'oReferenceID';
     Contexto: 75;
     Instruccion: 2160),
    (Identificador: 'UBL-CR-269';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cbc:EndpointI' +
      'D)';
     Mensaje: '[UBL-CR-269]-A UBL invoice shoul' +
      'd not include the PayeeParty End' +
      'pointID';
     Contexto: 75;
     Instruccion: 2162),
    (Identificador: 'UBL-CR-270';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cbc:IndustryC' +
      'lassificationCode)';
     Mensaje: '[UBL-CR-270]-A UBL invoice shoul' +
      'd not include the PayeeParty Ind' +
      'ustryClassificationCode';
     Contexto: 75;
     Instruccion: 2164),
    (Identificador: 'UBL-CR-271';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:Language)';
     Mensaje: '[UBL-CR-271]-A UBL invoice shoul' +
      'd not include the PayeeParty Lan' +
      'guage';
     Contexto: 75;
     Instruccion: 2166),
    (Identificador: 'UBL-CR-272';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PostalAdd' +
      'ress)';
     Mensaje: '[UBL-CR-272]-A UBL invoice shoul' +
      'd not include the PayeeParty Pos' +
      'talAddress';
     Contexto: 75;
     Instruccion: 2168),
    (Identificador: 'UBL-CR-273';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PhysicalL' +
      'ocation)';
     Mensaje: '[UBL-CR-273]-A UBL invoice shoul' +
      'd not include the PayeeParty Phy' +
      'sicalLocation';
     Contexto: 75;
     Instruccion: 2170),
    (Identificador: 'UBL-CR-274';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyTaxS' +
      'cheme)';
     Mensaje: '[UBL-CR-274]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyTaxScheme';
     Contexto: 75;
     Instruccion: 2172),
    (Identificador: 'UBL-CR-275';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:RegistrationName)';
     Mensaje: '[UBL-CR-275]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity RegistrationName';
     Contexto: 75;
     Instruccion: 2175),
    (Identificador: 'UBL-CR-276';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:RegistrationDate)';
     Mensaje: '[UBL-CR-276]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity RegistrationDate';
     Contexto: 75;
     Instruccion: 2177),
    (Identificador: 'UBL-CR-277';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:RegistrationExpirati' +
      'onDate)';
     Mensaje: '[UBL-CR-277]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity RegistrationExpira' +
      'tionDate';
     Contexto: 75;
     Instruccion: 2179),
    (Identificador: 'UBL-CR-278';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:CompanyLegalFormCode' +
      ')';
     Mensaje: '[UBL-CR-278]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity CompanyLegalFormCo' +
      'de';
     Contexto: 75;
     Instruccion: 2181),
    (Identificador: 'UBL-CR-279';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:CompanyLegalForm)';
     Mensaje: '[UBL-CR-279]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity CompanyLegalForm';
     Contexto: 75;
     Instruccion: 2183),
    (Identificador: 'UBL-CR-280';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:SoleProprietorshipIn' +
      'dicator)';
     Mensaje: '[UBL-CR-280]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity SoleProprietorship' +
      'Indicator';
     Contexto: 75;
     Instruccion: 2185),
    (Identificador: 'UBL-CR-281';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:CompanyLiquidationSt' +
      'atusCode)';
     Mensaje: '[UBL-CR-281]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity CompanyLiquidation' +
      'StatusCode';
     Contexto: 75;
     Instruccion: 2187),
    (Identificador: 'UBL-CR-282';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:CorporateStockAmount' +
      ')';
     Mensaje: '[UBL-CR-282]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity CorporateStockAmou' +
      'nt';
     Contexto: 75;
     Instruccion: 2189),
    (Identificador: 'UBL-CR-283';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cbc:FullyPaidSharesIndic' +
      'ator)';
     Mensaje: '[UBL-CR-283]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity FullyPaidSharesInd' +
      'icator';
     Contexto: 75;
     Instruccion: 2191),
    (Identificador: 'UBL-CR-284';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cac:RegistrationAddress)';
     Mensaje: '[UBL-CR-284]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity RegistrationAddres' +
      's';
     Contexto: 75;
     Instruccion: 2193),
    (Identificador: 'UBL-CR-285';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cac:CorporateRegistratio' +
      'nScheme)';
     Mensaje: '[UBL-CR-285]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity CorporateRegistrat' +
      'ionScheme';
     Contexto: 75;
     Instruccion: 2195),
    (Identificador: 'UBL-CR-286';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cac:HeadOfficeParty)';
     Mensaje: '[UBL-CR-286]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity HeadOfficeParty';
     Contexto: 75;
     Instruccion: 2197),
    (Identificador: 'UBL-CR-287';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PartyLega' +
      'lEntity/cac:ShareholderParty)';
     Mensaje: '[UBL-CR-287]-A UBL invoice shoul' +
      'd not include the PayeeParty Par' +
      'tyLegalEntity ShareholderParty';
     Contexto: 75;
     Instruccion: 2199),
    (Identificador: 'UBL-CR-288';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:Contact)';
     Mensaje: '[UBL-CR-288]-A UBL invoice shoul' +
      'd not include the PayeeParty Con' +
      'tact';
     Contexto: 75;
     Instruccion: 2201),
    (Identificador: 'UBL-CR-289';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:Person)';
     Mensaje: '[UBL-CR-289]-A UBL invoice shoul' +
      'd not include the PayeeParty Per' +
      'son';
     Contexto: 75;
     Instruccion: 2203),
    (Identificador: 'UBL-CR-290';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:AgentPart' +
      'y)';
     Mensaje: '[UBL-CR-290]-A UBL invoice shoul' +
      'd not include the PayeeParty Age' +
      'ntParty';
     Contexto: 75;
     Instruccion: 2205),
    (Identificador: 'UBL-CR-291';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:ServicePr' +
      'oviderParty)';
     Mensaje: '[UBL-CR-291]-A UBL invoice shoul' +
      'd not include the PayeeParty Ser' +
      'viceProviderParty';
     Contexto: 75;
     Instruccion: 2207),
    (Identificador: 'UBL-CR-292';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:PowerOfAt' +
      'torney)';
     Mensaje: '[UBL-CR-292]-A UBL invoice shoul' +
      'd not include the PayeeParty Pow' +
      'erOfAttorney';
     Contexto: 75;
     Instruccion: 2209),
    (Identificador: 'UBL-CR-293';
     Bandera: 'warning';
     Prueba: 'not(cac:PayeeParty/cac:Financial' +
      'Account)';
     Mensaje: '[UBL-CR-293]-A UBL invoice shoul' +
      'd not include the PayeeParty Fin' +
      'ancialAccount';
     Contexto: 75;
     Instruccion: 2211),
    (Identificador: 'UBL-CR-294';
     Bandera: 'warning';
     Prueba: 'not(cac:BuyerCustomerParty)';
     Mensaje: '[UBL-CR-294]-A UBL invoice shoul' +
      'd not include the BuyerCustomerP' +
      'arty';
     Contexto: 75;
     Instruccion: 2213),
    (Identificador: 'UBL-CR-295';
     Bandera: 'warning';
     Prueba: 'not(cac:SellerSupplierParty)';
     Mensaje: '[UBL-CR-295]-A UBL invoice shoul' +
      'd not include the SellerSupplier' +
      'Party';
     Contexto: 75;
     Instruccion: 2215),
    (Identificador: 'UBL-CR-296';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'bc:MarkCareIndicator)';
     Mensaje: '[UBL-CR-296]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty MarkCareIndicator';
     Contexto: 75;
     Instruccion: 2217),
    (Identificador: 'UBL-CR-297';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'bc:MarkAttentionIndicator)';
     Mensaje: '[UBL-CR-297]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty MarkAttentionIndicator';
     Contexto: 75;
     Instruccion: 2219),
    (Identificador: 'UBL-CR-298';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'bc:WebsiteURI)';
     Mensaje: '[UBL-CR-298]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty WebsiteURI';
     Contexto: 75;
     Instruccion: 2221),
    (Identificador: 'UBL-CR-299';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'bc:LogoReferenceID)';
     Mensaje: '[UBL-CR-299]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty LogoReferenceID';
     Contexto: 75;
     Instruccion: 2223),
    (Identificador: 'UBL-CR-300';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'bc:EndpointID)';
     Mensaje: '[UBL-CR-300]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty EndpointID';
     Contexto: 75;
     Instruccion: 2225),
    (Identificador: 'UBL-CR-301';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'bc:IndustryClassificationCode)';
     Mensaje: '[UBL-CR-301]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty IndustryClassificationC' +
      'ode';
     Contexto: 75;
     Instruccion: 2227),
    (Identificador: 'UBL-CR-302';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyIdentification)';
     Mensaje: '[UBL-CR-302]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyIdentification';
     Contexto: 75;
     Instruccion: 2229),
    (Identificador: 'UBL-CR-303';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:Language)';
     Mensaje: '[UBL-CR-303]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty Language';
     Contexto: 75;
     Instruccion: 2231),
    (Identificador: 'UBL-CR-304';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:ID)';
     Mensaje: '[UBL-CR-304]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress ID';
     Contexto: 75;
     Instruccion: 2233),
    (Identificador: 'UBL-CR-305';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:AddressType' +
      'Code)';
     Mensaje: '[UBL-CR-305]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress AddressTy' +
      'peCode';
     Contexto: 75;
     Instruccion: 2235),
    (Identificador: 'UBL-CR-306';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:AddressForm' +
      'atCode)';
     Mensaje: '[UBL-CR-306]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress AddressFo' +
      'rmatCode';
     Contexto: 75;
     Instruccion: 2237),
    (Identificador: 'UBL-CR-307';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:Postbox)';
     Mensaje: '[UBL-CR-307]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress Postbox';
     Contexto: 75;
     Instruccion: 2239),
    (Identificador: 'UBL-CR-308';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:Floor)';
     Mensaje: '[UBL-CR-308]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress Floor';
     Contexto: 75;
     Instruccion: 2241),
    (Identificador: 'UBL-CR-309';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:Room)';
     Mensaje: '[UBL-CR-309]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress Room';
     Contexto: 75;
     Instruccion: 2243),
    (Identificador: 'UBL-CR-310';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:BlockName)';
     Mensaje: '[UBL-CR-310]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress BlockName';
     Contexto: 75;
     Instruccion: 2245),
    (Identificador: 'UBL-CR-311';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:BuildingNam' +
      'e)';
     Mensaje: '[UBL-CR-311]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress BuildingN' +
      'ame';
     Contexto: 75;
     Instruccion: 2247),
    (Identificador: 'UBL-CR-312';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:BuildingNum' +
      'ber)';
     Mensaje: '[UBL-CR-312]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress BuildingN' +
      'umber';
     Contexto: 75;
     Instruccion: 2249),
    (Identificador: 'UBL-CR-313';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:InhouseMail' +
      ')';
     Mensaje: '[UBL-CR-313]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress InhouseMa' +
      'il';
     Contexto: 75;
     Instruccion: 2251),
    (Identificador: 'UBL-CR-314';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:Department)';
     Mensaje: '[UBL-CR-314]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress Departmen' +
      't';
     Contexto: 75;
     Instruccion: 2253),
    (Identificador: 'UBL-CR-315';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:MarkAttenti' +
      'on)';
     Mensaje: '[UBL-CR-315]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress MarkAtten' +
      'tion';
     Contexto: 75;
     Instruccion: 2255),
    (Identificador: 'UBL-CR-316';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:MarkCare)';
     Mensaje: '[UBL-CR-316]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress MarkCare';
     Contexto: 75;
     Instruccion: 2257),
    (Identificador: 'UBL-CR-317';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:PlotIdentif' +
      'ication)';
     Mensaje: '[UBL-CR-317]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress PlotIdent' +
      'ification';
     Contexto: 75;
     Instruccion: 2259),
    (Identificador: 'UBL-CR-318';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:CitySubdivi' +
      'sionName)';
     Mensaje: '[UBL-CR-318]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress CitySubdi' +
      'visionName';
     Contexto: 75;
     Instruccion: 2261),
    (Identificador: 'UBL-CR-319';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:CountrySube' +
      'ntityCode)';
     Mensaje: '[UBL-CR-319]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress CountrySu' +
      'bentityCode';
     Contexto: 75;
     Instruccion: 2263),
    (Identificador: 'UBL-CR-320';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:Region)';
     Mensaje: '[UBL-CR-320]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress Region';
     Contexto: 75;
     Instruccion: 2265),
    (Identificador: 'UBL-CR-321';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:District)';
     Mensaje: '[UBL-CR-321]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress District';
     Contexto: 75;
     Instruccion: 2267),
    (Identificador: 'UBL-CR-322';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cbc:TimezoneOff' +
      'set)';
     Mensaje: '[UBL-CR-322]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress TimezoneO' +
      'ffset';
     Contexto: 75;
     Instruccion: 2269),
    (Identificador: 'UBL-CR-323';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cac:Country/cbc' +
      ':Name)';
     Mensaje: '[UBL-CR-323]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress Country N' +
      'ame';
     Contexto: 75;
     Instruccion: 2272),
    (Identificador: 'UBL-CR-324';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PostalAddress/cac:LocationCoo' +
      'rdinate)';
     Mensaje: '[UBL-CR-324]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PostalAddress LocationC' +
      'oordinate';
     Contexto: 75;
     Instruccion: 2274),
    (Identificador: 'UBL-CR-325';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PhysicalLocation)';
     Mensaje: '[UBL-CR-325]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PhysicalLocation';
     Contexto: 75;
     Instruccion: 2276),
    (Identificador: 'UBL-CR-326';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cbc:Registrati' +
      'onName)';
     Mensaje: '[UBL-CR-326]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme Registra' +
      'tionName';
     Contexto: 75;
     Instruccion: 2279),
    (Identificador: 'UBL-CR-327';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cbc:TaxLevelCo' +
      'de)';
     Mensaje: '[UBL-CR-327]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme TaxLevel' +
      'Code';
     Contexto: 75;
     Instruccion: 2281),
    (Identificador: 'UBL-CR-328';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cbc:ExemptionR' +
      'easonCode)';
     Mensaje: '[UBL-CR-328]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme Exemptio' +
      'nReasonCode';
     Contexto: 75;
     Instruccion: 2283),
    (Identificador: 'UBL-CR-329';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cbc:ExemptionR' +
      'eason)';
     Mensaje: '[UBL-CR-329]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme Exemptio' +
      'nReason';
     Contexto: 75;
     Instruccion: 2285),
    (Identificador: 'UBL-CR-330';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cac:Registrati' +
      'onAddress)';
     Mensaje: '[UBL-CR-330]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme Registra' +
      'tionAddress';
     Contexto: 75;
     Instruccion: 2287),
    (Identificador: 'UBL-CR-331';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cac:TaxScheme/' +
      'cbc:Name)';
     Mensaje: '[UBL-CR-331]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme TaxSchem' +
      'e Name';
     Contexto: 75;
     Instruccion: 2290),
    (Identificador: 'UBL-CR-332';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cac:TaxScheme/' +
      'cbc:TaxTypeCode)';
     Mensaje: '[UBL-CR-332]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme TaxSchem' +
      'e TaxTypeCode';
     Contexto: 75;
     Instruccion: 2292),
    (Identificador: 'UBL-CR-333';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cac:TaxScheme/' +
      'cbc:CurrencyCode)';
     Mensaje: '[UBL-CR-333]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme TaxSchem' +
      'e CurrencyCode';
     Contexto: 75;
     Instruccion: 2294),
    (Identificador: 'UBL-CR-334';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyTaxScheme/cac:TaxScheme/' +
      'cac:JurisdictionRegionAddress)';
     Mensaje: '[UBL-CR-334]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyTaxScheme TaxSchem' +
      'e JurisdictionRegionAddress';
     Contexto: 75;
     Instruccion: 2296),
    (Identificador: 'UBL-CR-335';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PartyLegalEntity)';
     Mensaje: '[UBL-CR-335]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PartyLegalEntity';
     Contexto: 75;
     Instruccion: 2298),
    (Identificador: 'UBL-CR-336';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:Contact)';
     Mensaje: '[UBL-CR-336]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty Contact';
     Contexto: 75;
     Instruccion: 2300),
    (Identificador: 'UBL-CR-337';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:Person)';
     Mensaje: '[UBL-CR-337]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty Person';
     Contexto: 75;
     Instruccion: 2302),
    (Identificador: 'UBL-CR-338';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:AgentParty)';
     Mensaje: '[UBL-CR-338]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty AgentParty';
     Contexto: 75;
     Instruccion: 2304),
    (Identificador: 'UBL-CR-339';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:ServiceProviderParty)';
     Mensaje: '[UBL-CR-339]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty ServiceProviderParty';
     Contexto: 75;
     Instruccion: 2306),
    (Identificador: 'UBL-CR-340';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:PowerOfAttorney)';
     Mensaje: '[UBL-CR-340]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty PowerOfAttorney';
     Contexto: 75;
     Instruccion: 2308),
    (Identificador: 'UBL-CR-341';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxRepresentativeParty/c' +
      'ac:FinancialAccount)';
     Mensaje: '[UBL-CR-341]-A UBL invoice shoul' +
      'd not include the TaxRepresentat' +
      'iveParty FinancialAccount';
     Contexto: 75;
     Instruccion: 2310),
    (Identificador: 'UBL-CR-342';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:ID)';
     Mensaje: '[UBL-CR-342]-A UBL invoice shoul' +
      'd not include the Delivery ID';
     Contexto: 75;
     Instruccion: 2312),
    (Identificador: 'UBL-CR-343';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:Quantity)';
     Mensaje: '[UBL-CR-343]-A UBL invoice shoul' +
      'd not include the Delivery Quant' +
      'ity';
     Contexto: 75;
     Instruccion: 2315),
    (Identificador: 'UBL-CR-344';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:MinimumQuan' +
      'tity)';
     Mensaje: '[UBL-CR-344]-A UBL invoice shoul' +
      'd not include the Delivery Minim' +
      'umQuantity';
     Contexto: 75;
     Instruccion: 2318),
    (Identificador: 'UBL-CR-345';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:MaximumQuan' +
      'tity)';
     Mensaje: '[UBL-CR-345]-A UBL invoice shoul' +
      'd not include the Delivery Maxim' +
      'umQuantity';
     Contexto: 75;
     Instruccion: 2321),
    (Identificador: 'UBL-CR-346';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:ActualDeliv' +
      'eryTime)';
     Mensaje: '[UBL-CR-346]-A UBL invoice shoul' +
      'd not include the Delivery Actua' +
      'lDeliveryTime';
     Contexto: 75;
     Instruccion: 2324),
    (Identificador: 'UBL-CR-347';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:LatestDeliv' +
      'eryDate)';
     Mensaje: '[UBL-CR-347]-A UBL invoice shoul' +
      'd not include the Delivery Lates' +
      'tDeliveryDate';
     Contexto: 75;
     Instruccion: 2327),
    (Identificador: 'UBL-CR-348';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:LatestDeliv' +
      'eryTime)';
     Mensaje: '[UBL-CR-348]-A UBL invoice shoul' +
      'd not include the Delivery Lates' +
      'tDeliveryTime';
     Contexto: 75;
     Instruccion: 2330),
    (Identificador: 'UBL-CR-349';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:ReleaseID)';
     Mensaje: '[UBL-CR-349]-A UBL invoice shoul' +
      'd not include the Delivery Relea' +
      'seID';
     Contexto: 75;
     Instruccion: 2333),
    (Identificador: 'UBL-CR-350';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cbc:TrackingID)';
     Mensaje: '[UBL-CR-350]-A UBL invoice shoul' +
      'd not include the Delivery Track' +
      'ingID';
     Contexto: 75;
     Instruccion: 2336),
    (Identificador: 'UBL-CR-351';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:Description)';
     Mensaje: '[UBL-CR-351]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Description';
     Contexto: 75;
     Instruccion: 2338),
    (Identificador: 'UBL-CR-352';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:Conditions)';
     Mensaje: '[UBL-CR-352]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Conditions';
     Contexto: 75;
     Instruccion: 2341),
    (Identificador: 'UBL-CR-353';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:CountrySubentity)';
     Mensaje: '[UBL-CR-353]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation CountrySubentity';
     Contexto: 75;
     Instruccion: 2344),
    (Identificador: 'UBL-CR-354';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:CountrySubentityCode)';
     Mensaje: '[UBL-CR-354]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation CountrySubentityCode';
     Contexto: 75;
     Instruccion: 2346),
    (Identificador: 'UBL-CR-355';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:LocationTypeCode)';
     Mensaje: '[UBL-CR-355]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation LocationTypeCode';
     Contexto: 75;
     Instruccion: 2349),
    (Identificador: 'UBL-CR-356';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:InformationURI)';
     Mensaje: '[UBL-CR-356]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation InformationURI';
     Contexto: 75;
     Instruccion: 2352),
    (Identificador: 'UBL-CR-357';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cbc:Name)';
     Mensaje: '[UBL-CR-357]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Name';
     Contexto: 75;
     Instruccion: 2354),
    (Identificador: 'UBL-CR-358';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-358]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation ValidityPeriod';
     Contexto: 75;
     Instruccion: 2356),
    (Identificador: 'UBL-CR-359';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:ID)';
     Mensaje: '[UBL-CR-359]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address ID';
     Contexto: 75;
     Instruccion: 2358),
    (Identificador: 'UBL-CR-360';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:AddressTyp' +
      'eCode)';
     Mensaje: '[UBL-CR-360]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address AddressTypeC' +
      'ode';
     Contexto: 75;
     Instruccion: 2360),
    (Identificador: 'UBL-CR-361';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:AddressFor' +
      'matCode)';
     Mensaje: '[UBL-CR-361]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address AddressForma' +
      'tCode';
     Contexto: 75;
     Instruccion: 2362),
    (Identificador: 'UBL-CR-362';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:Postbox)';
     Mensaje: '[UBL-CR-362]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address Postbox';
     Contexto: 75;
     Instruccion: 2364),
    (Identificador: 'UBL-CR-363';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:Floor)';
     Mensaje: '[UBL-CR-363]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address Floor';
     Contexto: 75;
     Instruccion: 2366),
    (Identificador: 'UBL-CR-364';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:Room)';
     Mensaje: '[UBL-CR-364]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address Room';
     Contexto: 75;
     Instruccion: 2368),
    (Identificador: 'UBL-CR-365';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:BlockName)';
     Mensaje: '[UBL-CR-365]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address BlockName';
     Contexto: 75;
     Instruccion: 2370),
    (Identificador: 'UBL-CR-366';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:BuildingNa' +
      'me)';
     Mensaje: '[UBL-CR-366]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address BuildingName';
     Contexto: 75;
     Instruccion: 2372),
    (Identificador: 'UBL-CR-367';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:BuildingNu' +
      'mber)';
     Mensaje: '[UBL-CR-367]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address BuildingNumb' +
      'er';
     Contexto: 75;
     Instruccion: 2374),
    (Identificador: 'UBL-CR-368';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:InhouseMai' +
      'l)';
     Mensaje: '[UBL-CR-368]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address InhouseMail';
     Contexto: 75;
     Instruccion: 2376),
    (Identificador: 'UBL-CR-369';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:Department' +
      ')';
     Mensaje: '[UBL-CR-369]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address Department';
     Contexto: 75;
     Instruccion: 2378),
    (Identificador: 'UBL-CR-370';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:MarkAttent' +
      'ion)';
     Mensaje: '[UBL-CR-370]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address MarkAttentio' +
      'n';
     Contexto: 75;
     Instruccion: 2380),
    (Identificador: 'UBL-CR-371';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:MarkCare)';
     Mensaje: '[UBL-CR-371]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address MarkCare';
     Contexto: 75;
     Instruccion: 2382),
    (Identificador: 'UBL-CR-372';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:PlotIdenti' +
      'fication)';
     Mensaje: '[UBL-CR-372]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address PlotIdentifi' +
      'cation';
     Contexto: 75;
     Instruccion: 2384),
    (Identificador: 'UBL-CR-373';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:CitySubdiv' +
      'isionName)';
     Mensaje: '[UBL-CR-373]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address CitySubdivis' +
      'ionName';
     Contexto: 75;
     Instruccion: 2386),
    (Identificador: 'UBL-CR-374';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:CountrySub' +
      'entityCode)';
     Mensaje: '[UBL-CR-374]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address CountrySuben' +
      'tityCode';
     Contexto: 75;
     Instruccion: 2388),
    (Identificador: 'UBL-CR-375';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:Region)';
     Mensaje: '[UBL-CR-375]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address Region';
     Contexto: 75;
     Instruccion: 2390),
    (Identificador: 'UBL-CR-376';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:District)';
     Mensaje: '[UBL-CR-376]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address District';
     Contexto: 75;
     Instruccion: 2392),
    (Identificador: 'UBL-CR-377';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cbc:TimezoneOf' +
      'fset)';
     Mensaje: '[UBL-CR-377]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address TimezoneOffs' +
      'et';
     Contexto: 75;
     Instruccion: 2394),
    (Identificador: 'UBL-CR-378';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cac:Country/cb' +
      'c:Name)';
     Mensaje: '[UBL-CR-378]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address Country Name';
     Contexto: 75;
     Instruccion: 2396),
    (Identificador: 'UBL-CR-379';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:Address/cac:LocationCo' +
      'ordinate)';
     Mensaje: '[UBL-CR-379]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation Address LocationCoor' +
      'dinate';
     Contexto: 75;
     Instruccion: 2398),
    (Identificador: 'UBL-CR-380';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:SubsidiaryLocation)';
     Mensaje: '[UBL-CR-380]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation SubsidiaryLocation';
     Contexto: 75;
     Instruccion: 2401),
    (Identificador: 'UBL-CR-381';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryLoc' +
      'ation/cac:LocationCoordinate)';
     Mensaje: '[UBL-CR-381]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryLocation LocationCoordinate';
     Contexto: 75;
     Instruccion: 2403),
    (Identificador: 'UBL-CR-382';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:Alternative' +
      'DeliveryLocation)';
     Mensaje: '[UBL-CR-382]-A UBL invoice shoul' +
      'd not include the Delivery Alter' +
      'nativeDeliveryLocation';
     Contexto: 75;
     Instruccion: 2406),
    (Identificador: 'UBL-CR-383';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:RequestedDe' +
      'liveryPeriod)';
     Mensaje: '[UBL-CR-383]-A UBL invoice shoul' +
      'd not include the Delivery Reque' +
      'stedDeliveryPeriod';
     Contexto: 75;
     Instruccion: 2409),
    (Identificador: 'UBL-CR-384';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:EstimatedDe' +
      'liveryPeriod)';
     Mensaje: '[UBL-CR-384]-A UBL invoice shoul' +
      'd not include the Delivery Estim' +
      'atedDeliveryPeriod';
     Contexto: 75;
     Instruccion: 2412),
    (Identificador: 'UBL-CR-385';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:CarrierPart' +
      'y)';
     Mensaje: '[UBL-CR-385]-A UBL invoice shoul' +
      'd not include the Delivery Carri' +
      'erParty';
     Contexto: 75;
     Instruccion: 2415),
    (Identificador: 'UBL-CR-386';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cbc:MarkCareIndicator)';
     Mensaje: '[UBL-CR-386]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'MarkCareIndicator';
     Contexto: 75;
     Instruccion: 2418),
    (Identificador: 'UBL-CR-387';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cbc:MarkAttentionIndicator)';
     Mensaje: '[UBL-CR-387]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'MarkAttentionIndicator';
     Contexto: 75;
     Instruccion: 2420),
    (Identificador: 'UBL-CR-388';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cbc:WebsiteURI)';
     Mensaje: '[UBL-CR-388]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'WebsiteURI';
     Contexto: 75;
     Instruccion: 2422),
    (Identificador: 'UBL-CR-389';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cbc:LogoReferenceID)';
     Mensaje: '[UBL-CR-389]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'LogoReferenceID';
     Contexto: 75;
     Instruccion: 2424),
    (Identificador: 'UBL-CR-390';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cbc:EndpointID)';
     Mensaje: '[UBL-CR-390]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'EndpointID';
     Contexto: 75;
     Instruccion: 2426),
    (Identificador: 'UBL-CR-391';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cbc:IndustryClassificationCod' +
      'e)';
     Mensaje: '[UBL-CR-391]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'IndustryClassificationCode';
     Contexto: 75;
     Instruccion: 2428),
    (Identificador: 'UBL-CR-392';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:PartyIdentification)';
     Mensaje: '[UBL-CR-392]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'PartyIdentification';
     Contexto: 75;
     Instruccion: 2430),
    (Identificador: 'UBL-CR-393';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:Language)';
     Mensaje: '[UBL-CR-393]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'Language';
     Contexto: 75;
     Instruccion: 2432),
    (Identificador: 'UBL-CR-394';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:PostalAddress)';
     Mensaje: '[UBL-CR-394]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'PostalAddress';
     Contexto: 75;
     Instruccion: 2434),
    (Identificador: 'UBL-CR-395';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:PhysicalLocation)';
     Mensaje: '[UBL-CR-395]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'PhysicalLocation';
     Contexto: 75;
     Instruccion: 2436),
    (Identificador: 'UBL-CR-396';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:PartyTaxScheme)';
     Mensaje: '[UBL-CR-396]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'PartyTaxScheme';
     Contexto: 75;
     Instruccion: 2438),
    (Identificador: 'UBL-CR-397';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:PartyLegalEntity)';
     Mensaje: '[UBL-CR-397]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'PartyLegalEntity';
     Contexto: 75;
     Instruccion: 2440),
    (Identificador: 'UBL-CR-398';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:Contact)';
     Mensaje: '[UBL-CR-398]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'Contact';
     Contexto: 75;
     Instruccion: 2442),
    (Identificador: 'UBL-CR-399';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:Person)';
     Mensaje: '[UBL-CR-399]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'Person';
     Contexto: 75;
     Instruccion: 2444),
    (Identificador: 'UBL-CR-400';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:AgentParty)';
     Mensaje: '[UBL-CR-400]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'AgentParty';
     Contexto: 75;
     Instruccion: 2446),
    (Identificador: 'UBL-CR-401';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:ServiceProviderParty)';
     Mensaje: '[UBL-CR-401]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'ServiceProviderParty';
     Contexto: 75;
     Instruccion: 2448),
    (Identificador: 'UBL-CR-402';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:PowerOfAttorney)';
     Mensaje: '[UBL-CR-402]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'PowerOfAttorney';
     Contexto: 75;
     Instruccion: 2450),
    (Identificador: 'UBL-CR-403';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryPar' +
      'ty/cac:FinancialAccount)';
     Mensaje: '[UBL-CR-403]-A UBL invoice shoul' +
      'd not include the DeliveryParty ' +
      'FinancialAccount';
     Contexto: 75;
     Instruccion: 2452),
    (Identificador: 'UBL-CR-404';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:NotifyParty' +
      ')';
     Mensaje: '[UBL-CR-404]-A UBL invoice shoul' +
      'd not include the Delivery Notif' +
      'yParty';
     Contexto: 75;
     Instruccion: 2455),
    (Identificador: 'UBL-CR-405';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:Despatch)';
     Mensaje: '[UBL-CR-405]-A UBL invoice shoul' +
      'd not include the Delivery Despa' +
      'tch';
     Contexto: 75;
     Instruccion: 2458),
    (Identificador: 'UBL-CR-406';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryTer' +
      'ms)';
     Mensaje: '[UBL-CR-406]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryTerms';
     Contexto: 75;
     Instruccion: 2461),
    (Identificador: 'UBL-CR-407';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:MinimumDeli' +
      'veryUnit)';
     Mensaje: '[UBL-CR-407]-A UBL invoice shoul' +
      'd not include the Delivery Minim' +
      'umDeliveryUnit';
     Contexto: 75;
     Instruccion: 2464),
    (Identificador: 'UBL-CR-408';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:MaximumDeli' +
      'veryUnit)';
     Mensaje: '[UBL-CR-408]-A UBL invoice shoul' +
      'd not include the Delivery Maxim' +
      'umDeliveryUnit';
     Contexto: 75;
     Instruccion: 2467),
    (Identificador: 'UBL-CR-409';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:Shipment)';
     Mensaje: '[UBL-CR-409]-A UBL invoice shoul' +
      'd not include the Delivery Shipm' +
      'ent';
     Contexto: 75;
     Instruccion: 2470),
    (Identificador: 'UBL-CR-410';
     Bandera: 'warning';
     Prueba: 'not(cac:DeliveryTerms)';
     Mensaje: '[UBL-CR-410]-A UBL invoice shoul' +
      'd not include the DeliveryTerms';
     Contexto: 75;
     Instruccion: 2471),
    (Identificador: 'UBL-CR-411';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:ID)';
     Mensaje: '[UBL-CR-411]-A UBL invoice shoul' +
      'd not include the PaymentMeans I' +
      'D';
     Contexto: 75;
     Instruccion: 2473),
    (Identificador: 'UBL-CR-412';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:Payment' +
      'DueDate) or ../cn:CreditNote';
     Mensaje: '[UBL-CR-412]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentDueDate';
     Contexto: 75;
     Instruccion: 2478),
    (Identificador: 'UBL-CR-413';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:Payment' +
      'ChannelCode)';
     Mensaje: '[UBL-CR-413]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentChannelCode';
     Contexto: 75;
     Instruccion: 2481),
    (Identificador: 'UBL-CR-414';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:Instruc' +
      'tionID)';
     Mensaje: '[UBL-CR-414]-A UBL invoice shoul' +
      'd not include the PaymentMeans I' +
      'nstructionID';
     Contexto: 75;
     Instruccion: 2484),
    (Identificador: 'UBL-CR-415';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:CardTypeCode)';
     Mensaje: '[UBL-CR-415]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount CardTypeCode';
     Contexto: 75;
     Instruccion: 2487),
    (Identificador: 'UBL-CR-416';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:ValidityStartDate)';
     Mensaje: '[UBL-CR-416]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount ValidityStartDate';
     Contexto: 75;
     Instruccion: 2490),
    (Identificador: 'UBL-CR-417';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:ExpiryDate)';
     Mensaje: '[UBL-CR-417]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount ExpiryDate';
     Contexto: 75;
     Instruccion: 2492),
    (Identificador: 'UBL-CR-418';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:IssuerID)';
     Mensaje: '[UBL-CR-418]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount IssuerID';
     Contexto: 75;
     Instruccion: 2495),
    (Identificador: 'UBL-CR-419';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:IssueNumberID)';
     Mensaje: '[UBL-CR-419]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount IssueNumberID';
     Contexto: 75;
     Instruccion: 2498),
    (Identificador: 'UBL-CR-420';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:CV2ID)';
     Mensaje: '[UBL-CR-420]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount CV2ID';
     Contexto: 75;
     Instruccion: 2501),
    (Identificador: 'UBL-CR-421';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:CardChipCode)';
     Mensaje: '[UBL-CR-421]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount CardChipCode';
     Contexto: 75;
     Instruccion: 2504),
    (Identificador: 'UBL-CR-422';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CardAcc' +
      'ount/cbc:ChipApplicationID)';
     Mensaje: '[UBL-CR-422]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'ardAccount ChipApplicationID';
     Contexto: 75;
     Instruccion: 2507),
    (Identificador: 'UBL-CR-424';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cbc:AliasName)';
     Mensaje: '[UBL-CR-424]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount AliasName';
     Contexto: 75;
     Instruccion: 2511),
    (Identificador: 'UBL-CR-425';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cbc:AccountTypeCo' +
      'de)';
     Mensaje: '[UBL-CR-425]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount AccountType' +
      'Code';
     Contexto: 75;
     Instruccion: 2514),
    (Identificador: 'UBL-CR-426';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cbc:AccountFormat' +
      'Code)';
     Mensaje: '[UBL-CR-426]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount AccountForm' +
      'atCode';
     Contexto: 75;
     Instruccion: 2517),
    (Identificador: 'UBL-CR-427';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cbc:CurrencyCode)';
     Mensaje: '[UBL-CR-427]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount CurrencyCod' +
      'e';
     Contexto: 75;
     Instruccion: 2519),
    (Identificador: 'UBL-CR-428';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cbc:PaymentNote)';
     Mensaje: '[UBL-CR-428]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount PaymentNote';
     Contexto: 75;
     Instruccion: 2522),
    (Identificador: 'UBL-CR-429';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cac:FinancialInst' +
      'itutionBranch/cbc:Name)';
     Mensaje: '[UBL-CR-429]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount FinancialIn' +
      'stitutionBranch Name';
     Contexto: 75;
     Instruccion: 2526),
    (Identificador: 'UBL-CR-430';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cac:FinancialInst' +
      'itutionBranch/cac:FinancialInsti' +
      'tution/cbc:Name)';
     Mensaje: '[UBL-CR-430]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount FinancialIn' +
      'stitutionBranch FinancialInstitu' +
      'tion Name';
     Contexto: 75;
     Instruccion: 2530),
    (Identificador: 'UBL-CR-431';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cac:FinancialInst' +
      'itutionBranch/cac:FinancialInsti' +
      'tution/cac:Address)';
     Mensaje: '[UBL-CR-431]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount FinancialIn' +
      'stitutionBranch FinancialInstitu' +
      'tion Address';
     Contexto: 75;
     Instruccion: 2532),
    (Identificador: 'UBL-CR-432';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cac:FinancialInst' +
      'itutionBranch/cac:Address)';
     Mensaje: '[UBL-CR-432]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount FinancialIn' +
      'stitutionBranch Address';
     Contexto: 75;
     Instruccion: 2534),
    (Identificador: 'UBL-CR-433';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cac:Country)';
     Mensaje: '[UBL-CR-433]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'ayeeFinancialAccount Country';
     Contexto: 75;
     Instruccion: 2536),
    (Identificador: 'UBL-CR-434';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:CreditA' +
      'ccount)';
     Mensaje: '[UBL-CR-434]-A UBL invoice shoul' +
      'd not include the PaymentMeans C' +
      'reditAccount';
     Contexto: 75;
     Instruccion: 2539),
    (Identificador: 'UBL-CR-435';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cbc:MandateTypeCode)';
     Mensaje: '[UBL-CR-435]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate MandateTypeCode';
     Contexto: 75;
     Instruccion: 2544),
    (Identificador: 'UBL-CR-436';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cbc:MaximumPaymentInstru' +
      'ctionsNumeric)';
     Mensaje: '[UBL-CR-436]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate MaximumPaymentInst' +
      'ructionsNumeric';
     Contexto: 75;
     Instruccion: 2547),
    (Identificador: 'UBL-CR-437';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cbc:MaximumPaidAmount)';
     Mensaje: '[UBL-CR-437]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate MaximumPaidAmount';
     Contexto: 75;
     Instruccion: 2550),
    (Identificador: 'UBL-CR-438';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cbc:SignatureID)';
     Mensaje: '[UBL-CR-438]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate SignatureID';
     Contexto: 75;
     Instruccion: 2553),
    (Identificador: 'UBL-CR-439';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerParty)';
     Mensaje: '[UBL-CR-439]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerParty';
     Contexto: 75;
     Instruccion: 2556),
    (Identificador: 'UBL-CR-440';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cbc:Name)';
     Mensaje: '[UBL-CR-440]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt Name';
     Contexto: 75;
     Instruccion: 2560),
    (Identificador: 'UBL-CR-441';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cbc:AliasName)';
     Mensaje: '[UBL-CR-441]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt AliasName';
     Contexto: 75;
     Instruccion: 2562),
    (Identificador: 'UBL-CR-442';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cbc:AccountTypeCode)';
     Mensaje: '[UBL-CR-442]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt AccountTypeCode';
     Contexto: 75;
     Instruccion: 2564),
    (Identificador: 'UBL-CR-443';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cbc:AccountFormatCode)';
     Mensaje: '[UBL-CR-443]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt AccountFormatCode';
     Contexto: 75;
     Instruccion: 2566),
    (Identificador: 'UBL-CR-444';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cbc:CurrencyCode)';
     Mensaje: '[UBL-CR-444]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt CurrencyCode';
     Contexto: 75;
     Instruccion: 2568),
    (Identificador: 'UBL-CR-445';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cbc:PaymentNote)';
     Mensaje: '[UBL-CR-445]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt PaymentNote';
     Contexto: 75;
     Instruccion: 2570),
    (Identificador: 'UBL-CR-446';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cac:FinancialInstitutionBranch' +
      ')';
     Mensaje: '[UBL-CR-446]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt FinancialInstitutionBranch';
     Contexto: 75;
     Instruccion: 2572),
    (Identificador: 'UBL-CR-447';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PayerFinancialAccoun' +
      't/cac:Country)';
     Mensaje: '[UBL-CR-447]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PayerFinancialAcco' +
      'unt Country';
     Contexto: 75;
     Instruccion: 2574),
    (Identificador: 'UBL-CR-448';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:ValidityPeriod)';
     Mensaje: '[UBL-CR-448]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate ValidityPeriod';
     Contexto: 75;
     Instruccion: 2576),
    (Identificador: 'UBL-CR-449';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:PaymentReversalPerio' +
      'd)';
     Mensaje: '[UBL-CR-449]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate PaymentReversalPer' +
      'iod';
     Contexto: 75;
     Instruccion: 2579),
    (Identificador: 'UBL-CR-450';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:Payment' +
      'Mandate/cac:Clause)';
     Mensaje: '[UBL-CR-450]-A UBL invoice shoul' +
      'd not include the PaymentMeans P' +
      'aymentMandate Clause';
     Contexto: 75;
     Instruccion: 2582),
    (Identificador: 'UBL-CR-451';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:TradeFi' +
      'nancing)';
     Mensaje: '[UBL-CR-451]-A UBL invoice shoul' +
      'd not include the PaymentMeans T' +
      'radeFinancing';
     Contexto: 75;
     Instruccion: 2585),
    (Identificador: 'UBL-CR-452';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:ID)';
     Mensaje: '[UBL-CR-452]-A UBL invoice shoul' +
      'd not include the PaymentTerms I' +
      'D';
     Contexto: 75;
     Instruccion: 2588),
    (Identificador: 'UBL-CR-453';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Payment' +
      'MeansID)';
     Mensaje: '[UBL-CR-453]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'aymentMeansID';
     Contexto: 75;
     Instruccion: 2591),
    (Identificador: 'UBL-CR-454';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Prepaid' +
      'PaymentReferenceID)';
     Mensaje: '[UBL-CR-454]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'repaidPaymentReferenceID';
     Contexto: 75;
     Instruccion: 2594),
    (Identificador: 'UBL-CR-455';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Referen' +
      'ceEventCode)';
     Mensaje: '[UBL-CR-455]-A UBL invoice shoul' +
      'd not include the PaymentTerms R' +
      'eferenceEventCode';
     Contexto: 75;
     Instruccion: 2597),
    (Identificador: 'UBL-CR-456';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Settlem' +
      'entDiscountPercent)';
     Mensaje: '[UBL-CR-456]-A UBL invoice shoul' +
      'd not include the PaymentTerms S' +
      'ettlementDiscountPercent';
     Contexto: 75;
     Instruccion: 2600),
    (Identificador: 'UBL-CR-457';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Penalty' +
      'SurchargePercent)';
     Mensaje: '[UBL-CR-457]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'enaltySurchargePercent';
     Contexto: 75;
     Instruccion: 2603),
    (Identificador: 'UBL-CR-458';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Payment' +
      'Percent)';
     Mensaje: '[UBL-CR-458]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'aymentPercent';
     Contexto: 75;
     Instruccion: 2606),
    (Identificador: 'UBL-CR-459';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Amount)';
     Mensaje: '[UBL-CR-459]-A UBL invoice shoul' +
      'd not include the PaymentTerms A' +
      'mount';
     Contexto: 75;
     Instruccion: 2608),
    (Identificador: 'UBL-CR-460';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Settlem' +
      'entDiscountAmount)';
     Mensaje: '[UBL-CR-460]-A UBL invoice shoul' +
      'd not include the PaymentTerms S' +
      'ettlementDiscountAmount';
     Contexto: 75;
     Instruccion: 2611),
    (Identificador: 'UBL-CR-461';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Penalty' +
      'Amount)';
     Mensaje: '[UBL-CR-461]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'enaltyAmount';
     Contexto: 75;
     Instruccion: 2614),
    (Identificador: 'UBL-CR-462';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Payment' +
      'TermsDetailsURI)';
     Mensaje: '[UBL-CR-462]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'aymentTermsDetailsURI';
     Contexto: 75;
     Instruccion: 2617),
    (Identificador: 'UBL-CR-463';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Payment' +
      'DueDate)';
     Mensaje: '[UBL-CR-463]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'aymentDueDate';
     Contexto: 75;
     Instruccion: 2619),
    (Identificador: 'UBL-CR-464';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Install' +
      'mentDueDate)';
     Mensaje: '[UBL-CR-464]-A UBL invoice shoul' +
      'd not include the PaymentTerms I' +
      'nstallmentDueDate';
     Contexto: 75;
     Instruccion: 2622),
    (Identificador: 'UBL-CR-465';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cbc:Invoici' +
      'ngPartyReference)';
     Mensaje: '[UBL-CR-465]-A UBL invoice shoul' +
      'd not include the PaymentTerms I' +
      'nvoicingPartyReference';
     Contexto: 75;
     Instruccion: 2625),
    (Identificador: 'UBL-CR-466';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cac:Settlem' +
      'entPeriod)';
     Mensaje: '[UBL-CR-466]-A UBL invoice shoul' +
      'd not include the PaymentTerms S' +
      'ettlementPeriod';
     Contexto: 75;
     Instruccion: 2628),
    (Identificador: 'UBL-CR-467';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cac:Penalty' +
      'Period)';
     Mensaje: '[UBL-CR-467]-A UBL invoice shoul' +
      'd not include the PaymentTerms P' +
      'enaltyPeriod';
     Contexto: 75;
     Instruccion: 2631),
    (Identificador: 'UBL-CR-468';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cac:Exchang' +
      'eRate)';
     Mensaje: '[UBL-CR-468]-A UBL invoice shoul' +
      'd not include the PaymentTerms E' +
      'xchangeRate';
     Contexto: 75;
     Instruccion: 2634),
    (Identificador: 'UBL-CR-469';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentTerms/cac:Validit' +
      'yPeriod)';
     Mensaje: '[UBL-CR-469]-A UBL invoice shoul' +
      'd not include the PaymentTerms V' +
      'alidityPeriod';
     Contexto: 75;
     Instruccion: 2636),
    (Identificador: 'UBL-CR-470';
     Bandera: 'warning';
     Prueba: 'not(cac:PrepaidPayment)';
     Mensaje: '[UBL-CR-470]-A UBL invoice shoul' +
      'd not include the PrepaidPayment';
     Contexto: 75;
     Instruccion: 2638),
    (Identificador: 'UBL-CR-471';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cbc:ID)';
     Mensaje: '[UBL-CR-471]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e ID';
     Contexto: 75;
     Instruccion: 2640),
    (Identificador: 'UBL-CR-472';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cbc:Prep' +
      'aidIndicator)';
     Mensaje: '[UBL-CR-472]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e PrepaidIndicator';
     Contexto: 75;
     Instruccion: 2643),
    (Identificador: 'UBL-CR-473';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cbc:Sequ' +
      'enceNumeric)';
     Mensaje: '[UBL-CR-473]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e SequenceNumeric';
     Contexto: 75;
     Instruccion: 2646),
    (Identificador: 'UBL-CR-474';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cbc:Acco' +
      'untingCostCode)';
     Mensaje: '[UBL-CR-474]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e AccountingCostCode';
     Contexto: 75;
     Instruccion: 2648),
    (Identificador: 'UBL-CR-475';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cbc:Acco' +
      'untingCost)';
     Mensaje: '[UBL-CR-475]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e AccountingCost';
     Contexto: 75;
     Instruccion: 2651),
    (Identificador: 'UBL-CR-476';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cbc:PerU' +
      'nitAmount)';
     Mensaje: '[UBL-CR-476]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e PerUnitAmount';
     Contexto: 75;
     Instruccion: 2654),
    (Identificador: 'UBL-CR-477';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:Name)';
     Mensaje: '[UBL-CR-477]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory Name';
     Contexto: 75;
     Instruccion: 2656),
    (Identificador: 'UBL-CR-478';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:BaseUnitMeasure)';
     Mensaje: '[UBL-CR-478]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory BaseUnitMeasure';
     Contexto: 75;
     Instruccion: 2659),
    (Identificador: 'UBL-CR-479';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:PerUnitAmount)';
     Mensaje: '[UBL-CR-479]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory PerUnitAmount';
     Contexto: 75;
     Instruccion: 2661),
    (Identificador: 'UBL-CR-480';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:TaxExemptionReasonCo' +
      'de)';
     Mensaje: '[UBL-CR-480]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TaxExemptionReason' +
      'Code';
     Contexto: 75;
     Instruccion: 2663),
    (Identificador: 'UBL-CR-481';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:TaxExemptionReason)';
     Mensaje: '[UBL-CR-481]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TaxExemptionReason';
     Contexto: 75;
     Instruccion: 2665),
    (Identificador: 'UBL-CR-482';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:TierRange)';
     Mensaje: '[UBL-CR-482]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TierRange';
     Contexto: 75;
     Instruccion: 2668),
    (Identificador: 'UBL-CR-483';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cbc:TierRatePercent)';
     Mensaje: '[UBL-CR-483]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TierRatePercent';
     Contexto: 75;
     Instruccion: 2671),
    (Identificador: 'UBL-CR-484';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cac:TaxScheme/cbc:Name)';
     Mensaje: '[UBL-CR-484]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TaxScheme Name';
     Contexto: 75;
     Instruccion: 2674),
    (Identificador: 'UBL-CR-485';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cac:TaxScheme/cbc:TaxTyp' +
      'eCode)';
     Mensaje: '[UBL-CR-485]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TaxScheme TaxTypeC' +
      'ode';
     Contexto: 75;
     Instruccion: 2676),
    (Identificador: 'UBL-CR-486';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cac:TaxScheme/cbc:Curren' +
      'cyCode)';
     Mensaje: '[UBL-CR-486]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TaxScheme Currency' +
      'Code';
     Contexto: 75;
     Instruccion: 2678),
    (Identificador: 'UBL-CR-487';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxC' +
      'ategory/cac:TaxScheme/cac:Jurisd' +
      'ictionRegionAddress)';
     Mensaje: '[UBL-CR-487]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxCategory TaxScheme Jurisdic' +
      'tionRegionAddress';
     Contexto: 75;
     Instruccion: 2680),
    (Identificador: 'UBL-CR-488';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:TaxT' +
      'otal)';
     Mensaje: '[UBL-CR-488]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e TaxTotal';
     Contexto: 75;
     Instruccion: 2682),
    (Identificador: 'UBL-CR-489';
     Bandera: 'warning';
     Prueba: 'not(cac:AllowanceCharge/cac:Paym' +
      'entMeans)';
     Mensaje: '[UBL-CR-489]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'e PaymentMeans';
     Contexto: 75;
     Instruccion: 2684),
    (Identificador: 'UBL-CR-490';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxExchangeRate)';
     Mensaje: '[UBL-CR-490]-A UBL invoice shoul' +
      'd not include the TaxExchangeRat' +
      'e';
     Contexto: 75;
     Instruccion: 2686),
    (Identificador: 'UBL-CR-491';
     Bandera: 'warning';
     Prueba: 'not(cac:PricingExchangeRate)';
     Mensaje: '[UBL-CR-491]-A UBL invoice shoul' +
      'd not include the PricingExchang' +
      'eRate';
     Contexto: 75;
     Instruccion: 2688),
    (Identificador: 'UBL-CR-492';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentExchangeRate)';
     Mensaje: '[UBL-CR-492]-A UBL invoice shoul' +
      'd not include the PaymentExchang' +
      'eRate';
     Contexto: 75;
     Instruccion: 2690),
    (Identificador: 'UBL-CR-493';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentAlternativeExchan' +
      'geRate)';
     Mensaje: '[UBL-CR-493]-A UBL invoice shoul' +
      'd not include the PaymentAlterna' +
      'tiveExchangeRate';
     Contexto: 75;
     Instruccion: 2692),
    (Identificador: 'UBL-CR-494';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cbc:RoundingAmo' +
      'unt)';
     Mensaje: '[UBL-CR-494]-A UBL invoice shoul' +
      'd not include the TaxTotal Round' +
      'ingAmount';
     Contexto: 75;
     Instruccion: 2695),
    (Identificador: 'UBL-CR-495';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cbc:TaxEvidence' +
      'Indicator)';
     Mensaje: '[UBL-CR-495]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxEv' +
      'idenceIndicator';
     Contexto: 75;
     Instruccion: 2698),
    (Identificador: 'UBL-CR-496';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cbc:TaxIncluded' +
      'Indicator)';
     Mensaje: '[UBL-CR-496]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxIn' +
      'cludedIndicator';
     Contexto: 75;
     Instruccion: 2701),
    (Identificador: 'UBL-CR-497';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:CalculationSequenceNumeric)';
     Mensaje: '[UBL-CR-497]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal CalulationSequenceNumeric';
     Contexto: 75;
     Instruccion: 2704),
    (Identificador: 'UBL-CR-498';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:TransactionCurrencyTaxAmoun' +
      't)';
     Mensaje: '[UBL-CR-498]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TransactionCurrencyTaxAmo' +
      'unt';
     Contexto: 75;
     Instruccion: 2707),
    (Identificador: 'UBL-CR-499';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:Percent)';
     Mensaje: '[UBL-CR-499]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal Percent';
     Contexto: 75;
     Instruccion: 2709),
    (Identificador: 'UBL-CR-500';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:BaseUnitMeasure)';
     Mensaje: '[UBL-CR-500]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal BaseUnitMeasure';
     Contexto: 75;
     Instruccion: 2711),
    (Identificador: 'UBL-CR-501';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:PerUnitAmount)';
     Mensaje: '[UBL-CR-501]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal PerUnitAmount';
     Contexto: 75;
     Instruccion: 2713),
    (Identificador: 'UBL-CR-502';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:TierRange)';
     Mensaje: '[UBL-CR-502]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TierRange';
     Contexto: 75;
     Instruccion: 2715),
    (Identificador: 'UBL-CR-503';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cbc:TierRatePercent)';
     Mensaje: '[UBL-CR-503]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TierRatePercent';
     Contexto: 75;
     Instruccion: 2717),
    (Identificador: 'UBL-CR-504';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cbc:Name)';
     Mensaje: '[UBL-CR-504]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory Name';
     Contexto: 75;
     Instruccion: 2719),
    (Identificador: 'UBL-CR-505';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cbc:BaseUnitMea' +
      'sure)';
     Mensaje: '[UBL-CR-505]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory BaseUnitMeasu' +
      're';
     Contexto: 75;
     Instruccion: 2721),
    (Identificador: 'UBL-CR-506';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cbc:PerUnitAmou' +
      'nt)';
     Mensaje: '[UBL-CR-506]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory PerUnitAmount';
     Contexto: 75;
     Instruccion: 2723),
    (Identificador: 'UBL-CR-507';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cbc:TierRange)';
     Mensaje: '[UBL-CR-507]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory TierRange';
     Contexto: 75;
     Instruccion: 2725),
    (Identificador: 'UBL-CR-508';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cbc:TierRatePer' +
      'cent)';
     Mensaje: '[UBL-CR-508]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory TierRatePerce' +
      'nt';
     Contexto: 75;
     Instruccion: 2727),
    (Identificador: 'UBL-CR-509';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cac:TaxScheme/c' +
      'bc:Name)';
     Mensaje: '[UBL-CR-509]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory TaxScheme Nam' +
      'e';
     Contexto: 75;
     Instruccion: 2730),
    (Identificador: 'UBL-CR-510';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cac:TaxScheme/c' +
      'bc:TaxTypeCode)';
     Mensaje: '[UBL-CR-510]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory TaxScheme Tax' +
      'TypeCode';
     Contexto: 75;
     Instruccion: 2732),
    (Identificador: 'UBL-CR-511';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cac:TaxScheme/c' +
      'bc:CurrencyCode)';
     Mensaje: '[UBL-CR-511]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory TaxScheme Cur' +
      'rencyCode';
     Contexto: 75;
     Instruccion: 2734),
    (Identificador: 'UBL-CR-512';
     Bandera: 'warning';
     Prueba: 'not(cac:TaxTotal/cac:TaxSubtotal' +
      '/cac:TaxCategory/cac:TaxScheme/c' +
      'ac:JurisdictionRegionAddress)';
     Mensaje: '[UBL-CR-512]-A UBL invoice shoul' +
      'd not include the TaxTotal TaxSu' +
      'btotal TaxCategory TaxScheme Jur' +
      'isdictionRegionAddress';
     Contexto: 75;
     Instruccion: 2736),
    (Identificador: 'UBL-CR-513';
     Bandera: 'warning';
     Prueba: 'not(cac:WithholdingTaxTotal)';
     Mensaje: '[UBL-CR-513]-A UBL invoice shoul' +
      'd not include the WithholdingTax' +
      'Total';
     Contexto: 75;
     Instruccion: 2738),
    (Identificador: 'UBL-CR-514';
     Bandera: 'warning';
     Prueba: 'not(cac:LegalMonetaryTotal/cbc:P' +
      'ayableAlternativeAmount)';
     Mensaje: '[UBL-CR-514]-A UBL invoice shoul' +
      'd not include the LegalMonetaryT' +
      'otal PayableAlternativeAmount';
     Contexto: 75;
     Instruccion: 2741),
    (Identificador: 'UBL-CR-515';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cbc:UUID)';
     Mensaje: '[UBL-CR-515]-A UBL invoice shoul' +
      'd not include the InvoiceLine UU' +
      'ID';
     Contexto: 75;
     Instruccion: 2743),
    (Identificador: 'UBL-CR-516';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cbc:TaxPointDate)';
     Mensaje: '[UBL-CR-516]-A UBL invoice shoul' +
      'd not include the InvoiceLine Ta' +
      'xPointDate';
     Contexto: 75;
     Instruccion: 2745),
    (Identificador: 'UBL-CR-517';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cbc:AccountingCostCode)';
     Mensaje: '[UBL-CR-517]-A UBL invoice shoul' +
      'd not include the InvoiceLine Ac' +
      'countingCostCode';
     Contexto: 75;
     Instruccion: 2747),
    (Identificador: 'UBL-CR-518';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cbc:PaymentPurposeCode)';
     Mensaje: '[UBL-CR-518]-A UBL invoice shoul' +
      'd not include the InvoiceLine Pa' +
      'ymentPurposeCode';
     Contexto: 75;
     Instruccion: 2750),
    (Identificador: 'UBL-CR-519';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cbc:FreeOfChargeIndicat' +
      'or)';
     Mensaje: '[UBL-CR-519]-A UBL invoice shoul' +
      'd not include the InvoiceLine Fr' +
      'eeOfChargeIndicator';
     Contexto: 75;
     Instruccion: 2753),
    (Identificador: 'UBL-CR-520';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:InvoicePeriod/cbc:S' +
      'tartTime)';
     Mensaje: '[UBL-CR-520]-A UBL invoice shoul' +
      'd not include the InvoiceLine In' +
      'voicePeriod StartTime';
     Contexto: 75;
     Instruccion: 2756),
    (Identificador: 'UBL-CR-521';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:InvoicePeriod/cbc:E' +
      'ndTime)';
     Mensaje: '[UBL-CR-521]-A UBL invoice shoul' +
      'd not include the InvoiceLine In' +
      'voicePeriod EndTime';
     Contexto: 75;
     Instruccion: 2758),
    (Identificador: 'UBL-CR-522';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:InvoicePeriod/cbc:D' +
      'urationMeasure)';
     Mensaje: '[UBL-CR-522]-A UBL invoice shoul' +
      'd not include the InvoiceLine In' +
      'voicePeriod DurationMeasure';
     Contexto: 75;
     Instruccion: 2760),
    (Identificador: 'UBL-CR-523';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:InvoicePeriod/cbc:D' +
      'escriptionCode)';
     Mensaje: '[UBL-CR-523]-A UBL invoice shoul' +
      'd not include the InvoiceLine In' +
      'voicePeriod DescriptionCode';
     Contexto: 75;
     Instruccion: 2762),
    (Identificador: 'UBL-CR-524';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:InvoicePeriod/cbc:D' +
      'escription)';
     Mensaje: '[UBL-CR-524]-A UBL invoice shoul' +
      'd not include the InvoiceLine In' +
      'voicePeriod Description';
     Contexto: 75;
     Instruccion: 2764),
    (Identificador: 'UBL-CR-525';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:OrderLineReference/' +
      'cbc:SalesOrderLineID)';
     Mensaje: '[UBL-CR-525]-A UBL invoice shoul' +
      'd not include the InvoiceLine Or' +
      'derLineReference SalesOrderLineI' +
      'D';
     Contexto: 75;
     Instruccion: 2769),
    (Identificador: 'UBL-CR-526';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:OrderLineReference/' +
      'cbc:UUID)';
     Mensaje: '[UBL-CR-526]-A UBL invoice shoul' +
      'd not include the InvoiceLine Or' +
      'derLineReference UUID';
     Contexto: 75;
     Instruccion: 2771),
    (Identificador: 'UBL-CR-527';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:OrderLineReference/' +
      'cbc:LineStatusCode)';
     Mensaje: '[UBL-CR-527]-A UBL invoice shoul' +
      'd not include the InvoiceLine Or' +
      'derLineReference LineStatusCode';
     Contexto: 75;
     Instruccion: 2774),
    (Identificador: 'UBL-CR-528';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:OrderLineReference/' +
      'cac:OrderReference)';
     Mensaje: '[UBL-CR-528]-A UBL invoice shoul' +
      'd not include the InvoiceLine Or' +
      'derLineReference OrderReference';
     Contexto: 75;
     Instruccion: 2776),
    (Identificador: 'UBL-CR-529';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DespatchLineReferen' +
      'ce)';
     Mensaje: '[UBL-CR-529]-A UBL invoice shoul' +
      'd not include the InvoiceLine De' +
      'spatchLineReference';
     Contexto: 75;
     Instruccion: 2779),
    (Identificador: 'UBL-CR-530';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:ReceiptLineReferenc' +
      'e)';
     Mensaje: '[UBL-CR-530]-A UBL invoice shoul' +
      'd not include the InvoiceLine Re' +
      'ceiptLineReference';
     Contexto: 75;
     Instruccion: 2782),
    (Identificador: 'UBL-CR-531';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:BillingReference)';
     Mensaje: '[UBL-CR-531]-A UBL invoice shoul' +
      'd not include the InvoiceLine Bi' +
      'llingReference';
     Contexto: 75;
     Instruccion: 2784),
    (Identificador: 'UBL-CR-532';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:CopyIndicator)';
     Mensaje: '[UBL-CR-532]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference CopyIndicator';
     Contexto: 75;
     Instruccion: 2787),
    (Identificador: 'UBL-CR-533';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:UUID)';
     Mensaje: '[UBL-CR-533]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference UUID';
     Contexto: 75;
     Instruccion: 2789),
    (Identificador: 'UBL-CR-534';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:IssueDate)';
     Mensaje: '[UBL-CR-534]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference IssueDate';
     Contexto: 75;
     Instruccion: 2791),
    (Identificador: 'UBL-CR-535';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:IssueTime)';
     Mensaje: '[UBL-CR-535]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference IssueTime';
     Contexto: 75;
     Instruccion: 2793),
    (Identificador: 'UBL-CR-537';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:DocumentType)';
     Mensaje: '[UBL-CR-537]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference DocumentType';
     Contexto: 75;
     Instruccion: 2795),
    (Identificador: 'UBL-CR-538';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:XPath)';
     Mensaje: '[UBL-CR-538]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference Xpath';
     Contexto: 75;
     Instruccion: 2797),
    (Identificador: 'UBL-CR-539';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:LanguageID)';
     Mensaje: '[UBL-CR-539]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference LanguageID';
     Contexto: 75;
     Instruccion: 2799),
    (Identificador: 'UBL-CR-540';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:LocaleCode)';
     Mensaje: '[UBL-CR-540]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference LocaleCode';
     Contexto: 75;
     Instruccion: 2801),
    (Identificador: 'UBL-CR-541';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:VersionID)';
     Mensaje: '[UBL-CR-541]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference VersionID';
     Contexto: 75;
     Instruccion: 2803),
    (Identificador: 'UBL-CR-542';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:DocumentStatusCode)';
     Mensaje: '[UBL-CR-542]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference DocumentStatusCo' +
      'de';
     Contexto: 75;
     Instruccion: 2805),
    (Identificador: 'UBL-CR-543';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'bc:DocumentDescription)';
     Mensaje: '[UBL-CR-543]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference DocumentDescript' +
      'ion';
     Contexto: 75;
     Instruccion: 2807),
    (Identificador: 'UBL-CR-544';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'ac:Attachment)';
     Mensaje: '[UBL-CR-544]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference Attachment';
     Contexto: 75;
     Instruccion: 2809),
    (Identificador: 'UBL-CR-545';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'ac:ValidityPeriod)';
     Mensaje: '[UBL-CR-545]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference ValidityPeriod';
     Contexto: 75;
     Instruccion: 2811),
    (Identificador: 'UBL-CR-546';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'ac:IssuerParty)';
     Mensaje: '[UBL-CR-546]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference IssuerParty';
     Contexto: 75;
     Instruccion: 2813),
    (Identificador: 'UBL-CR-547';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DocumentReference/c' +
      'ac:ResultOfVerification)';
     Mensaje: '[UBL-CR-547]-A UBL invoice shoul' +
      'd not include the InvoiceLine Do' +
      'cumentReference ResultOfVerifica' +
      'tion';
     Contexto: 75;
     Instruccion: 2815),
    (Identificador: 'UBL-CR-548';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:PricingReference)';
     Mensaje: '[UBL-CR-548]-A UBL invoice shoul' +
      'd not include the InvoiceLine Pr' +
      'icingReference';
     Contexto: 75;
     Instruccion: 2818),
    (Identificador: 'UBL-CR-549';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:OriginatorParty)';
     Mensaje: '[UBL-CR-549]-A UBL invoice shoul' +
      'd not include the InvoiceLine Or' +
      'iginatorParty';
     Contexto: 75;
     Instruccion: 2821),
    (Identificador: 'UBL-CR-550';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Delivery)';
     Mensaje: '[UBL-CR-550]-A UBL invoice shoul' +
      'd not include the InvoiceLine De' +
      'livery';
     Contexto: 75;
     Instruccion: 2823),
    (Identificador: 'UBL-CR-551';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:PaymentTerms)';
     Mensaje: '[UBL-CR-551]-A UBL invoice shoul' +
      'd not include the InvoiceLine Pa' +
      'ymentTerms';
     Contexto: 75;
     Instruccion: 2825),
    (Identificador: 'UBL-CR-552';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cbc' +
      ':ID)';
     Mensaje: '[UBL-CR-552]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge ID';
     Contexto: 75;
     Instruccion: 2828),
    (Identificador: 'UBL-CR-553';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cbc' +
      ':PrepaidIndicator)';
     Mensaje: '[UBL-CR-553]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge PrepaidIndicator';
     Contexto: 75;
     Instruccion: 2830),
    (Identificador: 'UBL-CR-554';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cbc' +
      ':SequenceNumeric)';
     Mensaje: '[UBL-CR-554]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge SequenceNumeric';
     Contexto: 75;
     Instruccion: 2832),
    (Identificador: 'UBL-CR-555';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cbc' +
      ':AccountingCostCode)';
     Mensaje: '[UBL-CR-555]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge AccountingCostCode';
     Contexto: 75;
     Instruccion: 2834),
    (Identificador: 'UBL-CR-556';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cbc' +
      ':AccountingCost)';
     Mensaje: '[UBL-CR-556]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge AccountingCost';
     Contexto: 75;
     Instruccion: 2836),
    (Identificador: 'UBL-CR-557';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cbc' +
      ':PerUnitAmount)';
     Mensaje: '[UBL-CR-557]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge PerUnitAmount';
     Contexto: 75;
     Instruccion: 2838),
    (Identificador: 'UBL-CR-558';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cac' +
      ':TaxCategory)';
     Mensaje: '[UBL-CR-558]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge TaxCategory';
     Contexto: 75;
     Instruccion: 2840),
    (Identificador: 'UBL-CR-559';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cac' +
      ':TaxTotal)';
     Mensaje: '[UBL-CR-559]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge TaxTotal';
     Contexto: 75;
     Instruccion: 2842),
    (Identificador: 'UBL-CR-560';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:AllowanceCharge/cac' +
      ':PaymentMeans)';
     Mensaje: '[UBL-CR-560]-A UBL invoice shoul' +
      'd not include the InvoiceLine Al' +
      'lowanceCharge PaymentMeans';
     Contexto: 75;
     Instruccion: 2844),
    (Identificador: 'UBL-CR-561';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:TaxTotal)';
     Mensaje: '[UBL-CR-561]-A UBL invoice shoul' +
      'd not include the InvoiceLine Ta' +
      'xTotal';
     Contexto: 75;
     Instruccion: 2846),
    (Identificador: 'UBL-CR-562';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:WithholdingTaxTotal' +
      ')';
     Mensaje: '[UBL-CR-562]-A UBL invoice shoul' +
      'd not include the InvoiceLine Wi' +
      'thholdingTaxTotal';
     Contexto: 75;
     Instruccion: 2848),
    (Identificador: 'UBL-CR-563';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:PackQuanti' +
      'ty)';
     Mensaje: '[UBL-CR-563]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em PackQuantity';
     Contexto: 75;
     Instruccion: 2852),
    (Identificador: 'UBL-CR-564';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:PackSizeNu' +
      'meric)';
     Mensaje: '[UBL-CR-564]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em PackSizeNumeric';
     Contexto: 75;
     Instruccion: 2855),
    (Identificador: 'UBL-CR-565';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:CatalogueI' +
      'ndicator)';
     Mensaje: '[UBL-CR-565]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em CatalogueIndicator';
     Contexto: 75;
     Instruccion: 2858),
    (Identificador: 'UBL-CR-566';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:HazardousR' +
      'iskIndicator)';
     Mensaje: '[UBL-CR-566]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em HazardousRiskIndicator';
     Contexto: 75;
     Instruccion: 2861),
    (Identificador: 'UBL-CR-567';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:Additional' +
      'Information)';
     Mensaje: '[UBL-CR-567]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalInformation';
     Contexto: 75;
     Instruccion: 2864),
    (Identificador: 'UBL-CR-568';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:Keyword)';
     Mensaje: '[UBL-CR-568]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Keyword';
     Contexto: 75;
     Instruccion: 2867),
    (Identificador: 'UBL-CR-569';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:BrandName)';
     Mensaje: '[UBL-CR-569]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em BrandName';
     Contexto: 75;
     Instruccion: 2870),
    (Identificador: 'UBL-CR-570';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cbc:ModelName)';
     Mensaje: '[UBL-CR-570]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ModelName';
     Contexto: 75;
     Instruccion: 2873),
    (Identificador: 'UBL-CR-571';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:BuyersItem' +
      'Identification/cbc:ExtendedID)';
     Mensaje: '[UBL-CR-571]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em BuyersItemIdentification Exte' +
      'ndedID';
     Contexto: 75;
     Instruccion: 2878),
    (Identificador: 'UBL-CR-572';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:BuyersItem' +
      'Identification/cbc:BarcodeSymbol' +
      'ogyID)';
     Mensaje: '[UBL-CR-572]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em BuyersItemIdentification Barc' +
      'odeSymbologyID';
     Contexto: 75;
     Instruccion: 2881),
    (Identificador: 'UBL-CR-573';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:BuyersItem' +
      'Identification/cac:PhysicalAttri' +
      'bute)';
     Mensaje: '[UBL-CR-573]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em BuyersItemIdentification Phys' +
      'icalAttribute';
     Contexto: 75;
     Instruccion: 2884),
    (Identificador: 'UBL-CR-574';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:BuyersItem' +
      'Identification/cac:MeasurementDi' +
      'mension)';
     Mensaje: '[UBL-CR-574]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em BuyersItemIdentification Meas' +
      'urementDimension';
     Contexto: 75;
     Instruccion: 2887),
    (Identificador: 'UBL-CR-575';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:BuyersItem' +
      'Identification/cac:IssuerParty)';
     Mensaje: '[UBL-CR-575]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em BuyersItemIdentification Issu' +
      'erParty';
     Contexto: 75;
     Instruccion: 2889),
    (Identificador: 'UBL-CR-576';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:SellersIte' +
      'mIdentification/cbc:ExtendedID)';
     Mensaje: '[UBL-CR-576]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em SellersItemIdentification Ext' +
      'endedID';
     Contexto: 75;
     Instruccion: 2893),
    (Identificador: 'UBL-CR-577';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:SellersIte' +
      'mIdentification/cbc:BarcodeSymbo' +
      'logyID)';
     Mensaje: '[UBL-CR-577]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em SellersItemIdentification Bar' +
      'codeSymbologyID';
     Contexto: 75;
     Instruccion: 2895),
    (Identificador: 'UBL-CR-578';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:SellersIte' +
      'mIdentification/cac:PhysicalAttr' +
      'ibute)';
     Mensaje: '[UBL-CR-578]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em SellersItemIdentification Phy' +
      'sicalAttribute';
     Contexto: 75;
     Instruccion: 2897),
    (Identificador: 'UBL-CR-579';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:SellersIte' +
      'mIdentification/cac:MeasurementD' +
      'imension)';
     Mensaje: '[UBL-CR-579]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em SellersItemIdentification Mea' +
      'surementDimension';
     Contexto: 75;
     Instruccion: 2899),
    (Identificador: 'UBL-CR-580';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:SellersIte' +
      'mIdentification/cac:IssuerParty)';
     Mensaje: '[UBL-CR-580]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em SellersItemIdentification Iss' +
      'uerParty';
     Contexto: 75;
     Instruccion: 2901),
    (Identificador: 'UBL-CR-581';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Manufactur' +
      'ersItemIdentification)';
     Mensaje: '[UBL-CR-581]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ManufacturersItemIdentificati' +
      'on';
     Contexto: 75;
     Instruccion: 2904),
    (Identificador: 'UBL-CR-582';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:StandardIt' +
      'emIdentification/cbc:ExtendedID)';
     Mensaje: '[UBL-CR-582]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em StandardItemIdentification Ex' +
      'tendedID';
     Contexto: 75;
     Instruccion: 2907),
    (Identificador: 'UBL-CR-583';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:StandardIt' +
      'emIdentification/cbc:BarcodeSymb' +
      'ologyID)';
     Mensaje: '[UBL-CR-583]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em StandardItemIdentification Ba' +
      'rcodeSymbologyID';
     Contexto: 75;
     Instruccion: 2909),
    (Identificador: 'UBL-CR-584';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:StandardIt' +
      'emIdentification/cac:PhysicalAtt' +
      'ribute)';
     Mensaje: '[UBL-CR-584]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em StandardItemIdentification Ph' +
      'ysicalAttribute';
     Contexto: 75;
     Instruccion: 2911),
    (Identificador: 'UBL-CR-585';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:StandardIt' +
      'emIdentification/cac:Measurement' +
      'Dimension)';
     Mensaje: '[UBL-CR-585]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em StandardItemIdentification Me' +
      'asurementDimension';
     Contexto: 75;
     Instruccion: 2913),
    (Identificador: 'UBL-CR-586';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:StandardIt' +
      'emIdentification/cac:IssuerParty' +
      ')';
     Mensaje: '[UBL-CR-586]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em StandardItemIdentification Is' +
      'suerParty';
     Contexto: 75;
     Instruccion: 2915),
    (Identificador: 'UBL-CR-587';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:CatalogueI' +
      'temIdentification)';
     Mensaje: '[UBL-CR-587]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em CatalogueItemIdentification';
     Contexto: 75;
     Instruccion: 2918),
    (Identificador: 'UBL-CR-588';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemIdentification)';
     Mensaje: '[UBL-CR-588]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemIdentification';
     Contexto: 75;
     Instruccion: 2921),
    (Identificador: 'UBL-CR-589';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:CatalogueD' +
      'ocumentReference)';
     Mensaje: '[UBL-CR-589]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em CatalogueDocumentReference';
     Contexto: 75;
     Instruccion: 2924),
    (Identificador: 'UBL-CR-590';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:ItemSpecif' +
      'icationDocumentReference)';
     Mensaje: '[UBL-CR-590]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ItemSpecificationDocumentRefe' +
      'rence';
     Contexto: 75;
     Instruccion: 2927),
    (Identificador: 'UBL-CR-591';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:OriginCoun' +
      'try/cbc:Name)';
     Mensaje: '[UBL-CR-591]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em OriginCountry Name';
     Contexto: 75;
     Instruccion: 2931),
    (Identificador: 'UBL-CR-592';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:CommodityC' +
      'lassification/cbc:NatureCode)';
     Mensaje: '[UBL-CR-592]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em CommodityClassification Natur' +
      'eCode';
     Contexto: 75;
     Instruccion: 2935),
    (Identificador: 'UBL-CR-593';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:CommodityC' +
      'lassification/cbc:CargoTypeCode)';
     Mensaje: '[UBL-CR-593]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em CommodityClassification Cargo' +
      'TypeCode';
     Contexto: 75;
     Instruccion: 2938),
    (Identificador: 'UBL-CR-594';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:CommodityC' +
      'lassification/cbc:CommodityCode)';
     Mensaje: '[UBL-CR-594]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em CommodityClassification Commo' +
      'dityCode';
     Contexto: 75;
     Instruccion: 2941),
    (Identificador: 'UBL-CR-595';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Transactio' +
      'nConditions)';
     Mensaje: '[UBL-CR-595]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em TransactionConditions';
     Contexto: 75;
     Instruccion: 2944),
    (Identificador: 'UBL-CR-596';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:HazardousI' +
      'tem)';
     Mensaje: '[UBL-CR-596]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em HazardousItem';
     Contexto: 75;
     Instruccion: 2947),
    (Identificador: 'UBL-CR-597';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:Name)';
     Mensaje: '[UBL-CR-597]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory Name';
     Contexto: 75;
     Instruccion: 2950),
    (Identificador: 'UBL-CR-598';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:BaseUnitMeasure)';
     Mensaje: '[UBL-CR-598]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory BaseUni' +
      'tMeasure';
     Contexto: 75;
     Instruccion: 2952),
    (Identificador: 'UBL-CR-599';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:PerUnitAmount)';
     Mensaje: '[UBL-CR-599]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory PerUnit' +
      'Amount';
     Contexto: 75;
     Instruccion: 2954),
    (Identificador: 'UBL-CR-600';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:TaxExemptionReas' +
      'onCode)';
     Mensaje: '[UBL-CR-600]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TaxExem' +
      'ptionReasonCode';
     Contexto: 75;
     Instruccion: 2956),
    (Identificador: 'UBL-CR-601';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:TaxExemptionReas' +
      'on)';
     Mensaje: '[UBL-CR-601]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TaxExem' +
      'ptionReason';
     Contexto: 75;
     Instruccion: 2958),
    (Identificador: 'UBL-CR-602';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:TierRange)';
     Mensaje: '[UBL-CR-602]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TierRan' +
      'ge';
     Contexto: 75;
     Instruccion: 2960),
    (Identificador: 'UBL-CR-603';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cbc:TierRatePercent)';
     Mensaje: '[UBL-CR-603]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TierRat' +
      'ePercent';
     Contexto: 75;
     Instruccion: 2962),
    (Identificador: 'UBL-CR-604';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cac:TaxScheme/cbc:Na' +
      'me)';
     Mensaje: '[UBL-CR-604]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TaxSche' +
      'me Name';
     Contexto: 75;
     Instruccion: 2965),
    (Identificador: 'UBL-CR-605';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cac:TaxScheme/cbc:Ta' +
      'xTypeCode)';
     Mensaje: '[UBL-CR-605]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TaxSche' +
      'me TaxTypeCode';
     Contexto: 75;
     Instruccion: 2967),
    (Identificador: 'UBL-CR-606';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cac:TaxScheme/cbc:Cu' +
      'rrencyCode)';
     Mensaje: '[UBL-CR-606]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TaxSche' +
      'me CurrencyCode';
     Contexto: 75;
     Instruccion: 2969),
    (Identificador: 'UBL-CR-607';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Classified' +
      'TaxCategory/cac:TaxScheme/cac:Ju' +
      'risdictionRegionAddress)';
     Mensaje: '[UBL-CR-607]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ClassifiedTaxCategory TaxSche' +
      'me JurisdictionRegionAddress';
     Contexto: 75;
     Instruccion: 2971),
    (Identificador: 'UBL-CR-608';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:ID)';
     Mensaje: '[UBL-CR-608]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty ID';
     Contexto: 75;
     Instruccion: 2974),
    (Identificador: 'UBL-CR-609';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:NameCode)';
     Mensaje: '[UBL-CR-609]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty NameCo' +
      'de';
     Contexto: 75;
     Instruccion: 2977),
    (Identificador: 'UBL-CR-610';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:TestMethod)';
     Mensaje: '[UBL-CR-610]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty TestMe' +
      'thod';
     Contexto: 75;
     Instruccion: 2980),
    (Identificador: 'UBL-CR-611';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:ValueQuantity)';
     Mensaje: '[UBL-CR-611]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty ValueQ' +
      'uantity';
     Contexto: 75;
     Instruccion: 2983),
    (Identificador: 'UBL-CR-612';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:ValueQualifier)';
     Mensaje: '[UBL-CR-612]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty ValueQ' +
      'ualifier';
     Contexto: 75;
     Instruccion: 2986),
    (Identificador: 'UBL-CR-613';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:ImportanceCode)';
     Mensaje: '[UBL-CR-613]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty Import' +
      'anceCode';
     Contexto: 75;
     Instruccion: 2989),
    (Identificador: 'UBL-CR-614';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cbc:ListValue)';
     Mensaje: '[UBL-CR-614]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty ListVa' +
      'lue';
     Contexto: 75;
     Instruccion: 2992),
    (Identificador: 'UBL-CR-615';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cac:UsabilityPeriod' +
      ')';
     Mensaje: '[UBL-CR-615]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty Usabil' +
      'ityPeriod';
     Contexto: 75;
     Instruccion: 2995),
    (Identificador: 'UBL-CR-616';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cac:ItemPropertyGro' +
      'up)';
     Mensaje: '[UBL-CR-616]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty ItemPr' +
      'opertyGroup';
     Contexto: 75;
     Instruccion: 2998),
    (Identificador: 'UBL-CR-617';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cac:RangeDimension)';
     Mensaje: '[UBL-CR-617]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty RangeD' +
      'imension';
     Contexto: 75;
     Instruccion: 3001),
    (Identificador: 'UBL-CR-618';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Additional' +
      'ItemProperty/cac:ItemPropertyRan' +
      'ge)';
     Mensaje: '[UBL-CR-618]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em AdditionalItemProperty ItemPr' +
      'opertyRange';
     Contexto: 75;
     Instruccion: 3004),
    (Identificador: 'UBL-CR-619';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Manufactur' +
      'erParty)';
     Mensaje: '[UBL-CR-619]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ManufacturerParty';
     Contexto: 75;
     Instruccion: 3007),
    (Identificador: 'UBL-CR-620';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Informatio' +
      'nContentProviderParty)';
     Mensaje: '[UBL-CR-620]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em InformationContentProviderPar' +
      'ty';
     Contexto: 75;
     Instruccion: 3010),
    (Identificador: 'UBL-CR-621';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:OriginAddr' +
      'ess)';
     Mensaje: '[UBL-CR-621]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em OriginAddress';
     Contexto: 75;
     Instruccion: 3013),
    (Identificador: 'UBL-CR-622';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:ItemInstan' +
      'ce)';
     Mensaje: '[UBL-CR-622]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em ItemInstance';
     Contexto: 75;
     Instruccion: 3016),
    (Identificador: 'UBL-CR-623';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Certificat' +
      'e)';
     Mensaje: '[UBL-CR-623]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Certificate';
     Contexto: 75;
     Instruccion: 3019),
    (Identificador: 'UBL-CR-624';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Item/cac:Dimension)';
     Mensaje: '[UBL-CR-624]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Dimension';
     Contexto: 75;
     Instruccion: 3022),
    (Identificador: 'UBL-CR-625';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cbc:PriceChan' +
      'geReason)';
     Mensaje: '[UBL-CR-625]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price PriceChangeReason';
     Contexto: 75;
     Instruccion: 3026),
    (Identificador: 'UBL-CR-626';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cbc:PriceType' +
      'Code)';
     Mensaje: '[UBL-CR-626]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price PriceTypeCode';
     Contexto: 75;
     Instruccion: 3029),
    (Identificador: 'UBL-CR-627';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cbc:PriceType' +
      ')';
     Mensaje: '[UBL-CR-627]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price PriceType';
     Contexto: 75;
     Instruccion: 3032),
    (Identificador: 'UBL-CR-628';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cbc:Orderable' +
      'UnitFactorRate)';
     Mensaje: '[UBL-CR-628]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price OrderableUnitFactorRate';
     Contexto: 75;
     Instruccion: 3035),
    (Identificador: 'UBL-CR-629';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cbc:ValidityP' +
      'eriod)';
     Mensaje: '[UBL-CR-629]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price ValidityPeriod';
     Contexto: 75;
     Instruccion: 3038),
    (Identificador: 'UBL-CR-630';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cbc:PriceList' +
      ')';
     Mensaje: '[UBL-CR-630]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price PriceList';
     Contexto: 75;
     Instruccion: 3041),
    (Identificador: 'UBL-CR-632';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:ID)';
     Mensaje: '[UBL-CR-632]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge ID';
     Contexto: 75;
     Instruccion: 3044),
    (Identificador: 'UBL-CR-633';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:AllowanceChargeReason' +
      'Code)';
     Mensaje: '[UBL-CR-633]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Allowan' +
      'ceChargeReasonCode';
     Contexto: 75;
     Instruccion: 3046),
    (Identificador: 'UBL-CR-634';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:AllowanceChargeReason' +
      ')';
     Mensaje: '[UBL-CR-634]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Allowan' +
      'ceChargeReason';
     Contexto: 75;
     Instruccion: 3048),
    (Identificador: 'UBL-CR-635';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:MultiplierFactorNumer' +
      'ic)';
     Mensaje: '[UBL-CR-635]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Multipl' +
      'ierFactorNumeric';
     Contexto: 75;
     Instruccion: 3051),
    (Identificador: 'UBL-CR-636';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:PrepaidIndicator)';
     Mensaje: '[UBL-CR-636]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Prepaid' +
      'Indicator';
     Contexto: 75;
     Instruccion: 3053),
    (Identificador: 'UBL-CR-637';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:SequenceNumeric)';
     Mensaje: '[UBL-CR-637]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Sequenc' +
      'eNumeric';
     Contexto: 75;
     Instruccion: 3055),
    (Identificador: 'UBL-CR-638';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:AccountingCostCode)';
     Mensaje: '[UBL-CR-638]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Account' +
      'ingCostCode';
     Contexto: 75;
     Instruccion: 3057),
    (Identificador: 'UBL-CR-639';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:AccountingCost)';
     Mensaje: '[UBL-CR-639]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Account' +
      'ingCost';
     Contexto: 75;
     Instruccion: 3059),
    (Identificador: 'UBL-CR-640';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cbc:PerUnitAmount)';
     Mensaje: '[UBL-CR-640]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge PerUnit' +
      'Amount';
     Contexto: 75;
     Instruccion: 3061),
    (Identificador: 'UBL-CR-641';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cac:TaxCategory)';
     Mensaje: '[UBL-CR-641]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge TaxCate' +
      'gory';
     Contexto: 75;
     Instruccion: 3063),
    (Identificador: 'UBL-CR-642';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cac:TaxTotal)';
     Mensaje: '[UBL-CR-642]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge TaxTota' +
      'l';
     Contexto: 75;
     Instruccion: 3065),
    (Identificador: 'UBL-CR-643';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:Allowance' +
      'Charge/cac:PaymentMeans)';
     Mensaje: '[UBL-CR-643]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price AllowanceCharge Payment' +
      'Means';
     Contexto: 75;
     Instruccion: 3067),
    (Identificador: 'UBL-CR-644';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:Price/cac:PricingEx' +
      'changeRate)';
     Mensaje: '[UBL-CR-644]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'em Price PricingExchangeRate';
     Contexto: 75;
     Instruccion: 3069),
    (Identificador: 'UBL-CR-645';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:DeliveryTerms)';
     Mensaje: '[UBL-CR-645]-A UBL invoice shoul' +
      'd not include the InvoiceLine De' +
      'liveryTerms';
     Contexto: 75;
     Instruccion: 3071),
    (Identificador: 'UBL-CR-646';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:SubInvoiceLine)';
     Mensaje: '[UBL-CR-646]-A UBL invoice shoul' +
      'd not include the InvoiceLine Su' +
      'bInvoiceLine';
     Contexto: 75;
     Instruccion: 3074),
    (Identificador: 'UBL-CR-647';
     Bandera: 'warning';
     Prueba: 'not((cac:InvoiceLine|cac:CreditN' +
      'oteLine)/cac:ItemPriceExtension)';
     Mensaje: '[UBL-CR-647]-A UBL invoice shoul' +
      'd not include the InvoiceLine It' +
      'emPriceExtension';
     Contexto: 75;
     Instruccion: 3077),
    (Identificador: 'UBL-CR-648';
     Bandera: 'warning';
     Prueba: 'not(cbc:CustomizationID/@schemeI' +
      'D)';
     Mensaje: '[UBL-CR-648]-A UBL invoice shoul' +
      'd not include the CustomizationI' +
      'D scheme identifier';
     Contexto: 75;
     Instruccion: 3079),
    (Identificador: 'UBL-CR-649';
     Bandera: 'warning';
     Prueba: 'not(cbc:ProfileID/@schemeID)';
     Mensaje: '[UBL-CR-649]-A UBL invoice shoul' +
      'd not include the ProfileID sche' +
      'me identifier';
     Contexto: 75;
     Instruccion: 3082),
    (Identificador: 'UBL-CR-650';
     Bandera: 'warning';
     Prueba: 'not(cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-650]-A UBL invoice shall' +
      ' not include the Invoice ID sche' +
      'me identifier';
     Contexto: 75;
     Instruccion: 1471),
    (Identificador: 'UBL-CR-651';
     Bandera: 'warning';
     Prueba: 'not(cbc:SalesOrderID/@schemeID)';
     Mensaje: '[UBL-CR-651]-A UBL invoice shoul' +
      'd not include the SalesOrderID s' +
      'cheme identifier';
     Contexto: 75;
     Instruccion: 3085),
    (Identificador: 'UBL-CR-652';
     Bandera: 'warning';
     Prueba: 'not(//cac:PartyTaxScheme/cbc:Com' +
      'panyID/@schemeID)';
     Mensaje: '[UBL-CR-652]-A UBL invoice shoul' +
      'd not include the PartyTaxScheme' +
      ' CompanyID scheme identifier';
     Contexto: 75;
     Instruccion: 3088),
    (Identificador: 'UBL-CR-653';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:Payment' +
      'ID/@schemeID)';
     Mensaje: '[UBL-CR-653]-A UBL invoice shoul' +
      'd not include the PaymentID sche' +
      'me identifier';
     Contexto: 75;
     Instruccion: 3092),
    (Identificador: 'UBL-CR-654';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-654]-A UBL invoice shoul' +
      'd not include the PayeeFinancial' +
      'Account scheme identifier';
     Contexto: 75;
     Instruccion: 3095),
    (Identificador: 'UBL-CR-655';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cac:PayeeFi' +
      'nancialAccount/cac:FinancialInst' +
      'itutionBranch/cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-655]-A UBL invoice shall' +
      ' not include the FinancialInstit' +
      'utionBranch ID scheme identifier';
     Contexto: 75;
     Instruccion: 3098),
    (Identificador: 'UBL-CR-656';
     Bandera: 'warning';
     Prueba: 'not(cbc:InvoiceTypeCode/@listID)';
     Mensaje: '[UBL-CR-656]-A UBL invoice shoul' +
      'd not include the InvoiceTypeCod' +
      'e listID';
     Contexto: 75;
     Instruccion: 3100),
    (Identificador: 'UBL-CR-657';
     Bandera: 'warning';
     Prueba: 'not(cbc:DocumentCurrencyCode/@li' +
      'stID)';
     Mensaje: '[UBL-CR-657]-A UBL invoice shoul' +
      'd not include the DocumentCurren' +
      'cyCode listID';
     Contexto: 75;
     Instruccion: 3102),
    (Identificador: 'UBL-CR-658';
     Bandera: 'warning';
     Prueba: 'not(cbc:TaxCurrencyCode/@listID)';
     Mensaje: '[UBL-CR-658]-A UBL invoice shoul' +
      'd not include the TaxCurrencyCod' +
      'e listID';
     Contexto: 75;
     Instruccion: 3104),
    (Identificador: 'UBL-CR-659';
     Bandera: 'warning';
     Prueba: 'not(cac:AdditionalDocumentRefere' +
      'nce/cbc:DocumentTypeCode/@listID' +
      ')';
     Mensaje: '[UBL-CR-659]-A UBL invoice shall' +
      ' not include the AdditionalDocum' +
      'entReference DocumentTypeCode li' +
      'stID';
     Contexto: 75;
     Instruccion: 3107),
    (Identificador: 'UBL-CR-660';
     Bandera: 'warning';
     Prueba: 'not(//cac:Country/cbc:Identifica' +
      'tionCode/@listID)';
     Mensaje: '[UBL-CR-660]-A UBL invoice shoul' +
      'd not include the Country Identi' +
      'fication code listID';
     Contexto: 75;
     Instruccion: 3111),
    (Identificador: 'UBL-CR-661';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:Payment' +
      'MeansCode/@listID)';
     Mensaje: '[UBL-CR-661]-A UBL invoice shoul' +
      'd not include the PaymentMeansCo' +
      'de listID';
     Contexto: 75;
     Instruccion: 3114),
    (Identificador: 'UBL-CR-662';
     Bandera: 'warning';
     Prueba: 'not(//cbc:AllowanceChargeReasonC' +
      'ode/@listID)';
     Mensaje: '[UBL-CR-662]-A UBL invoice shoul' +
      'd not include the AllowanceCharg' +
      'eReasonCode listID';
     Contexto: 75;
     Instruccion: 3117),
    (Identificador: 'UBL-CR-663';
     Bandera: 'warning';
     Prueba: 'not(//@unitCodeListID)';
     Mensaje: '[UBL-CR-663]-A UBL invoice shoul' +
      'd not include the unitCodeListID';
     Contexto: 75;
     Instruccion: 3120),
    (Identificador: 'UBL-CR-664';
     Bandera: 'warning';
     Prueba: 'not(//cac:FinancialInstitution)';
     Mensaje: '[UBL-CR-664]-A UBL invoice shoul' +
      'd not include the FinancialInsti' +
      'tutionBranch FinancialInstitutio' +
      'n';
     Contexto: 75;
     Instruccion: 3122),
    (Identificador: 'UBL-CR-665';
     Bandera: 'warning';
     Prueba: 'not(//cac:AdditionalDocumentRefe' +
      'rence[cbc:DocumentTypeCode != ''1' +
      '30'' or not(cbc:DocumentTypeCode)' +
      ']/cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-665]-A UBL invoice shoul' +
      'd not include the AdditionalDocu' +
      'mentReference ID schemeID unless' +
      ' the DocumentTypeCode equals ''13' +
      '0''';
     Contexto: 75;
     Instruccion: 3129),
    (Identificador: 'UBL-CR-666';
     Bandera: 'fatal';
     Prueba: 'not(//cac:AdditionalDocumentRefe' +
      'rence[cbc:DocumentTypeCode = ''13' +
      '0'']/cac:Attachment)';
     Mensaje: '[UBL-CR-666]-A UBL invoice shall' +
      ' not include an AdditionalDocume' +
      'ntReference simultaneously refer' +
      'ring an Invoice Object Identifie' +
      'r and an Attachment';
     Contexto: 75;
     Instruccion: 3133),
    (Identificador: 'UBL-CR-667';
     Bandera: 'warning';
     Prueba: 'not(//cac:BuyersItemIdentificati' +
      'on/cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-667]-A UBL invoice shoul' +
      'd not include a Buyer Item Ident' +
      'ification schemeID';
     Contexto: 75;
     Instruccion: 3137),
    (Identificador: 'UBL-CR-668';
     Bandera: 'warning';
     Prueba: 'not(//cac:SellersItemIdentificat' +
      'ion/cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-668]-A UBL invoice shoul' +
      'd not include a Sellers Item Ide' +
      'ntification schemeID';
     Contexto: 75;
     Instruccion: 3141),
    (Identificador: 'UBL-CR-669';
     Bandera: 'warning';
     Prueba: 'not(//cac:Price/cac:AllowanceCha' +
      'rge/cbc:AllowanceChargeReasonCod' +
      'e)';
     Mensaje: '[UBL-CR-669]-A UBL invoice shoul' +
      'd not include a Price Allowance ' +
      'Reason Code';
     Contexto: 75;
     Instruccion: 3145),
    (Identificador: 'UBL-CR-670';
     Bandera: 'warning';
     Prueba: 'not(//cac:Price/cac:AllowanceCha' +
      'rge/cbc:AllowanceChargeReason)';
     Mensaje: '[UBL-CR-670]-A UBL invoice shoul' +
      'd not include a Price Allowance ' +
      'Reason';
     Contexto: 75;
     Instruccion: 3147),
    (Identificador: 'UBL-CR-671';
     Bandera: 'warning';
     Prueba: 'not(//cac:Price/cac:AllowanceCha' +
      'rge/cbc:MultiplierFactorNumeric)';
     Mensaje: '[UBL-CR-671]-A UBL invoice shoul' +
      'd not include a Price Allowance ' +
      'Multiplier Factor';
     Contexto: 75;
     Instruccion: 3149),
    (Identificador: 'UBL-CR-672';
     Bandera: 'warning';
     Prueba: 'not(cbc:CreditNoteTypeCode/@list' +
      'ID)';
     Mensaje: '[UBL-CR-672]-A UBL credit note s' +
      'hould not include the CreditNote' +
      'TypeCode listID';
     Contexto: 75;
     Instruccion: 3151),
    (Identificador: 'UBL-CR-673';
     Bandera: 'fatal';
     Prueba: 'not(//cac:AdditionalDocumentRefe' +
      'rence[cbc:DocumentTypeCode  = ''1' +
      '30'']/cbc:DocumentDescription)';
     Mensaje: '[UBL-CR-673]-A UBL invoice shall' +
      ' not include an AdditionalDocume' +
      'ntReference simultaneously refer' +
      'ring an Invoice Object Identifie' +
      'r and an Document Description';
     Contexto: 75;
     Instruccion: 3153),
    (Identificador: 'UBL-CR-674';
     Bandera: 'warning';
     Prueba: 'not(//cbc:PrimaryAccountNumberID' +
      '/@schemeID)';
     Mensaje: '[UBL-CR-674]-A UBL invoice shoul' +
      'd not include the PrimaryAccount' +
      'NumberID schemeID';
     Contexto: 75;
     Instruccion: 3156),
    (Identificador: 'UBL-CR-675';
     Bandera: 'warning';
     Prueba: 'not(//cac:CardAccount/cbc:Networ' +
      'kID/@schemeID)';
     Mensaje: '[UBL-CR-675]-A UBL invoice shoul' +
      'd not include the NetworkID sche' +
      'meID';
     Contexto: 75;
     Instruccion: 3161),
    (Identificador: 'UBL-CR-676';
     Bandera: 'warning';
     Prueba: 'not(//cac:PaymentMandate/cbc:ID/' +
      '@schemeID)';
     Mensaje: '[UBL-CR-676]-A UBL invoice shoul' +
      'd not include the PaymentMandate' +
      '/ID schemeID';
     Contexto: 75;
     Instruccion: 3165),
    (Identificador: 'UBL-CR-677';
     Bandera: 'warning';
     Prueba: 'not(//cac:PaymentMandate/cac:Pay' +
      'erFinancialAccount/cbc:ID/@schem' +
      'eID)';
     Mensaje: '[UBL-CR-677]-A UBL invoice shoul' +
      'd not include the PayerFinancial' +
      'Account/ID schemeID';
     Contexto: 75;
     Instruccion: 3169),
    (Identificador: 'UBL-CR-678';
     Bandera: 'warning';
     Prueba: 'not(//cac:TaxCategory/cbc:ID/@sc' +
      'hemeID)';
     Mensaje: '[UBL-CR-678]-A UBL invoice shoul' +
      'd not include the TaxCategory/ID' +
      ' schemeID';
     Contexto: 75;
     Instruccion: 3171),
    (Identificador: 'UBL-CR-679';
     Bandera: 'warning';
     Prueba: 'not(//cac:ClassifiedTaxCategory/' +
      'cbc:ID/@schemeID)';
     Mensaje: '[UBL-CR-679]-A UBL invoice shoul' +
      'd not include the ClassifiedTaxC' +
      'ategory/ID schemeID';
     Contexto: 75;
     Instruccion: 3173),
    (Identificador: 'UBL-CR-680';
     Bandera: 'warning';
     Prueba: 'not(//cac:PaymentMeans/cac:Payer' +
      'FinancialAccount)';
     Mensaje: '[UBL-CR-680]-A UBL invoice shoul' +
      'd not include the PaymentMeans/P' +
      'ayerFinancialAccount';
     Contexto: 75;
     Instruccion: 3175),
    (Identificador: 'UBL-CR-681';
     Bandera: 'warning';
     Prueba: 'not(cac:PaymentMeans/cbc:Instruc' +
      'tionNote)';
     Mensaje: '[UBL-CR-681]-A UBL invoice shoul' +
      'd not include the PaymentMeans I' +
      'nstructionNote';
     Contexto: 75;
     Instruccion: 3178),
    (Identificador: 'UBL-CR-682';
     Bandera: 'warning';
     Prueba: 'not(cac:Delivery/cac:DeliveryAdd' +
      'ress)';
     Mensaje: '[UBL-CR-682]-A UBL invoice shoul' +
      'd not include the Delivery Deliv' +
      'eryAddress';
     Contexto: 75;
     Instruccion: 3181),
    (Identificador: 'UBL-DT-08';
     Bandera: 'warning';
     Prueba: 'not(//@schemeName)';
     Mensaje: '[UBL-DT-08]-Scheme name attribut' +
      'e should not be present';
     Contexto: 75;
     Instruccion: 3184),
    (Identificador: 'UBL-DT-09';
     Bandera: 'warning';
     Prueba: 'not(//@schemeAgencyName)';
     Mensaje: '[UBL-DT-09]-Scheme agency name a' +
      'ttribute should not be present';
     Contexto: 75;
     Instruccion: 3187),
    (Identificador: 'UBL-DT-10';
     Bandera: 'warning';
     Prueba: 'not(//@schemeDataURI)';
     Mensaje: '[UBL-DT-10]-Scheme data uri attr' +
      'ibute should not be present';
     Contexto: 75;
     Instruccion: 3190),
    (Identificador: 'UBL-DT-11';
     Bandera: 'warning';
     Prueba: 'not(//@schemeURI)';
     Mensaje: '[UBL-DT-11]-Scheme uri attribute' +
      ' should not be present';
     Contexto: 75;
     Instruccion: 3193),
    (Identificador: 'UBL-DT-12';
     Bandera: 'warning';
     Prueba: 'not(//@format)';
     Mensaje: '[UBL-DT-12]-Format attribute sho' +
      'uld not be present';
     Contexto: 75;
     Instruccion: 3196),
    (Identificador: 'UBL-DT-13';
     Bandera: 'warning';
     Prueba: 'not(//@unitCodeListIdentifier)';
     Mensaje: '[UBL-DT-13]-Unit code list ident' +
      'ifier attribute should not be pr' +
      'esent';
     Contexto: 75;
     Instruccion: 3199),
    (Identificador: 'UBL-DT-14';
     Bandera: 'warning';
     Prueba: 'not(//@unitCodeListAgencyIdentif' +
      'ier)';
     Mensaje: '[UBL-DT-14]-Unit code list agenc' +
      'y identifier attribute should no' +
      't be present';
     Contexto: 75;
     Instruccion: 3202),
    (Identificador: 'UBL-DT-15';
     Bandera: 'warning';
     Prueba: 'not(//@unitCodeListAgencyName)';
     Mensaje: '[UBL-DT-15]-Unit code list agenc' +
      'y name attribute should not be p' +
      'resent';
     Contexto: 75;
     Instruccion: 3205),
    (Identificador: 'UBL-DT-16';
     Bandera: 'warning';
     Prueba: 'not(//@listAgencyName)';
     Mensaje: '[UBL-DT-16]-List agency name att' +
      'ribute should not be present';
     Contexto: 75;
     Instruccion: 3208),
    (Identificador: 'UBL-DT-17';
     Bandera: 'warning';
     Prueba: 'not(//@listName)';
     Mensaje: '[UBL-DT-17]-List name attribute ' +
      'should not be present';
     Contexto: 75;
     Instruccion: 3211),
    (Identificador: 'UBL-DT-18';
     Bandera: 'warning';
     Prueba: 'count(//@name) - count(//cbc:Pay' +
      'mentMeansCode/@name) <= 0';
     Mensaje: '[UBL-DT-18]-Name attribute shoul' +
      'd not be present';
     Contexto: 75;
     Instruccion: 3219),
    (Identificador: 'UBL-DT-19';
     Bandera: 'warning';
     Prueba: 'not(//@languageID)';
     Mensaje: '[UBL-DT-19]-Language identifier ' +
      'attribute should not be present';
     Contexto: 75;
     Instruccion: 3222),
    (Identificador: 'UBL-DT-20';
     Bandera: 'warning';
     Prueba: 'not(//@listURI)';
     Mensaje: '[UBL-DT-20]-List uri attribute s' +
      'hould not be present';
     Contexto: 75;
     Instruccion: 3225),
    (Identificador: 'UBL-DT-21';
     Bandera: 'warning';
     Prueba: 'not(//@listSchemeURI)';
     Mensaje: '[UBL-DT-21]-List scheme uri attr' +
      'ibute should not be present';
     Contexto: 75;
     Instruccion: 3228),
    (Identificador: 'UBL-DT-22';
     Bandera: 'warning';
     Prueba: 'not(//@languageLocaleID)';
     Mensaje: '[UBL-DT-22]-Language local ident' +
      'ifier attribute should not be pr' +
      'esent';
     Contexto: 75;
     Instruccion: 3231),
    (Identificador: 'UBL-DT-23';
     Bandera: 'warning';
     Prueba: 'not(//@uri)';
     Mensaje: '[UBL-DT-23]-Uri attribute should' +
      ' not be present';
     Contexto: 75;
     Instruccion: 3234),
    (Identificador: 'UBL-DT-24';
     Bandera: 'warning';
     Prueba: 'not(//@currencyCodeListVersionID' +
      ')';
     Mensaje: '[UBL-DT-24]-Currency code list v' +
      'ersion id should not be present';
     Contexto: 75;
     Instruccion: 3237),
    (Identificador: 'UBL-DT-25';
     Bandera: 'warning';
     Prueba: 'not(//@characterSetCode)';
     Mensaje: '[UBL-DT-25]-CharacterSetCode att' +
      'ribute should not be present';
     Contexto: 75;
     Instruccion: 3240),
    (Identificador: 'UBL-DT-26';
     Bandera: 'warning';
     Prueba: 'not(//@encodingCode)';
     Mensaje: '[UBL-DT-26]-EncodingCode attribu' +
      'te should not be present';
     Contexto: 75;
     Instruccion: 3243),
    (Identificador: 'UBL-DT-27';
     Bandera: 'warning';
     Prueba: 'not(//@schemeAgencyID)';
     Mensaje: '[UBL-DT-27]-Scheme Agency ID att' +
      'ribute should not be present';
     Contexto: 75;
     Instruccion: 3246),
    (Identificador: 'UBL-DT-28';
     Bandera: 'warning';
     Prueba: 'not(//@listAgencyID)';
     Mensaje: '[UBL-DT-28]-List Agency ID attri' +
      'bute should not be present';
     Contexto: 75;
     Instruccion: 3249),
    (Identificador: 'UBL-SR-01';
     Bandera: 'fatal';
     Prueba: '(count(cac:ContractDocumentRefer' +
      'ence/cbc:ID) <= 1)';
     Mensaje: '[UBL-SR-01]-Contract identifier ' +
      'shall occur maximum once.';
     Contexto: 75;
     Instruccion: 3252),
    (Identificador: 'UBL-SR-02';
     Bandera: 'fatal';
     Prueba: '(count(cac:ReceiptDocumentRefere' +
      'nce/cbc:ID) <= 1)';
     Mensaje: '[UBL-SR-02]-Receive advice ident' +
      'ifier shall occur maximum once';
     Contexto: 75;
     Instruccion: 3255),
    (Identificador: 'UBL-SR-03';
     Bandera: 'fatal';
     Prueba: '(count(cac:DespatchDocumentRefer' +
      'ence/cbc:ID) <= 1)';
     Mensaje: '[UBL-SR-03]-Despatch advice iden' +
      'tifier shall occur maximum once';
     Contexto: 75;
     Instruccion: 3258),
    (Identificador: 'UBL-SR-04';
     Bandera: 'fatal';
     Prueba: '(count(cac:AdditionalDocumentRef' +
      'erence[cbc:DocumentTypeCode=''130' +
      ''']/cbc:ID) <= 1)';
     Mensaje: '[UBL-SR-04]-Invoice object ident' +
      'ifier shall occur maximum once';
     Contexto: 75;
     Instruccion: 3261),
    (Identificador: 'UBL-SR-05';
     Bandera: 'fatal';
     Prueba: '(count(cac:PaymentTerms/cbc:Note' +
      ') <= 1)';
     Mensaje: '[UBL-SR-05]-Payment terms shall ' +
      'occur maximum once';
     Contexto: 75;
     Instruccion: 3264),
    (Identificador: 'UBL-SR-08';
     Bandera: 'fatal';
     Prueba: '(count(cac:InvoicePeriod) <= 1)';
     Mensaje: '[UBL-SR-08]-Invoice period shall' +
      ' occur maximum once';
     Contexto: 75;
     Instruccion: 3266),
    (Identificador: 'UBL-SR-09';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PartyLegalEntit' +
      'y/cbc:RegistrationName) <= 1)';
     Mensaje: '[UBL-SR-09]-Seller name shall oc' +
      'cur maximum once';
     Contexto: 75;
     Instruccion: 3268),
    (Identificador: 'UBL-SR-10';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PartyName/cbc:N' +
      'ame) <= 1)';
     Mensaje: '[UBL-SR-10]-Seller trader name s' +
      'hall occur maximum once';
     Contexto: 75;
     Instruccion: 3272),
    (Identificador: 'UBL-SR-11';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PartyLegalEntit' +
      'y/cbc:CompanyID) <= 1)';
     Mensaje: '[UBL-SR-11]-Seller legal registr' +
      'ation identifier shall occur max' +
      'imum once';
     Contexto: 75;
     Instruccion: 3275),
    (Identificador: 'UBL-SR-12';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PartyTaxScheme[' +
      'cac:TaxScheme/upper-case(cbc:ID)' +
      '=''VAT'']/cbc:CompanyID) <= 1)';
     Mensaje: '[UBL-SR-12]-Seller VAT identifie' +
      'r shall occur maximum once';
     Contexto: 75;
     Instruccion: 3282),
    (Identificador: 'UBL-SR-13';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PartyTaxScheme[' +
      'cac:TaxScheme/upper-case(cbc:ID)' +
      '!=''VAT'']/cbc:CompanyID) <= 1)';
     Mensaje: '[UBL-SR-13]-Seller tax registrat' +
      'ion shall occur maximum once';
     Contexto: 75;
     Instruccion: 3288),
    (Identificador: 'UBL-SR-14';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingSupplierPar' +
      'ty/cac:Party/cac:PartyLegalEntit' +
      'y/cbc:CompanyLegalForm) <= 1)';
     Mensaje: '[UBL-SR-14]-Seller additional le' +
      'gal information shall occur maxi' +
      'mum once';
     Contexto: 75;
     Instruccion: 3291),
    (Identificador: 'UBL-SR-15';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingCustomerPar' +
      'ty/cac:Party/cac:PartyLegalEntit' +
      'y/cbc:RegistrationName) <= 1)';
     Mensaje: '[UBL-SR-15]-Buyer name shall occ' +
      'ur maximum once';
     Contexto: 75;
     Instruccion: 3293),
    (Identificador: 'UBL-SR-16';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingCustomerPar' +
      'ty/cac:Party/cac:PartyIdentifica' +
      'tion/cbc:ID) <= 1)';
     Mensaje: '[UBL-SR-16]-Buyer identifier sha' +
      'll occur maximum once';
     Contexto: 75;
     Instruccion: 3297),
    (Identificador: 'UBL-SR-17';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingCustomerPar' +
      'ty/cac:Party/cac:PartyLegalEntit' +
      'y/cbc:CompanyID) <= 1)';
     Mensaje: '[UBL-SR-17]-Buyer legal registra' +
      'tion identifier shall occur maxi' +
      'mum once';
     Contexto: 75;
     Instruccion: 3300),
    (Identificador: 'UBL-SR-18';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingCustomerPar' +
      'ty/cac:Party/cac:PartyTaxScheme[' +
      'cac:TaxScheme/upper-case(cbc:ID)' +
      '=''VAT'']/cbc:CompanyID) <= 1)';
     Mensaje: '[UBL-SR-18]-Buyer VAT identifier' +
      ' shall occur maximum once';
     Contexto: 75;
     Instruccion: 3304),
    (Identificador: 'UBL-SR-24';
     Bandera: 'fatal';
     Prueba: '(count(cac:Delivery) <= 1)';
     Mensaje: '[UBL-SR-24]-Deliver to informati' +
      'on shall occur maximum once';
     Contexto: 75;
     Instruccion: 3306),
    (Identificador: 'UBL-SR-29';
     Bandera: 'fatal';
     Prueba: '(count(//cac:PartyIdentification' +
      '/cbc:ID[upper-case(@schemeID) = ' +
      '''SEPA'']) <= 1)';
     Mensaje: '[UBL-SR-29]-Bank creditor refere' +
      'nce shall occur maximum once';
     Contexto: 75;
     Instruccion: 3313),
    (Identificador: 'UBL-SR-39';
     Bandera: 'fatal';
     Prueba: '(count(cac:ProjectReference/cbc:' +
      'ID) <= 1)';
     Mensaje: '[UBL-SR-39]-Project reference sh' +
      'all occur maximum once.';
     Contexto: 75;
     Instruccion: 3316),
    (Identificador: 'UBL-SR-40';
     Bandera: 'fatal';
     Prueba: '(count(cac:AccountingCustomerPar' +
      'ty/cac:Party/cac:PartyName/cbc:N' +
      'ame) <= 1)';
     Mensaje: '[UBL-SR-40]-Buyer trade name sha' +
      'll occur maximum once';
     Contexto: 75;
     Instruccion: 3320),
    (Identificador: 'UBL-SR-44';
     Bandera: 'fatal';
     Prueba: 'count(distinct-values(//cbc:Paym' +
      'entID)) <= 1';
     Mensaje: '[UBL-SR-44]-An Invoice may only ' +
      'have one unique PaymentID, but t' +
      'he PaymentID may be used for mul' +
      'tiple PaymentMeans';
     Contexto: 75;
     Instruccion: 3324),
    (Identificador: 'UBL-SR-45';
     Bandera: 'fatal';
     Prueba: '(count(cac:PaymentMeans/cbc:Paym' +
      'entDueDate) <=1)';
     Mensaje: '[UBL-SR-45]-Due Date shall occur' +
      ' maximum once';
     Contexto: 75;
     Instruccion: 3326),
    (Identificador: 'UBL-SR-46';
     Bandera: 'fatal';
     Prueba: '(count(cac:PaymentMeans/cbc:Paym' +
      'entMeansCode/@name) <=1)';
     Mensaje: '[UBL-SR-46]-Payment means text s' +
      'hall occur maximum once';
     Contexto: 75;
     Instruccion: 3329),
    (Identificador: 'UBL-SR-47';
     Bandera: 'fatal';
     Prueba: 'count(//cbc:PaymentMeansCode[not' +
      '(preceding::cbc:PaymentMeansCode' +
      '/. = .)]) <= 1';
     Mensaje: '[UBL-SR-47]-When there are more ' +
      'than one payment means code, the' +
      'y shall be equal';
     Contexto: 75;
     Instruccion: 3337),
    (Identificador: 'UBL-SR-49';
     Bandera: 'fatal';
     Prueba: '(count(cac:InvoicePeriod/cbc:Des' +
      'criptionCode) <=1)';
     Mensaje: '[UBL-SR-49]-Value tax point date' +
      ' shall occur maximum once';
     Contexto: 75;
     Instruccion: 3339),
    (Identificador: 'UBL-SR-54';
     Bandera: 'fatal';
     Prueba: 'count(cac:PaymentMeans/cac:CardA' +
      'ccount) <= 1';
     Mensaje: '[UBL-SR-54]-An Invoice shall con' +
      'tain maximum one Payment Card ac' +
      'count (BG-18).';
     Contexto: 75;
     Instruccion: 3341),
    (Identificador: 'UBL-SR-55';
     Bandera: 'fatal';
     Prueba: 'count(cac:PaymentMeans/cac:Payme' +
      'ntMandate) <= 1';
     Mensaje: '[UBL-SR-55]-An Invoice shall con' +
      'tain maximum one Payment Mandate' +
      ' (BG-19).';
     Contexto: 75;
     Instruccion: 3343),
    (Identificador: 'UBL-SR-56';
     Bandera: 'fatal';
     Prueba: 'count(cac:OriginatorDocumentRefe' +
      'rence/cbc:ID) <= 1';
     Mensaje: '[UBL-SR-56]-An Invoice shall con' +
      'tain maximum one Originator docu' +
      'ment reference identifier (BT-17' +
      ').';
     Contexto: 75;
     Instruccion: 3346),
    (Identificador: 'UBL-SR-57';
     Bandera: 'fatal';
     Prueba: 'count(cac:AccountingSupplierPart' +
      'y/cac:Party/cac:PartyLegalEntity' +
      ') <= 1 and count(cac:AccountingC' +
      'ustomerParty/cac:Party/cac:Party' +
      'LegalEntity) <= 1 and count(cac:' +
      'PayeeParty/cac:PartyLegalEntity)' +
      ' <= 1 and count(cac:TaxRepresent' +
      'ativeParty/cac:PartyLegalEntity)' +
      ' <= 1';
     Mensaje: '[UBL-SR-57]-PartyLegalEntity sha' +
      'll occur maximum once within a P' +
      'arty.';
     Contexto: 75;
     Instruccion: 3357),
    (Identificador: 'UBL-SR-34';
     Bandera: 'fatal';
     Prueba: '(count(cbc:Note) <= 1)';
     Mensaje: '[UBL-SR-34]-Invoice line note sh' +
      'all occur maximum once';
     Contexto: 76;
     Instruccion: 3359),
    (Identificador: 'UBL-SR-35';
     Bandera: 'fatal';
     Prueba: '(count(cac:OrderLineReference/cb' +
      'c:LineID) <= 1)';
     Mensaje: '[UBL-SR-35]-Referenced purchase ' +
      'order line identifier shall occu' +
      'r maximum once';
     Contexto: 76;
     Instruccion: 3363),
    (Identificador: 'UBL-SR-36';
     Bandera: 'fatal';
     Prueba: '(count(cac:InvoicePeriod) <= 1)';
     Mensaje: '[UBL-SR-36]-Invoice line period ' +
      'shall occur maximum once';
     Contexto: 76;
     Instruccion: 3266),
    (Identificador: 'UBL-SR-37';
     Bandera: 'fatal';
     Prueba: '(count(cac:Price/cac:AllowanceCh' +
      'arge/cbc:Amount) <= 1)';
     Mensaje: '[UBL-SR-37]-Item price discount ' +
      'shall occur maximum once';
     Contexto: 76;
     Instruccion: 3366),
    (Identificador: 'UBL-SR-48';
     Bandera: 'fatal';
     Prueba: 'count(cac:Item/cac:ClassifiedTax' +
      'Category) = 1';
     Mensaje: '[UBL-SR-48]-Invoice lines shall ' +
      'have one and only one classified' +
      ' tax category.';
     Contexto: 76;
     Instruccion: 3368),
    (Identificador: 'UBL-SR-50';
     Bandera: 'fatal';
     Prueba: 'count(cac:Item/cbc:Description) ' +
      '<= 1';
     Mensaje: '[UBL-SR-50]-Item description sha' +
      'll occur maximum once';
     Contexto: 76;
     Instruccion: 3371),
    (Identificador: 'UBL-SR-52';
     Bandera: 'fatal';
     Prueba: 'count(cac:DocumentReference) <= ' +
      '1';
     Mensaje: '[UBL-SR-52]-Document reference s' +
      'hall occur maximum once';
     Contexto: 76;
     Instruccion: 3373),
    (Identificador: 'UBL-SR-19';
     Bandera: 'fatal';
     Prueba: '(count(cac:PartyName/cbc:Name) <' +
      '= 1) and ((cac:PartyName/cbc:Nam' +
      'e) != (../cac:AccountingSupplier' +
      'Party/cac:Party/cac:PartyLegalEn' +
      'tity/cbc:RegistrationName))';
     Mensaje: '[UBL-SR-19]-Payee name shall occ' +
      'ur maximum once, if the Payee is' +
      ' different from the Seller';
     Contexto: 77;
     Instruccion: 3379),
    (Identificador: 'UBL-SR-20';
     Bandera: 'fatal';
     Prueba: '(count(cac:PartyIdentification/c' +
      'bc:ID[upper-case(@schemeID) != ''' +
      'SEPA'']) <= 1) and ((cac:PartyNam' +
      'e/cbc:Name) != (../cac:Accountin' +
      'gSupplierParty/cac:Party/cac:Par' +
      'tyLegalEntity/cbc:RegistrationNa' +
      'me))';
     Mensaje: '[UBL-SR-20]-Payee identifier sha' +
      'll occur maximum once, if the Pa' +
      'yee is different from the Seller';
     Contexto: 77;
     Instruccion: 3385),
    (Identificador: 'UBL-SR-21';
     Bandera: 'fatal';
     Prueba: '(count(cac:PartyLegalEntity/cbc:' +
      'CompanyID) <= 1) and ((cac:Party' +
      'Name/cbc:Name) != (../cac:Accoun' +
      'tingSupplierParty/cac:Party/cac:' +
      'PartyLegalEntity/cbc:Registratio' +
      'nName))';
     Mensaje: '[UBL-SR-21]-Payee legal registra' +
      'tion identifier shall occur maxi' +
      'mum once, if the Payee is differ' +
      'ent from the Seller';
     Contexto: 77;
     Instruccion: 3389),
    (Identificador: 'UBL-SR-26';
     Bandera: 'fatal';
     Prueba: '(count(cbc:PaymentID) <= 1)';
     Mensaje: '[UBL-SR-26]-Payment reference sh' +
      'all occur maximum once';
     Contexto: 78;
     Instruccion: 3391),
    (Identificador: 'UBL-SR-27';
     Bandera: 'fatal';
     Prueba: '(count(cbc:PaymentMeansCode) <= ' +
      '1)';
     Mensaje: '[UBL-SR-27]-Payment means text s' +
      'hall occur maximum once';
     Contexto: 78;
     Instruccion: 3393),
    (Identificador: 'UBL-SR-28';
     Bandera: 'fatal';
     Prueba: '(count(cac:PaymentMandate/cbc:ID' +
      ') <= 1)';
     Mensaje: '[UBL-SR-28]-Mandate reference id' +
      'entifier shall occur maximum onc' +
      'e';
     Contexto: 78;
     Instruccion: 3396),
    (Identificador: 'UBL-SR-58';
     Bandera: 'fatal';
     Prueba: 'not(cac:PayeeFinancialAccount/ca' +
      'c:FinancialInstitutionBranch) or' +
      ' count(cac:PayeeFinancialAccount' +
      '/cac:FinancialInstitutionBranch/' +
      'cbc:ID) = 1';
     Mensaje: '[UBL-SR-58]-A Financial Institut' +
      'ion Branch shall contain exactly' +
      ' one Payment service provider id' +
      'entifier (BT-86).';
     Contexto: 78;
     Instruccion: 3402),
    (Identificador: 'UBL-SR-59';
     Bandera: 'fatal';
     Prueba: 'not(cac:PayeeFinancialAccount) o' +
      'r count(cac:PayeeFinancialAccoun' +
      't/cbc:ID) = 1';
     Mensaje: '[UBL-SR-59]-A Financial Institut' +
      'ion Branch shall contain exactly' +
      ' one Payment account identifier ' +
      '(BT-84).';
     Contexto: 78;
     Instruccion: 3406),
    (Identificador: 'UBL-SR-06';
     Bandera: 'fatal';
     Prueba: '(count(cac:InvoiceDocumentRefere' +
      'nce) <= 1)';
     Mensaje: '[UBL-SR-06]-Preceding invoice re' +
      'ference shall occur maximum once';
     Contexto: 79;
     Instruccion: 3408),
    (Identificador: 'UBL-SR-07';
     Bandera: 'fatal';
     Prueba: '(cac:InvoiceDocumentReference/cb' +
      'c:ID)';
     Mensaje: '[UBL-SR-07]-If there is a preced' +
      'ing invoice reference, the prece' +
      'ding invoice number shall be pre' +
      'sent';
     Contexto: 79;
     Instruccion: 941),
    (Identificador: 'UBL-SR-22';
     Bandera: 'fatal';
     Prueba: '(count(cac:PartyName/cbc:Name) <' +
      '= 1)';
     Mensaje: '[UBL-SR-22]-Seller tax represent' +
      'ative name shall occur maximum o' +
      'nce, if the Seller has a tax rep' +
      'resentative';
     Contexto: 80;
     Instruccion: 3375),
    (Identificador: 'UBL-SR-23';
     Bandera: 'fatal';
     Prueba: '(count(cac:PartyTaxScheme/cbc:Co' +
      'mpanyID) <= 1)';
     Mensaje: '[UBL-SR-23]-Seller tax represent' +
      'ative VAT identifier shall occur' +
      ' maximum once, if the Seller has' +
      ' a tax representative';
     Contexto: 80;
     Instruccion: 3411),
    (Identificador: 'UBL-SR-32';
     Bandera: 'fatal';
     Prueba: '(count(cac:TaxCategory/cbc:TaxEx' +
      'emptionReason) <= 1)';
     Mensaje: '[UBL-SR-32]-VAT exemption reason' +
      ' text shall occur maximum once';
     Contexto: 81;
     Instruccion: 3415),
    (Identificador: 'BR-CL-01';
     Bandera: 'fatal';
     Prueba: '(self::cbc:InvoiceTypeCode and (' +
      '(not(contains(normalize-space(.)' +
      ', '' '')) and contains('' 71 80 81 ' +
      '82 84 102 130 202 203 204 211 21' +
      '8 219 295 325 326 331 380 382 38' +
      '3 384 385 386 387 388 389 390 39' +
      '3 394 395 456 457 471 472 473 50' +
      '0 501 527 553 575 623 633 751 78' +
      '0 817 870 875 876 877 935 '', con' +
      'cat('' '', normalize-space(.), '' ''' +
      '))))) or (self::cbc:CreditNoteTy' +
      'peCode and ((not(contains(normal' +
      'ize-space(.), '' '')) and contains' +
      '('' 81 83 261 262 296 308 381 396' +
      ' 420 458 502 503 532 '', concat(''' +
      ' '', normalize-space(.), '' '')))))';
     Mensaje: '[BR-CL-01]-The document type cod' +
      'e MUST be coded by the invoice a' +
      'nd credit note related code list' +
      's of UNTDID 1001.';
     Contexto: 82;
     Instruccion: 3431),
    (Identificador: 'BR-CL-03';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'currencyID), '' '')) and contains(' +
      ''' AED AFN ALL AMD AOA ARS AUD AW' +
      'G AZN BAM BBD BDT BHD BIF BMD BN' +
      'D BOB BOV BRL BSD BTN BWP BYN BZ' +
      'D CAD CDF CHE CHF CHW CLF CLP CN' +
      'H CNY COP COU CRC CUP CVE CZK DJ' +
      'F DKK DOP DZD EGP ERN ETB EUR FJ' +
      'D FKP GBP GEL GHS GIP GMD GNF GT' +
      'Q GYD HKD HNL HTG HUF IDR ILS IN' +
      'R IQD IRR ISK JMD JOD JPY KES KG' +
      'S KHR KMF KPW KRW KWD KYD KZT LA' +
      'K LBP LKR LRD LSL LYD MAD MDL MG' +
      'A MKD MMK MNT MOP MRU MUR MVR MW' +
      'K MXN MXV MYR MZN NAD NGN NIO NO' +
      'K NPR NZD OMR PAB PEN PGK PHP PK' +
      'R PLN PYG QAR RON RSD RUB RWF SA' +
      'R SBD SCR SDG SEK SGD SHP SLE SO' +
      'S SRD SSP STN SVC SYP SZL THB TJ' +
      'S TMT TND TOP TRY TTD TWD TZS UA' +
      'H UGX USD USN UYI UYU UYW UZS VE' +
      'S VED VND VUV WST XAF XAG XAU XB' +
      'A XBB XBC XBD XCD XCG XDR XOF XP' +
      'D XPF XPT XSU XTS XUA XXX YER ZA' +
      'R ZMW ZWG '', concat('' '', normali' +
      'ze-space(@currencyID), '' ''))))';
     Mensaje: '[BR-CL-03]-currencyID MUST be co' +
      'ded using ISO code list 4217 alp' +
      'ha-3';
     Contexto: 83;
     Instruccion: 3451),
    (Identificador: 'BR-CL-04';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' AED AFN ' +
      'ALL AMD AOA ARS AUD AWG AZN BAM ' +
      'BBD BDT BHD BIF BMD BND BOB BOV ' +
      'BRL BSD BTN BWP BYN BZD CAD CDF ' +
      'CHE CHF CHW CLF CLP CNH CNY COP ' +
      'COU CRC CUP CVE CZK DJF DKK DOP ' +
      'DZD EGP ERN ETB EUR FJD FKP GBP ' +
      'GEL GHS GIP GMD GNF GTQ GYD HKD ' +
      'HNL HTG HUF IDR ILS INR IQD IRR ' +
      'ISK JMD JOD JPY KES KGS KHR KMF ' +
      'KPW KRW KWD KYD KZT LAK LBP LKR ' +
      'LRD LSL LYD MAD MDL MGA MKD MMK ' +
      'MNT MOP MRU MUR MVR MWK MXN MXV ' +
      'MYR MZN NAD NGN NIO NOK NPR NZD ' +
      'OMR PAB PEN PGK PHP PKR PLN PYG ' +
      'QAR RON RSD RUB RWF SAR SBD SCR ' +
      'SDG SEK SGD SHP SLE SOS SRD SSP ' +
      'STN SVC SYP SZL THB TJS TMT TND ' +
      'TOP TRY TTD TWD TZS UAH UGX USD ' +
      'USN UYI UYU UYW UZS VES VED VND ' +
      'VUV WST XAF XAG XAU XBA XBB XBC ' +
      'XBD XCD XCG XDR XOF XPD XPF XPT ' +
      'XSU XTS XUA XXX YER ZAR ZMW ZWG ' +
      ''', concat('' '', normalize-space(.' +
      '), '' ''))))';
     Mensaje: '[BR-CL-04]-Invoice currency code' +
      ' MUST be coded using ISO code li' +
      'st 4217 alpha-3';
     Contexto: 84;
     Instruccion: 3454),
    (Identificador: 'BR-CL-05';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' AED AFN ' +
      'ALL AMD AOA ARS AUD AWG AZN BAM ' +
      'BBD BDT BHD BIF BMD BND BOB BOV ' +
      'BRL BSD BTN BWP BYN BZD CAD CDF ' +
      'CHE CHF CHW CLF CLP CNH CNY COP ' +
      'COU CRC CUP CVE CZK DJF DKK DOP ' +
      'DZD EGP ERN ETB EUR FJD FKP GBP ' +
      'GEL GHS GIP GMD GNF GTQ GYD HKD ' +
      'HNL HTG HUF IDR ILS INR IQD IRR ' +
      'ISK JMD JOD JPY KES KGS KHR KMF ' +
      'KPW KRW KWD KYD KZT LAK LBP LKR ' +
      'LRD LSL LYD MAD MDL MGA MKD MMK ' +
      'MNT MOP MRU MUR MVR MWK MXN MXV ' +
      'MYR MZN NAD NGN NIO NOK NPR NZD ' +
      'OMR PAB PEN PGK PHP PKR PLN PYG ' +
      'QAR RON RSD RUB RWF SAR SBD SCR ' +
      'SDG SEK SGD SHP SLE SOS SRD SSP ' +
      'STN SVC SYP SZL THB TJS TMT TND ' +
      'TOP TRY TTD TWD TZS UAH UGX USD ' +
      'USN UYI UYU UYW UZS VES VED VND ' +
      'VUV WST XAF XAG XAU XBA XBB XBC ' +
      'XBD XCD XCG XDR XOF XPD XPF XPT ' +
      'XSU XTS XUA XXX YER ZAR ZMW ZWG ' +
      ''', concat('' '', normalize-space(.' +
      '), '' ''))))';
     Mensaje: '[BR-CL-05]-Tax currency code MUS' +
      'T be coded using ISO code list 4' +
      '217 alpha-3';
     Contexto: 85;
     Instruccion: 3454),
    (Identificador: 'BR-CL-06';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' 3 35 432' +
      ' '', concat('' '', normalize-space(' +
      '.), '' ''))))';
     Mensaje: '[BR-CL-06]-Value added tax point' +
      ' date code MUST be coded using a' +
      ' restriction of UNTDID 2005.';
     Contexto: 86;
     Instruccion: 3459),
    (Identificador: 'BR-CL-07';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'schemeID), '' '')) and contains('' ' +
      'AAA AAB AAC AAD AAE AAF AAG AAH ' +
      'AAI AAJ AAK AAL AAM AAN AAO AAP ' +
      'AAQ AAR AAS AAT AAU AAV AAW AAX ' +
      'AAY AAZ ABA ABB ABC ABD ABE ABF ' +
      'ABG ABH ABI ABJ ABK ABL ABM ABN ' +
      'ABO ABP ABQ ABR ABS ABT ABU ABV ' +
      'ABW ABX ABY ABZ AC ACA ACB ACC A' +
      'CD ACE ACF ACG ACH ACI ACJ ACK A' +
      'CL ACN ACO ACP ACQ ACR ACT ACU A' +
      'CV ACW ACX ACY ACZ ADA ADB ADC A' +
      'DD ADE ADF ADG ADI ADJ ADK ADL A' +
      'DM ADN ADO ADP ADQ ADT ADU ADV A' +
      'DW ADX ADY ADZ AE AEA AEB AEC AE' +
      'D AEE AEF AEG AEH AEI AEJ AEK AE' +
      'L AEM AEN AEO AEP AEQ AER AES AE' +
      'T AEU AEV AEW AEX AEY AEZ AF AFA' +
      ' AFB AFC AFD AFE AFF AFG AFH AFI' +
      ' AFJ AFK AFL AFM AFN AFO AFP AFQ' +
      ' AFR AFS AFT AFU AFV AFW AFX AFY' +
      ' AFZ AGA AGB AGC AGD AGE AGF AGG' +
      ' AGH AGI AGJ AGK AGL AGM AGN AGO' +
      ' AGP AGQ AGR AGS AGT AGU AGV AGW' +
      ' AGX AGY AGZ AHA AHB AHC AHD AHE' +
      ' AHF AHG AHH AHI AHJ AHK AHL AHM' +
      ' AHN AHO AHP AHQ AHR AHS AHT AHU' +
      ' AHV AHX AHY AHZ AIA AIB AIC AID' +
      ' AIE AIF AIG AIH AII AIJ AIK AIL' +
      ' AIM AIN AIO AIP AIQ AIR AIS AIT' +
      ' AIU AIV AIW AIX AIY AIZ AJA AJB' +
      ' AJC AJD AJE AJF AJG AJH AJI AJJ' +
      ' AJK AJL AJM AJN AJO AJP AJQ AJR' +
      ' AJS AJT AJU AJV AJW AJX AJY AJZ' +
      ' AKA AKB AKC AKD AKE AKF AKG AKH' +
      ' AKI AKJ AKK AKL AKM AKN AKO AKP' +
      ' AKQ AKR AKS AKT AKU AKV AKW AKX' +
      ' AKY AKZ ALA ALB ALC ALD ALE ALF' +
      ' ALG ALH ALI ALJ ALK ALL ALM ALN' +
      ' ALO ALP ALQ ALR ALS ALT ALU ALV' +
      ' ALW ALX ALY ALZ AMA AMB AMC AMD' +
      ' AME AMF AMG AMH AMI AMJ AMK AML' +
      ' AMM AMN AMO AMP AMQ AMR AMS AMT' +
      ' AMU AMV AMW AMX AMY AMZ ANA ANB' +
      ' ANC AND ANE ANF ANG ANH ANI ANJ' +
      ' ANK ANL ANM ANN ANO ANP ANQ ANR' +
      ' ANS ANT ANU ANV ANW ANX ANY AOA' +
      ' AOD AOE AOF AOG AOH AOI AOJ AOK' +
      ' AOL AOM AON AOO AOP AOQ AOR AOS' +
      ' AOT AOU AOV AOW AOX AOY AOZ AP ' +
      'APA APB APC APD APE APF APG APH ' +
      'API APJ APK APL APM APN APO APP ' +
      'APQ APR APS APT APU APV APW APX ' +
      'APY APZ AQA AQB AQC AQD AQE AQF ' +
      'AQG AQH AQI AQJ AQK AQL AQM AQN ' +
      'AQO AQP AQQ AQR AQS AQT AQU AQV ' +
      'AQW AQX AQY AQZ ARA ARB ARC ARD ' +
      'ARE ARF ARG ARH ARI ARJ ARK ARL ' +
      'ARM ARN ARO ARP ARQ ARR ARS ART ' +
      'ARU ARV ARW ARX ARY ARZ ASA ASB ' +
      'ASC ASD ASE ASF ASG ASH ASI ASJ ' +
      'ASK ASL ASM ASN ASO ASP ASQ ASR ' +
      'ASS AST ASU ASV ASW ASX ASY ASZ ' +
      'ATA ATB ATC ATD ATE ATF ATG ATH ' +
      'ATI ATJ ATK ATL ATM ATN ATO ATP ' +
      'ATQ ATR ATS ATT ATU ATV ATW ATX ' +
      'ATY ATZ AU AUA AUB AUC AUD AUE A' +
      'UF AUG AUH AUI AUJ AUK AUL AUM A' +
      'UN AUO AUP AUQ AUR AUS AUT AUU A' +
      'UV AUW AUX AUY AUZ AV AVA AVB AV' +
      'C AVD AVE AVF AVG AVH AVI AVJ AV' +
      'K AVL AVM AVN AVO AVP AVQ AVR AV' +
      'S AVT AVU AVV AVW AVX AVY AVZ AW' +
      'A AWB AWC AWD AWE AWF AWG AWH AW' +
      'I AWJ AWK AWL AWM AWN AWO AWP AW' +
      'Q AWR AWS AWT AWU AWV AWW AWX AW' +
      'Y AWZ AXA AXB AXC AXD AXE AXF AX' +
      'G AXH AXI AXJ AXK AXL AXM AXN AX' +
      'O AXP AXQ AXR AXS AXU BA BC BD B' +
      'E BH BM BN BO BR BT BTP BW CAS C' +
      'AT CAU CAV CAW CAX CAY CAZ CBA C' +
      'BB CD CEC CED CFE CFF CFO CG CH ' +
      'CK CKN CM CMR CN CNO COF CP CR C' +
      'RN CS CST CT CU CV CW CZ DA DAN ' +
      'DB DI DL DM DQ DR EA EB ED EE EE' +
      'P EI EN EQ ER ERN ET EX FC FF FI' +
      ' FLW FN FO FS FT FV FX GA GC GD ' +
      'GDN GN HS HWB IA IB ICA ICE ICO ' +
      'II IL INB INN INO IP IS IT IV JB' +
      ' JE LA LAN LAR LB LC LI LO LRC L' +
      'S MA MB MF MG MH MR MRN MS MSS M' +
      'WB NA NF OH OI ON OP OR PB PC PD' +
      ' PE PF PI PK PL POR PP PQ PR PS ' +
      'PW PY RA RC RCN RE REN RF RR RT ' +
      'SA SB SD SE SEA SF SH SI SM SN S' +
      'P SQ SRN SS STA SW SZ TB TCR TE ' +
      'TF TI TIN TL TN TP UAR UC UCN UN' +
      ' UO URI VA VC VGR VM VN VON VOR ' +
      'VP VR VS VT VV WE WM WN WR WS WY' +
      ' XA XC XP ZZZ '', concat('' '', nor' +
      'malize-space(@schemeID), '' ''))))';
     Mensaje: '[BR-CL-07]-Object identifier ide' +
      'ntification scheme identifier MU' +
      'ST be coded using a restriction ' +
      'of UNTDID 1153.';
     Contexto: 87;
     Instruccion: 3472),
    (Identificador: 'BR-CL-10';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'schemeID), '' '')) and contains('' ' +
      '0002 0003 0004 0005 0006 0007 00' +
      '08 0009 0010 0011 0012 0013 0014' +
      ' 0015 0016 0017 0018 0019 0020 0' +
      '021 0022 0023 0024 0025 0026 002' +
      '7 0028 0029 0030 0031 0032 0033 ' +
      '0034 0035 0036 0037 0038 0039 00' +
      '40 0041 0042 0043 0044 0045 0046' +
      ' 0047 0048 0049 0050 0051 0052 0' +
      '053 0054 0055 0056 0057 0058 005' +
      '9 0060 0061 0062 0063 0064 0065 ' +
      '0066 0067 0068 0069 0070 0071 00' +
      '72 0073 0074 0075 0076 0077 0078' +
      ' 0079 0080 0081 0082 0083 0084 0' +
      '085 0086 0087 0088 0089 0090 009' +
      '1 0093 0094 0095 0096 0097 0098 ' +
      '0099 0100 0101 0102 0104 0105 01' +
      '06 0107 0108 0109 0110 0111 0112' +
      ' 0113 0114 0115 0116 0117 0118 0' +
      '119 0120 0121 0122 0123 0124 012' +
      '5 0126 0127 0128 0129 0130 0131 ' +
      '0132 0133 0134 0135 0136 0137 01' +
      '38 0139 0140 0141 0142 0143 0144' +
      ' 0145 0146 0147 0148 0149 0150 0' +
      '151 0152 0153 0154 0155 0156 015' +
      '7 0158 0159 0160 0161 0162 0163 ' +
      '0164 0165 0166 0167 0168 0169 01' +
      '70 0171 0172 0173 0174 0175 0176' +
      ' 0177 0178 0179 0180 0183 0184 0' +
      '185 0186 0187 0188 0189 0190 019' +
      '1 0192 0193 0194 0195 0196 0197 ' +
      '0198 0199 0200 0201 0202 0203 02' +
      '04 0205 0206 0207 0208 0209 0210' +
      ' 0211 0212 0213 0214 0215 0216 0' +
      '217 0218 0219 0220 0221 0222 022' +
      '3 0224 0225 0226 0227 0228 0229 ' +
      '0230 0231 0232 0233 0234 0235 02' +
      '36 0237 0238 0239 0240 0241 0242' +
      ' 0243 0244 0245 0246 0247 0248 0' +
      '249 0250 0251 '', concat('' '', nor' +
      'malize-space(@schemeID), '' ''))))' +
      '  or ((not(contains(normalize-sp' +
      'ace(@schemeID), '' '')) and contai' +
      'ns('' SEPA '', concat('' '', normali' +
      'ze-space(@schemeID), '' ''))) and ' +
      '((ancestor::cac:AccountingSuppli' +
      'erParty) or (ancestor::cac:Payee' +
      'Party)))';
     Mensaje: '[BR-CL-10]-Any identifier identi' +
      'fication scheme identifier MUST ' +
      'be coded using one of the ISO 65' +
      '23 ICD list.';
     Contexto: 88;
     Instruccion: 3485),
    (Identificador: 'BR-CL-11';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'schemeID), '' '')) and contains('' ' +
      '0002 0003 0004 0005 0006 0007 00' +
      '08 0009 0010 0011 0012 0013 0014' +
      ' 0015 0016 0017 0018 0019 0020 0' +
      '021 0022 0023 0024 0025 0026 002' +
      '7 0028 0029 0030 0031 0032 0033 ' +
      '0034 0035 0036 0037 0038 0039 00' +
      '40 0041 0042 0043 0044 0045 0046' +
      ' 0047 0048 0049 0050 0051 0052 0' +
      '053 0054 0055 0056 0057 0058 005' +
      '9 0060 0061 0062 0063 0064 0065 ' +
      '0066 0067 0068 0069 0070 0071 00' +
      '72 0073 0074 0075 0076 0077 0078' +
      ' 0079 0080 0081 0082 0083 0084 0' +
      '085 0086 0087 0088 0089 0090 009' +
      '1 0093 0094 0095 0096 0097 0098 ' +
      '0099 0100 0101 0102 0104 0105 01' +
      '06 0107 0108 0109 0110 0111 0112' +
      ' 0113 0114 0115 0116 0117 0118 0' +
      '119 0120 0121 0122 0123 0124 012' +
      '5 0126 0127 0128 0129 0130 0131 ' +
      '0132 0133 0134 0135 0136 0137 01' +
      '38 0139 0140 0141 0142 0143 0144' +
      ' 0145 0146 0147 0148 0149 0150 0' +
      '151 0152 0153 0154 0155 0156 015' +
      '7 0158 0159 0160 0161 0162 0163 ' +
      '0164 0165 0166 0167 0168 0169 01' +
      '70 0171 0172 0173 0174 0175 0176' +
      ' 0177 0178 0179 0180 0183 0184 0' +
      '185 0186 0187 0188 0189 0190 019' +
      '1 0192 0193 0194 0195 0196 0197 ' +
      '0198 0199 0200 0201 0202 0203 02' +
      '04 0205 0206 0207 0208 0209 0210' +
      ' 0211 0212 0213 0214 0215 0216 0' +
      '217 0218 0219 0220 0221 0222 022' +
      '3 0224 0225 0226 0227 0228 0229 ' +
      '0230 0231 0232 0233 0234 0235 02' +
      '36 0237 0238 0239 0240 0241 0242' +
      ' 0243 0244 0245 0246 0247 0248 0' +
      '249 0250 0251 '', concat('' '', nor' +
      'malize-space(@schemeID), '' ''))))';
     Mensaje: '[BR-CL-11]-Any registration iden' +
      'tifier identification scheme ide' +
      'ntifier MUST be coded using one ' +
      'of the ISO 6523 ICD list.';
     Contexto: 89;
     Instruccion: 3477),
    (Identificador: 'BR-CL-13';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'listID), '' '')) and contains('' AA' +
      ' AB AC AD AE AF AG AH AI AJ AK A' +
      'L AM AN AO AP AQ AR AS AT AU AV ' +
      'AW AX AY AZ BA BB BC BD BE BF BG' +
      ' BH BI BJ BK BL BM BN BO BP BQ B' +
      'R BS BT BU BV BW BX BY BZ CC CG ' +
      'CL CR CV DR DW EC EF EMD EN FS G' +
      'B GN GMN GS HS IB IN IS IT IZ MA' +
      ' MF MN MP NB ON PD PL PO PPI PV ' +
      'QS RC RN RU RY SA SG SK SN SRS S' +
      'RT SRU SRV SRW SRX SRY SRZ SS SS' +
      'A SSB SSC SSD SSE SSF SSG SSH SS' +
      'I SSJ SSK SSL SSM SSN SSO SSP SS' +
      'Q SSR SSS SST SSU SSV SSW SSX SS' +
      'Y SSZ ST STA STB STC STD STE STF' +
      ' STG STH STI STJ STK STL STM STN' +
      ' STO STP STQ STR STS STT STU STV' +
      ' STW STX STY STZ SUA SUB SUC SUD' +
      ' SUE SUF SUG SUH SUI SUJ SUK SUL' +
      ' SUM TG TSN TSO TSP TSQ TSR TSS ' +
      'TST TSU UA UP VN VP VS VX ZZZ '',' +
      ' concat('' '', normalize-space(@li' +
      'stID), '' ''))))';
     Mensaje: '[BR-CL-13]-Item classification i' +
      'dentifier identification scheme ' +
      'identifier MUST be'#10'      coded u' +
      'sing one of the UNTDID 7143 list' +
      '.';
     Contexto: 90;
     Instruccion: 3498),
    (Identificador: 'BR-CL-14';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' 1A AD AE' +
      ' AF AG AI AL AM AO AQ AR AS AT A' +
      'U AW AX AZ BA BB BD BE BF BG BH ' +
      'BI BJ BL BM BN BO BQ BR BS BT BV' +
      ' BW BY BZ CA CC CD CF CG CH CI C' +
      'K CL CM CN CO CR CU CV CW CX CY ' +
      'CZ DE DJ DK DM DO DZ EC EE EG EH' +
      ' ER ES ET FI FJ FK FM FO FR GA G' +
      'B GD GE GF GG GH GI GL GM GN GP ' +
      'GQ GR GS GT GU GW GY HK HM HN HR' +
      ' HT HU ID IE IL IM IN IO IQ IR I' +
      'S IT JE JM JO JP KE KG KH KI KM ' +
      'KN KP KR KW KY KZ LA LB LC LI LK' +
      ' LR LS LT LU LV LY MA MC MD ME M' +
      'F MG MH MK ML MM MN MO MP MQ MR ' +
      'MS MT MU MV MW MX MY MZ NA NC NE' +
      ' NF NG NI NL NO NP NR NU NZ OM P' +
      'A PE PF PG PH PK PL PM PN PR PS ' +
      'PT PW PY QA RE RO RS RU RW SA SB' +
      ' SC SD SE SG SH SI SJ SK SL SM S' +
      'N SO SR SS ST SV SX SY SZ TC TD ' +
      'TF TG TH TJ TK TL TM TN TO TR TT' +
      ' TV TW TZ UA UG UM US UY UZ VA V' +
      'C VE VG VI VN VU WF WS XI YE YT ' +
      'ZA ZM ZW '', concat('' '', normaliz' +
      'e-space(.), '' ''))))';
     Mensaje: '[BR-CL-14]-Country codes in an i' +
      'nvoice MUST be coded using ISO c' +
      'ode list 3166-1';
     Contexto: 91;
     Instruccion: 3502),
    (Identificador: 'BR-CL-15';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' 1A AD AE' +
      ' AF AG AI AL AM AO AQ AR AS AT A' +
      'U AW AX AZ BA BB BD BE BF BG BH ' +
      'BI BJ BL BM BN BO BQ BR BS BT BV' +
      ' BW BY BZ CA CC CD CF CG CH CI C' +
      'K CL CM CN CO CR CU CV CW CX CY ' +
      'CZ DE DJ DK DM DO DZ EC EE EG EH' +
      ' ER ES ET FI FJ FK FM FO FR GA G' +
      'B GD GE GF GG GH GI GL GM GN GP ' +
      'GQ GR GS GT GU GW GY HK HM HN HR' +
      ' HT HU ID IE IL IM IN IO IQ IR I' +
      'S IT JE JM JO JP KE KG KH KI KM ' +
      'KN KP KR KW KY KZ LA LB LC LI LK' +
      ' LR LS LT LU LV LY MA MC MD ME M' +
      'F MG MH MK ML MM MN MO MP MQ MR ' +
      'MS MT MU MV MW MX MY MZ NA NC NE' +
      ' NF NG NI NL NO NP NR NU NZ OM P' +
      'A PE PF PG PH PK PL PM PN PR PS ' +
      'PT PW PY QA RE RO RS RU RW SA SB' +
      ' SC SD SE SG SH SI SJ SK SL SM S' +
      'N SO SR SS ST SV SX SY SZ TC TD ' +
      'TF TG TH TJ TK TL TM TN TO TR TT' +
      ' TV TW TZ UA UG UM US UY UZ VA V' +
      'C VE VG VI VN VU WF WS XI YE YT ' +
      'ZA ZM ZW '', concat('' '', normaliz' +
      'e-space(.), '' ''))))';
     Mensaje: '[BR-CL-15]-Country codes in an i' +
      'nvoice MUST be coded using ISO c' +
      'ode list 3166-1';
     Contexto: 92;
     Instruccion: 3502),
    (Identificador: 'BR-CL-16';
     Bandera: 'fatal';
     Prueba: '( ( not(contains(normalize-space' +
      '(.),'' '')) and contains( '' 1 2 3 ' +
      '4 5 6 7 8 9 10 11 12 13 14 15 16' +
      ' 17 18 19 20 21 22 23 24 25 26 2' +
      '7 28 29 30 31 32 33 34 35 36 37 ' +
      '38 39 40 41 42 43 44 45 46 47 48' +
      ' 49 50 51 52 53 54 55 56 57 58 5' +
      '9 60 61 62 63 64 65 66 67 68 69 ' +
      '70 74 75 76 77 78 91 92 93 94 95' +
      ' 96 97 98 ZZZ '',concat('' '',norma' +
      'lize-space(.),'' '') ) ) )';
     Mensaje: '[BR-CL-16]-Payment means in an i' +
      'nvoice MUST be coded using UNCL4' +
      '461 code list';
     Contexto: 93;
     Instruccion: 3508),
    (Identificador: 'BR-CL-17';
     Bandera: 'fatal';
     Prueba: '( ( not(contains(normalize-space' +
      '(.),'' '')) and contains( '' AE L M' +
      ' E S Z G O K B '',concat('' '',norm' +
      'alize-space(.),'' '') ) ) )';
     Mensaje: '[BR-CL-17]-Invoice tax categorie' +
      's MUST be coded using UNCL5305 c' +
      'ode list';
     Contexto: 94;
     Instruccion: 3513),
    (Identificador: 'BR-CL-18';
     Bandera: 'fatal';
     Prueba: '( ( not(contains(normalize-space' +
      '(.),'' '')) and contains( '' AE L M' +
      ' E S Z G O K B '',concat('' '',norm' +
      'alize-space(.),'' '') ) ) )';
     Mensaje: '[BR-CL-18]-Invoice tax categorie' +
      's MUST be coded using UNCL5305 c' +
      'ode list';
     Contexto: 95;
     Instruccion: 3513),
    (Identificador: 'BR-CL-19';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' 41 42 60' +
      ' 62 63 64 65 66 67 68 70 71 88 9' +
      '5 100 102 103 104 105 '', concat(' +
      ''' '', normalize-space(.), '' ''))))';
     Mensaje: '[BR-CL-19]-Coded allowance reaso' +
      'ns MUST belong to the UNCL 5189 ' +
      'code list';
     Contexto: 96;
     Instruccion: 3520),
    (Identificador: 'BR-CL-20';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' AA AAA A' +
      'AC AAD AAE AAF AAH AAI AAS AAT A' +
      'AV AAY AAZ ABA ABB ABC ABD ABF A' +
      'BK ABL ABN ABR ABS ABT ABU ACF A' +
      'CG ACH ACI ACJ ACK ACL ACM ACS A' +
      'DC ADE ADJ ADK ADL ADM ADN ADO A' +
      'DP ADQ ADR ADT ADW ADY ADZ AEA A' +
      'EB AEC AED AEF AEH AEI AEJ AEK A' +
      'EL AEM AEN AEO AEP AES AET AEU A' +
      'EV AEW AEX AEY AEZ AJ AU CA CAB ' +
      'CAD CAE CAF CAI CAJ CAK CAL CAM ' +
      'CAN CAO CAP CAQ CAR CAS CAT CAU ' +
      'CAV CAW CAX CAY CAZ CD CG CS CT ' +
      'DAB DAD DAC DAF DAG DAH DAI DAJ ' +
      'DAK DAL DAM DAN DAO DAP DAQ DL E' +
      'G EP ER FAA FAB FAC FC FH FI GAA' +
      ' HAA HD HH IAA IAB ID IF IR IS K' +
      'O L1 LA LAA LAB LF MAE MI ML NAA' +
      ' OA PA PAA PC PL PRV RAB RAC RAD' +
      ' RAF RE RF RH RV SA SAA SAD SAE ' +
      'SAI SG SH SM SU TAB TAC TT TV V1' +
      ' V2 WH XAA YY ZZZ '', concat('' '',' +
      ' normalize-space(.), '' ''))))';
     Mensaje: '[BR-CL-20]-Coded charge reasons ' +
      'MUST belong to the UNCL 7161 cod' +
      'e list';
     Contexto: 97;
     Instruccion: 3525),
    (Identificador: 'BR-CL-21';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'schemeID), '' '')) and contains('' ' +
      '0002 0003 0004 0005 0006 0007 00' +
      '08 0009 0010 0011 0012 0013 0014' +
      ' 0015 0016 0017 0018 0019 0020 0' +
      '021 0022 0023 0024 0025 0026 002' +
      '7 0028 0029 0030 0031 0032 0033 ' +
      '0034 0035 0036 0037 0038 0039 00' +
      '40 0041 0042 0043 0044 0045 0046' +
      ' 0047 0048 0049 0050 0051 0052 0' +
      '053 0054 0055 0056 0057 0058 005' +
      '9 0060 0061 0062 0063 0064 0065 ' +
      '0066 0067 0068 0069 0070 0071 00' +
      '72 0073 0074 0075 0076 0077 0078' +
      ' 0079 0080 0081 0082 0083 0084 0' +
      '085 0086 0087 0088 0089 0090 009' +
      '1 0093 0094 0095 0096 0097 0098 ' +
      '0099 0100 0101 0102 0104 0105 01' +
      '06 0107 0108 0109 0110 0111 0112' +
      ' 0113 0114 0115 0116 0117 0118 0' +
      '119 0120 0121 0122 0123 0124 012' +
      '5 0126 0127 0128 0129 0130 0131 ' +
      '0132 0133 0134 0135 0136 0137 01' +
      '38 0139 0140 0141 0142 0143 0144' +
      ' 0145 0146 0147 0148 0149 0150 0' +
      '151 0152 0153 0154 0155 0156 015' +
      '7 0158 0159 0160 0161 0162 0163 ' +
      '0164 0165 0166 0167 0168 0169 01' +
      '70 0171 0172 0173 0174 0175 0176' +
      ' 0177 0178 0179 0180 0183 0184 0' +
      '185 0186 0187 0188 0189 0190 019' +
      '1 0192 0193 0194 0195 0196 0197 ' +
      '0198 0199 0200 0201 0202 0203 02' +
      '04 0205 0206 0207 0208 0209 0210' +
      ' 0211 0212 0213 0214 0215 0216 0' +
      '217 0218 0219 0220 0221 0222 022' +
      '3 0224 0225 0226 0227 0228 0229 ' +
      '0230 0231 0232 0233 0234 0235 02' +
      '36 0237 0238 0239 0240 0241 0242' +
      ' 0243 0244 0245 0246 0247 0248 0' +
      '249 0250 0251 '', concat('' '', nor' +
      'malize-space(@schemeID), '' ''))))';
     Mensaje: '[BR-CL-21]-Item standard identif' +
      'ier scheme identifier MUST belon' +
      'g to the ISO 6523 ICD code list';
     Contexto: 98;
     Instruccion: 3477),
    (Identificador: 'BR-CL-22';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(.' +
      '), '' '')) and contains('' VATEX-EU' +
      '-79-C VATEX-EU-132 VATEX-EU-132-' +
      '1A VATEX-EU-132-1B VATEX-EU-132-' +
      '1C VATEX-EU-132-1D VATEX-EU-132-' +
      '1E VATEX-EU-132-1F VATEX-EU-132-' +
      '1G VATEX-EU-132-1H VATEX-EU-132-' +
      '1I VATEX-EU-132-1J VATEX-EU-132-' +
      '1K VATEX-EU-132-1L VATEX-EU-132-' +
      '1M VATEX-EU-132-1N VATEX-EU-132-' +
      '1O VATEX-EU-132-1P VATEX-EU-132-' +
      '1Q VATEX-EU-135-1 VATEX-EU-143 V' +
      'ATEX-EU-143-1A VATEX-EU-143-1B V' +
      'ATEX-EU-143-1C VATEX-EU-143-1D V' +
      'ATEX-EU-143-1E VATEX-EU-143-1F V' +
      'ATEX-EU-143-1FA VATEX-EU-143-1G ' +
      'VATEX-EU-143-1H VATEX-EU-143-1I ' +
      'VATEX-EU-143-1J VATEX-EU-143-1K ' +
      'VATEX-EU-143-1L VATEX-EU-144 VAT' +
      'EX-EU-146-1E VATEX-EU-159 VATEX-' +
      'EU-309 VATEX-EU-148 VATEX-EU-148' +
      '-A VATEX-EU-148-B VATEX-EU-148-C' +
      ' VATEX-EU-148-D VATEX-EU-148-E V' +
      'ATEX-EU-148-F VATEX-EU-148-G VAT' +
      'EX-EU-151 VATEX-EU-151-1A VATEX-' +
      'EU-151-1AA VATEX-EU-151-1B VATEX' +
      '-EU-151-1C VATEX-EU-151-1D VATEX' +
      '-EU-151-1E VATEX-EU-G VATEX-EU-O' +
      ' VATEX-EU-IC VATEX-EU-AE VATEX-E' +
      'U-D VATEX-EU-F VATEX-EU-I VATEX-' +
      'EU-J VATEX-FR-FRANCHISE VATEX-FR' +
      '-CNWVAT VATEX-EU-153 VATEX-FR-CG' +
      'I261-1 VATEX-FR-CGI261-2 VATEX-F' +
      'R-CGI261-3 VATEX-FR-CGI261-4 VAT' +
      'EX-FR-CGI261-5 VATEX-FR-CGI261-7' +
      ' VATEX-FR-CGI261-8 VATEX-FR-CGI2' +
      '61A VATEX-FR-CGI261B VATEX-FR-CG' +
      'I261C-1 VATEX-FR-CGI261C-2 VATEX' +
      '-FR-CGI261C-3 VATEX-FR-CGI261D-1' +
      ' VATEX-FR-CGI261D-1BIS VATEX-FR-' +
      'CGI261D-2 VATEX-FR-CGI261D-3 VAT' +
      'EX-FR-CGI261D-4 VATEX-FR-CGI261E' +
      '-1 VATEX-FR-CGI261E-2 VATEX-FR-C' +
      'GI277A VATEX-FR-CGI275 VATEX-FR-' +
      '298SEXDECIESA VATEX-FR-CGI295 VA' +
      'TEX-FR-AE VATEX-ES-N1 VATEX-ES-N' +
      '2 VATEX-ES-IVA20 VATEX-ES-IVA21 ' +
      'VATEX-ES-IVA22 VATEX-ES-IVA23/24' +
      ' VATEX-ES-IVA25 VATEX-ES-IVA140B' +
      'IS VATEX-ES-OTROS VATEX-ES-IGIC1' +
      'TR VATEX-ES-IGIC11 VATEX-ES-IGIC' +
      '12 VATEX-ES-IGIC13 VATEX-ES-IGIC' +
      '25 VATEX-ES-IGIC47 VATEX-ES-IGIC' +
      '90 VATEX-ES-IPSI7 VATEX-ES-IPSI8' +
      ' '', concat('' '', normalize-space(' +
      'upper-case(.)), '' ''))))';
     Mensaje: '[BR-CL-22]-Tax exemption reason ' +
      'code identifier scheme identifie' +
      'r MUST belong to the CEF VATEX c' +
      'ode list';
     Contexto: 99;
     Instruccion: 3534),
    (Identificador: 'BR-CL-23';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'unitCode), '' '')) and contains('' ' +
      '10 11 13 14 15 20 21 22 23 24 25' +
      ' 27 28 33 34 35 37 38 40 41 56 5' +
      '7 58 59 60 61 74 77 80 81 85 87 ' +
      '89 91 1I 2A 2B 2C 2G 2H 2I 2J 2K' +
      ' 2L 2M 2N 2P 2Q 2R 2U 2X 2Y 2Z 3' +
      'B 3C 4C 4G 4H 4K 4L 4M 4N 4O 4P ' +
      '4Q 4R 4T 4U 4W 4X 5A 5B 5E 5J A1' +
      '0 A11 A12 A13 A14 A15 A16 A17 A1' +
      '8 A19 A2 A20 A21 A22 A23 A24 A26' +
      ' A27 A28 A29 A3 A30 A31 A32 A33 ' +
      'A34 A35 A36 A37 A38 A39 A4 A40 A' +
      '41 A42 A43 A44 A45 A47 A48 A49 A' +
      '5 A53 A54 A55 A56 A59 A6 A68 A69' +
      ' A7 A70 A71 A73 A74 A75 A76 A8 A' +
      '84 A85 A86 A87 A88 A89 A9 A90 A9' +
      '1 A93 A94 A95 A96 A97 A98 A99 AA' +
      ' AB ACR ACT AD AE AH AI AK AL AM' +
      'H AMP ANN APZ AQ AS ASM ASU ATM ' +
      'AWG AY AZ B1 B10 B11 B12 B13 B14' +
      ' B15 B16 B17 B18 B19 B20 B21 B22' +
      ' B23 B24 B25 B26 B27 B28 B29 B3 ' +
      'B30 B31 B32 B33 B34 B35 B4 B41 B' +
      '42 B43 B44 B45 B46 B47 B48 B49 B' +
      '50 B52 B53 B54 B55 B56 B57 B58 B' +
      '59 B60 B61 B62 B63 B64 B66 B67 B' +
      '68 B69 B7 B70 B71 B72 B73 B74 B7' +
      '5 B76 B77 B78 B79 B8 B80 B81 B82' +
      ' B83 B84 B85 B86 B87 B88 B89 B90' +
      ' B91 B92 B93 B94 B95 B96 B97 B98' +
      ' B99 BAR BB BFT BHP BIL BLD BLL ' +
      'BP BPM BQL BTU BUA BUI C0 C10 C1' +
      '1 C12 C13 C14 C15 C16 C17 C18 C1' +
      '9 C20 C21 C22 C23 C24 C25 C26 C2' +
      '7 C28 C29 C3 C30 C31 C32 C33 C34' +
      ' C35 C36 C37 C38 C39 C40 C41 C42' +
      ' C43 C44 C45 C46 C47 C48 C49 C50' +
      ' C51 C52 C53 C54 C55 C56 C57 C58' +
      ' C59 C60 C61 C62 C63 C64 C65 C66' +
      ' C67 C68 C69 C7 C70 C71 C72 C73 ' +
      'C74 C75 C76 C78 C79 C8 C80 C81 C' +
      '82 C83 C84 C85 C86 C87 C88 C89 C' +
      '9 C90 C91 C92 C93 C94 C95 C96 C9' +
      '7 C99 CCT CDL CEL CEN CG CGM CKG' +
      ' CLF CLT CMK CMQ CMT CNP CNT COU' +
      ' CTG CTM CTN CUR CWA CWI D03 D04' +
      ' D1 D10 D11 D12 D13 D15 D16 D17 ' +
      'D18 D19 D2 D20 D21 D22 D23 D24 D' +
      '25 D26 D27 D29 D30 D31 D32 D33 D' +
      '34 D36 D41 D42 D43 D44 D45 D46 D' +
      '47 D48 D49 D5 D50 D51 D52 D53 D5' +
      '4 D55 D56 D57 D58 D59 D6 D60 D61' +
      ' D62 D63 D65 D68 D69 D73 D74 D77' +
      ' D78 D80 D81 D82 D83 D85 D86 D87' +
      ' D88 D89 D91 D93 D94 D95 DAA DAD' +
      ' DAY DB DBM DBW DD DEC DG DJ DLT' +
      ' DMA DMK DMO DMQ DMT DN DPC DPR ' +
      'DPT DRA DRI DRL DT DTN DWT DZN D' +
      'ZP E01 E07 E08 E09 E10 E12 E14 E' +
      '15 E16 E17 E18 E19 E20 E21 E22 E' +
      '23 E25 E27 E28 E30 E31 E32 E33 E' +
      '34 E35 E36 E37 E38 E39 E4 E40 E4' +
      '1 E42 E43 E44 E45 E46 E47 E48 E4' +
      '9 E50 E51 E52 E53 E54 E55 E56 E5' +
      '7 E58 E59 E60 E61 E62 E63 E64 E6' +
      '5 E66 E67 E68 E69 E70 E71 E72 E7' +
      '3 E74 E75 E76 E77 E78 E79 E80 E8' +
      '1 E82 E83 E84 E85 E86 E87 E88 E8' +
      '9 E90 E91 E92 E93 E94 E95 E96 E9' +
      '7 E98 E99 EA EB EQ F01 F02 F03 F' +
      '04 F05 F06 F07 F08 F10 F11 F12 F' +
      '13 F14 F15 F16 F17 F18 F19 F20 F' +
      '21 F22 F23 F24 F25 F26 F27 F28 F' +
      '29 F30 F31 F32 F33 F34 F35 F36 F' +
      '37 F38 F39 F40 F41 F42 F43 F44 F' +
      '45 F46 F47 F48 F49 F50 F51 F52 F' +
      '53 F54 F55 F56 F57 F58 F59 F60 F' +
      '61 F62 F63 F64 F65 F66 F67 F68 F' +
      '69 F70 F71 F72 F73 F74 F75 F76 F' +
      '77 F78 F79 F80 F81 F82 F83 F84 F' +
      '85 F86 F87 F88 F89 F90 F91 F92 F' +
      '93 F94 F95 F96 F97 F98 F99 FAH F' +
      'AR FBM FC FF FH FIT FL FNU FOT F' +
      'P FR FS FTK FTQ G01 G04 G05 G06 ' +
      'G08 G09 G10 G11 G12 G13 G14 G15 ' +
      'G16 G17 G18 G19 G2 G20 G21 G23 G' +
      '24 G25 G26 G27 G28 G29 G3 G30 G3' +
      '1 G32 G33 G34 G35 G36 G37 G38 G3' +
      '9 G40 G41 G42 G43 G44 G45 G46 G4' +
      '7 G48 G49 G50 G51 G52 G53 G54 G5' +
      '5 G56 G57 G58 G59 G60 G61 G62 G6' +
      '3 G64 G65 G66 G67 G68 G69 G70 G7' +
      '1 G72 G73 G74 G75 G76 G77 G78 G7' +
      '9 G80 G81 G82 G83 G84 G85 G86 G8' +
      '7 G88 G89 G90 G91 G92 G93 G94 G9' +
      '5 G96 G97 G98 G99 GB GBQ GDW GE ' +
      'GF GFI GGR GIA GIC GII GIP GJ GL' +
      ' GLD GLI GLL GM GO GP GQ GRM GRN' +
      ' GRO GV GWH H03 H04 H05 H06 H07 ' +
      'H08 H09 H10 H11 H12 H13 H14 H15 ' +
      'H16 H18 H19 H20 H21 H22 H23 H24 ' +
      'H25 H26 H27 H28 H29 H30 H31 H32 ' +
      'H33 H34 H35 H36 H37 H38 H39 H40 ' +
      'H41 H42 H43 H44 H45 H46 H47 H48 ' +
      'H49 H50 H51 H52 H53 H54 H55 H56 ' +
      'H57 H58 H59 H60 H61 H62 H63 H64 ' +
      'H65 H66 H67 H68 H69 H70 H71 H72 ' +
      'H73 H74 H75 H76 H77 H79 H80 H81 ' +
      'H82 H83 H84 H85 H87 H88 H89 H90 ' +
      'H91 H92 H93 H94 H95 H96 H98 H99 ' +
      'HA HAD HBA HBX HC HDW HEA HGM HH' +
      ' HIU HKM HLT HM HMO HMQ HMT HPA ' +
      'HTZ HUR HWE IA IE INH INK INQ IS' +
      'D IU IUG IV J10 J12 J13 J14 J15 ' +
      'J16 J17 J18 J19 J2 J20 J21 J22 J' +
      '23 J24 J25 J26 J27 J28 J29 J30 J' +
      '31 J32 J33 J34 J35 J36 J38 J39 J' +
      '40 J41 J42 J43 J44 J45 J46 J47 J' +
      '48 J49 J50 J51 J52 J53 J54 J55 J' +
      '56 J57 J58 J59 J60 J61 J62 J63 J' +
      '64 J65 J66 J67 J68 J69 J70 J71 J' +
      '72 J73 J74 J75 J76 J78 J79 J81 J' +
      '82 J83 J84 J85 J87 J90 J91 J92 J' +
      '93 J95 J96 J97 J98 J99 JE JK JM ' +
      'JNT JOU JPS JWL K1 K10 K11 K12 K' +
      '13 K14 K15 K16 K17 K18 K19 K2 K2' +
      '0 K21 K22 K23 K26 K27 K28 K3 K30' +
      ' K31 K32 K33 K34 K35 K36 K37 K38' +
      ' K39 K40 K41 K42 K43 K45 K46 K47' +
      ' K48 K49 K50 K51 K52 K53 K54 K55' +
      ' K58 K59 K6 K60 K61 K62 K63 K64 ' +
      'K65 K66 K67 K68 K69 K70 K71 K73 ' +
      'K74 K75 K76 K77 K78 K79 K80 K81 ' +
      'K82 K83 K84 K85 K86 K87 K88 K89 ' +
      'K90 K91 K92 K93 K94 K95 K96 K97 ' +
      'K98 K99 KA KAT KB KBA KCC KDW KE' +
      'L KGM KGS KHY KHZ KI KIC KIP KJ ' +
      'KJO KL KLK KLX KMA KMH KMK KMQ K' +
      'MT KNI KNM KNS KNT KO KPA KPH KP' +
      'O KPP KR KSD KSH KT KTN KUR KVA ' +
      'KVR KVT KW KWH KWN KWO KWS KWT K' +
      'WY KX L10 L11 L12 L13 L14 L15 L1' +
      '6 L17 L18 L19 L2 L20 L21 L23 L24' +
      ' L25 L26 L27 L28 L29 L30 L31 L32' +
      ' L33 L34 L35 L36 L37 L38 L39 L40' +
      ' L41 L42 L43 L44 L45 L46 L47 L48' +
      ' L49 L50 L51 L52 L53 L54 L55 L56' +
      ' L57 L58 L59 L60 L63 L64 L65 L66' +
      ' L67 L68 L69 L70 L71 L72 L73 L74' +
      ' L75 L76 L77 L78 L79 L80 L81 L82' +
      ' L83 L84 L85 L86 L87 L88 L89 L90' +
      ' L91 L92 L93 L94 L95 L96 L98 L99' +
      ' LA LAC LBR LBT LD LEF LF LH LK ' +
      'LM LN LO LP LPA LR LS LTN LTR LU' +
      'B LUM LUX LY M1 M10 M11 M12 M13 ' +
      'M14 M15 M16 M17 M18 M19 M20 M21 ' +
      'M22 M23 M24 M25 M26 M27 M29 M30 ' +
      'M31 M32 M33 M34 M35 M36 M37 M38 ' +
      'M39 M4 M40 M41 M42 M43 M44 M45 M' +
      '46 M47 M48 M49 M5 M50 M51 M52 M5' +
      '3 M55 M56 M57 M58 M59 M60 M61 M6' +
      '2 M63 M64 M65 M66 M67 M68 M69 M7' +
      ' M70 M71 M72 M73 M74 M75 M76 M77' +
      ' M78 M79 M80 M81 M82 M83 M84 M85' +
      ' M86 M87 M88 M89 M9 M90 M91 M92 ' +
      'M93 M94 M95 M96 M97 M98 M99 MAH ' +
      'MAL MAM MAR MAW MBE MBF MBR MC M' +
      'CU MD MGM MHZ MIK MIL MIN MIO MI' +
      'U MKD MKM MKW MLD MLT MMK MMQ MM' +
      'T MND MNJ MON MPA MQD MQH MQM MQ' +
      'S MQW MRD MRM MRW MSK MTK MTQ MT' +
      'R MTS MTZ MVA MWH N1 N10 N11 N12' +
      ' N13 N14 N15 N16 N17 N18 N19 N20' +
      ' N21 N22 N23 N24 N25 N26 N27 N28' +
      ' N29 N3 N30 N31 N32 N33 N34 N35 ' +
      'N36 N37 N38 N39 N40 N41 N42 N43 ' +
      'N44 N45 N46 N47 N48 N49 N50 N51 ' +
      'N52 N53 N54 N55 N56 N57 N58 N59 ' +
      'N60 N61 N62 N63 N64 N65 N66 N67 ' +
      'N68 N69 N70 N71 N72 N73 N74 N75 ' +
      'N76 N77 N78 N79 N80 N81 N82 N83 ' +
      'N84 N85 N86 N87 N88 N89 N90 N91 ' +
      'N92 N93 N94 N95 N96 N97 N98 N99 ' +
      'NA NAR NCL NEW NF NIL NIU NL NM3' +
      ' NMI NMP NPT NT NTU NU NX OA ODE' +
      ' ODG ODK ODM OHM ON ONZ OPM OT O' +
      'ZA OZI P1 P10 P11 P12 P13 P14 P1' +
      '5 P16 P17 P18 P19 P2 P20 P21 P22' +
      ' P23 P24 P25 P26 P27 P28 P29 P30' +
      ' P31 P32 P33 P34 P35 P36 P37 P38' +
      ' P39 P40 P41 P42 P43 P44 P45 P46' +
      ' P47 P48 P49 P5 P50 P51 P52 P53 ' +
      'P54 P55 P56 P57 P58 P59 P60 P61 ' +
      'P62 P63 P64 P65 P66 P67 P68 P69 ' +
      'P70 P71 P72 P73 P74 P75 P76 P77 ' +
      'P78 P79 P80 P81 P82 P83 P84 P85 ' +
      'P86 P87 P88 P89 P90 P91 P92 P93 ' +
      'P94 P95 P96 P97 P98 P99 PAL PD P' +
      'FL PGL PI PLA PO PQ PR PS PTD PT' +
      'I PTL PTN Q10 Q11 Q12 Q13 Q14 Q1' +
      '5 Q16 Q17 Q18 Q19 Q20 Q21 Q22 Q2' +
      '3 Q24 Q25 Q26 Q27 Q28 Q29 Q3 Q30' +
      ' Q31 Q32 Q33 Q34 Q35 Q36 Q37 Q38' +
      ' Q39 Q40 Q41 Q42 QA QAN QB QR QT' +
      'D QTI QTL QTR R1 R9 RH RM ROM RP' +
      ' RPM RPS RT S3 S4 SAN SCO SCR SE' +
      'C SET SG SIE SM3 SMI SQ SQR SR S' +
      'TC STI STK STL STN STW SW SX SYR' +
      ' T0 T3 TAH TAN TI TIC TIP TKM TM' +
      'S TNE TP TPI TPR TQD TRL TST TTS' +
      ' U1 U2 UB UC VA VLT VP W2 WA WB ' +
      'WCD WE WEB WEE WG WHR WM WSD WTT' +
      ' X1 YDK YDQ YRD Z11 Z9 ZP ZZ X1A' +
      ' X1B X1D X1F X1G X1W X2C X3A X3H' +
      ' X43 X44 X4A X4B X4C X4D X4F X4G' +
      ' X4H X5H X5L X5M X6H X6P X7A X7B' +
      ' X8A X8B X8C XAA XAB XAC XAD XAE' +
      ' XAF XAG XAH XAI XAJ XAL XAM XAP' +
      ' XAT XAV XB4 XBA XBB XBC XBD XBE' +
      ' XBF XBG XBH XBI XBJ XBK XBL XBM' +
      ' XBN XBO XBP XBQ XBR XBS XBT XBU' +
      ' XBV XBW XBX XBY XBZ XCA XCB XCC' +
      ' XCD XCE XCF XCG XCH XCI XCJ XCK' +
      ' XCL XCM XCN XCO XCP XCQ XCR XCS' +
      ' XCT XCU XCV XCW XCX XCY XCZ XDA' +
      ' XDB XDC XDG XDH XDI XDJ XDK XDL' +
      ' XDM XDN XDP XDR XDS XDT XDU XDV' +
      ' XDW XDX XDY XEC XED XEE XEF XEG' +
      ' XEH XEI XEN XFB XFC XFD XFE XFI' +
      ' XFL XFO XFP XFR XFT XFW XFX XGB' +
      ' XGI XGL XGR XGU XGY XGZ XHA XHB' +
      ' XHC XHG XHN XHR XIA XIB XIC XID' +
      ' XIE XIF XIG XIH XIK XIL XIN XIZ' +
      ' XJB XJC XJG XJR XJT XJY XKG XKI' +
      ' XLE XLG XLT XLU XLV XLZ XMA XMB' +
      ' XMC XME XMR XMS XMT XMW XMX XNA' +
      ' XNE XNF XNG XNS XNT XNU XNV XO1' +
      ' XO2 XO3 XO4 XO5 XO6 XO7 XO8 XO9' +
      ' XOA XOB XOC XOD XOE XOF XOG XOH' +
      ' XOI XOJ XOK XOL XOM XON XOP XOQ' +
      ' XOR XOS XOT XOU XOV XOW XOX XOY' +
      ' XOZ XP1 XP2 XP3 XP4 XPA XPB XPC' +
      ' XPD XPE XPF XPG XPH XPI XPJ XPK' +
      ' XPL XPN XPO XPP XPR XPT XPU XPV' +
      ' XPX XPY XPZ XQA XQB XQC XQD XQF' +
      ' XQG XQH XQJ XQK XQL XQM XQN XQP' +
      ' XQQ XQR XQS XRD XRG XRJ XRK XRL' +
      ' XRO XRT XRZ XSA XSB XSC XSD XSE' +
      ' XSH XSI XSK XSL XSM XSO XSP XSS' +
      ' XST XSU XSV XSW XSX XSY XSZ XT1' +
      ' XTB XTC XTD XTE XTG XTI XTK XTL' +
      ' XTN XTO XTR XTS XTT XTU XTV XTW' +
      ' XTY XTZ XUC XUN XVA XVG XVI XVK' +
      ' XVL XVN XVO XVP XVQ XVR XVS XVY' +
      ' XWA XWB XWC XWD XWF XWG XWH XWJ' +
      ' XWK XWL XWM XWN XWP XWQ XWR XWS' +
      ' XWT XWU XWV XWW XWX XWY XWZ XXA' +
      ' XXB XXC XXD XXF XXG XXH XXJ XXK' +
      ' XYA XYB XYC XYD XYF XYG XYH XYJ' +
      ' XYK XYL XYM XYN XYP XYQ XYR XYS' +
      ' XYT XYV XYW XYX XYY XYZ XZA XZB' +
      ' XZC XZD XZF XZG XZH XZJ XZK XZL' +
      ' XZM XZN XZP XZQ XZR XZS XZT XZU' +
      ' XZV XZW XZX XZY XZZ '', concat(''' +
      ' '', normalize-space(@unitCode), ' +
      ''' ''))))';
     Mensaje: '[BR-CL-23]-Unit code MUST be cod' +
      'ed according to the UN/ECE Recom' +
      'mendation 20 with'#10'      Rec 21 e' +
      'xtension';
     Contexto: 100;
     Instruccion: 3548),
    (Identificador: 'BR-CL-24';
     Bandera: 'fatal';
     Prueba: '((@mimeCode = ''application/pdf'' ' +
      'or @mimeCode = ''image/png'' or @m' +
      'imeCode = ''image/jpeg'' or @mimeC' +
      'ode = ''text/csv'' or @mimeCode = ' +
      '''application/vnd.openxmlformats-' +
      'officedocument.spreadsheetml.she' +
      'et'' or @mimeCode = ''application/' +
      'vnd.oasis.opendocument.spreadshe' +
      'et''))';
     Mensaje: '[BR-CL-24]-For Mime code in attr' +
      'ibute use MIMEMediaType.';
     Contexto: 101;
     Instruccion: 3568),
    (Identificador: 'BR-CL-25';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'schemeID), '' '')) and contains('' ' +
      '0002 0007 0009 0037 0060 0088 00' +
      '96 0097 0106 0130 0135 0142 0147' +
      ' 0151 0154 0158 0170 0177 0183 0' +
      '184 0188 0190 0191 0192 0193 019' +
      '4 0195 0196 0198 0199 0200 0201 ' +
      '0202 0203 0204 0205 0208 0209 02' +
      '10 0211 0212 0213 0215 0216 0217' +
      ' 0218 0221 0225 0230 0235 0240 0' +
      '244 0242 0245 0246 0248 9910 991' +
      '3 9914 9915 9918 9919 9920 9922 ' +
      '9923 9924 9925 9926 9927 9928 99' +
      '29 9930 9931 9932 9933 9934 9935' +
      ' 9936 9937 9938 9939 9940 9941 9' +
      '942 9943 9944 9945 9946 9947 994' +
      '8 9949 9950 9951 9952 9953 9957 ' +
      '9959 9960 AN AQ AS AU EM '', conc' +
      'at('' '', normalize-space(@schemeI' +
      'D), '' ''))))';
     Mensaje: '[BR-CL-25]-Endpoint identifier s' +
      'cheme identifier MUST belong to ' +
      'the CEF EAS code list';
     Contexto: 102;
     Instruccion: 3573),
    (Identificador: 'BR-CL-26';
     Bandera: 'fatal';
     Prueba: '((not(contains(normalize-space(@' +
      'schemeID), '' '')) and contains('' ' +
      '0002 0003 0004 0005 0006 0007 00' +
      '08 0009 0010 0011 0012 0013 0014' +
      ' 0015 0016 0017 0018 0019 0020 0' +
      '021 0022 0023 0024 0025 0026 002' +
      '7 0028 0029 0030 0031 0032 0033 ' +
      '0034 0035 0036 0037 0038 0039 00' +
      '40 0041 0042 0043 0044 0045 0046' +
      ' 0047 0048 0049 0050 0051 0052 0' +
      '053 0054 0055 0056 0057 0058 005' +
      '9 0060 0061 0062 0063 0064 0065 ' +
      '0066 0067 0068 0069 0070 0071 00' +
      '72 0073 0074 0075 0076 0077 0078' +
      ' 0079 0080 0081 0082 0083 0084 0' +
      '085 0086 0087 0088 0089 0090 009' +
      '1 0093 0094 0095 0096 0097 0098 ' +
      '0099 0100 0101 0102 0104 0105 01' +
      '06 0107 0108 0109 0110 0111 0112' +
      ' 0113 0114 0115 0116 0117 0118 0' +
      '119 0120 0121 0122 0123 0124 012' +
      '5 0126 0127 0128 0129 0130 0131 ' +
      '0132 0133 0134 0135 0136 0137 01' +
      '38 0139 0140 0141 0142 0143 0144' +
      ' 0145 0146 0147 0148 0149 0150 0' +
      '151 0152 0153 0154 0155 0156 015' +
      '7 0158 0159 0160 0161 0162 0163 ' +
      '0164 0165 0166 0167 0168 0169 01' +
      '70 0171 0172 0173 0174 0175 0176' +
      ' 0177 0178 0179 0180 0183 0184 0' +
      '185 0186 0187 0188 0189 0190 019' +
      '1 0192 0193 0194 0195 0196 0197 ' +
      '0198 0199 0200 0201 0202 0203 02' +
      '04 0205 0206 0207 0208 0209 0210' +
      ' 0211 0212 0213 0214 0215 0216 0' +
      '217 0218 0219 0220 0221 0222 022' +
      '3 0224 0225 0226 0227 0228 0229 ' +
      '0230 0231 0232 0233 0234 0235 02' +
      '36 0237 0238 0239 0240 0241 0242' +
      ' 0243 0244 0245 0246 0247 0248 0' +
      '249 0250 0251 '', concat('' '', nor' +
      'malize-space(@schemeID), '' ''))))';
     Mensaje: '[BR-CL-26]-Delivery location ide' +
      'ntifier scheme identifier MUST b' +
      'elong to the ISO 6523 ICD code l' +
      'ist';
     Contexto: 103;
     Instruccion: 3477));
