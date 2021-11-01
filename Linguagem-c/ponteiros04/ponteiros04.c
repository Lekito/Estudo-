#include <stdio.h> 

int main(void) {
  int x = 10;
  double y = 20.50;
  char z = 'a';

  int *pX = &x;
  double *pY = &y;
  char *pZ = &z;

  double soma = *pX + *pY; //somando os valores dos ponteiros. se tirar o * vai dar erro, pois não existe soma de endereços de memória.

  printf("Valor da soma = %f \n", soma);
  

  getchar();

  return 0;
}