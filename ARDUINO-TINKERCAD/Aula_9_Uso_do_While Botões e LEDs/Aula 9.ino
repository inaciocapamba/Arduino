//Pinos dos botões
#define btn1 8
#define btn2 9

int a = 3;

void setup()
{
  //Configurações iniciais dos botões
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);

  //Configurações iniciais dos pinos de entrada dos LED´s
  for(int i = 3; i <= 7; i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  //Q´do pressionar o botão 1, os LED´s ligarão sequencialmente
  if(digitalRead(btn1) == HIGH){
    while( a <= 7){
      digitalWrite(a, HIGH);
      delay(1000);
      a = a +1;
    }
  }
  
  //Q´do pressionar o botão 2, os LED´s se desligarão sequencialmente
  if(digitalRead(btn2) == HIGH){
    while(a >= 3){
      digitalWrite(a, LOW);
      delay(1000);
      a = a - 1;
    }
  }
}