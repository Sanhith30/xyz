// Exp 10: Arduino Manual Counter
int count = 0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if(digitalRead(2)==HIGH){
    count++;
    Serial.println(count);
    delay(500);
  }
}