 /*
Author: Zefy Pissaki
Date: Dec 2021
Description: This is a more concise version of mapping 4 switches to 4 LEDs
*/
  
//pins for Uno32/uC32
int led[] = {26,27,28,29};
//Max32  {34,35,36,37};
UNO  {4,5,6,7};

int btn[] = {30,31,32,33};
//Max32  {30,31,32,33};
UNO  {8,9,10,11};

void setup()
{
  for (int i = 0; i  4; i++)
  {
    pinMode(led[i], OUTPUT);
    pinMode(btn[i], INPUT);
  }
}

void loop()
{
  for (int i = 0; i  4; i++)
  {
    digitalWrite(led[i], digitalRead(btn[i]));
  }
}