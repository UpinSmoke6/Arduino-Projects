// Simple DC motor with potentiometer

const int MOTOR=9; // Pin 9 is at motor
const int POT=0; // Analog pin 0

int val = 0;


void setup() {
  pinMode(MOTOR, OUTPUT);

}

void loop() 
{
    for (int i=0; i<256; i++)
    {
      analogWrite(MOTOR, i);
      delay(10);
    }
    delay(2000);
    for (int i=255; i>0; i--)
    {
      analogWrite(MOTOR, i);
      delay(10);
    }
    delay(2000);
}