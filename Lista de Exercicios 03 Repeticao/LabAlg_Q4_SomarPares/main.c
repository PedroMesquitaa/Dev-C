#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar Pares");
	setlocale (LC_ALL, "Portuguese");
	
	//Var
	int contador, resultado = 0;
	
	for (contador = 1; contador <=500; contador++){
		if (contador % 2 == 0){
			resultado = resultado + contador;
		}
	}
	
	
	printf("A soma total: %i\n", resultado);
	
	
	
	

	
	
	
	
	
	
	return 0;
}
