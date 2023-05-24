#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      12

// Creates the strip variable with the correct parameters
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // Strip init
  strip.begin();
  strip.show();
  for (int i = 0; i < strip.numPixels(); i = i + 1) {
    strip.setPixelColor(i, 0, 0, 0);    //turn every pixel off
  }
  strip.show();
}

// Funtion to have the rainbow colors
void rainbow(uint8_t wait) {uint16_t i, j;
  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Set the strip to off
void black() {
  for (int i = 0; i < strip.numPixels(); i = i + 1) {
    strip.setPixelColor(i, 0, 0, 0);
  }
  strip.show();
}


void VertJauneRouge() {
  // All green
  for (int i = 0; i < NUMPIXELS; i = i + 1) {
    strip.setPixelColor(i, 0, 255, 0);
  }
  strip.show();

  // To Yellow
  for  (int i = 0; i < 255; i = i + 1) {
    for (int j = 0; j < NUMPIXELS; j = j + 1) {
      strip.setPixelColor(j, i, 255, 0);
      strip.show();
    }
  }  
  delay(500);
    
  // To red
  for  (int i = 255; i > 0; i = i - 1) {
    for (int j = 0; j < NUMPIXELS; j = j + 1) {
      strip.setPixelColor(j, 255, i, 0);
      strip.show();
    }
  }
  delay(500);

  // To green
  for  (int i = 0; i < 255; i = i + 1) {
    for (int j = 0; j < NUMPIXELS; j = j + 1) {
      strip.setPixelColor(j, 255 - i, i, 0);
      strip.show();
    }
  }
  delay(500);
}

// Position on the color wheel for Rainbow
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

// Color variation function
void Variation()
{
  // variables de couleurs
   int Rouge[]={255,0,0};
   int Vert[]={0,255,0};
   int Bleu[]={0,0,255};
   int Jaune[]={255,255,0};
   int Mauve[]={255,0,255};
   int Ciel[]={0,255,255};
   int Blanc[]={255,255,255};
   
   // Red

   // Progressive on
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Rouge[0]/255) , (level*Rouge[1]/255), (level*Rouge[2]/255));
        }
        strip.show();
        delay(10);
   }
   // Progressive off
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Rouge[0]/255) , (level*Rouge[1]/255), (level*Rouge[2]/255));
        }
        strip.show();
        delay(10);
   }

   // Green
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Vert[0]/255) , (level*Vert[1]/255), (level*Vert[2]/255));
        }
        strip.show();
        delay(10);
   }
   
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Vert[0]/255) , (level*Vert[1]/255), (level*Vert[2]/255));
        }
        strip.show();
        delay(10);
   }


   // Blue
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Bleu[0]/255) , (level*Bleu[1]/255), (level*Bleu[2]/255));
        }
        strip.show();
        delay(10);
   }
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Bleu[0]/255) , (level*Bleu[1]/255), (level*Bleu[2]/255));
        }
        strip.show();
        delay(10);
   }


   // Yellow
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Jaune[0]/255) , (level*Jaune[1]/255), (level*Jaune[2]/255));
        }
        strip.show();
        delay(10);
        
   }
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Jaune[0]/255) , (level*Jaune[1]/255), (level*Jaune[2]/255));
        }
        strip.show();
        delay(10);
   }


   // Purple
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Mauve[0]/255) , (level*Mauve[1]/255), (level*Mauve[2]/255));
        }
        strip.show();
        delay(10);
   }
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Mauve[0]/255) , (level*Mauve[1]/255), (level*Mauve[2]/255));
        }
        strip.show();
        delay(10);
   }


   // Skyblue
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Ciel[0]/255) , (level*Ciel[1]/255), (level*Ciel[2]/255));
        }
        strip.show();
        delay(10);
   }
   
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Ciel[0]/255) , (level*Ciel[1]/255), (level*Ciel[2]/255));
        }
        strip.show();
        delay(10);
   }


   // White
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Blanc[0]/255) , (level*Blanc[1]/255), (level*Blanc[2]/255));
        }
        strip.show();
        delay(10);
   }
   
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Blanc[0]/255) , (level*Blanc[1]/255), (level*Blanc[2]/255));
        }
        strip.show();
        delay(10);
   }
}

// Turn the strip red
void red() {
  for (int i = 0; i < strip.numPixels(); i = i + 1) {
    strip.setPixelColor(i, 255, 0, 0);
  }
  strip.show();
}

// Turn the strip blue
void blue() {
  for (int i = 0; i < strip.numPixels(); i = i + 1) {
    strip.setPixelColor(i, 0, 0, 255);
  }
  strip.show();
}


void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 30; i = i + 1) {
    rainbow(25);
  }
  for (int i = 0; i < 30; i = i + 1) {
    Variation();
  }
  for (int i = 0; i < 30; i = i + 1) {
    VertJauneRouge();
  }
}
