//Cabeçalho do Programa
/*
Programa:Ponteiros
Autor:Raphael Comesanha
Início da Elaboração: 20/11/2020    
Última atualização: 26/11/2020    
Finalidade: Apresentar o tipo específico de variável denominada ponteiro. Sua sintaxe, declaração e inicialização.
Parte do Sistema: Variáveis Capítulo 4
Restrições de segurança: nenhuma
*/

/*
// Cria uma variável num endereço de memória a ser decidido pelo compilador
// Mostra o valor desse endereço de memória em uma outra variável.
int a = 0;
//int a = 2;
int e = &a;// operador & atribui a variável e o valor do endereço de memória da variável a.
void setup(){
  Serial.begin(9600);
  Serial.print("Valor de a");
  Serial.print("\t");
  Serial.print("Valor do endereço de a na base 16");
  Serial.println();
  
  Serial.print(a);
  Serial.print("\t\t");// excuta dois tabs
  Serial.print(e,HEX);// mostra o valor do endereço de memória em que a foi armazenado na variável e na base 16.
  Serial.println();
}

void loop(){

}
*/

/*
//Criando um ponteiro para apontar o endereço de uma variável pré-declarada.

// Cria-se primeiro a variável a ser apontada, para eliminar o lixo atribuido involuntariamente ao ponteiro.
int var = 3;

// Criando um ponteiro para armazenar o endereço da variável inteiro ivar.
int *ptr;

 void setup(){
  Serial.begin(9600);
  // Atribuição do valor do endereço de ivar ao ponteiro.
  ptr = &var;
  Serial.println("Valor do endereço de var na base 16");
  Serial.println((unsigned int)ptr,HEX);// utilizando o typecast para ajustar o tipo da variável a função.
  Serial.println((unsigned int)&var, HEX);
  Serial.println("Valor de var");
  Serial.println(var);
  Serial.println(*ptr);
 }
 void loop(){
 }
*/
