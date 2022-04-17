#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0*20,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(1,0);
  lcd.print("Hello");

}
