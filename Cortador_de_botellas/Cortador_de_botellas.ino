int Motor = 11;
int Motors = 10;
int pulsadorON = 7;
int pulsadorOFF = 4;

int estado = 'S';         // inicia detenido




void setup() 
{
pinMode(pulsadorON, INPUT);
 pinMode(Motor, OUTPUT);
 pinMode(Motors, OUTPUT);
 pinMode(pulsadorOFF, INPUT);
}
void loop() 
{
  //Habilita los motores y avanzan

 if (digitalRead(pulsadorON)==HIGH)

  {
  digitalWrite(Motor, HIGH);
  digitalWrite(Motors, LOW);
}

if (digitalRead(pulsadorOFF)==HIGH)
  
  {
  digitalWrite(Motor, LOW);
  digitalWrite(Motors, HIGH);
 }
}
