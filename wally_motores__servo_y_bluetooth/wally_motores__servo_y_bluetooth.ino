#include <AFMotor.h> //biblioteca 
//#include <Servo.h> //ES UNA LIBRERIA QUE VIENE PROGRAMADA
//Servo servoRotCont;
//#define TrigPin 6
//#define EchoPin 5

AF_DCMotor M4(4); 
AF_DCMotor M3(3);
char bt='S';

//int Trig = 6;
//int Echo = 5;
//int cont = 0;
//int aux = 0;

void setup() {
  //servoRotCont.attach(9); //conecto con el pin 9
  // velocidad de los motores
  M4.setSpeed(200);  
  M3.setSpeed(200);
  Stop();
  Serial.begin (9600);  //comunicacion serial por bits por segundo 
  
  //pinMode(TrigPin,OUTPUT);
  //pinMode(EchoPin,INPUT);
  //delay(1000);
}

void loop() {
  
  //long distancia,tiempo;
  //servoRotCont.write(30); //mostrar servo en posicion 30°
  //delay(1000);
  //servoRotCont.write(150); //mostrar servo en posicion 150°
  //delay(1000);
  //M4.run(FORWARD);
  //M3.run(FORWARD);  
  //digitalWrite(TrigPin,LOW);
  //delayMicroseconds(100);
  //digitalWrite(TrigPin,HIGH);
  //delayMicroseconds(500);
  
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

  //digitalWrite(TrigPin,LOW);
  //tiempo = pulseIn(EchoPin,HIGH);
  //distancia = tiempo*0.034/2;
  //Serial.println(String(distancia)+" cm");
  //if(distancia <  20)
 // {
    //M4.run(FORWARD);
    //M3.run(BACKWARD);
    //delay(400);
 // }
}
void forward()
{
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void backward()
{
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}
void left()
{
  M4.run(FORWARD);
  M3.run(RELEASE);
}
void right()
{
  M4.run(RELEASE);
  M3.run(FORWARD);
}
void Stop()
{
  M3.run(RELEASE);
  M4.run(RELEASE);
}
