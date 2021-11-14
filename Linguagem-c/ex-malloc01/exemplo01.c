# include <stdio.h> 
# include <stdlib.h>

int main (void) {
  int *x;
  x = malloc(1);
  printf("\nDigite um número: ");
  scanf("%i", x);

  printf("\nO endereço do ponteiro-X = %i e valor do ponteiro-X = %i", x, *x);

  return 0;
}