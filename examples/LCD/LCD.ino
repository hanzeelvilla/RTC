#include "DS1307_RTC.h"
#include <LiquidCrystal_I2C.h>

DS1307_RTC rtc;
LiquidCrystal_I2C lcd (0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  rtc.init();
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  DateTime time = rtc.get_time(); // all time data is based in this method
  
  String textDate = rtc.formated_date();
  lcd.setCursor(0, 0);
  lcd.print(textDate);

  String textTime = rtc.formated_time();
  lcd.setCursor(0, 1);
  lcd.print(textTime);

  delay(1000);
}