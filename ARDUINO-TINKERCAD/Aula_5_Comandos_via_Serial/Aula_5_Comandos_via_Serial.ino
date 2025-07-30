// C++ code
// Projeto Aula 3 - Arduino pelo Tinkercad
// Uso de Pino Analógico 

const int led_azul = 2;
const int led_verde = 3;
const int led_amarelo = 4;
const int led_vermelho = 5;
const int led_laranja = 6;
const int led_branco = 7;

byte byteRead;

void setup(){
  Serial.begin(9600);
  pinMode(led_azul, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_laranja, OUTPUT);
  pinMode(led_branco, OUTPUT);
}

void loop(){
  
  if(Serial.available()){
    byteRead = Serial.read(); // vai receber a mensagem que enviaremos a partir do teclado
   	Serial.print("Voce digitou: ");
    Serial.println(byteRead);
    switch(byteRead){
      
      case '1':
        if(digitalRead(led_azul) == 0){
          Serial.println("Led Azul ligado");
        }else{
          Serial.println("Led Azul desligado");
        }
      	digitalWrite(led_azul, !digitalRead(led_azul));// inverso do estado do LED. Ex: o estado inicial é 0 (desligado), quando iniciar o programa e teclar "1" ele liga
      	break;
      case '2':
         if(digitalRead(led_verde) == 0){
          Serial.println("Led Verde ligado");
        }else{
          Serial.println("Led Verde desligado");
        }
      	digitalWrite(led_verde, !digitalRead(led_verde));
      	break;
      case '3':
        if(digitalRead(led_amarelo) == 0){
        Serial.println("Led Amarelo ligado");
        }else{
        Serial.println("Led Amarelo desligado");
        }
      	digitalWrite(led_amarelo, !digitalRead(led_amarelo));
     	break;
      case '4':
        if(digitalRead(led_vermelho) == 0){
          Serial.println("Led Vermelho ligado");
        }else{
          Serial.println("Led Vermelho desligado");
        }
      	digitalWrite(led_vermelho, !digitalRead(led_vermelho));
      	break;
      case '5':
        if(digitalRead(led_laranja) == 0){
          Serial.println("Led Laranja ligado");
        }else{
          Serial.println("Led Laranja desligado");
        }
      	digitalWrite(led_laranja, !digitalRead(led_laranja));
     	break;
      case '6':
        if(digitalRead(led_branco) == 0){
          Serial.println("Led Branco ligado");
        }else{
          Serial.println("Led Branco desligado");
        }
      	digitalWrite(led_branco, !digitalRead(led_branco));
    	break;
    	}
    	
  }

  
}