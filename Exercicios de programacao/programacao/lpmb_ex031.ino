//Faça um programa que receba um número e exiba o seu dobro.

//Declaração de Variáveis

float numero = 0;
float dobroNumero = 0;

//Configuração do sistema
void setup()
{
Serial.begin(9600);
}  

void loop()
{
 //Entrada 
  
  Serial.println("Adicione um numero");
  while( ! Serial.available());
  numero = Serial.parseInt();
  
  
  //Processamento

  dobroNumero = numero * 2;
    
  //Saída
Serial.println("Numero Digitado: " + String(numero) );
  Serial.println("Dobro: " + String(dobroNumero) );
  Serial.println();
  delay(1000);
}
