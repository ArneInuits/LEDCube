/**
 * This program is made for a 5 LED strip
 * The pattern should be a changing rainbow, starting from red to purple
 * Author: Arne Kerremans
 */

#include <FastLED.h>
#define DATA_PIN 2 //connect data in of first LED with Arduino port 2
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
#define NUM_LEDS 5
CRGB leds[NUM_LEDS];

int color[5];
int i=0;

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  leds[0] = CHSV( 0, 187, 255); // CHSV(color, saturation, brightness)
  color[0] = 0; //color of LED[0] set to 0
  leds[1] = CHSV( 5, 187, 255);
  color[1] = 10;
  leds[2] = CHSV( 10, 187, 255);
  color[2] = 20; 
  leds[3] = CHSV( 15, 187, 255);
  color[3] = 10;
  leds[4] = CHSV( 20, 187, 255);
  color[4] = 20;
}

void loop() {
  for(i=0;i<5;i++){ //don't use for(int i=0;i<5;i++) -> otherwise the LEDs will do strange things
      if(color[i]<250){
        color[i] = color[i]+1;
        leds[i] = CHSV( color[i], 187, 255);
        FastLED.show();
        delay(10);
      }
      else{
        color[i]=0;
        leds[i] = CHSV( color[i], 187, 255);
        FastLED.show();
        delay(10);
      }
    }
}


