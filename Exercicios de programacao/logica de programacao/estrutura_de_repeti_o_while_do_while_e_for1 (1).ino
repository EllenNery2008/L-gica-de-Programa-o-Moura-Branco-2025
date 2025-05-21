/*
While - E uma estrutura de repeticao que so executa a repeticao quando a 
condicao for verdadeira.
*/

// A funcao SETUP() tem como objetivo de inicializar o programa. Podemos chamar
// de configuracao.
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
int contadorWhile = 1; //variavel local
  
  while(contadorWhile <= 5 )
{
  Serial.println(contadorWhile);
  contadorWhile++;
    // 2a - contadorWhile = contadorWhile + 2;
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
        
}

//A funcao LOOP() tem como objetivo de repetir varias vezes o programa         
void loop()
{
  //sem instrucoes;           
}               