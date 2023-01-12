#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie um programa que realize a soma de todos os fatoriais 
dos valores ímpares entre 1 e 20, no final o programa deverá apresentar a soma e número de valores ímpares.  */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar fatoriais impares de 1 a 20");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int i, resultado, numero, total, armazem = 0;
	
	for (i = 1;  i <= 20; i++){
		if (i % 2 == 1){
			armazem = i;
			for (resultado; armazem > 1; armazem--){
				resultado = resultado * armazem;
			}
			printf("Fatorial de %i = %i\n\n", armazem, resultado);
			total = resultado + total;
		}
	}
	
	printf("A soma total de todos os fatoriais ímpares é: %i", total);
	
	return 0;
}
