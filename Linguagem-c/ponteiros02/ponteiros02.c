#include <stdio.h> 

int main (void){

  int x = 10;
  int z = 30;

  int *ponteiro;
  ponteiro = &x; // recebe o enderço de x
  printf("\nO ponteiro antes = %i", *ponteiro);
  int y = x;
  x = 20;
  *ponteiro = z; // recebe o valor de z que é 30
 
  
  printf("\nVariável X = %i, variável Y = %i\n", x, y );
  printf("\nVariável Z = %i", z);
  printf("\n Ponteiro = %i", *ponteiro); // sem * mostra o enderço do ponteiro
  printf("\n Endereço do ponteiro = %i  e o endereço de z é = %i", ponteiro, &z);
  getchar();

  return 0;
}