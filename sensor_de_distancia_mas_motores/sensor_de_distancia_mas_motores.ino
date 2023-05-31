#include <AFMotor.h> //biblioteca 
//declaracion de salidas a utilizar y variables
#define TrigPin 6
#define EchoPin 5
AF_DCMotor M1(1); 
AF_DCMotor M2(2);
//int Trig = 38;
//int Echo = 36;
//int cont = 0;
//int aux = 0;
void setup(){
 //comunicacion serial por bits por segundo 
  Serial.begin (9600);
  // velocidad de los motores
  M1.setSpeed(250);  
  M2.setSpeed(250);
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  delay(2000);
}
void loop(){
  //long duracion;
  long distancia,tiempo;
  digitalWrite(TrigPin,LOW);
  delayMicroseconds(120);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(300);
  digitalWrite(TrigPin,LOW);
  tiempo = pulseIn(EchoPin,HIGH);
  distancia = tiempo*0.034/2;
  Serial.println(String(tiempo)+" cm");
  if(tiempo >  15)
  {
    M1.run(FORWARD);
    M2.run(FORWARD);
  }
  else
  {
    M2.run(FORWARD);
    M1.run(RELEASE);
  }
  delay(300);
  }
