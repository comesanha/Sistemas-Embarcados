/*
Programa:Modificadores de Tipos
Autor:Raphael Comesanha
Período de Elaboração:11/07/2020 a 
Finalidade: Apresenttar os modificadores de tipos e suas funcionalidades
Parte do Sistema: Capítulo 4 Variáveis
Restrições de segurança: Nenhuma
*/

/*
//Modificadores short, long, signed e unsigned.
//signed int a = 70000; // estoura o valor máximo de 32.767, retorna e passa pelosos valores negativos (-32.768 a 0) e inicializa a variáve com o valor que resta para coompletar 70000 (4.464)
//int a = 70000 //As variáveis em C são declaradas como signed por padrão.
//int a = 50000;  //estoura o valor máximo de 32.767, retorna aos valores negativos até comppltar 50000 (-32.768 a -15.536)
//int a = 32767;  // Não ocorre estouro.
//int a = 32768; //estoura e retorna a faixa de valores negativos.
//unsigned int a = 50000; // faixa de valores para 16 bits (65.535).
//unsigned int a = 70000; //estoura a faixa e retorna para o valor inicia e complemante com o valora para completar 70000 (4.464)
//long int a = 70000;  //não ocorre estouro, pois a variáve passa a ter 32 bits, (-2147483648 a 2147483647)
// long int a = 2147483647; //Valor máximo da variável de 16 bits com sinal
// long int a = 2147483648;  //Valor mínimo da variável de 16 bits com sinal. Estoura e retorna a faixa negativa.
//long int a = 4294967295; //Estoura
//unsigned long int a = 4294967294; // Não ocorre estouro
//unsigned long int a = 4294967295; //Valor mínimo da variável positiva de 16 bits.


void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print(a);
  Serial.print("\t");
    delay(500);
  Serial.println();
  return 0;
}
*/

/*
 //Modificadores de acesso volatile e const
 //Este código será otimizado pelo compilador para um loop infinito sem a necessiade do teste de verificação do valor de x
 //Variável global
 int x;
 
 //Início do código
 int main(void){
  while(x==x);
  return 0;
 }
*/

/*
 //Modificadores de acesso volatile e const
 //Código para teclado
 volatile int x;

 //Início do código
 int main(void){
  while(x!=x);
return 0;
 }
*/

/*
//Modificadores de acesso volatile e const
//Código para porta de entrada de dados
volatile const int x;

//Início do código
int main(void){
      while(x==3){
              //Realiza a tarefa enquanto a variável não muda
       }
return 0;
 }
*/

/*
//  Cria um cntador persistente que é incrementado a cada chamada de função

int main(void){
  int ContadorPersistente(10); // Define uma contagem até 10 antes de resetar a variavelPersistente.
  return 0;
}
int ContadorPersistente(int reseta){
  static char variavelPersistente;
  if (reseta){
    variavelPersistente = 0;
  } else {
    return (variavelPersistente++);
    }
  return -1; // O retorno da função é irrelevante, nesse caso, pois o que interessa é o valor da
             //variávelPersistente, que permanecerá armazenada, mesmo com o término da execução da função. 
}

*/
