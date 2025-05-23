int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;

int opcaoEscolhida = -1;
void setup()
{
Serial.begin(9600); 
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}



void loop()//A funcao LOOP() tem como objetivo de repetir varias vezes o programa         
{
 //criar um menu
  
  do{   
  Serial.println("1) Ligar Led Verde");
  Serial.println("2) Desligar Led Verde");
  Serial.println("3) Ligar Led Amarelo");
  Serial.println("4) Desligar Led Amarelo");
  Serial.println("5) Ligar Led Vermelho");
  Serial.println("6) Desligar Led Vermelho");
  Serial.println("7) Ligar Todos os Leds");
  Serial.println("8) Desligar Todos os Leds");
  Serial.println("0) Sair");
  while(!Serial.available());
  opcaoEscolhida = Serial.parseInt();  
    
   switch(opcaoEscolhida)
  {
    case 1:
  		Serial.println("ligou o led verde");
     	digitalWrite(ledVerde, HIGH);
   break;
    case 2 :
  		Serial.println("desligou o led verde");
     	digitalWrite(ledVerde, LOW);
   break;
    case 3 :
    Serial.println("ligou o led amarelo");
     	digitalWrite(ledAmarelo, HIGH);
     break;
    case 4 :
    Serial.println("desligou o led amarelo");
     	digitalWrite(ledAmarelo, LOW);
   break;
    
     case 5:
  		Serial.println("ligou o led vermelho");
     	digitalWrite(ledVermelho, HIGH);
   break;
    case 6 :
  		Serial.println("desligou o led vermelho");
     	digitalWrite(ledVermelho, LOW);
   break;
   case 7:
  		Serial.println("Ligar Todos os Leds");
     	digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
   break;
    case 8:
  		Serial.println("desligou Todos os Leds");
     	digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
   break;
      case 0:
  		Serial.println("sair");
     	digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
   break;  
     Serial.println("opcao invalida!");
     break;
  }
    
  }while(opcaoEscolhida!=0);      
         
/*digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
   digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
  */
  
}//fim do loop

               