/*Na entrada da fortaleza, há um painel com uma entrada serial. Um guardião digital (o
Arduino) propõe um desafio: “Adivinhe corretamente o número sagrado do dado,
que varia de 1 a 6.”
Se você errar, o sistema piscará um LED vermelho, indicando que você foi testado e falhou.
Se acertar, um LED verde piscará como sinal de aprovação divina, e uma das joias azuis do
templo (representadas por LEDs azuis) se acenderá, marcando o seu progresso.
Ao conquistar 3 acertos, todas as joias estarão acesas — e a Porta da Sabedoria
(controlada por um servo motor) se abrirá magicamente, permitindo sua
passagem ao templo.
*/



//Inclui a biblioteca do Servo Motor
#include <Servo.h>
Servo porta;//Instancia a porta

//Define as constantes com as portas dos 
// leds e do sensor ultrasonico
#define vm 6
#define vd 10
#define Led_Acertl 4
#define Led_Acertl 3
#define Led_Acertl 2

const int x = 10;

//variaveis


int contAcertos

  
  void setup()
{
  
  Serial.begin(9600);
  motor.attach(12);//configura o motor na porta 12
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);//configura o buzzer da porta 4 como saida
  motor.write(0);//leva o motor para 0 grau

}//fim do setup

void loop()
{
  Serial.println("Adivinhe a senha para entrar no sistema");
  while(!Serial.available());
  senhaDigitada = Serial.parseInt();

  if(senhaDigitada == senhaCorreta){
    digitalWrite(ledVerde, HIGH);
    delay(700);
    digitalWrite(ledVermelho, LOW);
  }else{//errou
    digitalWrite(ledAzul, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(700);
    digitalWrite(ledAzul, LOW);
    digitalWrite(buzzer, LOW);

  }

}
