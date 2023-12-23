void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); // we chose 12th pin on arduino

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH); // we set it to high
  delay(1000);
  digitalWrite(12, LOW); // after one second set it to low, and repeat
  delay(1000);
}
