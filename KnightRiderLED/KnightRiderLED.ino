void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  
  int time = 50;
  
  for(int i = 1; i< 7; i++){
    digitalWrite(i, HIGH);
    delay(time);
    digitalWrite(i, LOW);
  }
   for(int j = 5; j>1; j--){
    digitalWrite(j, HIGH);
    delay(time);
    digitalWrite(j, LOW);
  }
}
