const int BUTTON1 = 2;
const int BUTTON2 = 4;
const int greenled = 8;
const int redled = 12;
int BUTTONstate1 = 0;
int BUTTONstate2 = 0;

void setup()
{
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(greenled, OUTPUT);
  pinMode(redled, OUTPUT);
}

void loop()
{
  BUTTONstate1 = digitalRead(BUTTON1);
  if (BUTTONstate1 == HIGH)
  {
    digitalWrite(greenled, HIGH);
    delay(20);
  } 
  else{
    digitalWrite(greenled, LOW);
  }
  BUTTONstate2 = digitalRead(BUTTON2);
  if (BUTTONstate2 == HIGH)
  {
    digitalWrite(redled, HIGH);
    delay(40);
  } 
  else{
    digitalWrite(redled, LOW);
  }
}
