#include <LiquidCrystal.h>

// RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); // LCD 16x2
  lcd.setCursor(0, 0);
  lcd.print("AO INFINITO!");
  lcd.setCursor(0, 1);
  lcd.print("E ALEM!");
  lcd.setCursor(0,2);
  lcd.print("--BuzzLightyer");
  
}

void loop() {
}
