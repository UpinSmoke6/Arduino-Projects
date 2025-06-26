/*
This is good for constant speeds motors, relays, and LEDs.
*/
const int LED=9;   //defined LED for pin 9
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); // Sets LED as an output.

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i<256; i++)
  {
    analogWrite(LED, i);
    delay(10);
  
  }
  for (int i=255; i>=0; i--)
  {
    analogWrite(LED, i);
    delay(10);
  }
}
