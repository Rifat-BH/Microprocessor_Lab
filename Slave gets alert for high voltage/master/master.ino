#include <Wire.h>
void setup() {
  Wire.begin(4);
Serial.begin(9600); 

}

void loop() {
Wire.beginTransmission(4);
  float sensorValue = analogRead(A0);
  float analog = (sensorValue*5)/1023;
 Serial.print("Degital: ");
 Serial.print(sensorValue);
Serial.print("; Analog: ");
 Serial.println(analog);
if(analog>3 ){
  Wire.write("Analog Voltage > 3 V");
}
Wire.endTransmission();
delay(300);
}
