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
float m = 2;
float n = 2.20462;
float o;

int I = 1;
long mI = 1000000;
long T;

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7; 
const int G = 8;

const int letras = 7;
const int segmentos[letras] ={A,B,C,D,E,F,G};

const int numeros[5][letras] = {
  {0,1,1,0,0,0,0},
  {1,1,1,1,0,0,1},
  {1,0,1,1,0,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,0,1,1},
};
void setup(){
  Serial.begin(9600);
  for(int i = 0; i < letras; i++){
    pinMode(segmentos[i], OUTPUT);
    digitalWrite(segmentos[i], LOW);
  }
  o = Funcion1(m, n);
  Serial.print(m);
  Serial.print("Kg equivale a ");
  Serial.print(o);
  Serial.println("Lbs");
  delay(500);

  T = Funcion2(I, mI);
  Serial.print(I);
  Serial.print("A equivale a ");
  Serial.print(T);
  Serial.print("mA");
  delay(500);
}
void print(int d){
  for(int i = 0; i < letras; i++){
    digitalWrite(segmentos[i], numeros[d][i]);
  }
}
void loop(){
  for ( int i = 0; i < 5; i++){
    print(i);
    delay(1000);
  }
}
float Funcion1(int x, float y){
  float result;
  result = x * y;
  return result;
}
long Funcion2 (int x, long y){
  long result;
  result = x * y;
  return result;
}