
#define Button_pin 2

class Button {
  private:
    byte ButtonPin;
  public:
    pin() {} //var
    pin(byte ButtonPin) {
      this->pin = ButtonPin;
    }
    void init() {
      pinMode(Button_pin, INPUT);
    }
    void init(byte defaultState) {
    init();
    if (defaultState == 1) {
      isPressed();
    }
    void isPressed();
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
