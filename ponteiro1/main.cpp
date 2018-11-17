//Exemplo de uso de ponteiro com estrutura
//Eng. Fabrício de Lima Ribeiro
//17-11-18
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};	
	
	struct horario agora, *depois;
	depois = &agora;
	
	//para incluir valores na estrutura:
	(*depois).hora = 20; // por causa da precedência de sinais, ou
	depois->minuto = 31; //nomenclatura mais usada
	depois->segundo = 58; //nomenclatura mais usada
	
	printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);
	
	return 0;
}
