const int kPinLed1 = 2;
 const int kPinLed2 = 3;
 const int kPinLed3 = 4;
 const int kPinLed4 = 5;

void setup() {
 pinMode(kPinLed1, OUTPUT);
 pinMode(kPinLed2, OUTPUT);
 pinMode(kPinLed3, OUTPUT);
 pinMode(kPinLed4, OUTPUT);
 }

void loop() {
 // turn on each of the LEDs in order
 digitalWrite(kPinLed1, HIGH);
 delay(100);
 digitalWrite(kPinLed2, HIGH);
 delay(100);
 digitalWrite(kPinLed3, HIGH);
 delay(100);
 digitalWrite(kPinLed4, HIGH);
 delay(100);
 // turn off each of the LEDs in order
 digitalWrite(kPinLed1, LOW);
 delay(100);
 digitalWrite(kPinLed2, LOW);
 delay(100);
 digitalWrite(kPinLed3, LOW);
 delay(100);
 digitalWrite(kPinLed4, LOW);
 }
