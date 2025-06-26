/*
This is good for constant speeds motors, relays, and LEDs.
*/
const int LED=9;   //defined LED for pin 9
const int BUTTON=2; // button connected to pin 2

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); // Sets LED as an output.
pinMode(BUTTON, INPUT); // Set BUTTON as INPUT.
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(BUTTON) == LOW)
  {
    digitalWrite(LED, LOW);
  }
  else
  {
    digitalWrite(LED, HIGH);
  }
}
