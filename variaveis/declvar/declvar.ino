/*
Programa:Declarando variáveis
Autor:Raphael Comesanha
Período de Elaboração:20/01/2020 a 11/07/2020
Finalidade: Declarar variáveis; inicializar variáveis e inicializar um conjunto de caracteres e vírgula
Parte do Sistema: Nenhum
Restrições de segurança: Nenhuma 
*/

// A complilação do código não se realiza se as variáveis forem declaradas depois de alguma função, em alguns compiladores.
/*
//Este código compila sem problemas?
#include <io.h>
#include <keypad.h>'
#include <lcd.h>
#include <so.h>

void Delay(void){
  int i;
  for(i ; i , 10 ; i++){
  }
}
  
int main(void){
  int key;
  kpInit();
  lcdInit();

  for(;;){
    kpDebounce();
    key = kpReadKey();
    lcdChar(key);
    Delay();
}
}
*/

/*
//Este código compila sem problemas?
#include <io.h>
#include <keypad.h>
#include <lcd.h>
#include <so.h>

void Delay(void){
  
  for(int i ; i , 10 ; i++){
  }
}
  
int main(void){
  
  kpInit();
  lcdInit();

  for(;;){
    kpDebounce();
    int key;
    key = kpReadKey();
    lcdChar(key);
    Delay();
}
}
*/
/*
// Inicializando variáveis com operadores de atribuição
#include <io.h>
#include <keypad.h>
#include <lcd.h>
#include <so.h>
int main(void){
  // declaração de variáveis com valor inicial
  char inicial = 'A';
  int idade = 18;
  float peso = 60.5, salario = 300;
  // utilização das variáveis
  lcdInit();
  lcdChar(inicial);
  lcdChar(idade);
  for(;;){
  }
return 0;
}
*/
/*
// Inicializando um conjunto de caracteres.
// o tamanho da cadeia de caracteres deve ser, pelo menos, uma unidade maior que a quantidade de caracteres inicializada.
#include <io.h>
#include <keypad.h>
#include <lcd.h>
#include <so.h>
int main(void){
  char nome[5] = "Jose";
  lcdInit();
  lcdString(nome);
  for(;;){
  }
}
*/
/*
//Utilização da vírgula como separador
#include <io.h>
#include <keypad.h>
#include <lcd.h>
#include <so.h>
int main (void){
  int a = 4, b = 7;// AS variáveis a e b são criadas como do tipo int
  int c;
  c = a * b;
  lcdInit();
  lcdNumbber(c);
  for(;;){
  }
  return;
}
 */
 
