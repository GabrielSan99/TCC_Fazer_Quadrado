const int dirPinX = 8;
const int stepPinX = 9;
const int dirPinY = 10;
const int stepPinY = 11;

void setup() {

  pinMode(stepPinY,OUTPUT);
  pinMode(dirPinY,OUTPUT);
}

void loop() {

  
digitalWrite(dirPinY,HIGH); //Descer Y
{
int y;
  
for (y = 0; y<=3200; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=3200; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=3200; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}



digitalWrite(dirPinX,LOW); // Esquerda
{
int x;
  
for (x = 0; x<=3200; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

}
