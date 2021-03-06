/*
Programa:Testando Variáveis 
Autor:Raphael Comesanha
Início da Elaboração:20/01/2020
Última Atualização: 20/11/2020
Finalidade: Trabalhar com tipos de variaveis aplicadas a sistemas embarcados
Parte do Sistema: Nenhum
Restrições de segurança: Nenhuma 
*/
/*
// 200_10, C8_16 e 11001001_2
unsigned int dec = 200;         // valor 200 escrito em decimal sem sinal
unsigned int hex = 0xC8;        // valor 200 escrito em hexadecimal sem sinal
unsigned int bin = 0B11001001;  // valor 200 escrito em binário sem sinal
// Todas as variáveis tem o mesmo valor.
*/
/*
// Escrevendo na base octal
int a0 = 200;    // valor 200 em decimal positivo
int b0 = 0200;   // valor 200 em octal positivo, representa 192 em decimal
int c0 = 0311;   // valor 311 em octal positivo, representa 200 em decimal
int d0 = 311;    //valor 311 em decimal positivo
*/

/*
// Valores fracionados. Utilizar ponto como separador decimal.
// Todo número com ponto separador decimal é dlouble em C.

float a = 3.05;    // 3.05 é convertido e armazenado como float.
double b = 3.05;   // 3.05 é convertido e armazenado como double.

// por questão de precisão no armazenamento, é possível que a
// possua um valor diferente de b.
void setup(){
  Serial.begin(9600);
}
void loop(){
  if (a == 3.05){
    // a comparação é feita entre um número float (a) e um double(3.05)- false
    Serial.print("a = 3,05");
    Serial.println();
  }
  if(a == 3.05f){
    // a comparação é feita entre um número float (a) e outro float (3.05f)- true
    Serial.print("a = 3,05f");
    Serial.println();
  }
  if(b == 3.05){
    // a comparação é feita entre um número double (b) e outro double (3.05)- true
    Serial.print("b = 3,05");
    Serial.println();
  }
  if(b == 3.05f){
    // a comparação é feita entre um número double (b) e um float (3.05f)- false
    Serial.print("b = 3,05f");
    Serial.println();
  }
  delay(1000);

return;
}
*/
