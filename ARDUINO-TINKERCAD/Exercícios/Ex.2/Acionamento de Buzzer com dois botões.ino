// C++ code
//
#define buzzer 2
#define led_vd 3
#define led_az 4
#define led_vm 5
#define botao1 6
#define botao2 7
int leitor1 = 0;
int leitor2 = 0;
int digito = 0;
int confirmar = 0;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  
  pinMode(buzzer, OUTPUT);
  pinMode(led_vd, OUTPUT);
  pinMode(led_az, OUTPUT);
  pinMode(led_vm, OUTPUT);
}

void loop()
{
  leitor1 = digitalRead(botao1);
  leitor2 = digitalRead(botao2);
  
  digitalWrite(led_vd, 0); 
  digitalWrite(led_vm, 0); 
  digitalWrite(led_az, 1); 
  digitalWrite(buzzer, 1);
  
  if(leitor1 == 1 && leitor2 == 1)
  {
    digitalWrite(led_vd, 1); 
    digitalWrite(led_vm, 1); 
    digitalWrite(led_az, 1); 
    digito--;
    delay(500);
  }
  
  if(leitor1 == 1 && leitor2 == 0)
  {
  	digitalWrite(led_vd, 1); 
    digitalWrite(led_vm, 0); 
    digitalWrite(led_az, 1);
    digito++;
    delay(500);
  }
  
  if(leitor1 == 0 && leitor2 == 1)
  {
    digitalWrite(led_vd, 0); 
    digitalWrite(led_vm, 0); 
    digitalWrite(led_az, 1);
    delay(500);
    digitalWrite(led_vd, 0); 
    digitalWrite(led_vm, 0); 
    digitalWrite(led_az, 0);
    delay(500);
    confirmar = digito;
  }
  
  while(confirmar == 2)
  {
  	digitalWrite(led_vd, 1);
    delay(500);
    digitalWrite(led_vd, 0);
    digitalWrite(buzzer, 0);
    delay(500);
  }
}