#include <Adafruit_CircuitPlayground.h>
#include <Arduino.h>

void light_loop(int number_of_pixels, int delay_millis) {
    uint8_t pixeln = 0;
    while (pixeln <= number_of_pixels) {
      CircuitPlayground.setPixelColor(pixeln++, CircuitPlayground.colorWheel(25 * pixeln));
      delay(delay_millis);
    }
}
