// Temperature Alert!
const int RLED=9;
const int LIGHT=0;
const int MIN_LIGHT=200;
const int MAX_LIGHT=900;


int val = 0; //variable to hold temp reading


void setup() {
  // put your setup code here, to run once:

pinMode(RLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(LIGHT);
val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0); // maps light reading
val = constrain(val, 0, 255);
analogWrite(RLED, val);
}

