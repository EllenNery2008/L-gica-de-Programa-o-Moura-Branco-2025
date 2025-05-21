int tabuadaEscolhida;
int resultado;

void setup()
{
Serial.begin(9600);
  
  Serial.println("Bem - Vindos (a) a tabuada ;)");
  Serial.println("Digite a tabuada que voce quer ver");
  while(!Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
   //2 x 1= 2
  resultado = tabuadaEscolhida * contador;
  Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(tabuadaEscolhida * contador));
  }
  
}
void loop()
{
  
}