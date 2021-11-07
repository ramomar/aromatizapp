/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/edu/Documents/Aromatizapp/src/Aromatizapp.ino"
void setup();
void loop();
int aromatize(String command);
#line 1 "/Users/edu/Documents/Aromatizapp/src/Aromatizapp.ino"
int controlPin = D7;

void setup() {
  pinMode(controlPin, OUTPUT);
  Particle.function("aromatize", aromatize);
}

void loop() {

}

int aromatize(String command) {
    if (command=="aromatize") {
        digitalWrite(controlPin, HIGH);
        delay(50);
        digitalWrite(controlPin, LOW);
        return 1;
    }
    else {
      return -1;
    }
}
