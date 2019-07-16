
#include <OnionLibrary.h>

// Board power.
static const int PIN_BOARD = 1;
// System LED.
static const int PIN_LED = 13;

// How many LED pins.
static const int LED_PINS_COUNT = 2;
// LED pins.
static const int LED_PINS[LED_PINS_COUNT] = {
  PIN_BOARD,
  PIN_LED
};

// Pointer to onion setup.
Onion* onionSetup;

void setup() {
  // Setup Onion.
  onionSetup = new Onion;
  // Setup LEDs to output mode.
  for(int i = 0; i <= LED_PINS_COUNT; ++i)
      pinMode(LED_PINS[i], OUTPUT);
}

void loop() {
  // LEDs on.
  for(int i = 0; i <= LED_PINS_COUNT; ++i)
      digitalWrite(LED_PINS[i], HIGH);
  // Wait 1s.
  delay(1000);
  // LEDs off.
  for(int i = 0; i <= LED_PINS_COUNT; ++i)
      digitalWrite(LED_PINS[i], LOW);
  // Wait 1s.
  delay(1000);
}
