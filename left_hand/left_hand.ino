
/*Serial.begin(9600);
    Serial.print("A");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "A"; 
    lcd.print(characters); 
    delay(500);*/
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
String characters = "";

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
    Serial.print("G");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "G"; 
    lcd.print(characters); 
    delay(500);                       
    
  }
  else if (pinkieState == HIGH && middleState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("K");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "K"; 
    lcd.print(characters); 
    delay(500);
    
  }
  else if (pinkieState == HIGH && ringState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("M");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "M"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (middleState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("C");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "C"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (ringState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("E");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "E"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (middleState == HIGH && ringState == HIGH) {
    Serial.begin(9600);
    Serial.print("F");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "F"; 
    lcd.print(characters); 
    delay(500);
    
  }
  else if (pinkieState == HIGH && indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("I");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "I"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (pinkieState == HIGH && middleState == HIGH) {
    Serial.begin(9600);
    Serial.print("J");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "J"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (pinkieState == HIGH && ringState == HIGH) {
    Serial.begin(9600);
    Serial.print("L");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "L"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (indexState == HIGH) {
    Serial.begin(9600);
    Serial.print("A");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "A"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (middleState == HIGH) {
    Serial.begin(9600);
    Serial.print("B");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "B"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (ringState == HIGH) {
    Serial.begin(9600);
    Serial.print("D");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "D"; 
    lcd.print(characters); 
    delay(500);
  }
  else if (pinkieState == HIGH) {
    Serial.begin(9600);
    Serial.print("H");
    rgb_lcd lcd;
    lcd.begin(16, 2);
    characters += "H"; 
    lcd.print(characters); 
    delay(500);
  }
  
  else {
     
  }
}
