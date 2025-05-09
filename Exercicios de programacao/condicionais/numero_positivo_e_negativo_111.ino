/* 

Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.

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
 
 
  if(numero >= 0) {//positivo
    Serial.println("O numero digitado eh positivo");
  } else{
 Serial.println("O numero digitado eh negativo");
 
  }//fim void loop
  
}
  