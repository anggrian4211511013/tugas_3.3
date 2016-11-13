/* PRAKTIKUM 3.3 ANGGRIAN Q (4211511013) */

#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
  
void setup() 
{
 lcd.begin(16,2);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("SAKTI ABD");
 analogReference(EXTERNAL);
}

void loop() 
{
 unsigned int dataADC = analogRead(A0);
 lcd.setCursor(0,1);
 lcd.print("Value = ");
 lcd.print(dataADC);
 delay(500);
}
