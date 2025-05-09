/*
Estruturas condicionais encadeadas (3 ou mais resposta)

*/

//infantil - 5 ate 8 anos
//cadete   - 8 ate 12 anos
//junior   - 15 ate 18 anos 
//adulto   - acima de 18
//qualquer outra idade nao pode participar do esporte (else)


int idade = 4;

void setup()
{
Serial.begin(9600);

Serial.println("Academia do Davi");
Serial.println();
 
 Serial.println("Seu sobrinho tem " + String(idade) + " anos ");
  //idade = 4
  if(idade >= 5 && idade < 8){//de 5 ate 7
  Serial.println("Cadastrado na categoria Infantial");
  } else if(idade >= 8 && idade < 12){//de 8 ate 11
   Serial.println("Cadastrado na categoria Cadete");
  } else if(idade >= 12 && idade < 15){//de 12 ate 14
   Serial.println("Cadastrado na categoria Juvenil"); 
  } else if(idade >= 15 && idade < 18){//de 15 ate 17
     Serial.println("Cadastrado na categoria Junior"); 
  } else if(idade >= 18 ){//de 8 pra cima 
     Serial.println("Cadastrado na categoria Adulto"); 
  } else {//idades abaixo de 5 anos, ou seja, de 4 para baixo
    Serial.println("Nao pode participar de esportes na academia do Davi"); 
  }
  
  
}

void loop()
{
  
}  