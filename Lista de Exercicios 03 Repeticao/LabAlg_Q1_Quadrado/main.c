#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie uma aplicação de percorra do número 15 ao número 50 e apresente o valor ao quadrado de cada um dos valores entre 15 e 50. */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("QUADRADO");
	setlocale (LC_ALL, "Portuguese");
	
	int contador, resultado = 0;
	
	for (contador = 15; contador <= 50; contador++){
		resultado = contador * contador;
		printf("%i -- %i\n", contador, resultado);
	}
	
	
	
	return 0;
}
