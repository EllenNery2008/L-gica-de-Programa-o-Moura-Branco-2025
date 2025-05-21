// c++ code
// variaveis Globais


void setup()
{
  Serial.begin(9600);
}
void loop()
{  //     indices        0         1       2         3
   //     tamanho  
  String nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  Serial.println(nomes [2]);//imprime o valor/elemnto que esta no indice/caixinha 2 
 
 // Exibir os dados do array
for(int i = 0; i < 4; i++)
  {//roda de 0 - 3 
  Serial.println(nomes 1o Nome: "" + nomes [1]); 
}
  
  /*
  1o Nome: Eduardo
  2o Nome: Lucas 
  3o Nome: Rafa
  40 Nome: Salgado
  */
  
delay(2000);//pausa 2 segundos

} //fim do loop