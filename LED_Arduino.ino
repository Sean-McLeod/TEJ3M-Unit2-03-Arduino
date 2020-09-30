/*
  Created by: Sean McLeod   Created on: Sept 2020
  Turns an LED on for one second, then off for one
  second, repeatedly.
*/

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
