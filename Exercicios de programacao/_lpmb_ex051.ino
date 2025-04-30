//Faça um programa que receba a medida em centímetros e exiba esse número em polegadas. OBS: Uma polegada equivale a 2.54 centímetros.

//Declaração de Variáveis

float medidacentimetros = 0;
float numeropolegadas = 0;

//Configuração do sistema
void setup()
{
Serial.begin(9600);
}  

void loop()
{
 //Entrada 
  
  Serial.println("Adicione uma medida centimetros ");
  while( ! Serial.available());
   medidacentimetros = Serial.parseFloat();
  
  Serial.println("Adicione numero polegadas ");
  while( ! Serial.available());
  numeropolegadas = Serial.parseFloat();
  
  
  //Processamento
//Uma polegada equivale 2.54 centimetros;
    
  //Saída
	Serial.println("Medida centimetros: " + String(medidacentimetros) );
  	Serial.println("Numero polegadas: " + String(numeropolegadas) );
    Serial.println();
 	 delay(1000);
                                                          
}
