#include <stdio.h>

int main (void) {
  
  void funcaoPrint(int num, int vetor[]);
  int x = 10;
  int vetor[3] = {10};

  funcaoPrint(x, vetor);// essa função o vetor ta passando o enderço de memoria. Já o x passa somente uma copia. 

  printf("Variavel int na funcao principal: %i \n", x );
  printf("Vetor na funcao principal: %i\n", vetor[0] );

  return 0;
}

void funcaoPrint(int x, int vet[]){

  x = x + 10;
  vet [0] = 20; // alterando o valor do array aqui, altera na funcao principal onde o array foi criado.

  printf("Variavel int na funcao principal: %i \n", x );
  printf("Vetor na funcao principal: %i\n", vet[0] );
}