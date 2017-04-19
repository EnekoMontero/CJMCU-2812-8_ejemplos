#include <FastLED.h>
#define NUM_LEDS 8
#define DATA_PIN 3
#define t 200
CRGB leds[NUM_LEDS];

void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(32);
  for (int i=0; i<8; i++)
  {
  leds[i%8] = CRGB::White;
  leds[(i+1)%8] = CRGB::Red;
  leds[(i+2)%8] = CRGB::Orange;
  leds[(i+3)%8] = CRGB::Yellow;
  leds[(i+4)%8] = CRGB::Green;
  leds[(i+5)%8] = CRGB::Cyan;
  leds[(i+6)%8] = CRGB::Blue;
  leds[(i+7)%8] = CRGB::Purple;
  FastLED.show();
  delay(150);
  }
}
   
void loop() {
}
