#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie  uma  aplica��o  que  dever�  ler  6  valores,  esta  aplica��o  ao  final 
dever� apresentar a soma dos valores lidos e a m�dia.  */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar 6 Valores e Media");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int i, numero, resultado, media = 0;
	
	for (i = 1; i <= 6; i++){
		printf("Digite um n�mero: \n");
		scanf("%i", &numero);
		
		resultado = resultado + numero;
	}
	
	media = resultado / 6;
	
	printf("A m�dia de todos os n�meros digitados �: %i", media);
	
	
	return 0;
}
