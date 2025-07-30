// C++ code
// Projeto Aula 3 - Arduino pelo Tinkercad
// Uso de Pino Analógico 

//Definindo os Pinos
#define led1 2
#define led2 4

void setup(){
  //Iniciando a comunicação:
  Serial.begin(9600);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
}


void loop(){
  
  //Imprimindo os valores do Potenciômetro no Monitor Serial
  Serial.println(analogRead(A0));
  
  //Se a tensão no Potenciômetro for menor que a metade (~511), o LED vermelho acende, caso contrario o LED amarelo acende. 
  if(analogRead(A0) <= 511){
    digitalWrite (led1, HIGH);
    digitalWrite (led2, LOW);
  }else{
    digitalWrite (led1, LOW);
    digitalWrite (led2, HIGH);
  }
}