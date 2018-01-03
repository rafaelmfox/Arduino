int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;

char digitado = 'p';

int laco = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  laco = 1;

}

void loop()
{


  if (Serial.available())
  {
    digitado = Serial.read();


    if (digitado != 'p')
    {
      ligaLeds();
      desligaLeds();
    } else {
      desligaLeds();
    }



  }



  //ligaLeds();

  delay(100);

  //desligaLeds();

  delay(100);




}

void ligaLeds()
{


  while (laco != 11)
  {
    digitalWrite(laco, HIGH);
    // Serial.println(laco);
    delay(50);
    laco++;
  }

}




void desligaLeds()
{
  while (laco != 1)
  {
    digitalWrite(laco, LOW);
    //Serial.println(laco);
    delay(50);
    laco--;
  }

}








