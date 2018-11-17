//Exemplo de funções com passgem por referência
//Eng. Fabrício de Lima Ribeiro
//17-11-18
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void altera(int *x, int *y);

int main(void) {
	
	int x=10, y=20;

	printf("Antes da funcao: x=%i e y=%i\n", x, y);
	altera(&x, &y);
	printf("Depois da funcao: x=%i e y=%i\n", x, y);
	
	return 0;
}

void altera(int *x, int *y){
	*x = *x + 1;
	*y = *y + 1;
}
