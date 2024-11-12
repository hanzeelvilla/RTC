# RTC Library
`RTC.h` is a library for managing the DS1307 real-time clock (RTC) module, designed to make it easy to obtain and format date and time data. This library uses `RTClib` and `Adafruit BusIO` from Adafruit to interact with the RTC module.

## Features
* Get Current Date and Time
* Formatted Date and Time Strings
* Customizable Formatting for Flexibility

## Requirements
Make sure you have installed the following libraries:

* **RTClib**: For controlling various real-time clocks (RTCs) from Adafruit.
* **Adafruit BusIO**: Required to configure certain components from Adafruit.

## Installation
1. Download the repository as a ZIP file.
2. Place the RTC folder into your Arduino libraries directory (typically Documents/Arduino/libraries on most systems).
3. Install the required libraries (RTClib and Adafruit BusIO) via the Arduino Library Manager or download them from the Adafruit GitHub repositories.
Once installed, include RTC.h in your code to start using the library.

## Getting Started
###  Hardware Setup
Connect the DS1307 RTC module to your microcontroller using the I2C interface:

* **SDA** to the microcontroller's SDA pin (ESP32 -> 21).
* **SCL** to the microcontroller's SCL pin (ESP32 -> 22).
* **VCC** to 3.3V or 5V (depending on your module specifications).
* **GND** to GND.

###  Include the Library in Your Code
In your Arduino code, include the RTC.h file and create an instance of the DS1307_RTC class.

```
#include "RTC.h"
DS1307_RTC rtc;
```

### Initialize the Sensor with init()
```
rtc.init();
```

### Read the date and time
```
DateTime time = rtc.get_time(); // all time data is based in this method
String textDate = rtc.formated_date(); // you can pass a separator, default = '/'
String textTime = rtc.formated_time(); // you can pass a separator, default = ':'
String fullTime = rtc.formated_fullDate(); 
// you can pass a separator for the date, default = '/'
// you can pass a separator for the time, default = ':'
// you can pass a separator for espace, default = ' '
```

## Methods
* **init()**: Initializes the RTC.
* **get_time()**: Returns a DateTime object of the current time.
* **formated_date()**: Returns the date as a formatted string.
* **formated_time()**: Returns the time as a formatted string.
* **formated_fullDate()**: Returns the full date and time as a formatted string.