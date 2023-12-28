// ###########################################################################################################################################
// #
// # Code for the printables "Neon LED clock" project:
// # https://www.printables.com/de/model/695490-neon-led-clock
// #
// # Code by https://github.com/AWSW-de
// #
// # Released under license: GNU General Public License v3.0: https://github.com/AWSW-de/Neon-LED-clock#GPL-3.0-1-ov-file
// #
// ###########################################################################################################################################


// ###########################################################################################################################################
// # Code version:
// ###########################################################################################################################################
String Code_Version = "V0.1.0";


// ###########################################################################################################################################
// # Settings:
// ###########################################################################################################################################
int UseAnimation = 0;  // Turn startup RGB animation on (1) or off (0)


// ###########################################################################################################################################
// # Includes:
// #
// # FastLED                // by Daniel Garcia               // https://github.com/FastLED/FastLED
// #
// ###########################################################################################################################################
#include "FastLED.h"


// ###########################################################################################################################################
// # Hardware settings:
// ###########################################################################################################################################
// How many LEDs are in your neon LED strip?:
#define NUM_LEDS 14 * 84
// Data pin - here IO32 on the Wemos D1 mini ESP32:
#define DATA_PIN 32


// ###########################################################################################################################################
// # Definitions:
// ###########################################################################################################################################
// Define the array of leds:
CRGB leds[NUM_LEDS];


// ###########################################################################################################################################
// # Startup function:
// ###########################################################################################################################################
void setup() {
  // Initialize the LED strip:
  FastLED.addLeds<WS2811, DATA_PIN, BRG>(leds, NUM_LEDS);

  // Switch all LEDs off first:
  LEDS.showColor(CRGB(0, 0, 0));

  // Set LED brightness (0-255);
  LEDS.setBrightness(64);

  // Some RGBW animation and LED color output testing first:
  if (UseAnimation == 1) {
    // Set all LEDs to red:
    for (int i = 0; i <= NUM_LEDS; i++) {
      leds[i] = CRGB::Red;
      FastLED.show();
      delay(25);
    }
    delay(1000);

    // Set all LEDs to green:
    for (int i = 0; i <= NUM_LEDS; i++) {
      leds[i] = CRGB::Green;
      FastLED.show();
      delay(25);
    }
    delay(1000);

    // Set all LEDs to blue:
    for (int i = 0; i <= NUM_LEDS; i++) {
      leds[i] = CRGB::Blue;
      FastLED.show();
      delay(25);
    }
    delay(1000);

    // Set all LEDs to white:
    for (int i = 0; i <= NUM_LEDS; i++) {
      leds[i] = CRGB::White;  // <<< LAST COLOR WHEN ANIMATION IS TURNED OFF <<<
      FastLED.show();
      delay(25);
    }
    delay(1000);

    // Switch all LEDs off again:
    LEDS.showColor(CRGB(0, 0, 0));
    delay(1000);
  }
}


// ###########################################################################################################################################
// # Runtime function:
// ###########################################################################################################################################
void loop() {
  timenumbers(1, 1);
  delay(1000);
  timenumbers(2, 1);
  delay(1000);
  timenumbers(3, 1);
  delay(1000);
  timenumbers(4, 1);
  delay(1000);
  timenumbers(5, 1);
  delay(1000);
  timenumbers(6, 1);
  delay(1000);
  timenumbers(7, 1);
  delay(1000);
  timenumbers(8, 1);
  delay(1000);
  timenumbers(9, 1);
  delay(1000);
  timenumbers(0, 1);
  delay(1000);
}


// ###########################################################################################################################################
// # Numbers and digits function:
// ###########################################################################################################################################
void timenumbers(int num, int digitoffset) {
  // Switch all LEDs off first:
  for (int i = 0; i <= NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
  }


  // Set digit position:
  int digitposition = -1;
  switch (digitoffset) {
    case 1:
      {
        digitposition = (14 * 0);  // H1
        break;
      }

    case 2:
      {
        digitposition = (14 * 1);  // H2
        break;
      }

    case 3:
      {
        digitposition = (14 * 2);  // M1
        break;
      }

    case 4:
      {
        digitposition = (14 * 3);  // M2
        break;
      }

    case 5:
      {
        digitposition = (14 * 4);  // S1
        break;
      }

    case 6:
      {
        digitposition = (14 * 5);  // S2
        break;
      }
  }

  // Set number value
  switch (num) {
    case 1: // 1
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        break;
      }

    case 2: // 2
      {
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[4 + digitposition] = CRGB::Cyan;
        leds[5 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        break;
      }

    case 3: // 3
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        break;
      }

    case 4: // 4
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[4 + digitposition] = CRGB::Cyan;
        leds[5 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[12 + digitposition] = CRGB::Cyan;
        leds[13 + digitposition] = CRGB::Cyan;
        break;
      }

    case 5: // 5
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        break;
      }

    case 6: // 6
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        leds[12 + digitposition] = CRGB::Cyan;
        leds[13 + digitposition] = CRGB::Cyan;
        break;
      }

    case 7: // 7
      {
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[4 + digitposition] = CRGB::Cyan;
        leds[5 + digitposition] = CRGB::Cyan;
        leds[12 + digitposition] = CRGB::Cyan;
        leds[13 + digitposition] = CRGB::Cyan;
        break;
      }

    case 8: // 8
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[4 + digitposition] = CRGB::Cyan;
        leds[5 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        leds[12 + digitposition] = CRGB::Cyan;
        leds[13 + digitposition] = CRGB::Cyan;
        break;
      }

    case 9: // 9 
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[4 + digitposition] = CRGB::Cyan;
        leds[5 + digitposition] = CRGB::Cyan;
        leds[6 + digitposition] = CRGB::Cyan;
        leds[7 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        leds[12 + digitposition] = CRGB::Cyan;
        leds[13 + digitposition] = CRGB::Cyan;
        break;
      }

    case 0: // 0
      {
        leds[0 + digitposition] = CRGB::Cyan;
        leds[1 + digitposition] = CRGB::Cyan;
        leds[2 + digitposition] = CRGB::Cyan;
        leds[3 + digitposition] = CRGB::Cyan;
        leds[4 + digitposition] = CRGB::Cyan;
        leds[5 + digitposition] = CRGB::Cyan;
        leds[8 + digitposition] = CRGB::Cyan;
        leds[9 + digitposition] = CRGB::Cyan;
        leds[10 + digitposition] = CRGB::Cyan;
        leds[11 + digitposition] = CRGB::Cyan;
        leds[12 + digitposition] = CRGB::Cyan;
        leds[13 + digitposition] = CRGB::Cyan;
        break;
      }
  }
  FastLED.show();
}