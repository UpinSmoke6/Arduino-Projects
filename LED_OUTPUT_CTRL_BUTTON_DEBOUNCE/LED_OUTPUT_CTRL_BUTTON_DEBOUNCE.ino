/*
This is good for toggling buttons over holding.
*/
const int LED=9;   //defined LED for pin 9
const int BUTTON=2; // button connected to pin 2
boolean lastButton = LOW; // Variable containing previous button state.
boolean currentButton = LOW; // Variable containing current button state.
boolean ledOn = false; // Present state of LED (on/off)

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); // Sets LED as an output.
pinMode(BUTTON, INPUT); // Set BUTTON as INPUT.
}
/* 
* Debouncing Function
* Pass it to previous button state,
* and get back to current debounce state.
*/
boolean debounce (boolean last)
{
  boolean current = digitalRead(BUTTON); // Read current button state.
  if (last != current)  // If it is different and not current.
  {
    delay(5); // wait 5ms.
    current = digitalRead(BUTTON); // Read Again

    return current;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  currentButton = debounce(lastButton); // Read debounce state
  if (lastButton == LOW && currentButton == HIGH) // if it was pressed.
  {
    ledOn = !ledOn; // Toggle the LED value.
  }
  lastButton = currentButton;

  digitalWrite(LED, ledOn); // change LED state.

  }