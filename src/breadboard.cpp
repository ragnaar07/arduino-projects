#include <Arduino.h>

// Using standard modern C++ practice: Define the hardware pin as a constant expression
constexpr uint8_t EXTERNAL_LED_PIN = 2;

void setup() {
  // Initialize communication for debugging
  Serial.begin(115200);
  while (!Serial && millis() < 3000);

  // Configure digital pin 2 to supply voltage out to the breadboard
  pinMode(EXTERNAL_LED_PIN, OUTPUT);
  
  Serial.println("--- Breadboard LED Controller Initialized ---");
}

void loop() {
  // Turn the external breadboard LED on
  digitalWrite(EXTERNAL_LED_PIN, HIGH);
  Serial.println("Breadboard LED Status: ON");
  delay(1000); // Wait 1 second

  // Turn the external breadboard LED off
  digitalWrite(EXTERNAL_LED_PIN, LOW);
  Serial.println("Breadboard LED Status: OFF");
  delay(1000); // Wait 1 second
}
