#include <Servo.h>

Servo servo1;

int sensorvalue1;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  servo1.attach(5);
}

void loop()
{
  sensorvalue1 = analogRead(A0);
  sensorvalue1 = map(sensorvalue1, 0, 1023, 0, 180);
  servo1.write(sensorvalue1);
}
