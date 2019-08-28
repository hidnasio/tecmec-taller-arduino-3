#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTPIN 12
#define DHTTYPE DHT11

const byte LCD_RS = 2, LCD_E = 4, LCD_D4 = 8, LCD_D5 = 9, LCD_D6 = 10, LCD_D7 = 11, 
           LCD_ROWS = 2, LCD_COLS = 16;

LiquidCrystal lcd(LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.begin(LCD_COLS, LCD_ROWS);
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
  dht.begin();
}
 
void loop() { 
  delay(5000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp (*C): ");
  lcd.print(t);
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(h);
  lcd.print("%");
}
