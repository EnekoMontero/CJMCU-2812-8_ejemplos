#include <FastLED.h>
#define NUM_LEDS 16
#define DATA_PIN A0
#define t 200
CRGB leds[NUM_LEDS];

void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
  
}
   
void loop() {
  for (int i=0; i<NUM_LEDS; i++)
  {
  leds[i%16] = CRGB::White;
  leds[(i+1)%16] = CRGB::Red;
  leds[(i+2)%16] = CRGB::Orange;
  leds[(i+3)%16] = CRGB::Yellow;
  leds[(i+4)%16] = CRGB::Green;
  leds[(i+5)%16] = CRGB::Cyan;
  leds[(i+6)%16] = CRGB::Blue;
  leds[(i+7)%16] = CRGB::Purple;
  leds[(i+8)%16] = CRGB::White;
  leds[(i+9)%16] = CRGB::Red;
  leds[(i+10)%16] = CRGB::Orange;
  leds[(i+11)%16] = CRGB::Yellow;
  leds[(i+12)%16] = CRGB::Green;
  leds[(i+13)%16] = CRGB::Cyan;
  leds[(i+14)%16] = CRGB::Blue;
  leds[(i+15)%16] = CRGB::Purple;
  FastLED.show();
  delay(150);
  }
}
