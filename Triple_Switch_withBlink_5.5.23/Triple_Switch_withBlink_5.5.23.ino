int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int LED4 = 13;

int Switch1 = 2;
int Switch2 = 3;
int Switch3 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LED4, LOW);
    if (digitalRead(Switch1) == HIGH)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
    if (digitalRead(Switch2) == HIGH)
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
    if (digitalRead(Switch3) == HIGH)
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if(digitalRead(Switch1) == HIGH && digitalRead(Switch2) == HIGH && digitalRead(Switch3) == HIGH)
  {
    blink();
  }
}

void blink()
{
  digitalWrite(LED4, HIGH);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(250);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(250);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  delay(500);
}