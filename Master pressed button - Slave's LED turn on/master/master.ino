#include <Wire.h>
void setup() {
Wire.begin(4);
pinMode(13, INPUT);
}

void loop() {
if (digitalRead(13) == LOW){
Wire.beginTransmission(4);
Wire.write(1);
Wire.endTransmission();
}


}
