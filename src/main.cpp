#include <Arduino.h>

int Sensor = A0;
int Relay = 2;
int Lamp = 13;


unsigned long time;

boolean status_lights = false;

void setup() {
  pinMode(Sensor, INPUT);
  pinMode(Lamp, OUTPUT);
  pinMode(Relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int status_sensor = analogRead(Sensor);
  if (status_sensor > 33) {
    time = millis();
    if (status_lights == false) {
      status_lights = true;
      digitalWrite(Lamp, HIGH);
      //delay(5000);
      //digitalWrite(Relay, HIGH);
    }
    //else {
      //status_lights = false;
      //digitalWrite(Lamp, LOW);
      //delay(100);
    //}
  }
  Serial.println(time);
}