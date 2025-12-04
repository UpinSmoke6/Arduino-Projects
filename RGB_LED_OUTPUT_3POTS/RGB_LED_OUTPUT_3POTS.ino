const int kPinPot1 = A0;
 const int kPinPot2 = A2;
 const int kPinPot3 = A3;
 const int kPinLed_R = 7;
 const int kPinLed_G = 6;
 const int kPinLed_B = 5;
 void setup()
 {
 pinMode(kPinLed_R, OUTPUT);
 pinMode(kPinLed_G, OUTPUT);
 pinMode(kPinLed_B, OUTPUT);
 }
 void loop(){
int potValue;
 int ledValue;
 potValue = analogRead(kPinPot1);
 ledValue = map(potValue, 0, 1023, 0, 255);
 analogWrite(kPinLed_R, ledValue);
 potValue = analogRead(kPinPot2);
 ledValue = map(potValue, 0, 1023, 0, 255);
 analogWrite(kPinLed_G, ledValue);
 potValue = analogRead(kPinPot3);
 ledValue = map(potValue, 0, 1023, 0, 255);
 analogWrite(kPinLed_B, ledValue);
 }