#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int x;	
	x = 10;
	
	int *ponteiro;
	ponteiro = &x;
	
	printf("O valor de X=%i\n",x);
	printf("O endereco de X=%i\n",&x);
	//ou
	printf("O valor de X=%i\n",*ponteiro);//valor na memória
	printf("O endereco de X=%i\n",ponteiro);//endereço da memória	
	
	
	getchar();
	return 0;
}
