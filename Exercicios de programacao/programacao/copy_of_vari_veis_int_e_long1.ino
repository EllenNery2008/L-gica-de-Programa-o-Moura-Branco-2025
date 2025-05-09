// C++ code
//
void setup()
{
  Serial.begin(9600);
}
//Inicializacao da Variaveis 
int caixaPequena = 0;// -32768 ate32767 (faixa inicial e final do int  
String nome = "Ellen";
String segundoNome = "Nery";
float nota = 9.5;//números reais ou números quebrados 

void setup()
{
  Serial.begin(9600);//inicia a serial
}
/*
int - numeros inteiros (caixa pequena)
long - numeros inteiros ( caixa grande)
float - numeros (reais / quebrados)
String - textos 
*/
void loop()
{
 Serial.println(idade);//imprime o valor da variável 15 
  idade = idade + 1;// 15 + 1
 Serial.println(idade);//16
  
  Serial.print(nome + " " );//imprime o valor da variável nome junto com um espaço vazio
  Serial.println(segundoNome);
  
  delay(10000);
}