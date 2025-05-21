/*
Faça um programa para simular a organização de uma festa para o cadastro de convidados, 
registrando as seguintes informações:

  * Nome
  * Email
  * Idade

O programa deve solicitar os dados via monitor serial, 
armazená-los em vetores, e ao final do cadastro exibir uma listagem completa dos convidados. 

OBS: A festa contratada será vip para apenas 7 convidados
*/


  String nomes[7];//cria um array tamanho 7 que vai de 0 a 6
  String emails[7];
  int idades[7];
    
  void setup()
{
  	Serial.begin(9600);
    Serial.println("****** Programa Convidados ******");
}

void loop()
{
  //solicitar os dados
  for(int c = 0; c < 2; c++)
  {
  	//nome
    Serial.println("Digite o nome da pessoa " + String(c + 1));
    while(!Serial.available());
    nomes[c] = Serial.readString();
    //email
    Serial.println("Digite a e-mail da pessoa " + String(c + 1));
    while(!Serial.available());
    emails[c] = Serial.readString();
    //idade
    Serial.println("Digite o idade da pessoa " + String(c + 1));
    while(!Serial.available());
    idades[c] = Serial.parseInt();
  }
  
  //Exibir os dados
  Serial.println();
  Serial.println("****** Lista de Convidados ******");
  
  for(int c = 0; c < 2; c++)
  {
    Serial.println("Convidado " + String(c + 1) );
  	Serial.println("   Nome: " + nomes[c]);
    Serial.println("   Email: " + emails[c]);
    Serial.println("   Idade: " + String(idades[c]));
    Serial.println("------");
    Serial.println();//pula uma linha
  }
	delay(5000);
}