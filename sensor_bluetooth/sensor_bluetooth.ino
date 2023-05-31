#include <AFMotor.h> //biblioteca 
AF_DCMotor M1(1); 
AF_DCMotor M2(3);
char bt='S';
void setup() { 
  M1.setSpeed(200);  
  M2.setSpeed(200);
  Stop();
  Serial.begin (9600);//comunicacion serial por bits por segundo 
}
void loop() {
  bt=Serial.read();
  if(bt=='F')
  {
  forward(); 
  }
  if(bt=='B')
  {
   backward(); 
  }
  if(bt=='L')
  {
   left(); 
  }
  if(bt=='R')
  {
   right(); 
  }
  if(bt=='S')
  {
   Stop(); 
  }
}
void forward() {
  M1.run(FORWARD);
  M2.run(FORWARD);
}
void backward() {
  M1.run(BACKWARD);
  M2.run(BACKWARD);
}
void left() {
  M1.run(RELEASE);
  M2.run(FORWARD);
}
void right() {
  M1.run(FORWARD);
  M2.run(RELEASE);
}
void Stop() {
  M1.run(RELEASE);
  M2.run(RELEASE);
}
