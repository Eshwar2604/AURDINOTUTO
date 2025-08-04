int pini=8;
int pino=5;
int led=0;
int newe;
int old=0;
void setup() {
  pinMode(pini,INPUT);
  pinMode(pino,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  newe=digitalRead(pini);
  Serial.println(newe);
    if (old==0 && newe==1){
      if (led==0){
      digitalWrite(pino,HIGH);
      led=1;
    }
      else{
        digitalWrite(pino,LOW);
        led=0;
      }
    }
    old=newe;
    delay(100);
}
