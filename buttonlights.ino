#include <Adafruit_CircuitPlayground.h>
#include "lights.h"

const int NUMBER_OF_PIXELS = 10;
const int DELAY_MILLIS = 50;
const int HOLD_MILLIS = 500;

bool rightButtonJustPressed = false;

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  if (!CircuitPlayground.rightButton()) {
    rightButtonJustPressed = false;
    return;
  }

  if (!rightButtonJustPressed) {
    light_loop(NUMBER_OF_PIXELS, DELAY_MILLIS, HOLD_MILLIS);
    rightButtonJustPressed = true;
  }
}
