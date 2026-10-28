#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);
#define LedR 5
#define LedB 4 

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  pinMode(LedR, OUTPUT);
  pinMode(LedB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LedR, HIGH);
  delay(200);
  digitalWrite(LedR, LOW);
  digitalWrite(LedB, HIGH);
  delay(200);
  digitalWrite(LedB, LOW);

}
