
void setup() {
  Serial.begin(9600);
  //pinMode(6, OUTPUT);
}

void loop() {
//  byte dataToSend = 0b100;
//  
//  for (int bitPosition = 0; bitPosition < 3; bitPosition++) {
//    if ((dataToSend >> bitPosition) & 1) {
//      digitalWrite(6, HIGH);
//    } else {
//      digitalWrite(6, LOW); 
//}
//delay(1000);
//}
  Serial.write('o');
  delay(1000);
}
