//Cria��o e escrita de arquivos
//Eng. Fabr�cio de Lima Ribeiro
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	FILE *arquivo;
	arquivo = fopen("Arquivo.txt","w");
	
	fprintf(arquivo, "teste");
	
	fclose(arquivo);
	return 0;
}
