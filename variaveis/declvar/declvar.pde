/*
Programa:Declarando variáveis
Autor:Raphael Comesanha
Período de Elaboração:20/01/2020 a 
Finalidade: Declarar variáveis; inicializar variáveis e inicializar um conjunto de caracteres
Parte do Sistema: Nenhum
Restrições de segurança: Nenhuma 
*/
// A complilaç  ão do código não se realiza se as variáveis forem declaradas depois de alguma função.
/*
// Este código não compila
void Delay(void){
  for(int i ; i < 10 ; i++);
}
void setup(void){
  KpInit();
  LcdInit();
}
void loop(void){
  for(;;){
    KpDebounce();
    int key;
    key = KpReadKey();
    lcdNumber(key);
    Delay();
  }
}
*/

//Este código compila sem problemas
void Delay(void){
  int i;
  for(i ; i , 10 ; i++){
  }
}
  
void setup(void){
  int key;
  KpInit();
  LcdInit();
}
void loop(void){
  for(;;){
    KpDedounde();
    key = KpReadKey();
    LcdNumber(key);
    Delay();
  
}
