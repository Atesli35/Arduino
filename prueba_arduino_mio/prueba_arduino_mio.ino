void setup() {
pinMode(10, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);

}

void loop() {
  digitalWrite(10, HIGH);
   delay(1000);
  digitalWrite(6, LOW);
 delay(1000);
  digitalWrite(5, LOW); 
  delay(1000);
  digitalWrite(4, HIGH);
 delay(1000);
 digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
 delay(1000);
  digitalWrite(4, LOW);
   delay(1000);
  digitalWrite(5, HIGH);
 delay(1000);
}
