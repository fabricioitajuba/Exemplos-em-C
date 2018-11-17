#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char teste[] = {'B','r','a','s','i','l'};
	
	int i;
	for(i=0; i<(strlen(teste)-1); ++i){
		printf("%c", teste[i]);
	}
	printf("\n");
	return 0;
}
