//Incluir texto (anexar)
//Eng. Fabrício de Lima Ribeiro
#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char nome[12], texto[20], letra;
	
	printf("Entre com o nome do arquivo: ");
	scanf("%s", &nome);

	printf("Entre com o nome do texto: ");
	scanf("%s", &texto);
	strcat(texto, "\n");
	
	//printf("Entre com o caractere: ");
	//scanf("%s", &letra);
	
	FILE *arquivo;
	arquivo = fopen(nome,"a");
	if (arquivo == NULL){
		printf("\nO arquivo: %s, nao existe!", nome);
		exit(0);
	}
	
	fputs(texto, arquivo);//Insere string
	//fputc(letra, arquivo);//Insere caractere
	
	fclose(arquivo);	
	return 0;
}
