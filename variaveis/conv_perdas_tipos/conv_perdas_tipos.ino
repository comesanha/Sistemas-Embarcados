/*
Programa:Conversão de tipos e Perdas
Autor:Raphael Comesanha
Período de Elaboração:11/07/2020 a 
Finalidade: demonstrar a conversão de tipos e suas perdas 
Parte do Sistema: Capítulo 4 Variáveis
Restrições de segurança: Nenhuma 
*/

/*
// Convversão de tipo
//Nesse código ocorrem três conversões de tipos
int main(void){
  double calculaPreco(void);
  return 0;
}
double calculaPreco(void){
  int quantidade = 1;
  float preco = 30.0;
  double imposto = (float)0.05; // o double 0.05 é convertido em float antes de ser atribuído a variável imposto
  double preco_final = (double)preco * imposto * (double)quantidade;
  return preco_final;
}
*/

/*
// Perda de informação na conversão de tipos de maior quantidade de bits para de menor quantidade 
// com aviso (warning)pelo compilador
unsigned int bigNum;
unsigned char num;
void setup(){
Serial.begin(9600); // open the serial port at 9600 bps:
}
//int main(void){
void loop(){
bigNum = 12345;
num = bigNum;// num = 57
Serial.print(num);
//return 0;
}
*/

/*
// Perda de informção na conversão de tipo de maior quantidade de bits para de menor quantidade
// em aviso (warning) pelo compilador
int bigNum;
char num;
int main(void){
bigNum = 12345;
num = (unsigned char)bigNum; // uso do typecast para avisar ao compilador que a perda é desejada.
//Serial.print(num);
// num = 57
return 0;
}
*/
