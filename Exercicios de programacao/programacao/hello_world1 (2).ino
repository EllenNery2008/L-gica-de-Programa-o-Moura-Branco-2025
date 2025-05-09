// C++ code
// Inicializacao do Arduino

/*

   Hello World

/*
void setup()
{//cofiguções
  pinMode(LED_BUILTIN, OUTPUT);//configura o led interno como saìda
  Serial.begin(9600);//configura a comunicação serial
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("HEllo ");
  delay(1000); // Aguarda 1000 milisegundos - 1 segundo
  
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("World!");
  delay(1000); 
}