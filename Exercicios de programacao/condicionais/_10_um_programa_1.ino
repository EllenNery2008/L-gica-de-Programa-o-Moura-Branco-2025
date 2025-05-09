/* 

Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. 

Calcule e exiba o preço de venda do produto. 

Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.
 
 a55 
 produtoCompra R$ 900
 percentual = 100%
 precoVenda = 1800
 
 precoVenda = produto + (produto / 100 * percentual);


*/
//Variavel
float precoCompra, percentual, precoVenda;

void setup()
{
Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite quanto voce pagou no produto");//Imprime uma mensagem na tela 
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  precoCompra = Serial.parseFloat();//guarda o texto digitado na variavel
  
  Serial.println("Qual o percentual a ser aplicado na venda do produto");//Imprime uma mensagem na tela 
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
 percentual= Serial.parseFloat();//guarda o texto digitado na variavel
  
 //calcula o preco de venda
  precoVenda = precoCompra + (precoCompra / 100 * percentual);
  
  //exibir o preco de venda 
  Serial.println("Preco de Venda: " + String(precoVenda) );
  
  //verifique se o percentual e menor do que 50
  if(percentual < 50){//mostra mensagem apenas se percentual for menor que 50
    Serial.println("O Produto sera vendido com uma margem muito pequena de lucro ");
  }
  
  delay(1000);//pausa o programa em 1 segundo
} //fim do loop
  
 