//Leitura de todo o arquivo
//Eng. Fabrício de Lima Ribeiro
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char nome[12];
	
	printf("Entre com o nome do arquivo: ");
	scanf("%s", &nome);
	
	FILE *arquivo;
	arquivo = fopen(nome,"r");
	if (arquivo == NULL){
		printf("\nO arquivo: %s, nao existe!", nome);
		exit(0);
	}
	
	char frase[100];
	
	while(fgets(frase, 100, arquivo) != NULL){
		printf("%s", frase);
	}
	
	fclose(arquivo);	
	return 0;
}
