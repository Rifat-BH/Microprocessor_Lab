#include <Wire.h>
void setup() {
Wire.begin(4);
pinMode(13, OUTPUT);
Wire.onReceive(receiveEvent);

}

void loop() {
delay(100);
}

void receiveEvent( int howMany)
{
if(Wire.available()){
int receiveData = Wire.read();
if(receiveData != 0){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}

}
// int x = Wire.read();
// Serial.println(x);
}