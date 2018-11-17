#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct estrutura{
	int a;
	int b;
	int c;
};

struct estrutura teste;

int main() {
	teste.a = 1;
	teste.b = 2;
	teste.c = teste.a + teste.b;
	
	printf("a=%i, b=%i, c=%i",teste.a, teste.b, teste.c);
	
	//system("pause");
	return 0;
}
