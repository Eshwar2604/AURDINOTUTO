#include <Servo.h>
int pino=12;
int pos=0;
Servo myservo;
void setup() {
  Serial.begin(9600);
  myservo.attach(pino);
}
void loop() {
  for (pos=0;pos<180;pos++){
  Serial.println(pos);
  myservo.write(pos);
  delay(100);
  }
  for (pos=180;pos>0;pos--){
  Serial.println(pos);
  myservo.write(pos);
  delay(100);
  }
}
