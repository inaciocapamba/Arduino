// C++ code
// Projeto Aula 3 - Arduino pelo Tinkercad
// Uso de Pino Analógico 

//Definindo os Pinos - PWM(saídas analógicas)
#define led 3
#define motor 5
int valor = 0;

void setup(){
  //Iniciando a comunicação serial (comunicação via monitor)
	Serial.begin(9600);
  
  //Configurando as saídas (LED e MOTOR) e entrada (Pino de entrada analógico A0)
  	pinMode(led, OUTPUT);
  	pinMode(motor, OUTPUT);
  	pinMode(A0, INPUT);
}

void loop(){
	//Imprimindo os valores iniciais do Potenciômetro(analogRead(A0)) e convertendo-o em valores conhecidos de 0 à 255.
    Serial.print("Valores: ");
    Serial.print(analogRead(A0));
	Serial.print("=");
  	Serial.println(valor);
  	// a função (map(analogRead(A0), 0, 1023, 0, 255)) é o responsável pela tranformação:
  	valor = map(analogRead(A0), 0, 1023, 0, 255);
  	//Com a variação do "valor", podemos controlar a intensidade e velocidade do LED e do MOTOR: 
  	analogWrite(led, valor);
  	analogWrite(motor, valor);
}