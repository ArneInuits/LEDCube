#include <FastLED.h>
#define DATA_PIN 12
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
#define NUM_LEDS 25
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  vijf();
  delay(1000);
  vier();
  delay(1000);
  drie();
  delay(1000);
  twee();
  delay(1000);
  een();
  delay(1000);
}

void vijf(){
  leds[0]  = CHSV(96,255,0); 
  leds[9]  = CHSV(96,255,0); 
  leds[10] = CHSV(96,255,0); 
  leds[19] = CHSV(96,255,0); 
  leds[20] = CHSV(96,255,0);

  leds[1]  = CHSV(96,255,150);  
  leds[8]  = CHSV(96,255,0);  
  leds[11]  = CHSV(96,255,150); 
  leds[18]  = CHSV(96,255,150);  
  leds[21] = CHSV(96,255,150); 

  leds[2]  = CHSV(96,255,150);  
  leds[7]  = CHSV(96,255,0);   
  leds[12]  = CHSV(96,255,150); 
  leds[17]  = CHSV(96,255,0);  
  leds[22] = CHSV(96,255,150); 

  leds[3]  = CHSV(96,255,150);
  leds[6]  = CHSV(96,255,150);
  leds[13]  = CHSV(96,255,150);
  leds[16]  = CHSV(96,255,0);
  leds[23] = CHSV(96,255,150); 

  leds[4]  = CHSV(96,255,0);
  leds[5]  = CHSV(96,255,0);
  leds[14]  = CHSV(96,255,0);
  leds[15]  = CHSV(96,255,0);
  leds[24] = CHSV(96,255,0);

  FastLED.show();
}

void vier(){
  leds[0]  = CHSV(96,255,0); 
  leds[9]  = CHSV(96,255,0); 
  leds[10] = CHSV(96,255,0); 
  leds[19] = CHSV(96,255,0); 
  leds[20] = CHSV(96,255,0);

  leds[1]  = CHSV(96,255,0);  
  leds[8]  = CHSV(96,255,0);  
  leds[11]  = CHSV(96,255,150); 
  leds[18]  = CHSV(96,255,150);  
  leds[21] = CHSV(96,255,150); 

  leds[2]  = CHSV(96,255,0);  
  leds[7]  = CHSV(96,255,0);   
  leds[12]  = CHSV(96,255,150); 
  leds[17]  = CHSV(96,255,0);  
  leds[22] = CHSV(96,255,0); 

  leds[3]  = CHSV(96,255,150);
  leds[6]  = CHSV(96,255,150);
  leds[13]  = CHSV(96,255,150);
  leds[16]  = CHSV(96,255,150);
  leds[23] = CHSV(96,255,150); 

  leds[4]  = CHSV(96,255,0);
  leds[5]  = CHSV(96,255,0);
  leds[14]  = CHSV(96,255,0);
  leds[15]  = CHSV(96,255,0);
  leds[24] = CHSV(96,255,0);

  FastLED.show();
}

void drie(){
  leds[0]  = CHSV(96,255,0); 
  leds[9]  = CHSV(96,255,0); 
  leds[10] = CHSV(96,255,0); 
  leds[19] = CHSV(96,255,0); 
  leds[20] = CHSV(96,255,0);

  leds[1]  = CHSV(96,255,150);  
  leds[8]  = CHSV(96,255,0);  
  leds[11]  = CHSV(96,255,150); 
  leds[18]  = CHSV(96,255,0);  
  leds[21] = CHSV(96,255,150); 

  leds[2]  = CHSV(96,255,150);  
  leds[7]  = CHSV(96,255,0);   
  leds[12]  = CHSV(96,255,150); 
  leds[17]  = CHSV(96,255,0);  
  leds[22] = CHSV(96,255,150); 

  leds[3]  = CHSV(96,255,150);
  leds[6]  = CHSV(96,255,150);
  leds[13]  = CHSV(96,255,150);
  leds[16]  = CHSV(96,255,150);
  leds[23] = CHSV(96,255,150); 

  leds[4]  = CHSV(96,255,0);
  leds[5]  = CHSV(96,255,0);
  leds[14]  = CHSV(96,255,0);
  leds[15]  = CHSV(96,255,0);
  leds[24] = CHSV(96,255,0);

  FastLED.show();
}

void twee(){
  leds[0]  = CHSV(96,255,0); 
  leds[9]  = CHSV(96,255,0); 
  leds[10] = CHSV(96,255,0); 
  leds[19] = CHSV(96,255,0); 
  leds[20] = CHSV(96,255,0);

  leds[1]  = CHSV(96,255,150);  
  leds[8]  = CHSV(96,255,150);  
  leds[11]  = CHSV(96,255,150); 
  leds[18]  = CHSV(96,255,0);  
  leds[21] = CHSV(96,255,150); 

  leds[2]  = CHSV(96,255,150);  
  leds[7]  = CHSV(96,255,0);   
  leds[12]  = CHSV(96,255,150); 
  leds[17]  = CHSV(96,255,0);  
  leds[22] = CHSV(96,255,150); 

  leds[3]  = CHSV(96,255,150);
  leds[6]  = CHSV(96,255,0);
  leds[13]  = CHSV(96,255,150);
  leds[16]  = CHSV(96,255,150);
  leds[23] = CHSV(96,255,150); 

  leds[4]  = CHSV(96,255,0);
  leds[5]  = CHSV(96,255,0);
  leds[14]  = CHSV(96,255,0);
  leds[15]  = CHSV(96,255,0);
  leds[24] = CHSV(96,255,0);

  FastLED.show();
}

void een(){
  leds[0]  = CHSV(96,255,0); 
  leds[9]  = CHSV(96,255,0); 
  leds[10] = CHSV(96,255,0); 
  leds[19] = CHSV(96,255,0); 
  leds[20] = CHSV(96,255,0);

  leds[1]  = CHSV(96,255,0);  
  leds[8]  = CHSV(96,255,0);  
  leds[11]  = CHSV(96,255,0); 
  leds[18]  = CHSV(96,255,0);  
  leds[21] = CHSV(96,255,0); 

  leds[2]  = CHSV(96,255,150);  
  leds[7]  = CHSV(96,255,150);   
  leds[12]  = CHSV(96,255,150); 
  leds[17]  = CHSV(96,255,150);  
  leds[22] = CHSV(96,255,150); 

  leds[3]  = CHSV(96,255,0);
  leds[6]  = CHSV(96,255,0);
  leds[13]  = CHSV(96,255,0);
  leds[16]  = CHSV(96,255,0);
  leds[23] = CHSV(96,255,0); 

  leds[4]  = CHSV(96,255,0);
  leds[5]  = CHSV(96,255,0);
  leds[14]  = CHSV(96,255,0);
  leds[15]  = CHSV(96,255,0);
  leds[24] = CHSV(96,255,0);

  FastLED.show();
}


