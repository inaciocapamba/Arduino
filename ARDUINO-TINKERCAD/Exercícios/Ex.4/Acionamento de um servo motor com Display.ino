//Biblioteca do Servo Motor
#include <Servo.h> 

Servo mt; //"mt" Variável de chamada do motor
int serv = 10; //Pino analógico do motor
//Pinos dos LEDs do Display
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 9;
int g = 8;

int led = 1;
int btn1 = 11;
int btn2 = 12;
int btn3 = 13;
//Variáveis de contagem
int leitor1 = 0;
int leitor2 = 0;
int leitor3 = 0;
int posicao = 0;

void setup()
{
  mt.attach(serv); //serve com pinMode do servo
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
}

void loop()
{
  digitalWrite(led, 0);
  leitor1 = digitalRead(btn1);
  leitor2 = digitalRead(btn2);
  leitor3 = digitalRead(btn3);
  
  mt.write(posicao); //Gira o eixo ate o grau "posicao"
  
  //Configuração dos valores a exibir no Display
  if(posicao > 9 && posicao <= 19)
  { //Display = 1
  	digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
  }
  if(posicao > 19 && posicao <= 29)
  { //Display = 2
  	digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
  }
  if(posicao > 29 && posicao <= 39)
  { //Display = 3
  	digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
  }
  if(posicao > 39 && posicao <= 49)
  { //Display = 4
  	digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
  if(posicao > 49 && posicao <= 59)
  { //Display = 5
  	digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
  if(posicao > 59 && posicao <= 69)
  { //Display = 6
  	digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
  if(posicao > 69 && posicao <= 79)
  { //Display = 7
  	digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
  }
  if(posicao > 79 && posicao <= 89)
  { //Display = 8
  	digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
  if(posicao == 90)
  { //Display = 9
  	digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
  if(posicao <= 9)
  { //Display = 0
  	digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
  }
  
  //Configurações dos Botões:
  
  //Botão 1: Aumenta o ângulo do eixo e acende o LED
  if(leitor1 == 1)
  {
    posicao++;
    mt.write(posicao);
    digitalWrite(led, 1);
    delay(50);
  }
  //Botão 2: Diminui o ângulo do Botão e acende o LED
  if(leitor2 == 1)
  {
    posicao--;
    mt.write(posicao);
    digitalWrite(led, 1);
    delay(50);
  }
  //Botão 3: Aumenta o ângulo de 0 à 90	e acende o LED
  if(leitor3 == 1)
  {
    for(posicao = 0; posicao <= 90; posicao++){
      	digitalWrite(led, 1);
    	mt.write(posicao);
      	delay(50);
    }
  }
}
