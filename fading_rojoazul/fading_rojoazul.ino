#include <FastLED.h>
#define NUM_LEDS 8
#define DATA_PIN 3
#define t 200
CRGB leds[NUM_LEDS];
int red = 0, blue = 255;
boolean flag = true;

void setup() { 
       FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
       
   }
   
   void loop() {
     if(flag)
     {
       red++;
       blue--;
       if(red == 255)
         flag = false;
     }
     else
     {
       red--;
       blue++;
       if(red == 0)
         flag = true;
     }
     
     for (int i=0; i<8; i++)
     {
        leds[i].r = red;
        leds[i].b = blue;
     }
     FastLED.show();
     delay(15);
    }
