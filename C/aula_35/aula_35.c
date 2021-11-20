#include <stdio.h>

int main (void) {
  int fatorial (int x);
  int numero, resultado;

  printf("\nDigite um numero inteiro:");
  scanf("%i", &numero);

  resultado = fatorial(numero);
  printf("\nO fatorial eh %i", resultado);
}

int fatorial (int x) {

  int resultado;

  if(x == 0){
    resultado = 1;
  } else{
    resultado = x * fatorial(x - 1);
  }

  return resultado;
}