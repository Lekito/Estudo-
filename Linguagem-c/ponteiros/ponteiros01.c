#include <stdio.h> 

int main(void){
  
  int x;
  x = 10;

  int *ponteirox;
  ponteirox = &x;

  printf("%i\n", *ponteirox );

  getchar();

  return 0;
}