#include <Arduino.h>
#include "FastLED.h"

#define NUM_LEDS 21
#define DATA_PIN 27
#define CLOCK_PIN 13

CRGB leds[NUM_LEDS];


void setup() {
  // put your setup code here, to run once:
  delay(2000);
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS); 
}

void loop() {
  // put your main code here, to run repeatedly:

  leds[0] = CRGB(255,0,0);
  leds[1] = CRGB(0,255,0);
  leds[2] = CRGB(0,255,0);
  leds[3] = CRGB(0,0,255);
  leds[4] = CRGB(0,0,255);
  leds[5] = CRGB(0,0,255);
  leds[6] = CRGB(0,0,0);
  FastLED.show();
  delay(1000);
}