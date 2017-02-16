/*
Adafruit Arduino - Lesson 13. DC Motor
*/
 
int motorPin1 = 3;
int motorPin2 = 11;
 
void setup() 
{ 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      Serial.println(speed);
      analogWrite(motorPin1, speed);
      analogWrite(motorPin2, speed);
    }
  }
} 
