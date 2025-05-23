/* Contagem de 5 em 5 - Faça um programa que mostre os números de 0 até 50,
aumentando de 5 em 5 (ex: 0, 5, 10, 15...), usando while.
*/
void setup()
{
  Serial.begin(9600);

/*Tipos de dados (Principais)
- INT (numeros inteiros)
- LONG (numeros inteiros - e um int com maior capacidade de armazenado)
- STRING (caracteres: alfanumericos e especiais)
- FLOAT (numeros com casas decimais)
- BOOL (true e false)

*/
 // Variavel inicializadora
int contadorWhile = 0; //variavel local
  
  while(contadorWhile <= 50)
{
  Serial.println(contadorWhile);
  contadorWhile++;
    // 2a - contadorWhile = contadorWhile *5;
    // 3a - contadorWhile *= 5(somar com um valor diferente do que 1;
  }
/*operadores

aritmetico: +,-,*,/,%
logicos:
- || (PIPI - OU)
- && (E COMERCIAL - E)
- !(PONTO DE EXCLAMACAO - NEGACAO/INVERTE)

relacional:
- == (COMPARACAO)
- >= (MAIOR QUE E IGUAL)
- >  (MAIOR QUE)
- >= (MENOR QUE E IGUAL)
- != (DIFERENTE DE )
- <  (MENOR QUE )
*/
  for(int contador = 0; contador <= 50; contador++){
   Serial.println(contador);
  }
  
  
}

//A funcao LOOP() tem como objetivo de repetir varias vezes o programa         
void loop()
{
  //sem instrucoes;           
}               