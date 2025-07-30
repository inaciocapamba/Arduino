// C++ code
//
#define led_verd1 13
#define led_verd2 12
#define led_verd3 11
#define led_amar1 10
#define led_amar2 9
#define led_amar3 8
#define led_verm1 7
#define led_verm2 6
#define led_verm3 5

#define led 3 

int sensor = 0;
int celcius = 0;

void setup(){
  
  Serial.begin(9600);
  for(int i = 5; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
  /*pinMode(led_verd1, OUTPUT);
  pinMode(led_verd2, OUTPUT);
  pinMode(led_verd3, OUTPUT);
  pinMode(led_amar1, OUTPUT);
  pinMode(led_amar2, OUTPUT);
  pinMode(led_amar3, OUTPUT);
  pinMode(led_verm1, OUTPUT);
  pinMode(led_verm2, OUTPUT);
  pinMode(led_verm3, OUTPUT);
  */
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);

}

void loop()
{
  //Leitura do sensor de Temperatura
 sensor = analogRead(A0); 
  //Convertendo a temperatura em Celcius
 celcius = map(((sensor - 20)*3.04), 0, 1023, -40, 125);
  Serial.print("Medida do Sensor (TMP): ");
  Serial.println(sensor);
  Serial.print("Temperatura: ");
  Serial.print(celcius);
  Serial.println("C");
  
  if(celcius <= 0){
    digitalWrite(led_verd1, HIGH);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 0 && celcius <= 10){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, HIGH);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 10 && celcius <= 20){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, HIGH);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 20 && celcius <= 30){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, HIGH);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 30 && celcius <= 40){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, HIGH);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 40 && celcius <= 50){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, HIGH);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 50 && celcius <= 60){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, HIGH);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 60 && celcius <= 70){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, HIGH);
    digitalWrite(led_verm3, LOW);
  }
  
  if(celcius > 70){
    digitalWrite(led_verd1, LOW);
    digitalWrite(led_verd2, LOW);
    digitalWrite(led_verd3, LOW);
    digitalWrite(led_amar1, LOW);
    digitalWrite(led_amar2, LOW);
    digitalWrite(led_amar3, LOW);
    digitalWrite(led_verm1, LOW);
    digitalWrite(led_verm2, LOW);
    digitalWrite(led_verm3, HIGH);
	}
  
  analogWrite(led, sensor); // LED Usado como pino PWM (variação de tensão)
}
  