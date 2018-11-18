//Leitura de caracter por caracter até achar o final do arquivo
//Eng. Fabrício de Lima Ribeiro
//18-11-18
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	FILE *arquivo;
	arquivo = fopen("arquivo.txt","r");
	if (arquivo == NULL){
		printf("\nO arquivo.txt nao existe!");
		exit(0);
	}
	
	char c;
	
	do
	{
    	//faz a leitura do caracter no arquivo apontado por pont_arq
    	c = getc(arquivo);    
    	//exibe o caracter lido na tela
    	printf("%c" , c);    
    
	}while (c != EOF);	
	
	fclose(arquivo);	
	return 0;
}
