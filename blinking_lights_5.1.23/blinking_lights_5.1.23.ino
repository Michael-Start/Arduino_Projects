int Light = 12 ; //Hero board pin 12

void setup() {
  // put your setup code here, to run once:
  pinMode(Light, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(Light, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  ledBlink();
  builtInBlink();

}

void ledBlink()
{
  digitalWrite(Light, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void builtInBlink()
{
  digitalWrite(Light, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}