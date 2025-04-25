//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Declaração de Variáveis

int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemana = 0;

//Configuração do sistema
void setup()
{
Serial.begin(9600);
}  

void loop()
{
 //Entrada
  //pega o ano de nascimento do usuário
  Serial.println("Ola, em que ano voce nasceu?");
  while( ! Serial.available());
  anoNascimento = Serial.parseInt();
  
  //pega o ano que o usuário está - De volta para o futuro
  Serial.println("Certo, agora em que ano voce esta?");
  while( ! Serial.available());
  anoNascimento = Serial.parseInt();
  
  
  //Processamento
 idade = anoAtual - anoNascimento;
  idadeSemana = idade * 52; // 52 semana por ano
  
    
  //Saída
Serial.println("Idade: " + String(idade) );
  Serial.println("Idade em semana: " + String(idadeSemana) );
  
  delay(1000);
}
