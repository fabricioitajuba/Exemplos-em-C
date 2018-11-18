//Passar e receber estruturas à uma função
//Eng. Fabrício de Lima Ribeiro
//18-11-18
#include <stdio.h>

struct horario{
	int horas;
	int minutos;
	int segundos;
};

struct horario teste(struct horario x);//decarando a função

int main(void) {

	struct horario agora;
		
	agora.horas = 10;
	agora.minutos = 20;
	agora.segundos = 30;
	
	//mostra os valores antes da função
	printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

	struct horario proxima;
	
	proxima = teste(agora);
	
	//mostra os valores depois da função
	printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
	
	return 0;
}

struct horario teste(struct horario x){
	
	x.horas++;
	x.minutos++;
	x.segundos++;
	
	return x;
}
