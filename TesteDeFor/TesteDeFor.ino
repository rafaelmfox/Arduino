//Variavel Global
int vLed1 = 2;
int vLed2 = 3;
int vLed3 = 4;
int vLed4 = 5;
int vLed5 = 6;
int vLed6 = 7;
int vLed7 = 8;
int vLed8 = 9;
int vLed9 = 10;

int vQuantiadePortas = 10;



int vArmazenaLeds [10];



void setup()
{
  pinMode(vLed1, OUTPUT);
  pinMode(vLed2, OUTPUT);
  pinMode(vLed3, OUTPUT);
  pinMode(vLed4, OUTPUT);
  pinMode(vLed5, OUTPUT);
  pinMode(vLed6, OUTPUT);
  pinMode(vLed7, OUTPUT);
  pinMode(vLed8, OUTPUT);
  pinMode(vLed9, OUTPUT);
  CarregaTodoArray();
  //DesligaTodasAsLeds();


}

void loop()
{


//PiscaGradual();
//AcedendoLedsCrecente();
//delay(5000);

 
//DesligaTodasAsLeds();





}


void AcedendoLedsCrecente()
{
  for(int aux=0;aux <= vLed9; aux++)
  {
    if(vArmazenaLeds[aux] != 0)
      digitalWrite(aux, HIGH);   
    
  }
  


  
}







void PiscaGradual()
{


  for (int aux = 2; aux <= vQuantiadePortas; aux++) {
    digitalWrite((aux - 1), LOW);
    digitalWrite(aux, HIGH);
    digitalWrite((aux + 1), LOW);

    if (aux == 2)
      digitalWrite(vLed9, LOW);

    delay(100);
  }

  vArmazenaLeds[(vQuantiadePortas - 1)] = (vQuantiadePortas - 1);
  vQuantiadePortas--;
  
 

}


void DesligaTodasAsLeds()
{
  for (int limpaled = 0; limpaled <= vLed9 ; limpaled++)
    digitalWrite(limpaled, LOW);
}


void CarregaTodoArray()
{
  for (int aux = 0; aux <= (vLed9-1); aux++)
    vArmazenaLeds[aux] = 0;

}


















