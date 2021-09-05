#include <stdio.h> 

int main (void){

  int x = 10;
  int z = 30;

  int *ponteiro;
  ponteiro = &x;
 
  int y = x;
  x = 20;
  *ponteiro = z;
 

  printf("Variável X = %i, variável Y = %i\n", x, y );
  printf("\nVariável Z = %i", z);

  getchar();

  return 0;
}