#include <FastLED.h>

#define NUM_LEDS 8
#define DATA_PIN 3
#define pulsador 14

CRGB leds[NUM_LEDS];
int red = 0, blue = 255;
boolean flag = true, flagb = true, estado = true;
byte num=0;

void setup() { 
       FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
       pinMode(pulsador,INPUT);
   }
   
   void loop() {
     if(digitalRead(pulsador) == 0 && estado == true)
     {
       estado = false;
       if(flagb)
       {
         num++;
         if(num == 8)
           flagb = false;
       }
       else
       {
         num--;
         if(num == 0)
           flagb = true;
       }
       }
       else if(digitalRead(pulsador) == 1 && estado == false)
         estado = true;
     
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
     
     for (int i=0; i<num; i++)
     {
        leds[i].r = red;
        leds[i].b = blue;
     }
     for (int i=7; i>=num; i--)
     {
       leds[i]= CRGB::Black;
     }
     FastLED.show();
     delay(15);
    }
