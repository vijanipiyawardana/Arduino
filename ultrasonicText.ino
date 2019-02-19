
#define trig 10
#define echo 9
#define led 8

void setup() {
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  
  duration=pulseIn(echo, HIGH);
  distance=(duration/2)/29.1;
  delay(10);

  if((distance<=10))
  {
    digitalWrite(led, HIGH);
  }else if(distance>10)
  {
    digitalWrite(led, LOW);
  }
}
