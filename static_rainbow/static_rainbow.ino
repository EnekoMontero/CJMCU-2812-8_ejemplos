#include <FastLED.h>
#define NUM_LEDS 8
#define DATA_PIN 3
#define t 200
CRGB leds[NUM_LEDS];

void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(32);
  leds[0] = CRGB::White;
  leds[1] = CRGB::Red;
  leds[2] = CRGB::Orange;
  leds[3] = CRGB::Yellow;
  leds[4] = CRGB::Green;
  leds[5] = CRGB::Cyan;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Purple;
  FastLED.show();
}
   
void loop() {
}
