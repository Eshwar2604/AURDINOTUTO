int trig = 2;
int ech = 9;
long dura;
float dist;


void setup() {
  pinMode(trig, OUTPUT);
  pinMode(ech, INPUT);
  Serial.begin(9600);
}


void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  dura = pulseIn(ech, HIGH);
  dist = (dura * 0.034) / 2;
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" cm");
  delay(200);  
}
