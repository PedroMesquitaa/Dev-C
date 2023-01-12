#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Soma 100 Valores");
	setlocale (LC_ALL, "Portuguese");
	
	//Var
	int resultado, contador = 0;
	
	for (contador = 0; contador <= 100; contador++){
		resultado = resultado + contador;
	}
	
	printf("Resultado da soma é: %i", resultado);
	
	return 0;
}
