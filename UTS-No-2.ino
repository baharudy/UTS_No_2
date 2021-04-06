const int ledPin = 13;
const int ldrPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);

  if (ldrStatus <=50){
    digitalWrite(ledPin, HIGH);
    Serial.println("LDR tidak mendapat cahaya, LED nyala");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("LDR mendapat cahaya, LED mati");
  }
}
