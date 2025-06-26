const int BLED=9; //Blue LED pin 9
const int GLED=10; // Green LED pin 10
const int RLED=11; // Red LED pin 11
const int BUTTON=2; // Button pin 2

boolean lastButton = LOW;  //last button state
boolean currentButton = LOW; // current button state
int ledMode = 0; // Cycle between LED states

void setup() {
  // put your setup code here, to run once:
pinMode(BLED, OUTPUT);  // Blue LED as output
pinMode(GLED, OUTPUT);  // Green LED as output
pinMode(RLED, OUTPUT);  // Red LED as output
pinMode(BUTTON, INPUT); // Button as input
}

/*
* Debouncing Function
*/
boolean debounce(boolean last)
{
  boolean current = digitalRead(BUTTON); // read the button state
  if (last != current)
  {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}
/*
* LED mode selection
*/
void setMode(int mode)
{
  //RED
  if (mode == 1)
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, LOW);
  }
   //GREEN
  if (mode == 2)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, HIGH);
    digitalWrite(BLED, LOW);
  }
   //BLUE
  if (mode == 3)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, HIGH);
  }
   //PURPLE (red + blue)
  if (mode == 4)
  {
    digitalWrite(RLED, 127);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, 127);
  }
   //TEAL (Blue + Green)
  if (mode == 5)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, 127);
    digitalWrite(BLED, 127);
  }
   //ORANGE (GREEN + RED)
  if (mode == 6)
  {
    digitalWrite(RLED, 127);
    digitalWrite(GLED, 127);
    digitalWrite(BLED, LOW);
  }
   //White (RGB)
  if (mode == 7)
  {
    digitalWrite(RLED, 85);
    digitalWrite(GLED, 85);
    digitalWrite(BLED, 85);
  }
 //OFF
  if (mode == 0)
  {
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, LOW);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
currentButton = debounce(lastButton); //read debounce state
if (lastButton == LOW && currentButton == HIGH) // if it was pressed
{
  ledMode++; // increment LED value
}
lastButton = currentButton; //reset button value
// if you've cycled through the different options
// reset counter to 0
if (ledMode == 8) ledMode=0;
setMode(ledMode);
}
