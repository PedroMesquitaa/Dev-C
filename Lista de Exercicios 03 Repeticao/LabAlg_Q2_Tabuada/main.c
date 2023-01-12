#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("TABUADA");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	int tabuada, resultado, contador = 0;
	
	//Entrada. Perguntando qual tabuada o usuario quer.
	
	printf("..:: Tabuada ::..\n");
	printf("Qual número deseja fazer a tabuada?  \n");
	scanf("%i", &tabuada);
	
	while (contador <= 9){
		contador++;
		resultado = tabuada * contador;
		printf("\n%i X %i = %i\n", tabuada, contador, resultado);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
