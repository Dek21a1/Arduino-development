#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

#define neutral 90
#define neutral1 40
#define use 82
#define Pservo1 5
#define Pservo2 6
#define Pservo3 9
#define Pservo4 10
#define Pservo5 11
#define r 0
#define g 1
#define b 2

arm action(neutral, neutral1, use, Pservo1, Pservo2, Pservo3, Pservo4, Pservo5);
colour_action Colour_action;

void setup() {
Serial.begin(9600);
action.servo_init();
action.servo_neutral();
delay(5000);
    if (tcs.begin()) {
    //Serial.println("Found sensor");
  } 
  else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }
  // Convert RGB colors to what humans see
  for (int i=0; i<256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;
    gammatable[i] = 255 - x;
  }
}

void loop() {

  float red, green, blue;

  delay(60);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue);

if (int(red) >= 160) {
  Serial.print("block is red "); Serial.println(int(red));
  Colour_action.clr(r);
}

else if (int(green) >= 100) {
  Serial.print("block is green "); Serial.println(int(green));
  Colour_action.clr(g);
}

else if (int(blue) >= 100) {
  Serial.print("block is blue "); Serial.println(int(blue));
  Colour_action.clr(b);
}
else {
  Serial.println("no block recognised"); 
}
}
