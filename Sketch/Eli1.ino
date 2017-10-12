/*
Elise room notice

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);


}

void loop() {


    lcd.print("    Elise's Room    ");
    delay(500);
    lcd.print("    * KEEP OUT *    ");
    delay(500);
    lcd.print("                    ");
    lcd.print("                    ");

    lcd.print("    Elise's Room    ");
    delay(500);
    lcd.print("    *  OR ELSE *    ");
    delay(500);
    lcd.print("                    ");
    lcd.print("                    ");

    lcd.print("    Elise's Room    ");
    delay(500);
    lcd.print("    *  TROUBLE *    ");
    delay(500);
    lcd.print("                    ");
    lcd.print("                    ");

}
