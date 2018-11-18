//Exemplo utilizando alocação dinâmica e ponteiros
//Eng. Fabrício de Lima Ribeiro

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int n, s, *p1, *p2;
	float media;
	
	p1 = (int *) calloc(100, sizeof(int)); //alocca 100 posicoes tipo int
	p2 = p1; //p2 armazena o endereço do ponteiro p1
	
	printf("\nEntre com um valor inteiro (flag=0):");
	scanf("%d", p1);
	
	while(*p1){
		p1++;
		printf("\nEntre com um valor inteiro (flag=0):");
		scanf("%d", p1);		
	}
	
	//Cálculo da média aritmética
	p1 = p2; //p1 recupera o seu endereço base
	n = 0;
	s = 0;
	
	while(*p1){
		s += *p1;
		n++;
		p1++;
	}
	
	media = (float) s / (float) n;
	
	//Impressao dos dados lidos e da media	
	p1 = p2; //p1 recupera o seu endereço base
	printf("\nValores lidos: \n\n");
	while(*p1){
		printf(" %d ", *p1);
		p1++;
	}
	printf("\n\nMedia = %f", media);
	free(p2); //Liberação das 100 posições tipo int
	
	return 0;
}
