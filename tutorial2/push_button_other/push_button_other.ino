
#define Button_pin 2

class Button {
  private:
    byte pin;
  public:
    Button() {} //var
    Button(byte pin) {
      this->pin = pin;
    }
    void init() {
      pinMode(pin, INPUT);
    }
    void init(byte defaultState) {
    init();
    }
    void isPressed() {
      if (digitalRead(pin) == 1) {
        true;
      }
      else {
        false;
      }
    }
};


void setup() {
  Serial.begin(9600);
  Button.init();
}

void loop() {
  if (Button.isPressed()) {
    Serial.println("Button is pressed");
  }
  else {
    Serial.println("button is not pressed");
  }
  delay (100);
}
