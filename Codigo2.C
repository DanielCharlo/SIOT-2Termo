#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int Vermelho = 7;
int Amarelo  = 6;
int Verde    = 5;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  pinMode(Vermelho, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Verde, OUTPUT);
}

void loop() {
  lcd.setCursor(0,0); lcd.print("Vermelho ON ");
  digitalWrite(Vermelho, HIGH);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, LOW);
  delay(500);

  lcd.setCursor(0,0); lcd.print("Vermelho OFF");
  digitalWrite(Vermelho, LOW);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, LOW);
  delay(500);

  lcd.setCursor(0,0); lcd.print("Amarelo ON  ");
  digitalWrite(Vermelho, LOW);
  digitalWrite(Amarelo, HIGH);
  digitalWrite(Verde, LOW);
  delay(500);

  lcd.setCursor(0,0); lcd.print("Amarelo OFF ");
  digitalWrite(Vermelho, LOW);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, LOW);
  delay(500);

  lcd.setCursor(0,0); lcd.print("Verde ON    ");
  digitalWrite(Vermelho, LOW);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, HIGH);
  delay(500);

  lcd.setCursor(0,0); lcd.print("Verde OFF   ");
  digitalWrite(Vermelho, LOW);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, LOW);
  delay(500);
}
