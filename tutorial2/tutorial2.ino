#define LED 13

class Led {
private:
  byte pin;
public:
  Led() {}
  
  Led(byte pin) {
    this->pin = pin;
  }
  void init() {
    pinMode(pin, OUTPUT);
  }
  void init(byte defaultState) {
    init();
    if (defaultState == 1) {
      on();
    }
    else {
      off();
    }
  }
  void on() {
    digitalWrite(pin, 1); 
    Serial.println("Led on");
  }
  void off() {
    digitalWrite(pin, 0);
    Serial.println("Led off");
  }
};

Led led(LED);

void setup() {
  Serial.begin(9600);
  Serial.println("device set to 9600br");
  led.init();
}

void loop() {
  led.on();
  delay(500);
  led.off();
  delay(500);
}
