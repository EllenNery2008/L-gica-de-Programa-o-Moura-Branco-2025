// c++ code
void setup()
{
  Serial.begin(9600);
 int idade = 10;
}

void loop()
{  //     indices        0         1       2         3
   //     tamanho  
  String nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  Serial.println(nomes [2]);//imprime o valor/elemnto que esta no indice/caixinha 2 
  
  nomes[2] = "Diogo";
  
  Serial.println(nomes[2]);//imprime o texto "Diogo" que e o 3o elemento (indice 2)
  
 delay(2000);//pausa 2 segundos 
  }