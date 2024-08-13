#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
//#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

#define default1 102
#define default2 97
#define default3 96
#define default4 101
#define default5 40
#define grab 80

//arm ARM({default1, default2, default3, default4, default5});

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

void setup() {
  Serial.begin(9600);
  Servo1.attach(5);
  Servo2.attach(6);
  Servo3.attach(9);
  Servo4.attach(10);
  Servo5.attach(11);
  Servo5.write(40);
  delay(2000);
  Servo5.write(80);
  delay(2000);
  Servo5.write(default1);
  delay(5000);
  Servo4.write(0);
  delay(2000);
  Servo4.write(180);
  delay(2000);
  Servo4.write(default1);
  delay(5000);
  Servo3.write(0);
  delay(2000);
  Servo3.write(180);
  delay(2000);
  Servo3.write(default1);
  delay(5000);
  Servo2.write(0);
  delay(2000);
  Servo2.write(180);
  delay(2000);
  Servo2.write(default1);
  delay(5000);
  Servo1.write(0);
  delay(2000);
  Servo1.write(180);
  delay(2000);
  Servo1.write(default1);
  delay(5000);
}

void loop() {
  Servo5.write(grab);
  Servo1.write(0);
  delay(5000);
   Servo1.write(180);
  delay(5000);
}
