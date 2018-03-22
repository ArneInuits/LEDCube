/**
 * This program is made for a 5 LED strip
 * The pattern should be a changing rainbow, starting from red to purple
 * Author: Arne Kerremans
 */

#include <FastLED.h>
#define DATA_PIN 2
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
#define NUM_LEDS 5
CRGB leds[NUM_LEDS];

int kleur[5];

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  leds[0] = CHSV( 0, 187, 255);
  kleur[0] = 0;
  leds[1] = CHSV( 5, 187, 255);
  kleur[1] = 10;
  leds[2] = CHSV( 10, 187, 255);
  kleur[2] = 20; 
  leds[3] = CHSV( 15, 187, 255);
  kleur[3] = 10;
  leds[4] = CHSV( 20, 187, 255);
  kleur[4] = 20;
}

void loop() {
  for(int i=0;i<9;i++){
      if(kleur[i]<250){
        kleur[i] = kleur[i]+5;
        leds[i] = CHSV( kleur[i], 187, 255);
      }
      else{
        kleur[i]=0;
        leds[i] = CHSV( kleur[i], 187, 255);
      }
    }
    FastLED.show();
    delay(20);
}


