//Biblioteca do Display
#include <LiquidCrystal.h>

/*lcd - variável do tipo LiquidCrystal: controlado por 4 pinos (poderiam ser 8 - opcionais)
RS(obrigatório).Ex:pino 12
RW - opcional
Enable "E"(obrigatório).Ex: pino 11
D0,D1,D2,D3 (Opcionais)
D4,D5,D6,D7 (Obrigatórios).Ex: pinos 4  
*/
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define led_azul 7
#define led_verde 6

//Led do display
#define led 8

int inf = 0;

//Funçao de respostas com luzes(Led do display)
void jogo_luzes(){
  for(int i = 0; i < 10; i++){
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led, HIGH);
  delay(100);
  }
}

void setup()
{
  //Iniciando a comunicação Serial
  Serial.begin(9600);
  
  //Configurando os pinos dos LEDs
  pinMode(led_azul, OUTPUT);
  pinMode(led_verde, OUTPUT);
  
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  
  /*Iniciando o Display:
  - lcd.begin(colunas, linhas)
  - lcd.setCursor(coluna, linha): posição de início
  - lcd.print: imprime no display na posição definida acima
  - lcd.clear: limpa as informações no display.
  */
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Ola, Inacio!");
  lcd.setCursor(0,1);
  lcd.print("Vamos, comecar?");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Acender LED: V/A");
  lcd.setCursor(0,1);
  lcd.print("Apagar LED: v/a");
}

void loop()
{
  /*
  Os números nas condições correspondem a letras no teclado:
  - V = 86
  - v = 118
  - A = 65
  - a = 97
  */
  if(Serial.available()){
    lcd.clear();
    inf = Serial.read();
    Serial.println(inf);
    if(inf == 86){
      digitalWrite(led_verde, HIGH);
      lcd.setCursor(0,0);
      lcd.print("LED Verde Aceso");
    }
    if(inf == 65){
      digitalWrite(led_azul, HIGH);
      lcd.setCursor(0,0);
      lcd.print("LED Azul Aceso");
    }
    if(inf == 118){
      digitalWrite(led_verde, LOW);
      lcd.setCursor(0,0);
      lcd.print("LED Verde Apagado");
    }
    if(inf == 97){
      digitalWrite(led_azul, LOW);
      lcd.setCursor(0,0);
      lcd.print("LED Azul Apagado");
    }
    jogo_luzes();
  }
}