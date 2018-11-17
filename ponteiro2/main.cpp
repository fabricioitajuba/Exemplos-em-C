//Exemplo de estruturas que contém ponteiros
//Eng. Fabrício de Lima Ribeiro
//17-11-18
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	struct horario{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	struct horario hoje;
	
	int hora = 20;
	int minuto = 30;
	int segundo = 40;
	
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;

	*hoje.pHora = 24;//maneira de alterar
	
	printf("%i:%i:%i", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
	
	return 0;
}
