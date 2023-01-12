#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie uma que apresente a série Fibonacci até o décimo quinto termo. A série Fibonacci é 
formada  pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Esta série se caracteriza pela soma de um 
termo posterior com o seu anterior subsequente. */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Fibonacci");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int posicao, numeros, resultado, termo3 = 0;
	int termo1 = 1;
	int termo2 = 1;
	
	// Entrada, Processamento e Saída
	
	printf("Posição 1 = %i\n\n", termo1);
	printf("Posição 2 = %i\n\n", termo2);
	
	for	(posicao = 3; posicao <= 15; posicao++){
		termo3 = termo1 + termo2;
		termo1 = termo2;
		termo2 = termo3;
		printf("Posição %i = %i\n\n", posicao, termo3);
	}
	
	
	return 0;
}
