/* 

Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

//Variaveis - escopo de variaveis (global)  


void setup()
{//funcao que roda so na inicializacao do programa 
  Serial.begin(9600);//Carrega o modulo Serial para usar com o Arduino

  String nome = "Ellen Nery"; //escopo local so vale dentro de setup
  Serial.println("Nome eh: " + nome);//escreve Ellen Nery na Serial
  nome = "Luisa Campos ";//muda o valor da variavel mome para "Eder Nery"

}

void loop() 
{//funcao que roda eternamente, ate que voce desligue o Arduino
  String nomeDele = "Rafaela Reis";//variavel local dentro do loop 

  if( nomeDele == "Rafaela Reis" )
  {//estrutura condicional simples
    int idade = 7; // variavel local dentro do if
  }

  Serial.println("Nome dele eh: " + nomeDele);//imprime "Victor Nery"
  Serial.println("Idade eh: " + String(idade));//da erro,pois a variavel idade nao existe neste escopo

  delay(10000);//aguarda10 segundos antes de recomecar a rodar o loop novamente 

}
