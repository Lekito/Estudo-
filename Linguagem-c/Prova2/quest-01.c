#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *pont_arq;
  char c;
  char nome_arq[30];

  printf("---------------------------------------\n");
  printf("Digite o nome do Arquivo\n");
  printf("---------------------------------------\n");
  // Nome do arquivo que precisa digitar : arquivo_alex.txt

  gets(nome_arq);

  pont_arq = fopen(nome_arq,"r");
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    exit(1);
  }
  printf("\nLendo e exibindo os dados do arquivo %s\n\n", &nome_arq);
  //Faça 
  do
  {  
      //faz a leitura do caracter no arquivo apontado por pont_arq
      c = fgetc(pont_arq);
      
      //exibe o caracter lido na tela
      printf("%c" , c);        
  }while (c != EOF);//enquanto não for final de arquivo 
  
        fclose(pont_arq);//fechando o arquivo
  system("pause");//pausa na tela, somente para Windows
  return(0);
}