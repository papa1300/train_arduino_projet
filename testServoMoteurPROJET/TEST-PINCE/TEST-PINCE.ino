#include "Servo.h"

Servo servo; // création de l'objet "servo"
Servo servo2;
Servo servo3;

const int bouton=7;
int val=1;
int etat=1;
int ancienval=1;

void setup() {
   //servo.attach(9); // attache le servo au pin spécifié
   servo2.attach(11);
   servo3.attach(3);
   pinMode(bouton,INPUT);

}

void loop() {
    //servo2.write(0); // demande au servo de se déplacer à cette position
   //delay(1000); ;// attend 1000 ms entre changement de position 
  servo.write(90);
  for (int position = 0; position < 30; position++) {
    servo2.write(position);
    delay(15);
  }
  for (int position = 30; position > 0; position--) {
    servo2.write(position);
    delay(15);
  }
  delay(2000);
  
  
}
  
  
  
  
  
 


//https://programmation.surleweb-france.fr/controle-de-servomoteurs-avec-arduino-tutoriel-complet-etape-par-etape/