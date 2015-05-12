const int (LED1) = 8;
const int (LED2) = 9;
const int (LED3) = 10;
const int (LED4) = 11;
const int (LED5) = 12;
const int (LED0) = 7;
const int (button) = 1;
const int (button1) = 2;
const int (button2) = 3;
const int (button3) = 4;
const int (button4) = 5;
const int (button5) = 6;

int buttonState0 = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;

void setup() {
  pinMode(button, INPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED0, OUTPUT); 
}

void loop() {
  buttonState0 = digitalRead(button);
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);
  
  if (buttonState0 == HIGH) {
    digitalWrite(LED0, HIGH);
}
else {
  digitalWrite(LED0, LOW);
}
  if (buttonState1 == HIGH) {
    digitalWrite(LED1, HIGH);
}
else {
  digitalWrite(LED1, LOW);
}
  if (buttonState2 == HIGH) {
    digitalWrite(LED2, HIGH);
}
else {
  digitalWrite(LED2, LOW);
}
  if (buttonState3 == HIGH) {
    digitalWrite(LED3, HIGH);
}
else {
  digitalWrite(LED3, LOW);
}
  if (buttonState4 == HIGH) {
    digitalWrite(LED4, HIGH);
}
else {
  digitalWrite(LED4, LOW);
}
  if (buttonState5 == HIGH) {
    digitalWrite(LED5, HIGH);
}
else {
  digitalWrite(LED5, LOW);
}
}
