#include "RTC.h"

DS1307_RTC rtc;

void setup() {
  Serial.begin(115200);
  rtc.init();
}

void loop() {
}