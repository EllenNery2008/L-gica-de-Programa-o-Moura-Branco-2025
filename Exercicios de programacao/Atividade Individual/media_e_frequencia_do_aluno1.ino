/*
Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.

*/

//Calcule a média entre DUAS notas.
//Verifique se o aluno foi APROVADO.
//Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
//Caso contrário, exiba se foi reprovado por nota.
//Exiba se foi REPROVADO por frequência.
//Exiba se foi REPROVADO frequência e média da nota .
//Se a média for exatamente 10 e a frequencia for 10, exiba: "Parabéns! Nota máxima!".

int nota = 10;
 
  void setup()
{
Serial.print(9600);

  Serial.println("Avaliacao de Desempenho Escolar");
  Serial.println();
  
  Serial.println("Media do aluno" + String(nota) + "aprovado");
  // nota = 10
 
    if(nota >= 0 && nota < 10){//0 ate 10
   Serial.println("Aprovado se amedia e maior");
    } else if(nota >= 0 && nota 10 < );{//0 ate 10
      Serial.println("Maior ou Igual a 6 ");
    } else if(nota >= 6 && nota 10 <);{//0 ate 10
     
      