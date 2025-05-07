// C++ code
// Variáveis
String nome = "";
String sobrenome = "";
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //Entrada
  //pedir os dados para o usuário 
  //nome
  Serial.println("Qual eh o seu nome?");//mostra uma mensagem na tela (via serial)
  while( ! Serial.available() );// espera o usuário digitar e dar um <Enter>
  nome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
 
   Serial.println("Qual eh o seu sobrenome?");//mostra uma mensagem na tela (via serial)
  while( ! Serial.available() );// espera o usuário digitar e dar um <Enter>
  sobrenome = Serial.readString();//guarda o texto que o usuário digitou na variável sobrenome
  
   Serial.println("Qual eh a sua idade?");//mostra uma mensagem na tela (via serial)
  while( ! Serial.available() );// espera o usuário digitar e dar um <Enter>
  idade = Serial.parseInt();//converte o texto que o usuário digitou  para inteiro,antes de guarda na variável
  
  
  //Saída
  
  //exibir os dados na serial
  Serial.println("Nome Informado: " + nome);
  Serial.println("Sobrenome Informado: " + sobrenome);
  Serial.println("Idade Informado: " + String(idade)); // convert o numero para texto para poder juntar todo o texto
  Serial.println();//escrever uma linha vazia
}