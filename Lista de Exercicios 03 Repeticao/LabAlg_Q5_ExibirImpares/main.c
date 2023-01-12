#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Exibix Impares");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	int resultado, contador = 0;
	
	for (contador = 1; contador <=20; contador++){
		if (contador % 2 != 0){
			printf("%i\n", contador);
			resultado = resultado + contador;
		}
	}
	
	printf("\n A soma total dos impares é: %i", resultado);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
