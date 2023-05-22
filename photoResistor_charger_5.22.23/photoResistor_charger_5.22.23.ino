int sensorPin = A0;
int onboardLED = 13;
int sensorValue = 0;
unsigned int batteryCapacity = 50000;
unsigned int batteryLevel = 0;
unsigned int ticks = 0;
unsigned int wait =  100;
double PercentFull;

void setup() {
  // put your setup code here, to run once:
  pinMode(onboardLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  batteryLevel += sensorValue;
  ticks += wait;

  if(batteryLevel >= batteryCapacity)
  {
    Serial.print(ticks);
    Serial.print(" ms    ");
    Serial.println("Fully Charged");
    batteryLevel = batteryCapacity; //prevents batteryLevel from continuing to increase beyond Capacity
    ticks = 0;
    delay(20000);
    batteryLevel = 0;
  }
  else {
    PrintBatteryPercentage();
  }
  delay(wait);
  }

  void PrintBatteryPercentage()
  {
    Serial.print(ticks);
    Serial.print(" ms charge at ");

    PercentFull = 100*((double)batteryLevel/(double)batteryCapacity);
    Serial.print(PercentFull);
    Serial.println("%");
  }
