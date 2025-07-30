// C++ code
// Projeto Aula 1 - Arduino pelo Tinkercad
#define led 2
void setup()
{
  //Definindo O Pino 2 (Conectado ao LED na placa) e O LED(fixo no ARDUINO) como Saídas
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  //Ligando e desligando ambos os LEDs num intervalo de 1 segundo
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite (led, HIGH);
  delay(1000);
  digitalWrite (led, LOW);
  delay(1000);
}