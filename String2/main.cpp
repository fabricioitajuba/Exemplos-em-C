#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char palavra[] = "Brasil"; //No final automaticamente � incluido o caracter
	                           // \0 "caractere nulo" null. \0 � considerado apenas
	                           //um caractere.
	printf("%s", palavra); //O printf ir� imprimir at� achar o caractere null
	
	return 0;
}
