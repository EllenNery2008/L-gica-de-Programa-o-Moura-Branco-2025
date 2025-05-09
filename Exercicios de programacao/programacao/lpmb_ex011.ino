//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de Variáveis
float idade = 0;
float idadeMeses = 0;
float idadeDias = 0;
float idadeHoras = 0;
float idadeMinutos = 0;

void setup()
{
Serial.begin(9600);
}  


void loop()
{
 //Entrada
  Serial.println("Digite sua idade em anos");//mostra msg na tela 
  while( !Serial.available());//espera o usuário dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em número
  
  //Processamento
  idadeMeses = idade * 12;
 idadeDias = idade * 365;
 idadeHoras = idade *8766 ;
  idadeMinutos = idade * 525960;
    
  //Saída
Serial.println("Idade em meses: " + String(idadeMeses, 0));//imprime o texto
  Serial.println("Idade em dias: " + String(idadeDias, 0));
   Serial.println("Idade em horas: " + String(idadeHoras, 0));
  Serial.println("Idade em minutos: " + String(idadeMinutos, 0));
  
  delay(1000);
}
