#include <AFMotor.h> //biblioteca 
#include <Servo.h> //ES UNA LIBRERIA QUE VIENE PROGRAMADA
Servo servoRotCont;
#define TrigPin 6
#define EchoPin 5

AF_DCMotor M4(4); 
AF_DCMotor M3(3);
int Trig = 6;
int Echo = 5;
int cont = 0;
int aux = 0;
void setup(){
  servoRotCont.attach(9); //conecto con el pin 9
  // velocidad de los motores
  M1.setSpeed(250);  
  M2.setSpeed(250);
  Serial.begin (9600);  //comunicacion serial por bits por segundo 
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  delay(1000);
}
void loop(){
  
  long distancia,tiempo;
  servoRotCont.write(30); //mostrar servo en posicion 60°
  delay(1000);
  servoRotCont.write(150); //mostrar servo en posicion 120°
  delay(1000);
 
  M4.run(FORWARD);
  M3.run(FORWARD);
    
  digitalWrite(TrigPin,LOW);
  delayMicroseconds(100);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(500);
  
  digitalWrite(TrigPin,LOW);
  tiempo = pulseIn(EchoPin,HIGH);
  distancia = tiempo*0.034/2;
  Serial.println(String(distancia)+" cm");
  if(distancia <  20)
  {
    M4.run(FORWARD);
    M3.run(BACKWARD);
    delay(400);
  }
  }
