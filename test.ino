void setup() {
Serial.begin(9600);
}

void loop() {
  int c = analogRead(A0);
  delay(500);
  Serial.print("LDR Value is: ");
  Serial.println(c);
  
}
