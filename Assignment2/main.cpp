#include <Arduino.h>
#define U 2
#define V 3
#define W 4
#define Z 5
int u,v,w,z,out;

//int n=13;
int NAND(int i1,int i2)
{

return !(i1&i2);
}

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  // put your setup code here,to run once:
  pinMode(U,INPUT);
  pinMode(V,INPUT);
  pinMode(W,INPUT);
  pinMode(Z,INPUT);
}

void loop() {
  u=digitalRead(U);
  v=digitalRead(V);
  w=digitalRead(W);
  z=digitalRead(Z);
  out=NAND(NAND(NAND(NAND(u,u),v),NAND(w,w)),NAND(z,z));
  digitalWrite(LED_BUILTIN,out);
  // put your main code here, to run repeatedly:
}
