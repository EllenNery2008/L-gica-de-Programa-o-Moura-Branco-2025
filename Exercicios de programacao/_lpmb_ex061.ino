//Faça um programa que receba a medida em polegadas e exiba esse número em centímetros.

//Declaração de Variáveis

float medidapolegadas = 0;
float numerocentimetros = 0;

//Configuração do sistema
void setup()
{
Serial.begin(9600);
}  

void loop()
{
 //Entrada 
  
  Serial.println("Adicione uma medida polegadas ");
  while( ! Serial.available());
   medidapolegadas = Serial.parseFloat();
  
  Serial.println("Adicione medida centimetros ");
  while( ! Serial.available());
  numerocentimetros = Serial.parseFloat();
  
  
  //Processamento
//receba a medida em polegadas e exiba esse número em centímetros;
    
  //Saída
	Serial.println("Medida polegadas: " + String(medidapolegadas) );
  	Serial.println("Numero centimetros " + String(numerocentimetros) );
    Serial.println();
 	 delay(1000);
                                                          
}
