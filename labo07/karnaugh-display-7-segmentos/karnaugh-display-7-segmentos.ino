#include <LiquidCrystal.h>

int a=2,b=3,c=4,d=5,e=6,f=7,g=8;

void setup() {
  // put your setup code here, to run once:

  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}


int e3=0;
int e2=0;
int e1=1;
int e0=0;

void loop() {
  //7mapas de karnaugh
  bool estado_a =(e3 || e2 || (e2 && e0) ||(!e2 && !e0));
  bool estado_b = ((!e3 && !e2) || (!e3 && !e1 && !e0) || (!e3 && e1 && e0) || (e3 && !e2 && !e1));
  bool estado_c = ((!e3 && e2) || (!e2 && !e1) || (!e3 && e0));
  bool estado_d = ((e3 && e2) || (e1 && !e0) || (!e2 && !e0) || (!e2 && e1) || (e2 && !e1 && e0));
  bool estado_e = ((e3 && e2) || (e1 && !e0) || (e3 && e1) || (!e2 && !e0));
  bool estado_f = (e3 || (!e1 && !e0) || (e2 && !e1) || (e2 && !e0));
  bool estado_g = (e3 || (e1 && !e0) || (e2 && !e1) || (!e2 && e1));
  digitalWrite(a,estado_a);
  digitalWrite(b,estado_b);
  digitalWrite(c,estado_c);
  digitalWrite(d,estado_d);
  digitalWrite(e,estado_e);
  digitalWrite(f,estado_f);
  digitalWrite(g,estado_g);
}
