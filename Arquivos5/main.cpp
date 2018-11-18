//Leitura de arquivos
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
	
	int i, x, y, z;
	
	fscanf(arquivo, "%i %i %i", &x, &y, &z);
	if(x != 0 && y != 0 && z != 0)
	{
		do{
			printf("\n%02i %02i %02i", x, y, z);		
			fscanf(arquivo, "%i %i %i", &x, &y, &z);
		}while(x != 0 && y != 0 && z != 0);
	}
	fclose(arquivo);	
	return 0;
}
