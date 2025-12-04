 /*
 Pushbutton Sketch
 Reads the capacitor voltage at digital pin 2 and
 turns on and off a light emitting diode (LED) connected
  to digital pin 12.
 
 17 Nov 2012

 by Don Wilcher


 */
 // constants won't change; they're used here to
 // set pin numbers:
const int buttonPin = 2; // the number of the pushbutton pin
// the number of
const int ledPin = 11;
 //the LED pin
 // variables will change:
int buttonStatus = 0; //reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
 // initialize the LED pin as an output:
 pinMode(ledPin, OUTPUT);
 // initialize the pushbutton pin as an input:
 pinMode(buttonPin, INPUT);
}

void loop() {
// put your main code here, to run repeatedly:
// read the status of the pushbutton value:
 buttonStatus = digitalRead(buttonPin);
// check if the pushbutton is pressed                         
// if it is, the buttonEvent is HIGH:
 if (buttonStatus == HIGH) {
 digitalWrite(ledPin, HIGH);
 }
 else {
 digitalWrite(ledPin, LOW); // turn LED off:
 }
}
