//Faça um programa que receba o nome, cargo e salario de um funcionario.
//Calcule o salário acrescido de 10%.
//Ao final exiba o nome, o cargo e o novo salário desse funcionário.

//Declaração de Variáveis

String nome = "";
String cargo = "";
float salario = 0.0;
float novoSalario = 0.0;

//Configuração do sistema
void setup()
{
Serial.begin(9600);
}  

void loop()
{
 	//Entrada  
  	Serial.println("Digite o nome do funcionario:");
  	while( ! Serial.available());
  	nome = Serial.readString();
      
  	Serial.println("Digite o cargo do funcionario:");
 	 while( ! Serial.available());
  	cargo = Serial.readString();
  
  	Serial.println("Digite o salario do funcionario:");
  	while( ! Serial.available());
  	salario = Serial.parseFloat();
    
  
  	//Processamento     
  	novoSalario = salario + (salario * (10.0/100.0)); // aumento de 10%  
  
  	//Saída
	Serial.println("\n--- Dados do funcionario ---");
  	Serial.println("Nome: " + nome);
    Serial.println("Cargo: " + cargo);
  	Serial.println("Salario antigo: " + String(salario));
    Serial.println("Novo Salario: R$ " + String(novoSalario, 2));  
                                                          
}
