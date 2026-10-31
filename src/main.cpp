#include <Arduino.h>

// Function declaration (prototype)
int myFunction(int, int);

void setup() {
  // Initialize the USB-C serial connection at 115200 baud rate
  Serial.begin(115200);
  
  // Wait up to 3 seconds for the serial port to open (crucial for native USB boards like Uno R4)
  while (!Serial && millis() < 3000); 

  // Configure the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);

  // Call your custom function and store the value
  int result = myFunction(2, 3);

  // Print the math result to the Serial Monitor
  Serial.println("--- Uno R4 Minima Booted Successfully ---");
  Serial.print("The result of myFunction(2, 3) is: ");
  Serial.println(result);
}

void loop() {
  // Visual heartbeat: Blink the onboard LED continuously
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

// Function definition (implementation)
int myFunction(int x, int y) {
  return x + y;
}
