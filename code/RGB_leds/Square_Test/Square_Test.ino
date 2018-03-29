#include <FastLED.h>
#define DATA_PIN 2
#define LED_TYPE WS2812
#define NUM_LEDS 1
#define COLOR_ORDER GRB
const unsigned int BUTTON_PIN = 25;
CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  FastLED.addLeds<WS2812, DATA_PIN>(leds, NUM_LEDS);
}
void fillsquare()
{
  
}
void Array1()
{
  leds[0]  = CHSV(96,255,150); //GREEN
  leds[9]  = CHSV(96,255,150); //GREEN
  leds[10] = CHSV(96,255,150); //GREEN
  leds[19] = CHSV(96,255,150); //GREEN
  leds[20] = CHSV(96,255,150); //GREEN
}
void Array2()
{
  leds[1]  = CHSV(160,255,150);  //BLUE
  leds[8]  = CHSV(160,255,150);  //BLUE
  leds[11]  = CHSV(160,255,150); //BLUE
  leds[19]  = CHSV(96,255,150);  //GREEN
  leds[21]  = CHSV(160,255,150); //BLUE
}
void Array3()
{
  leds[2]  = CHSV(160,255,150);  //BLUE
  leds[7]  = CHSV(96,255,150);   //GREEN
  leds[12]  = CHSV(160,255,150); //BLUE
  leds[17]  = CHSV(96,255,150);  //GREEN
  leds[22]  = CHSV(160,255,150); //BLUE
}
void Array4()
{
  leds[3]  = CHSV(160,255,150);
  leds[6]  = CHSV(160,255,150);
  leds[13]  = CHSV(96,255,150);
  leds[16]  = CHSV(96,255,150);
  leds[23]  = CHSV(96,255,150); 
}
void Array5()
{
  leds[4]  = CHSV(96,255,150);
  leds[5]  = CHSV(96,255,150);
  leds[14]  = CHSV(96,255,150);
  leds[15]  = CHSV(96,255,150);
  leds[24]  = CHSV(96,255,150);
}
