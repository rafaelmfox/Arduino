int amarelo = 10; /*amarelo*/
int azul = 5; /*azul*/
int vermelho = 1; /*vermelho*/


void setup() {
  pinMode(amarelo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(vermelho, OUTPUT);

}

void loop() {
  digitalWrite(amarelo, HIGH);
  vDelay();
  digitalWrite(amarelo, LOW);
  vDelay();
  digitalWrite(azul, HIGH);
  vDelay();
  digitalWrite(azul, LOW);
  vDelay();
  digitalWrite(vermelho, HIGH);
  vDelay();
  digitalWrite(vermelho, LOW);
  vDelay();
  
}


void vDelay()
{
  delay(100);
}
