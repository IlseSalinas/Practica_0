int Rojo1 =8;
int Amarillo1 =9;
int Verde1 =10;
int Rojo2 =11;
int Amarillo2 =12;
int Verde2 =13;
int tiempo1 = 3000;
int tiempo2 = 2000;

void setup ()
{
  pinMode(Rojo1,OUTPUT); 
  pinMode(Amarillo1,OUTPUT);
  pinMode(Verde1,OUTPUT);
  pinMode(Rojo2,OUTPUT);
  pinMode(Amarillo2,OUTPUT);
  pinMode(Verde2,OUTPUT);
}
// Programación
void loop ()
{
  digitalWrite(Rojo1,HIGH);
  digitalWrite(Amarillo1,LOW);
  digitalWrite(Verde1,LOW);
  digitalWrite(Rojo2,LOW);
  digitalWrite(Amarillo2,LOW);
  digitalWrite(Verde2,HIGH);
  delay(tiempo1);
  digitalWrite(Rojo1,HIGH);
  digitalWrite(Amarillo1,LOW);
  digitalWrite(Verde1,LOW);
  digitalWrite(Rojo2,LOW);
  digitalWrite(Amarillo2,HIGH);
  digitalWrite(Verde2,LOW);
  delay(tiempo2);
  digitalWrite(Rojo1,LOW);
  digitalWrite(Amarillo1,LOW);
  digitalWrite(Verde1,HIGH);
  digitalWrite(Rojo2,HIGH);
  digitalWrite(Amarillo2,LOW);
  digitalWrite(Verde2,LOW);
  delay(tiempo1);
  digitalWrite(Rojo1,LOW);
  digitalWrite(Amarillo1,HIGH);
  digitalWrite(Verde1,LOW);
  digitalWrite(Rojo2,HIGH);
  digitalWrite(Amarillo2,LOW);
  digitalWrite(Verde2,LOW);
  delay(tiempo2);
}
