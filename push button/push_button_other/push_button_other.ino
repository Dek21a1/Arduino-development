
#define Button_pin 2

PushButton button(Button_pin);

class PushButton {
  private:
    byte pin;
  public:
    PushButton() {} //var
    PushButton(byte pin) {
      this->pin = pin;
    }
    void init() {
      pinMode(pin, INPUT_PULLUP);
      isPressed();
    }
    void init(byte defaultState) {
    init();
    }
    void isPressed() {
    pressState = digitalRead(pin);
    return pressState;
    }
};


void setup() {
  Serial.begin(9600);
  button.init();
}

void loop() {
 Serial.println(button.isPressed());
 delay(100);
}
