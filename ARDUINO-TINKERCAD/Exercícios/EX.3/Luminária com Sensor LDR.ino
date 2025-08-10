/*Objetivo: construir uma luminaria que desliga durante o dia e
acende durante a noite de forma atônoma, e que haja uma proteção 
no circuito para o caso de inversão de polaridade (Díodo)*/

int leitor;
int led = 8;

void setup()
{
  pinMode(led, OUTPUT); //LED azul
  pinMode(leitor, INPUT); //LDR (Sensor de Luminosidade)
}

void loop()
{
  leitor = analogRead(A0);
  
  if(leitor <= 400)
  {
    digitalWrite(led, HIGH);
  } else
  {
    digitalWrite(led, LOW);
  }
  
}