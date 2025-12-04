 /*
  This project turns On all the LEDs once at the same time
  */

// Setup pins 4 to 12
void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

// Turn on all LEDs once
void loop() 
{
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(4, HIGH);          // switch on pin 4
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000); 
  digitalWrite(5, HIGH);          // switch on pin 5 
  digitalWrite(6, LOW);          // switch on  pin 6
  delay(1000);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW);          // switch on pin 7
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  

}





// This project is part of the ihacklab Manual
//  Copies are welcome to be shared or distributed publicly 
// as long proper citations  are observed. 
// Please cite as follows: 
// Biotronics: The Silver Species,  Joey Lawsin, 1988, USA.

