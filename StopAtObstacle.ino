#define trig 10
#define echo 9
#define led 8

void setup(){
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){

  long duration, distance;
 
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);

  distance = (duration/2) / 29.1; //in cm
  delay(10);

  if((distance <=10) && (distance >=0)){
    digitalWrite(5, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(led, HIGH);
  }else if((distance>10)){
    digitalWrite(5, HIGH); 
    digitalWrite(6, HIGH);
    digitalWrite(led, HIGH);
  }
  
  
}
