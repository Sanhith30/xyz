// Exp 16: PIR Sensor Arduino
void setup(){
  pinMode(2,INPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(2)==HIGH){
    Serial.println("Motion Detected");
  }
}