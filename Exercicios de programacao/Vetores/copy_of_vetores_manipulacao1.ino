// c++ code
// variaveis Globais


void setup()
{
  Serial.begin(9600);
}

void loop()
{  //     indices        0         1       2         3
   //     tamanho  
  String nomes[4] = {"Eduardo", "Bia Paz","Rafa","Salgado"};
  int idades [4];
  //pedir as idades para o usuario 
  for(int i = 0; i < 4; i++){
 Serial.println("Digite a idade de " + nomes[i]);
while(!Serial.available());
   idades[i] = Serial.parseInt();
   }//fim do for
    
  // Exibir os todos os nomes do vetor
for(int i = 0; i < 4; i++)
  {//roda de 0 - 3 
  Serial.println(String(i + 1) + "o Nome: " + nomes[i]);
  Serial.println("Idade: " + String(idades[i]));
  Serial.println();//pula uma linha
}//fim do for
 
  /*de exibir da seguinte forma:
  1o Nome: Eduardo
  2o Nome: Lucas 
  3o Nome: Rafa
  40 Nome: Salgado
  */
  
delay(2000);//pausa 2 segundos

}// fim do for