// Exp 15: Ultrasonic Sensor Arduino
#define trig 9
#define echo 8
void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}
void loop(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  long duration = pulseIn(echo,HIGH);
  long distance = duration*0.034/2;
  Serial.println(distance);
  delay(1000);
}