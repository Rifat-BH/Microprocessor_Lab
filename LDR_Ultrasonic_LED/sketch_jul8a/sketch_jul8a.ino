void setup() {
pinMode(13, OUTPUT); // Sets the trigPin as an Output
pinMode(12, INPUT); // Sets the echoPin as an Input
pinMode(11,OUTPUT);
Serial.begin(9600); 

}

void loop() {
  //LDR
  float sensorValue = analogRead(A0);
  float analog = (sensorValue*5)/1023;
  Serial.print(sensorValue);
  Serial.print(",");
  Serial.println(analog);
  delay(100);

  //sonar
  // Clears the trigPin
digitalWrite(13, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(13, HIGH);
delayMicroseconds(10);
digitalWrite(13, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
long duration = pulseIn(12, HIGH);
// Calculating the distance
long distance= (duration*0.034)/2; //The speed of sound is 340 meter/second or 0.0343 cm/microsecond
// Prints the distance on the Serial Monitor
Serial.print("Distance from the object = ");
Serial.print(distance);
Serial.println(" cm");
delay(100);

 //Condition
  if(analog>3 && distance<300){
    digitalWrite(11,HIGH);
  }
  else{
     digitalWrite(11,LOW);
  }
  delay(500); 
}
