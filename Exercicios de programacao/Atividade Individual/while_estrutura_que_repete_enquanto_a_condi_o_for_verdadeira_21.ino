/* Contagem até um número digitado pelo usuário - Faça um programa que peça para o
usuário digitar um número N, e depois mostre os números de 0 até N.
*/
void setup()
{
  Serial.begin(9600);
}


//A funcao LOOP() tem como objetivo de repetir varias vezes o programa         
void loop()
{
  //sem instrucoes;   

  /*Tipos de dados (Principais)
- INT (numeros inteiros)
- LONG (numeros inteiros - e um int com maior capacidade de armazenado)
- STRING (caracteres: alfanumericos e especiais)
- FLOAT (numeros com casas decimais)
- BOOL (true e false)

*/
  // Variavel inicializadora
  int contadorWhile = 0; //variavel local
  int N = 1;
  while (contadorWhile <= N); 
  {
    Serial.println(contadorWhile);
    contadorWhile++;
    // 2a - contadorWhile = contadorWhile +2;
    // 3a - contadorWhile += 2(somar com um valor diferente do que 1;
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
  for(int contador = 0; contador <= 1; contador++)
  {
    Serial.println(contador);
  }






}               






