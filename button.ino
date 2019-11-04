int ledPin = 13;
int led = 6;
int buttonPin = 8;
void setup() {
 pinMode(ledPin, OUTPUT);
  pinMode(led, OUTPUT);
 pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
 if (digitalRead(buttonPin) == LOW) {
 digitalWrite(ledPin, HIGH);
 digitalWrite(led, LOW);
 }
 else {
 digitalWrite(ledPin, LOW);
  digitalWrite(led, HIGH);
 }
}
