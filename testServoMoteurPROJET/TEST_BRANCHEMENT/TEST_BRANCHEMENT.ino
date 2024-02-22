#include "Servo.h"

Servo servo; // création de l'objet "servo"
Servo servo2;
const int led_rouge=4;
const int bouton=7;
int val=1;
int etat=1;
int ancienval=1;

void setup() {
   servo.attach(8); // attache le servo au pin spécifié
   servo2.attach(3);
   pinMode(led_rouge,OUTPUT);
   pinMode(bouton,INPUT);
   digitalWrite(led_rouge,LOW);
   delay(10000);
   
}

void loop() {
    //servo2.write(0); // demande au servo de se déplacer à cette position
   //delay(1000); ;// attend 1000 ms entre changement de position 
  val=digitalRead(bouton);
  delay(10);
  if((val==LOW)&&(ancienval==HIGH)){etat=1-etat;}
  ancienval=val;
  if (etat==LOW){digitalWrite(led_rouge,LOW);}
  else{digitalWrite(led_rouge,HIGH); }
  
  
  
  
 
}

//https://programmation.surleweb-france.fr/controle-de-servomoteurs-avec-arduino-tutoriel-complet-etape-par-etape/