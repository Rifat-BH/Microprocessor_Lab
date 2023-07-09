#include <Wire.h>
void setup()
{
Wire.begin(4); // join i2c bus with address #8
Wire.onReceive(receiveEvent); // register event
Serial.begin(9600);
}
void loop()
{
delay(100);
}
// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void receiveEvent( int howMany)
{
while(1<Wire.available()){
char c = Wire.read();
Serial.print(c);
}
// int x = Wire.read();
// Serial.println(x);
}