void setup() {
  Serial.begin(115200);
}
void loop() {
  int sensorValue1 = analogRead(A0);
  int voltage1 = sensorValue1 * (100 / 1023.0);
  
  int sensorValue2 = analogRead(A1);
  int voltage2 = sensorValue2 * (100 / 1023.0);
  
  int sensorValue3 = analogRead(A2);
  int voltage3 = sensorValue3 * (100 / 1023.0);

  int sensorValue4 = analogRead(A3);
  int voltage4 = sensorValue4 * (100 / 1023.0);
  
  Serial.print(voltage1);
  Serial.print(",");
  Serial.print(voltage2);
  Serial.print(",");
  Serial.print(voltage3);
  Serial.print(",");
  Serial.println(voltage4);
  delay(50);
}
