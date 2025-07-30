// C++ code
// Projeto Aula 2 - Arduino pelo Tinkercad
// Ligando um LED por intermédio de um botão 

//Definindo os pinos:
#define led 2 
#define btn 4

//Configurando as entradas e saídas:
void setup()
{
	pinMode (led, OUTPUT);
  	pinMode (btn, INPUT);
}

//Definindo o funcionamento(infinito) do programa:
void loop()
{
  if(digitalRead(btn) == HIGH){
    digitalWrite (led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }else{
  	digitalWrite (led, LOW);
  }

}