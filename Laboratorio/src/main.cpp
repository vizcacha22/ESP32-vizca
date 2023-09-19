#include <Arduino.h>



int pin_a = 2;
int pin_b = 4;
int pin_c = 5;
int pin_d = 18;
int pin_e = 19;
int pin_f = 21;
int pin_g = 22;

int esperar = 1000;
int contador = 0;

void apagar_display(){
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,LOW);
  digitalWrite(pin_f,LOW);
  digitalWrite(pin_g,LOW);
}

void ver_cero(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
}

void ver_uno(){
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
}

void ver_dos(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_tres(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_cuatro(){
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_cinco(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_seis(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_siete(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
}

void ver_ocho(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_nueve(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_diez(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_once(){
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_doce(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
}

void ver_trece(){
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_catorce(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void ver_quince(){
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
}

void setup(){
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
  apagar_display();
}

void loop(){
  if (contador == 0){
    ver_cero();
    delay(esperar);
    apagar_display();
  }
  if (contador == 1){
    ver_uno();
    delay(esperar);
    apagar_display();
  }
  if (contador == 2){
    ver_dos();
    delay(esperar);
    apagar_display();
  }
  if (contador == 3){
    ver_tres();
    delay(esperar);
    apagar_display();
  }
  if (contador == 4){
    ver_cuatro();
    delay(esperar);
    apagar_display();
  }
  if (contador == 5){
    ver_cinco();
    delay(esperar);
    apagar_display();
  }
  if (contador == 6){
    ver_seis();
    delay(esperar);
    apagar_display();
  }
  if (contador == 7){
    ver_siete();
    delay(esperar);
    apagar_display();
  }
  if (contador == 8){
    ver_ocho();
    delay(esperar);
    apagar_display();
  }
  if (contador == 9){
    ver_nueve();
    delay(esperar);
    apagar_display();
  }
  if (contador == 10){
    ver_diez();
    delay(esperar);
    apagar_display();
  }
  if (contador == 11){
    ver_once();
    delay(esperar);
    apagar_display();
  }
  if (contador == 12){
    ver_doce();
    delay(esperar);
    apagar_display();
  }
  if (contador == 13){
    ver_trece();
    delay(esperar);
    apagar_display();
  }
  if (contador == 14){
    ver_catorce();
    delay(esperar);
    apagar_display();
  }
  if (contador == 15){
    ver_quince();
    delay(esperar);
    apagar_display();
  }
  contador++;
  if(contador == 16){
    contador = 0;
  }
}
