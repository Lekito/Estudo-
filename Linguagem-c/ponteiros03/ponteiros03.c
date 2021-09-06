#include <stdio.h> 

int main(void) {
  int x = 10;
  double y = 20.50;
  char z = 'a';

  int *pX;
  pX = &x;
  double *pY = &y;
  char *pZ = &z;

  printf("Endereço x = %i - Valor x = %i\n", pX, *pX);
  printf("Endereço y = %i - Valor y = %f\n", pY, *pY);
  printf("Endereço z = %i - Valor z = %c\n", pZ, *pZ);

  getchar();

  return 0;
}