#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Fatorial");
	setlocale (LC_ALL, "Portuguese");
	
	//Var
	int numero = 0;
	int resultado = 1;
	
	
	// Entrada. Solicitando ao usuario qualquer numero inteiro.
	
	printf("..:: Fatoração ::..\n");
	printf("Digite qualquer número para saber o fatorial dele: \n");
	scanf("%i", &numero);
	
	// Processamento
	
	for (resultado ; numero >= 1; numero--){
		resultado = resultado * numero;
	}
	
	printf("O resultado é: %i\n", resultado);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
