//el de abajo es una asignacion de entrada con el arduino
#define trigPin 6   
//el de abajo es una asignacion de entrada con el arduino
#define echoPin 5
int motorPin3 = 3; //asignacion de entradas con el motor
int motorPin2 = 2; //asignacion de entradas con el motor

void setup()  //se utiliza para inicializar variables
{
  Serial.begin(9600); //se usa para comunicar la placa con la computadora
  pinMode(echoPin, INPUT); //indica al pin como entrada 
  pinMode(trigPin, OUTPUT); //indica al pin como salida
  pinMode(motorPin2, OUTPUT); //indica al pin como salida
  pinMode(motorPin3, OUTPUT); //indica al pin como salida
}

void loop() //indica un bucle mientras este habilitada la placa
{
  long distancia, tiempo; //se refiere a numeros enteros sin decimales
  digitalWrite(trigPin, LOW); //se usa para escribir el valor logico 0
  delay(2); //se usa para un alto hasta la otra instruccion
  digitalWrite(trigPin, HIGH); //se usa para escribir el valor logico 1
  delay(10); //se usa para un alto hasta la otra instruccion
  digitalWrite(trigPin, LOW); //se usa para escribir el valor logico 0
  tiempo=pulseIn(echoPin, HIGH); //sirve
  distancia=tiempo*0.034/2; //saca la distancia del objeto de regreso
  Serial.println(String(distancia)+" cm"); //en la parte de consola apareceran los datosrecibidos por el pin echo
  
if(distancia>((20+320)/2)){ //una pregunta si cumple o no la condicion se realizara cierta accion
    digitalWrite(motorPin3, HIGH); //se usa para escribir el valor logico 1
    digitalWrite(motorPin2, LOW); //se usa para escribir el valor logico 0
  delay (500); //se usa para un alto hasta la otra instruccion
  
   }
  else{ //la parte de la pregunta por si no se cumple la condicion
    
    digitalWrite(motorPin3, LOW); //se usa para escribir el valor logico 0
    digitalWrite(motorPin2, HIGH); //se usa para escribir el valor logico 1
     delay (500); //se usa para un alto hasta la otra instruccion
}
digitalWrite(motorPin3, HIGH); //se usa para escribir el valor logico 1
  digitalWrite(motorPin2, HIGH); //se usa para escribir el valor logico 1
  
  delay(1000); //se usa para un alto hasta la otra instruccion
}
