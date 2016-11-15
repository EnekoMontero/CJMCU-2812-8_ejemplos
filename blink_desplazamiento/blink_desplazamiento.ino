#include <FastLED.h>
#define NUM_LEDS 8
#define DATA_PIN 3
#define t 200
CRGB leds[NUM_LEDS];

void setup() { 
       FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
       leds[0] = CRGB::White;
       FastLED.show();
       delay(200);
   }
   
   void loop() {
     for (int i=1; i<8; i++)
     {
        leds[i] = CRGB::White;  
        leds[i-1] = CRGB::Black;
        FastLED.show();
        delay(t);
      }
      for (int i=6; i>=0; i--)
      {
        leds[i] = CRGB::White;  
        leds[i+1] = CRGB::Black;
        FastLED.show();
        delay(t);
      }
    }
