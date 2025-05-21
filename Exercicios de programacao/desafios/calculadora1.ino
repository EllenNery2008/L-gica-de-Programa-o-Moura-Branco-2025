int repeticaocomsoma;
int resultado;

void setup()
{
Serial.begin(9600);
  
Serial.println("Bem - Vindos (a) adicao ;)");
  Serial.println("Digite o numero que voce quer ver");
  while(!Serial.available()){}
  repeticaocomsoma = Serial.parseInt();
  
  for(int contador = 2; contador <= 2; contador++){
   //2 + 2= 4
  resultado = repeticaocomsoma + contador;
  Serial.println(String(repeticaocomsoma) + " + " + String(contador) + " = " + String(repeticaocomsoma * contador));
  }
  
}
void loop()
{
  
}  