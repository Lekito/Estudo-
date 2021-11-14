#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fAtual, *fNovo;
	char c, nomeAtual[100], nomeNovo[100];

	printf("Digite o nome do arquivo.\n");
	scanf("%s", nomeAtual);

	printf("Digite o novo nome do arquivo.\n");
	scanf("%s", nomeNovo);
  
	fAtual = fopen(nomeAtual, "r");
	fNovo = fopen(nomeNovo,"w");
	if(!fNovo) {
		printf( "Erro na abertura do arquivo");
		exit(1);
	}
	while((c = getc(fAtual)) != EOF){
		putc(c, fNovo);
	}  
 	if (fclose(fNovo)==0)
		printf("Arquivo copiado com sucesso");
	else
		printf("NÃ£o foi possÃ­vel copiar o arquivo");
 	return 0;
}