#include <stdio.h>

int main (void) {

  int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
  int i;
  void ordemCrescente(int vetor [], int n);// não precisa escrever o tamanho do vetor dentro []

  printf("\nVetor desordenado: \n");

  for(i = 0; i < 10; i++){
    printf(" %i ", vetor[i]);
  }

ordemCrescente(vetor, 10);// na hora de chamar um vetor na função só precisa dizer o nome.

  printf("\n\nVetor ordenado: \n");

  for(i = 0; i < 10; i++){
    printf(" %i ", vetor[i]);
  }

  return 0;
}

void ordemCrescente(int vetor [], int n){
  int i, j, temporaria;

  for(i = 0; i < n; i++){
    for(j = i + 1; j < n ; j++){
      if( vetor[i] > vetor[j]){
        temporaria = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temporaria;
      }
    }
  }
}