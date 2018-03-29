#include <FastLED.h>
#define DATA_PIN 2
#define LED_TYPE WS2812
#define NUM_LEDS 1
#define COLOR_ORDER GRB
const unsigned int BUTTON_PIN = 7;
CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, DATA_PIN>(leds, NUM_LEDS);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  const int BUTTON_STATE = digitalRead(BUTTON_PIN);
  if(BUTTON_STATE == HIGH)
  {
    leds[0]=CHSV(0,197,150);
    FastLED.show();
    delay(500);
    leds[0]=CHSV(64,197,150);
    FastLED.show();
    delay(500);
    leds[0]=CHSV(96,197,150);
    FastLED.show();
    delay(500);
    leds[0]=CHSV(160,197,150);
    FastLED.show();
    delay(500);
  }
}
