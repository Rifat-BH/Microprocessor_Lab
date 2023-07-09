void setup() 
{ 
  pinMode(13, INPUT);
  pinMode(11, OUTPUT);
 Serial.begin(9600); 
} 
int count = 0;
void loop() 
{ 
  
 if(digitalRead(13) == LOW){
   count=count +1;
   digitalWrite(11, HIGH);
   Serial.print("Button Pressed: ");
   Serial.println(count);
   delay(300);
 }
 else{
   digitalWrite(11, LOW);
 }
 
}