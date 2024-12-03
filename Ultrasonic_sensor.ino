#include <HCSR04.h>

const int trigPin = 32;  
const int echoPin = 35; 

float duration, cm;  

void setup() {  
	Serial.begin(115200);
  pinMode(trigPin, OUTPUT);  
	pinMode(echoPin, INPUT);  
	 
}  


void loop() {  
	digitalWrite(trigPin, LOW);  
	delayMicroseconds(5);  
	digitalWrite(trigPin, HIGH);  
	delayMicroseconds(10);  
	digitalWrite(trigPin, LOW);  

  duration = pulseIn(echoPin, HIGH);  

  cm = (duration*.0343)/2;  

  Serial.print("Distance: ");  
	Serial.println(cm);  
  Serial.println("cm");  
	delay(250);  
}  

