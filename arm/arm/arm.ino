#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

Servo Servo1;
arm Action = arm(ServoSign);


void setup() {
  Serial.begin(9600);
  Servo1.attach(9);
  Servo1.write(90);

}

void loop() {
  Servo1.write(180);
  delay(5000);
  Servo1.write(0);
  delay(5000);
}
