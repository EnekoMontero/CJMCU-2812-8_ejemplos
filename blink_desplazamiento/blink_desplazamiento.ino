#include <FastLED.h>
#define NUM_LEDS 16
#define DATA_PIN A0
#define t 60
CRGB leds[NUM_LEDS];

void setup() { 
       FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
       leds[0] = CRGB::White;
       FastLED.show();
       delay(200);
   }
   
   void loop() {
     for (int i=1; i<NUM_LEDS; i++)
     {
        leds[i] = CRGB::White;  
        leds[i-1] = CRGB::Black;
        FastLED.show();
        delay(t);
      }
      for (int i=NUM_LEDS-2; i>=0; i--)
      {
        leds[i] = CRGB::White;  
        leds[i+1] = CRGB::Black;
        FastLED.show();
        delay(t);
      }
    }
