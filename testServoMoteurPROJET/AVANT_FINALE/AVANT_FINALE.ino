#include "Servo.h"

Servo servo; // création de l'objet "servo"
Servo servo2;
Servo servo3;

const int bouton=7;
int val=1;
int etat=1;
int ancienval=1;

void setup() {
   servo.attach(9); // attache le servo au pin spécifié
   servo2.attach(11);
   servo3.attach(4);
   pinMode(bouton,INPUT);
   servo.write(90);
   delay(25);
   
}

void loop() {
    //servo2.write(0); // demande au servo de se déplacer à cette position
   //delay(1000); ;// attend 1000 ms entre changement de position 
  val=digitalRead(bouton);
  delay(10);
  if((val==LOW)&&(ancienval==HIGH)){etat=1-etat;}
  ancienval=val;
  
  if (etat==LOW){
    servo2.write(80);
    delay(10000);
    servo3.write(0);
    delay(10000);
    for (int position = 0; position < 40; position++) {
     servo3.write(position);
     delay(15);
   }
    delay(2000);
   for (int position = 80; position > 0; position--) {
     servo2.write(position);
     delay(15);
   }
  delay(2000);
  for (int position = 40; position > 10; position--) {
     servo3.write(position);
     delay(15);
   }
   delay(1000);
  for (int position = 0; position < 80; position++) {
     servo2.write(position);
     delay(15);
   }
   delay(1000);
   for (int position = 0; position < 40; position++) {
     servo3.write(position);
     delay(15);
   }
    delay(2000);

  
 
 for (int i=0;i<40;i++){
    servo.write(100);
    delay(25);
    servo.write(90);
    delay(40);
  }

  }
  
  else{
  servo.write(90);
   delay(25);
  }
  
  
  
  
 
}

//https://programmation.surleweb-france.fr/controle-de-servomoteurs-avec-arduino-tutoriel-complet-etape-par-etape/