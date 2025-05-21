// C++ code
// Variaveis globais

String frutas[5];//vetor vazio tamanho 5 - de 0 a 4
float precoFrutas[5];
int qtdFrutas[5];

void setup()
{
  Serial.begin(9600);
Serial.println("****** PROGRAMA CADASTRO DE FRUTAS ******");//imprime um cabecalho
Serial.println();
}

void loop()
{
  
//pedir as frutas para o usuario - usando o laco for
//guardar cada fruta no compartimento correto
  
 for(int i = 0; i < 5; i++)
 {
   //cadastra uma fruta
Serial.println("Digite uma fruta para cadastrar" );
  while(! Serial.available());//enquanto o usuario nao dar enter
 frutas[i] = Serial.readString();
   
   //cadastra o preco da fruta - pedir para o usuario
   Serial.println("Digite o preco da fruta " + frutas[i]);
  while(! Serial.available());//enquanto o usuario nao dar enter
 precoFrutas[i] = Serial.parseFloat();//guarda o preco da fruta
   
  //cadastra o preco da fruta - pedir para o usuario
   Serial.println("Digite a quantidade de fruta ");
  while(! Serial.available());//enquanto o usuario nao dar enter
 qtdFrutas[i] = Serial.parseFloat();//guarda o preco da fruta
   
    
   Serial.println();
}
  //Exibir os dados cadastrados
  Serial.println("****** Listagem das frutas ******");
  Serial.println();
  
  
  //usar o for para exibir as frutas cadastradas
  for(int i = 0; i < 5; i++)
  {
    Serial.println("Produto:" + frutas[i]);
    Serial.println("Preco: R$" + String(precoFrutas[i]));
    Serial.println("Quantidade no Estoque: R$" + String(qtdFrutas[i]));
    Serial.println("---");
  }
  Serial.println();
  delay(3000); 
}//fim do loop