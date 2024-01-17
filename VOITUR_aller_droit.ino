int ENA=9;
int IN1=4;
int IN2=5;
int ENB=10;
int IN3=6;
int IN4=7;
int valeur;
int valeur1;

void setup(){
  Serial.begin(9600);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  for(int i=0;i<5;i++){
    analogWrite(ENA,i*51);
    analogWrite(ENB,0);
    delay(2);}
  analogWrite(ENA,255);
  analogWrite(ENB,255);
}

void loop(){
  analogWrite(ENA,240);
  analogWrite(ENB,255);
  valeur=analogRead(0);
  valeur1=analogRead(1);
  if (valeur1<=400){
    analogWrite(ENA,0);
    analogWrite(ENB,0);
    analogWrite(ENA,40);
    analogWrite(ENB,140);
    Serial.println("tourne a gauche");
  }
  if (valeur<=400){
    analogWrite(ENA,0);
    analogWrite(ENB,0);
    analogWrite(ENA,140);
    analogWrite(ENB,40);
    Serial.println("tourne a droite");
  }

}