#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Potencia");
	setlocale (LC_ALL, "Portuguese");
	
	int potencia = 3;
	int contador, resultado = 0;
	
	for (contador = 0; contador <= 15; contador++){
		resultado = pow(potencia, contador);
		printf("%i\n", resultado);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
