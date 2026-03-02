#define BUTTON_PIN 4
#define LED_PIN 5   // built-in LED

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    digitalWrite(LED_PIN, HIGH);  // LED ON
  } else {
    digitalWrite(LED_PIN, LOW);   // LED OFF
  }
}
