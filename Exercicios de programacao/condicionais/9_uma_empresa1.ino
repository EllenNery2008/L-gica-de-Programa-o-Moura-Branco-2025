/* 

Uma empresa decide dar aumento de 30% aos funcionários cujo salário é 
inferior a 500 reais. 


Escreva um programa que receba o salário de um funcionário e imprima o valor do 
salário reajustado ou uma mensagem caso o 
funcionário não tenha direito a aumento...
*/
//Variavel

String aumento;
float salario;

void setup()
{
Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o salario do funcinario");//Imprime uma mensagem na tela 
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  aumento = Serial.parseFloat();//guarda o texto digitado na variavel
  
   //processamento
  //verificar se o funcionario tera aumento 
  if(salario < 500){ //calcular o aumento
    salario = salario + (salario / 100 * 30);//calcular 30% no salario
    Serial.println("Salario Reajustado: " + String(salario));
  } else {
    //saida
    Serial.println("Salario sem direito ao aumento");
  }
  
  
  delay(1000);//pausa o programa em 1 segundo
}
  