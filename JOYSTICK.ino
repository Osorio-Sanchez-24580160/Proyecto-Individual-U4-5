
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0); // VRx
  int y = analogRead(A1); // VRy
  Serial.print(x);
  Serial.print(",");
  Serial.println(y);
  delay(50); // reducir carga serial
}
