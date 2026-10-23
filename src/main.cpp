#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);
#define LED_PIN 5 

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(100);

  digitalWrite(LED_PIN, LOW);
  delay(100);
}
