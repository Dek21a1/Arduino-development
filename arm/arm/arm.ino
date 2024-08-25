#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

#define neutral 90
#define neutral1 40
#define use 82

pin_action action;

void setup() {
Serial.begin(9600);
action.servo_init(5, 6, 9, 10, 11);
action.servo_neutral(neutral, neutral1, use);
delay(5000);
    if (tcs.begin()) {
    //Serial.println("Found sensor");
  } else {
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
  action.grab(neutral, neutral1, use);
  delay(200);
  action.sensor_red();
  action.release(neutral, neutral1, use);
  action.servo_neutral(neutral, neutral1, use);
}

else if (int(green) >= 100) {
  Serial.print("block is green "); Serial.println(int(green));
  action.grab(neutral, neutral1, use);
  delay(2000);
  action.sensor_green();
  action.release(neutral, neutral1, use);
  action.servo_neutral(neutral, neutral1, use);
}

else if (int(blue) >= 100) {
  Serial.print("block is blue "); Serial.println(int(blue));
  action.grab(neutral, neutral1, use);
  delay(2000);
  action.sensor_blue(neutral1);
  action.servo_neutral(neutral, neutral1, use);
}
else {
  Serial.println("no block recognised"); 
}
}
