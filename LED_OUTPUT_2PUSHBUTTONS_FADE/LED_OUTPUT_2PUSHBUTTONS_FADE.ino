#define LED_PIN    9
#define BUTTON_PIN 7     // Button 1
#define BUTTON_PIN2 6    // Button 2

void setup() {
  pinMode(LED_PIN, OUTPUT);

  // Internal pull-ups: unpressed = HIGH, pressed = LOW
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
}

void loop() {
  bool button1Pressed = (digitalRead(BUTTON_PIN)  == HIGH);
  bool button2Pressed = (digitalRead(BUTTON_PIN2) == HIGH);

  // Case 1: neither button pressed -> LED OFF
  if (!button1Pressed && !button2Pressed) {
    digitalWrite(LED_PIN, LOW);
  }
  // Case 2: button 1 only -> solid ON
  else if (button1Pressed && !button2Pressed) {
    digitalWrite(LED_PIN, HIGH);
  }
  // Case 3: button 1 + button 2 -> fade
  else if (button1Pressed && button2Pressed) {
    fadeLED();
  }
  // Case 4: button 2 only -> also OFF (you can change this if you want)
  else {
    digitalWrite(LED_PIN, LOW);
  }
}

void fadeLED() {
  // Fade up
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED_PIN, i);
    delay(5);
  }
  // Fade down
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED_PIN, i);
    delay(5);
  }
}