#include <Wire.h>
void setup() {
Wire.begin(4);
pinMode(13, INPUT);
}
// byte x=0;
void loop() {
Wire.beginTransmission(4);
if(digitalRead(13) == LOW){
Wire.write("Someone is outside ");
}

// Wire.write(x);
Wire.endTransmission();
// x++;
delay(500);
}
