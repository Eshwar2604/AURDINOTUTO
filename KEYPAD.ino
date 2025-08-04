#include <Keypad.h>
const byte rows=4;
const byte cols=4;
byte rp[rows]={2, 3, 4, 5};
byte cp[cols]={6, 7, 8, 9};
char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
Keypad key = Keypad(makeKeymap(keys),rp,cp,rows,cols); //object key
void setup() {
  Serial.begin(9600);
}

void loop() {
  char k = key.getKey();
  if (k){
    Serial.println(k);
  }
}
