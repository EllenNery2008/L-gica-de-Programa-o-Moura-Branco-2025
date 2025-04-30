//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura).

//Declaração de Variáveis

String nome = "";
float peso = 0;
float altura = 0;
float IMC = 0;

//Configuração do sistema
void setup()
{
Serial.begin(9600);
}  

void loop()
{
 //Entrada 
  
  Serial.println("Digite o seu nome ");
  while( ! Serial.available());
  nome = Serial.readString();
  
  //Adicione seu peso
  Serial.println("Digite o peso ");
  while( ! Serial.available());
  peso = Serial.parseFloat();
  
  
  Serial.println("Digite o altura ");
  while( ! Serial.available());
  altura = Serial.parseFloat();
  
  
  //Processamento
	IMC = peso / (altura * altura);
    
  //Saída
	Serial.println("Paciente: " + String(nome) ); 
    Serial.println("Peso: " + String(peso) );
    Serial.println("altura" + String(altura) );
  	Serial.println("IMC:" + String(IMC) );
    Serial.println();
 	 delay(1000);
}
