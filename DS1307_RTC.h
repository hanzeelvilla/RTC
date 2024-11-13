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
  void init();
  DateTime get_time();
  String formated_date(char sep = '/'); // sep -> separator
  String formated_time(char sep = ':');
  String formated_fullDate(char sepDate = '/', char sepTime = ':', char sepEspace = ' ');

  private:
    RTC_DS1307 RTC;
};

#endif