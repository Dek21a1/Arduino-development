 #define ledp1 8
#define ledp2 9
#define ledp3 10
#define ledp4 11
#define ledp5 12
#define button 7
#define knob A5
#define LDR A4

void setup() {
  Serial.begin(9600);
  Serial.println("device is set to 9600br");
  pinMode(ledp1, OUTPUT);
  pinMode(ledp2, OUTPUT);
  pinMode(ledp3, OUTPUT);
  pinMode(ledp4, OUTPUT);
  pinMode(ledp5, OUTPUT);
  pinMode(button, INPUT);
  pinMode(knob, INPUT);
  pinMode(LDR, INPUT);
}

void loop() {
  unsigned int Pval = analogRead (knob);
  Serial.print ("LightVal:");
  Serial.print (Pval);
  Serial.println ();
if (Pval == (constrain(Pval, 0, 205))) {
  digitalWrite(ledp1, 1);
}
else if (Pval != (constrain(Pval, 0, 205))){
  digitalWrite(ledp1, 0);
}
if (Pval == (constrain(Pval, 206, 409))){
  digitalWrite(ledp2, 1);
}
else if (Pval != (constrain(Pval, 206, 409))){
  digitalWrite(ledp2, 0);
}
if (Pval == (constrain(Pval, 410, 614))){
  digitalWrite(ledp3, 1);
}
else if (Pval != (constrain(Pval, 410, 614))){
  digitalWrite(ledp3, 0);
}
if (Pval == (constrain(Pval, 615, 818))){
  digitalWrite(ledp4, 1);
}
else if (Pval != (constrain(Pval, 615, 818))){
  digitalWrite(ledp4, 0);
}
if (Pval == (constrain(Pval, 819, 1023))){
  digitalWrite(ledp5, 1);
}
else if (Pval != (constrain(Pval, 819, 1023))){
  digitalWrite(ledp5, 0);
}
}
