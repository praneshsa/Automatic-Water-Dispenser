int sensorPin = A0; 
int pumpPin   = 7; 
int moistureValue = 0;

void setup() {
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  moistureValue = analogRead(sensorPin);
  Serial.println(moistureValue);

  if (moistureValue < 400) {  // Dry soil
    digitalWrite(pumpPin, HIGH);  // Pump ON
  } else {
    digitalWrite(pumpPin, LOW);   // Pump OFF
  }
  delay(1000);
}
