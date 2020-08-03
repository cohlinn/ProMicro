/*
 * Move mouse every SLEEP_TIME to keep PC from going to sleep.
 */

#include "Mouse.h"
#define SLEEP_TIME 540000 //9 mins = 9 * 60 * 1000

int RXLED = 17;  // The RX LED has a defined Arduino pin

void setup() {
//  Serial.begin(9600);
//  RXLED1; //OFF
//  pinMode(RXLED, OUTPUT);  // Set RX LED as an output
  // initialize mouse control:
  Mouse.begin();  
  delay(1000); //to clear the TX RX signals
//  digitalWrite(RXLED, LOW);    // set the RX LED ON
//  delay(500);
  TXLED1; //OFF
  RXLED1; //OFF
/*  TXLED0; //ON */
 // digitalWrite(RXLED, HIGH);    // set the RX LED OFF
}

void loop() {
//  digitalWrite(RXLED, LOW);    // set the RX LED ON
  Mouse.move(0, -40);
  Mouse.move(0,  40);
  delay(500);
//  digitalWrite(RXLED, HIGH);    // set the RX LED OFF
  RXLED1; //OFF
  TXLED1; //OFF
  delay(SLEEP_TIME);
}
