// C++ code
//
#define ledvm 4
#define ledaz 3
#define ledvd 2
int ptm = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledvm, OUTPUT);
  pinMode(ledaz, OUTPUT);
  pinMode(ledvd, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  ptm = analogRead(A0);
  if(ptm <= 341){
    digitalWrite(ledvm, HIGH);
    digitalWrite(ledaz, LOW);
    digitalWrite(ledvd, LOW);
  }else{
    if(ptm > 341 && ptm <= 682){
      digitalWrite(ledvm, LOW);
      digitalWrite(ledaz, HIGH);
      digitalWrite(ledvd, LOW);
    }else{
      if(ptm > 682){
        digitalWrite(ledvm, LOW);
        digitalWrite(ledaz, LOW);
        digitalWrite(ledvd, HIGH);
      }
    }
  }
  
  Serial.println(ptm);
}