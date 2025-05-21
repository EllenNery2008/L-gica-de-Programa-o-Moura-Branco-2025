// c++ code
// variaveis Globais


void setup()
{
  Serial.begin(9600);
}

void loop()
{  //     indices        0         1       2         3
   //     tamanho  
  String nomes[4] = {"Eduardo", "Bia Paz", "Salgado"};
  int idades [4];
  //preencher o vetor de idades
  idades[0] = 24;
  idades[1] = 16;
  idades[2] = 16;
  idades[3] = 16;
 
 // Exibir os dados do array
for(int i = 0; i < 4; i++)
  {//roda de 0 - 3 
  Serial.println(String(i + 1) + "o Nome: " + nomes[i]);
  Serial.println("Idade: " + String(idades[i]));
  Serial.println();//pula uma linha
}
  /*
  1o Nome: Eduardo
  2o Nome: Lucas 
  3o Nome: Rafa
  40 Nome: Salgado
  */
  
delay(2000);//pausa 2 segundos

} 