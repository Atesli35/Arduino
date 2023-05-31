#include <Servo.h> //ES UNA LIBRERIA QUE VIENE PROGRAMADA
Servo servoRotCont;
void setup()
{
servoRotCont.attach(9); //conecto con el pin 9
}
void loop()
{
servoRotCont.write(0); //mostrar servo en posicion 0°
delay(1500);
 
servoRotCont.write(90); //mostrar servo en posicion 90°
delay(1500);

servoRotCont.write(180); //mostrar servo en posicion 180°
delay(1500);

}
