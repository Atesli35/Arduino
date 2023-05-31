#include <AFMotor.h> //librería

//defino que salidas voy a utilizar (Motor1 y Motor2)
AF_DCMotor motorA(4);
//AF_DCMotor motorB(4);
void setup() 
{
  // defino velocidad de los motores (250)
  motorA.setSpeed(250);
  //motorB.setSpeed(250);
   // inicializar la comunicación serial a 9600 bits por segundo:
  Serial.begin(9600);
}
void loop() {
motorA.run(FORWARD); //avanza
//motorB.run(FORWARD);
delay (5000);
motorA.run(BACKWARD);//retrocede
//motorB.run(BACKWARD);
delay (5000);
}
