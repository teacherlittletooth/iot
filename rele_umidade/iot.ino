//const int RELE = 13;
#define RELE 13
#define UMI A5
int leituraUmidade;
int leituraUmidadeMap;

void setup()
{
  Serial.begin(9600);
  pinMode(RELE, OUTPUT);
  pinMode(UMI, INPUT);
}

void loop()
{
  delay(500);
  leituraUmidade = analogRead(UMI);
  leituraUmidadeMap = map(leituraUmidade, 876, 0, 100, 0);
  Serial.println( (String)"Umidade: " + leituraUmidadeMap + "%" );
  
  if(leituraUmidadeMap > 47) {
  	digitalWrite(RELE, HIGH);
  } else {
  	digitalWrite(RELE, LOW);
  }
}
