#include <Adafruit_CircuitPlayground.h>

void light_loop(int number_of_pixels, int delay_millis, int hold_millis) {
    uint8_t pixeln = 0;
    while (pixeln <= number_of_pixels) {
      CircuitPlayground.setPixelColor(pixeln++, CircuitPlayground.colorWheel(25 * pixeln));
      if (pixeln == number_of_pixels) {
        delay(hold_millis);
        CircuitPlayground.clearPixels();
      } else {
        delay(delay_millis);
      }
    }
}
