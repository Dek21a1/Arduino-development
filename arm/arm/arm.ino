#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

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
  Servo1.write(101);
  delay(10);
  Servo2.write(97);
  delay(10);
  Servo3.write(97);
  delay(10);
  Servo4.write(100);
}

void loop() {
  
}
