int sensorPin = 0;

void setup() {
  Serial.begin(9600);
  pinMode(0, INPUT);
}

void loop() {
  int reading = analogRead(sensorPin); 
  
  float voltage = reading * 5.0;
  voltage /= 1024.0; 

  float temperatureC = (voltage - 0.5) * 100 ;
  Serial.print(temperatureC); Serial.println(" degrees C");
  delay(200);
}
