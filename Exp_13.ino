// Exp 13: Temperature Sensor (LM35) Arduino
void setup(){
  Serial.begin(9600);
}
void loop(){
  int val = analogRead(A0);
  float temp = val * 0.488;
  Serial.println(temp);
  delay(1000);
}