//funcoes

/*
tipoDeRetorno nomeDaFuncao ( parametros){
      corpo da funcao
}
*/

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i<= 5; i++)
  {
    Serial.print(".");//imprime o ponto sem pular linha
    delay(tempo);
  }

Serial.println();//pula uma linha no final
}

void desenhaCabecalho() 
{
  Serial.println(" "); //pula linha
  Serial.println(" ");
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println(" "); //pula linha 
  Serial.println(" "); 

}//fim da funcao  


String devolveTexto()
{
  String texto = "Uma linha de texto\n";
  texto += "Mais uma linha de texto\n";
  texto += "Terceira Linha\n";
  return texto;
}  

//Variaveis globais
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));// inicia e normaliza a porta randomica para evitar o mesmo valor 
}  

void loop()
{
  desenhaCabecalho();//invoca a funcao que da print e nao devolve nada (void)

  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());//espera o usuario digitar e dar um enter
  int qtdRodadas = Serial.parseInt();

  int vetPalpites[qtdRodadas];//tamanho do vetor e o tamanho da quantidade de rodadas
  int vetResultados[qtdRodadas];//mesmo tamanho

  //exemplo: quer jogar 3 vezes
  //vetores tem tamanho 3 que vai de 0 ate 2 vetores tem tamanho 3 que vai de 0 ate 2

  //criar um for para a quantidade de rodadas
  for(int r = 0; r < qtdRodadas; r++)
  {
    //aqui dentro vai o jogo todo

    //pedir o palpite do usuario
    Serial.println("Digite um palpite de 1 a 6");
    while(!Serial.available());
    int palpite = Serial.parseInt();

    //sortear o dado
    int numeroSorteado = random(1, 7);// gera um numero aleatorio entre 1 e 6

    Serial.print("Jogando o dados");

    desenhaPontinhos();

    Serial.println();//pula uma linha, pra proxima mensagem nao ficar grudada nos pontos 

    //mostrar o resultado
    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero do dado: " + String(numeroSorteado));

    //guarda os dados nos vetores para posteriormente montar o relatorio
    vetPalpites[r] = palpite;
    vetResultados[r] = numeroSorteado;

    // se acertou dar os parabens, senao que pena ... 
    if(palpite == numeroSorteado)
    {
      Serial.println("Parabens, voce acertou!");
    } else {
      Serial.println("Que pena, tente outra vez!");
    }
  }//fim do for


  //Exibindo os dados do jogo no final - relatorio
  Serial.println();
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();

  //???
  for(int i = 0; i < qtdRodadas; i++){
    Serial.println("Rodada " + String(i) + ":");// Rodada 1, Rodada 2, etc
    Serial.println(" Palpite: " + String(vetPalpites[i]));//mostra o palpite de rodada atual
    Serial.println(" Dado: " + String(vetResultados[i]));//mostra o resultado daquela rodada
     //operador terciario
    //(expression) ? "true" : "false";
    Serial.println("Resultado: " + String( vetPalpites[i] == vetResultados[i] ? "Acertou!": "Errou!"));
    
    /*trocado pelo operador terciario
    if(vetPalpites[i] == vetResultados[i])
    {//palpite e igual a resultado da rodada?
      Serial.println("Resultado: Acertou");
    } else {
      Serial.println("Resultado: Errou");
    }
    */
    Serial.println(" ----------------------");//separador de linha entre os resultados
    Serial.println();//pula uma linha
  }//fim do for

  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  delay(1000);
}//fim do loop