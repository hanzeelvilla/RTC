#include "RTC.h"

void DS1307_RTC::init() {
  while (!RTC.begin()) {
    Serial.println("Error initializing RTC");
    delay(1000);
  }

  if (!RTC.isrunning()) {
    Serial.println("Setting clock time with the date and time of the computer");
    RTC.adjust(DateTime(F(__DATE__), F(__TIME__))); 
  }

  Serial.println("RTC initialized"); 
}

DateTime DS1307_RTC::get_time() {
  return RTC.now();
}

String DS1307_RTC::formated_date(char sep) {
  DateTime fullDate = get_time();
  String date = "";

  if (fullDate.day() < 10)
    date += '0';
  date += fullDate.day();
    
  date += sep;

  if (fullDate.month() < 10)
    date += '0';
  date += fullDate.month();

  date += sep;

  date += fullDate.year();
  return date;
}

String DS1307_RTC::formated_time(char sep) {
  DateTime fullDate = get_time();
  String time = "";

  if (fullDate.hour() < 10)
    time += '0';
  time += fullDate.hour();

  time += sep;

  if (fullDate.minute() < 10)
    time += '0';
  time += fullDate.minute();

  time += sep;

  if (fullDate.second() < 10)
    time += '0';
  time += fullDate.second();

  return time;
}

String DS1307_RTC::formated_fullDate(char sepDate, char sepTime, char sepEspace) {
  String date = formated_date(sepDate);
  String time = formated_time(sepTime);

  return date + sepEspace + time;
}