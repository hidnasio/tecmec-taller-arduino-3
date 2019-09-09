#include <LiquidCrystal.h>

const byte LCD_RS = 2, LCD_E = 4, LCD_D4 = 8, LCD_D5 = 9,
           LCD_D6 = 10, LCD_D7 = 11, LCD_ROWS = 2, LCD_COLS = 16;

long number = 0;
 
LiquidCrystal lcd(LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  lcd.begin(LCD_COLS, LCD_ROWS);
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
}
 
void loop() {
  number = number + 1;

  lcd.setCursor(0, 1);
  lcd.print(number);

  delay(1000);
}
