/*
Você foi contratado para programar o sistema de classificação etária do novo cinema da cidade. 
O sistema precisa verificar a idade do cliente e informar quais tipos de filmes ele pode assistir.

*/

//infantil - 9  ate 10 anos 
//cadete   - 10 ate 13 anos
//junior   - 14 ate 17 anos 
//adulto   - 18 ate 59 anos
//idoso    - 60 ate 89 anos
//Idade negativa ou maior que 120: “Idade inválida, verifique os dados”

int idade = 9;

void setup()
{
  Serial.begin(9600);

  Serial.println("Filmes para assistir");
  Serial.println();

  Serial.println("Idade dos cliente" + String(idade) + " anos ");
 //idade = 16
  
   if(idade >= 9 && idade < 10){//de 10 ate 11
  Serial.println("Filme na categoria Infantial");
  } else if(idade >= 9 && idade < 10){//de 9 ate 12
   Serial.println("Filme na categoria Cadete");
  } else if(idade >= 10 && idade < 13){//de 10 ate 16
   Serial.println("Filme na categoria Juvenil"); 
  } else if(idade >= 14 && idade < 17){//de 14 ate 19
     Serial.println("Filme na categoria Adulto"); 
   } else if(idade >= 18 && idade < 59){//de 18 ate 60
     Serial.println("Filmes na categoria Idoso"); 
  } else {//idades abaixo de 60 anos, ou seja, de 89 para baixo
    Serial.println("Nao pode assistir o filme se a idade for negativa"); 
   }   
}      
void loop()
{  
}    