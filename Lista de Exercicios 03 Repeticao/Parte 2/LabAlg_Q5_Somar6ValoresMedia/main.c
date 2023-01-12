#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie  uma  aplicação  que  deverá  ler  6  valores,  esta  aplicação  ao  final 
deverá apresentar a soma dos valores lidos e a média.  */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar 6 Valores e Media");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int i, numero, resultado, media = 0;
	
	for (i = 1; i <= 6; i++){
		printf("Digite um número: \n");
		scanf("%i", &numero);
		
		resultado = resultado + numero;
	}
	
	media = resultado / 6;
	
	printf("A média de todos os números digitados é: %i", media);
	
	
	return 0;
}
