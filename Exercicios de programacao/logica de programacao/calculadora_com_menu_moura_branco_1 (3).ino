int escolhaDaOperacao;
float resultado; //ira guardar o resultado do calculo da reoperacao


//ESTRUTURA: tipoRetorno nomedaNomeDaFuncao parametros corpo
float somar(float numero1Param, float numero2Param = 0){
 resultado = numero1Param + numero2Param; // ; indica que e o final da instrucao 
 return resultado;
  //Serial.println("WOW!!! O resultado da soma foi: " + String(resultado)); // concatenano
}



void dividir (float numero1Param, float numero2Param = 0){
  resultado = numero1Param / numero2Param; 
  Serial.println("WOW!!! O resultado da divisao foi: " + String(resultado)); // concatenano
}

void subtrair (float numero1Param, float numero2Param = 0){
  resultado = numero1Param - numero2Param; 
  Serial.println("WOW!!! O resultado da subtracao foi: " + String(resultado)); // concatenano  
}

void multiplicar (float numero1Param, float numero2Param = 0){
  resultado = numero1Param * numero2Param; 
  Serial.println("WOW!!! O resultado da multiplicacao foi: " + String(resultado)); // concatenano
}

void setup()

{
  Serial.begin(9600);
  
  
  int contador = 0; //variavel inicializadora do 'do while'
  float numero1; //variavel local
  float numero2;
  
  //\n e um entender via enter   
   do{
  Serial.println("Bem Vindo(a) a calculadora mega blaster inteligente :P!!!\n");
  Serial.println("Esolha umas das operacoes");
  Serial.println("1 - Somar");  
  Serial.println("2 - Dividir");
  Serial.println("3 - Subtrair");
  Serial.println("4 - Multiplicar");
  while(!Serial.available()){}
  escolhaDaOperacao = Serial.parseInt();  
  
     
  Serial.println("Para conseguirmos fazer a operacao matematica precisamos que voce digite 2 numeros");
  Serial.println("Digite o primeiro numero:");
  while(!Serial.available()){}
  numero1 = Serial.parseFloat();
    
  Serial.println("Agora, digite o segundo numero:");
  while(!Serial.available()){}
  numero2 = Serial.parseFloat();  
    
    /* if(escolhaDaOperacao == 1){}
    // else if (esolhaDaOperacao == 2){} 
    // else if (esolhaDaOperacao == 3){}
   //  else if (esolhaDaOperacao == 4){}
   // else{} // else NAO TEM CONDICAO!!!
  */ 
    
    switch(escolhaDaOperacao){
       case 1://SOMAR  
       //somar(numero1, numero2); //estou passando os valores que o usuario digitou via parametro
       //somar(numero1);//estou passando os valores fixos via parametro
       
       float retornoFuncaoSomar; // criou a variavel que ira armazenar o retorno da funcao
       retornoFuncaoSomar = somar(numero1, numero2);
       Serial.println(retornoFuncaoSomar);
      
       break;
         
       case 2://DIVIDIR
      //dividir(numero1, numero2); //estou passando os valores que o usuario digitou via parametro
      //dividir(numero1);//estou passando os valores fixos via parametro
       
      
     dividir(numero1, numero2);
     
       break;
      
       case 3://SUBTRAIR 
      //subtrair(numero1, numero2); //estou passando os valores que o usuario digitou via parametro
      //subtrair(numero1);//estou passando os valores fixos via parametro
       
      subtrair(numero1, numero2);
     
          break;
      
       case 4://MULTIPLICAR
      //multiplicar(numero1, numero2); //estou passando os valores que o usuario digitou via parametro
      //multiplicar(numero1);//estou passando os valores fixos via parametro
       
      multiplicar(numero1, numero2);
         
          break;
      
      default:
         Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4.;)");
    
     }
    
   Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor).");
   while(!Serial.available()){}
   //contador = Serial.parseFloat();
    
    if(Serial.readString() =="sim" ){
      contador = 1;
      
    }
    else{
      contador = 0;
      Serial.println("Ate breve");
      Serial.println("Caso queira voltar ao menu, reinicie o programa;)");
    }
    
      }
    while(contador != 0);
}


void loop()
{
 //sem intrucoes 
}                                        