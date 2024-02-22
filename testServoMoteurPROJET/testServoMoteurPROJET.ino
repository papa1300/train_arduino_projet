#include "Servo.h"

Servo servo; // création de l'objet "servo"
Servo servo2;

void setup() {
   servo.attach(3); // attache le servo au pin spécifié
   servo2.attach(15);
}

void loop() {
   //servo.write(0); // demande au servo de se déplacer à cette position
   //delay(1000); ;// attend 1000 ms entre changement de position 
  //for (int position = 0; position < 50; position++) {
    //servo2.write(position);
    //delay(15);
  //}
  for (int position = 0; position < 0; position++) {
    servo3.write(position);
    delay(15);
  }
  for (int position = 80; position > 0; position--) {
    servo3.write(position);
    delay(15);
  }
  delay(2000);
  //for (int position = 50; position > 0; position--) {
    //servo2.write(position);
    //delay(15);
  //}
 
}

//https://programmation.surleweb-france.fr/controle-de-servomoteurs-avec-arduino-tutoriel-complet-etape-par-etape/