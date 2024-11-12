#include "RTC.h"

DS1307_RTC rtc;

void setup() {
  Serial.begin(115200);
  rtc.init();
}

void loop() {
  // DateTime time = rtc.get_time();
  String textDate = rtc.formated_date();
  Serial.println(textDate);

  String textTime = rtc.formated_time();
  Serial.println(textTime);

  String fullTime = rtc.formated_fullDate();
  Serial.println(fullTime);
  delay(1000);
}