// C++ code
//Variaveis
String appTempo = "sol";

void setup()
{
  Serial.begin(9600);//inicia a comunicacao serial
}

void loop()
{// rodar o programa eternamente ate que voce desligue o arduino
  
  //condicional simples (sem o else) / composta tem o else 
  if( appTempo == "chuva" ){ 
  Serial.println("Hoje vai chover, por favor");
  Serial.println("Pegue o guarda-chuva");
  } else {
    Serial.println("Hoje esta ensolarado, bom passeio");
  }
  
  
  Serial.println("Saindo de casa");
  
  delay(30000);//aguarda 30 segundos
}