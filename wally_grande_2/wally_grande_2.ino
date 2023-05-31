#include <AFMotor.h> //librería
//defino que salidas voy a utilizar (Motor1 y Motor2)
AF_DCMotor motorA(3);
AF_DCMotor motorB(1);
void setup() 
{
  // defino velocidad de los motores (250)
 motorA.setSpeed(150);
 motorB.setSpeed(12250);
   // inicializar la comunicación serial a 9600 bits por segundo:
  Serial.begin(9600);
}
void loop() {
motorA.run(FORWARD); 
motorB.run(FORWARD);
delay (1000);

motorA.run(RELEASE);
motorB.run(FORWARD);
delay (1000); 

motorA.run(FORWARD); 
motorB.run(FORWARD);
delay (1000);

motorA.run(RELEASE);
motorB.run(FORWARD);
delay (1000);
 
}
