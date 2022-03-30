int led  = 13;
int sensor = 2;
int deger = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  deger = digitalRead(sensor);
  if (deger==HIGH) {
    digitalWrite(led,HIGH);
    Serial.println("Hareket algilandi!");
    delay(150);
  }
  else if (deger == LOW) {
    digitalWrite(led,LOW);
    Serial.println("Hareket yok!");
    delay(300);
}
}
