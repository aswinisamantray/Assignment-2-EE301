
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write('o'); //Transmitting bitstream through TX pin of arduino
  delay(1000);
}
