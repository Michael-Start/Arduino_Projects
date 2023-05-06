
int LED = 12; // LED is attached to pin 12
int Switch1 = 2; //pin 2 is attached to the switch
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Switch1, INPUT);

}

void loop() {
  if (digitalRead(Switch1) == HIGH)
  {
    blink(); // if switch is on turn on LED
  }
  else
  {
    digitalWrite(LED, LOW); // turn LED off
  }
}

void blink()
{
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(250);
  digitalWrite(LED,HIGH);
  delay(250);
  digitalWrite(LED,LOW);
  delay(250);
}
