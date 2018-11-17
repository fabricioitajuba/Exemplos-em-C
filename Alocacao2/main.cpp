#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//Aloca uma posicao de memória tipo int - (int *) = casting
	int *a = (int *) malloc(sizeof(int)); 
	//Aloca uma posicao de memória tipo int
	int *b = (int *) malloc(sizeof(int)); 	
	//Aloca uma posicao de memória tipo int
	int *c = (int *) malloc(sizeof(int)); 	

	//Aloca 4 posicao de memória tipo int inicializados com 0
	int *d = (int *) calloc(4,  sizeof(int)); 		
	
	*a = 1;
	*b = 2;
	*c = *a + *b;
	
	printf("a=%i, b=%i, c=%i\n", *a, *b, *c);//mostra os dados
	printf("a=%i, b=%i, c=%i\n", a, b, c);//mostra os endereços	

	d[0] = 5; //uma maneira de acessar
	*(d+1) = 5; //outra maneira de acessar
	d[2] = d[0] + d[1];

	printf("\nd0=%i, d1=%i, d2=%i, d3=%i\n", d[0], d[1], d[2], d[3]);//mostra os dados
	
	//Libera a memória
	free(a);
	free(b);
	free(c);
	free(d);

	return 0;
}
