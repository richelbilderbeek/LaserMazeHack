const int led_pin = 13;

const int piezo_pin = 9;

void setup()
{
  pinMode(led_pin,OUTPUT);
  pinMode(piezo_pin,OUTPUT);
}

void loop()
{
  //Turn on LEDs for ten seconds, do countdown
  digitalWrite(led_pin,HIGH);
  for (int i=0; i!=10; ++i)
  {
    tone(piezo_pin,440,100);
    delay(1000);
  }

  //Turn off LEDs for two second  
  digitalWrite(led_pin,LOW);
  tone(piezo_pin,880,2000);
  delay(2000);
}


