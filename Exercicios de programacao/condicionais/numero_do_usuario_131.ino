/* 

Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

void setup()
{
Serial.begin(9600);

//Pede o numero para o usuario
 Serial.println("informe um numero par"); 
while(!Serial.available() ){}//espera o usuario dar enter
  int numero = Serial.parseInt();//guarda o numero digitado pelo usuario direto na variavel
 
if( numero % 2 == 0 ){//verifica se o numero e par
  Serial.println("O numero digitado eh par: " + String(numero));
}

Serial.println();//escreve uma linha vazia
Serial.println("Obrigada por utilizar o programa PAR");
}

void loop()
{

} 