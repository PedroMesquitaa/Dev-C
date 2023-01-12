#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar Valores Positivos Ate Aparecer Negativo");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int i, numero, total = 0;
	
	do{
		printf("Digite um número: \n");
		scanf("%i", &numero);
		if (numero >= 0){
			total = total + numero;
		}
		
	}while (numero >= 0);
	
	printf("A soma total de todos os números digitados é: %i", total);
	
	return 0;
}
