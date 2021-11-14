#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>
// 1) Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições : n / 3 = x inteiro e resto 2
// n / 5 = y inteiro e resto 3
// n / 7 = z inteiro e resto 4

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int number = 1;

  printf("\nEncontre o menor inteiro positivo N que atenda as seguintes condições : \n");
  printf("\n número / 3 -> resto 2");
  printf("\n número / 5 -> resto 3");
  printf("\n número / 7 -> resto 4\n");

  while(true){ 
    if((number % 3 == 2) && (number % 5 == 3) && (number % 7 == 4) ){
      printf("\n O menor inteiro positivo é %d", number);
      break;
    };
    number++;
  }
  
  return 0;
}