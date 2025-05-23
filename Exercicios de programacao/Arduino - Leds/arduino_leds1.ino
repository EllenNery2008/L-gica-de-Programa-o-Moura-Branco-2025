// C++ code
//

int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
   digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
}