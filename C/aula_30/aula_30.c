#include <stdio.h>

int main(void) {
  void teste(void);

  teste();
  teste();
  teste();
}

void teste(void){
  int variavelLocalAutomatica = 2; // valor criado a cada chamada de função
  variavelLocalAutomatica *= 2;

  static int variavelLocalEstatica = 2; //mantem o valor
  variavelLocalEstatica *= 2;

  printf("Variavel local estatica %i\n", variavelLocalEstatica);

  printf("Variavel local automatica %i\n",variavelLocalAutomatica);
}