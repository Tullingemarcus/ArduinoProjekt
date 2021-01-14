#include <Arduino.h>

int Sensor = A0;
int Lamp = 13;

boolean status_lights = false;

void setup() {
  pinMode(Sensor, INPUT);
  pinMode(Lamp, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int status_sensor = analogRead(Sensor);
  if (status_sensor > 33) {
    if (status_lights == false) {
      status_lights = true;
      digitalWrite(Lamp, HIGH);
    }
    else {
      status_lights = false;
      digitalWrite(Lamp, LOW);
    }
  }
}