#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

Servo Servo1;
arm Arm;


void setup() {
  Serial.begin(9600);
  Arm.init();
}

void loop() {
  
}
