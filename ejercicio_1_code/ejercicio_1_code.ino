#include <LiquidCrystal.h>
#include <DHT.h>

#define LCD_RS 2
#define LCD_E 4
#define LCD_D4 8
#define LCD_D5 9
#define LCD_D6 10
#define LCD_D7 11
#define LCD_ROWS 2
#define LCD_COLS 16
 
LiquidCrystal lcd(LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  lcd.begin(LCD_COLS, LCD_ROWS);
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
}
 
void loop() {  
}
