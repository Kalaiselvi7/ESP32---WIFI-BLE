#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

#define LED_PIN 2

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW); // LED OFF initially

  // Start Bluetooth
  SerialBT.begin("ESP32_LED"); // Bluetooth device name
  Serial.println("Bluetooth Started. Pair with ESP32_LED");
}

void loop() {
  if (SerialBT.available()) {
    char data = SerialBT.read();

    if (data == '1') {
      digitalWrite(LED_PIN, HIGH);
      SerialBT.println("LED ON");
    }
    else if (data == '0') {
      digitalWrite(LED_PIN, LOW);
      SerialBT.println("LED OFF");
    }
  }
}
