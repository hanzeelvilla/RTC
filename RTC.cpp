#include "RTC.h"

void DS1307_RTC::init() {
  while (!RTC.begin()) {
    Serial.println("Error initializing RTC");
    delay(1000);
  }
  Serial.println("RTC initialized"); 
}