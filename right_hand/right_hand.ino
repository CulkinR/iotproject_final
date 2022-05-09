/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
const int index = 8;
const int middle = 7;
const int ring = 6;
const int pinkie = 5;

#include <Wire.h>
#include "rgb_lcd.h"


// variables will change:
int indexState = 0; 
int middleState = 0;
int ringState = 0;
int pinkieState = 0;

void setup() {
  // initialize the LED pin as an output:
  // initialize the pushbutton pin as an input:
  pinMode(index, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  
  // read the state of the pushbutton value:
  indexState = digitalRead(index);
  middleState = digitalRead(middle);
  ringState = digitalRead(ring);
  pinkieState = digitalRead(pinkie);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (ringState == HIGH && middleState == HIGH && indexState == HIGH) {
    
    Serial.begin(9600);
    Serial.print("T");   
    delay(500);                       
    
  }
  else if (pinkieState == HIGH && middleState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("X");   
    delay(500);  
    
  }
  else if (pinkieState == HIGH && ringState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("Z");   
    delay(500);
  }
  else if (middleState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("P");   
    delay(500);
  }
  else if (ringState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("R");   
    delay(500);
  }
  else if (middleState == HIGH && ringState == HIGH) {
    Serial.begin(9600);
    Serial.print("S");   
    delay(500);
  }
  else if (pinkieState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("V");   
    delay(500);
  }
  else if (pinkieState == HIGH && middleState == HIGH) {
    Serial.begin(9600);
    Serial.print("W");   
    delay(500);
  }
  else if (pinkieState == HIGH && ringState == HIGH) {
    Serial.begin(9600);
    Serial.print("Y");   
    delay(500);
  }
  else if (indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("N");
    rgb_lcd lcd;
    lcd.begin(16, 2); 
    lcd.print("A"); 
    delay(500);
    lcd.clear();
  }
  else if (middleState == HIGH) {
    Serial.begin(9600);
    Serial.print("O");   
    delay(500);
  }
  else if (ringState == HIGH) {
    Serial.begin(9600);
    Serial.print("Q");   
    delay(500);
  }
  else if (pinkieState == HIGH) {
    Serial.begin(9600);
    Serial.print("U");   
    delay(500);
  }
  
  else {
     
  }
}
