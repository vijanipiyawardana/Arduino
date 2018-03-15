void setup() {
  pinMode(4, INPUT);
  pinMode(11, OUTPUT); //Blue LED
  pinMode(12, OUTPUT); //Yellow LED
}

void loop() {
  if(digitalRead(4)==LOW){
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
  }else{
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }

}
