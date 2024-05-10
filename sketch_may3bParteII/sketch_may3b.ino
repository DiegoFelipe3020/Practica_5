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
const int buzzer = 9;
const int countHz = 66;
const int Hz[countHz] = {391.995, 391.995, 391.995, 311.127, 466.164, 391.995 , 311.127, 466.164, 391.995,
293.665, 293.665, 293.665, 311.127, 466.164, 369.994, 311.127, 466.164, 391.995, 391.995, 391.995, 391.995, 
391.995, 369.994, 349.228, 329.628, 311.127, 329.628, 415.305, 277.183, 261.626, 493.883, 466.164, 440.000, 
466.164, 311.127, 415.305, 311.127, 415.305, 466.164, 391.995, 466.164, 293.665, 391.995, 391.995, 391.995, 
391.995, 369.994, 349.228, 329.628, 311.127, 329.628, 415.305, 277.183,261.626, 493.883, 466.164, 440.000, 
466.164, 311.127, 369.994, 311.127, 466.164, 391.995, 311.127, 466.164, 391.995};

const int duration[countHz] = {450, 450, 450, 250, 100, 450, 250, 100, 850, 450, 450, 450, 350, 100, 350,
                              350, 100, 850, 700, 100, 100, 150, 400, 100, 100, 100, 400, 300, 300, 400,
                              100, 100, 100, 100, 350, 500, 400, 100, 550, 550, 100, 850, 700, 100, 100, 
                              150, 300, 150, 100, 100, 400, 300, 300, 600, 100, 100, 100, 100, 500, 500,
                              350, 100, 400, 400, 100, 800};

void setup() {
  pinMode(buzzer, OUTPUT);
}
void loop() {
  for (int iHz = 0; iHz < countHz; iHz++){
    tone(buzzer, Hz[iHz]);
    delay(duration[iHz]);
    noTone(buzzer);
    delay(100);
  }
}