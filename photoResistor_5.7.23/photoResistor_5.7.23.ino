int sensorPin = A0;
int onboardLED = 13;
int sensorValue = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(onboardLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("Hello Earthlng!");
  // delay(500);
  // Serial.println("Take me to your leader!");
  // delay(1000);

  //Read the analog sensor value and sent it to serial
  // sensorValue = analogRead(sensorPin);
  // Serial.println(sensorValue);
  // delay(500);

  //Turn on onboard LED, pulse by time determined by sensorValue
  sensorValue = analogRead(sensorPin);
  digitalWrite(onboardLED, HIGH);
  delay(sensorValue);
  digitalWrite(onboardLED, LOW);
  delay(sensorValue);

  Serial.println(sensorValue);
  delay(sensorValue);
}
