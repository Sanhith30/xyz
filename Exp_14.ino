// Exp 14: Gas Sensor MQ-2 Arduino
void setup(){
  Serial.begin(9600);
}
void loop(){
  int gas = analogRead(A0);
  Serial.println(gas);
  delay(1000);
}