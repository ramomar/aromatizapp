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
    delay(10);
    digitalWrite(controlPin, LOW);
    return 1;
  }
  else {
    return -1;
  }
}
