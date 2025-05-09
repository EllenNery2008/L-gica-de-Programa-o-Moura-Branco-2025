// C++ code
// Inicialização do Arduino

/*

 |+++++++++++++++++|
    Hello World
 |+++++++++++++++++|
 
*/

//Digitar apenas uma linha qualquer
//E essa linha, não será interpretada pelo programa/compilador
//se eu  não colocar // vai dar ruim
/*
daí se eu quiser escrever 
mais de uma linha 
eu posso colocar outra forma de comentário
ou seja 
comentário de bloco
que comenta várias linhas de uma só vez
*/



void setup()
{
 
  Serial.begin(9600);//inicializa a porta/módulo serial
}

void loop()
{
 
  Serial.println("|+++++++++++++++++|");
  Serial.println("    HEllo World    "); //imprime uma linha na porta serial de depois dá um <Enter>
  Serial.println("|+++++++++++++++++|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha 
  
  delay(1000); // aguarda 1 segundo  
}