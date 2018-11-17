//Leitura de arquivos
//Eng. Fabrício de Lima Ribeiro
#include <iostream>

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
	
	int x, y, z;
	
	fscanf(arquivo, "%i %i %i", &x, &y, &z);
	
	printf("\n%i %i %i", x, y, z);
	
	fclose(arquivo);	
	return 0;
}
