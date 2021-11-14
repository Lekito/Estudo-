#include <stdio.h>
#include <stdlib.h>


int main(void) {

  struct lista_alunos {
    char nome[20];
    int idade;
  };

struct lista_alunos aluno[2]; 
//char vet_nome[20] = "fulando de tal";

aluno[0].nome[20] = "Joao da Silva"; 
aluno[0].idade = 5;

printf("\n nome aluno %s .", aluno[0].nome);
printf("\n nome aluno idade %i anos", aluno[0].idade);


return 0;
}


