#include <Arduino.h>

int soundSensor=2;
int LED=4;
boolean LEDStatus=false;

void setup() {
  pinMode(soundSensor,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorData=analogRead(soundSensor);
  if(SensorData==1){
    if(LEDStatus==false){
      LEDStatus=true;
      digitalWrite(LED,HIGH);
    }
    else{
      LEDStatus=false;
      digitalWrite(LED,LOW);
    }
  }
  Serial.println(SensorData);
}