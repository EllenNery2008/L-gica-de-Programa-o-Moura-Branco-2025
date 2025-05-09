/* 

Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.

zero

*/

//Variavel

int numero;


void setup()
{
Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite um numero");//Imprime uma mensagem na tela 
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  numero = Serial.parseInt();//guarda o texto digitado na variavel
  
  //Verifica se é par ou ímpar
  if(numero % 2 == 0) {//par
    Serial.println("O numero digitado eh par");
  } else {
    Serial.println("O numero digitado eh impar");
  }
  delay(1000);//pausa o programa em 1 segundo
  }//fim void loop 
  
