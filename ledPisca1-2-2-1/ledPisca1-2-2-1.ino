//Variavel Global
int vLed1 = 10; //porta 10
int vLed2 = 9; //porta 9
int vDelay = 200; //delay entre eles
int vPisca = 0; //variavel sendo uma bolean liga e desliga

void setup() 
{
  // faz com que a porta fique como saida
  pinMode(vLed1,OUTPUT);
  pinMode(vLed2,OUTPUT);

}

void loop() 
{
  // chama o void
  Sirene();

}


//se vPisca = 1 ele liga a led 10 e apaga a 9
// senao liga a 9 e apaga a 10
void Sirene()
{
  if (vPisca == 1)
  {
     digitalWrite(vLed1, HIGH);
     digitalWrite(vLed2, LOW);
     delay(vDelay);
     vPisca = 2;
  }
   else
   {
     digitalWrite(vLed2, HIGH);
     digitalWrite(vLed1, LOW);
     delay(vDelay);
     vPisca = 1; 
   }
}














