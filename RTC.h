#ifndef RTC_H
#define RTC_H

/*
NEEDS 2 LIBRARIES:
RTClib: To control different clocks from Adafruit
Adafruit BusIO:  To load and configure certain elements of the Adafruit electronic components. 
*/

#include <Wire.h> 
#include "RTClib.h"

class DS1307_RTC {
  public:
  RTC_DS1307 RTC;

  void init();
};

#endif