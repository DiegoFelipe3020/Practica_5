/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 4, segunda parte
   Dev: Diego Alejandro Felipe Chis
   carnet: 2023367
   Fecha: 10 de mayo
*/
int i1 = 0;
int misil = 0;
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

const int letras = 7;
const int segmentos[letras]= {A,B,C,D,E,F,G};

const int numeros[10][letras]= {
  {1,1,1,0,0,1,1},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {0,0,1,1,1,1,1},
  {1,0,1,1,0,1,1},
  {0,1,1,0,0,1,1},
  {1,1,1,1,0,0,1},
  {1,1,0,1,1,0,1},
  {0,1,1,0,0,0,0},
  {1,1,1,1,1,1,0},
};
const int buzzer =  9;
const int Rele = 10;
void setup() {
  for(int i=0;i<letras;i++){
    pinMode(segmentos[i], OUTPUT);
    digitalWrite(segmentos[i], LOW);
  }
  pinMode(Rele, OUTPUT);
}
void print(int d){
  for(int i=0;i<letras;i++){
    digitalWrite(segmentos[i], numeros[d][i]);
  }
}
void loop() {
  if(i1 < 10){
    for (i1 = 0; i1 < 10; i1++){
    print(i1);
    delay(1000);
    }
  }
 if( i1 == 10){
  tone(buzzer, 250.000);
  delay(500);
  misil = 1;
  i1++;
  noTone(buzzer);
 }
 if(misil == 1){
  digitalWrite(Rele, HIGH);
 }
}