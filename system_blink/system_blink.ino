
#include <OnionLibrary.h>

// System LED.
static const int PIN_LED = 13;

// Pointer to onion setup.
Onion* onionSetup;

void setup() {
  // Setup Onion.
  onionSetup = new Onion;
  // Setup system LED to output mode.
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // System LED on.
  digitalWrite(PIN_LED, HIGH);
  // Wait 1s.
  delay(1000);
  // System LED off.
  digitalWrite(PIN_LED, LOW);
  // Wait 1s.
  delay(1000);
}
