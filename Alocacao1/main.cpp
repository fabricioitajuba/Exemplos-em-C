//Exemplo utilizando aloca��o din�mica de mem�ria

#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char a;
	short b;
	int c, nbytes;
	float d;
	
	
	//sizeof - retorna o n�mero de bytes utilizado pela vari�vel
	printf("A variavel a ocupa: %i bytes\n", sizeof(a));
	printf("A variavel b ocupa: %i bytes\n", sizeof(b));
	printf("A variavel c ocupa: %i bytes\n", sizeof(c));
	printf("A variavel d ocupa: %i bytes\n", sizeof(d));
	
	nbytes = sizeof(a) + sizeof(b) + sizeof(c) +sizeof(d);
	
	printf("\nO programa utiliza %i bytes\n", nbytes);
	
	return 0;
}
