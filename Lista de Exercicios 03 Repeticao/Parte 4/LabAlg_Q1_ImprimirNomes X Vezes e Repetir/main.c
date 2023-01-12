#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Imprimir Nome X Vezes e Repetir");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	char nome[100];
	int i, vezes = 0;
	int opcao = 0;
	
	// Entrada
	
	do{
		printf("Quantas vezes você quer repetir o nome?\n");
		scanf("%i", &vezes);
		
		printf("Qual o nome?\n");
		scanf("%s", &nome);
		
		for (i = 1; i <= vezes; i++ ){
			printf("\n%i - %s\n", i, nome);
		}
		
		printf("\n\nDeseja repetir o processamento? (0 = NÃO; 1 = SIM)\n");
		scanf("%i", &opcao);
		printf("\n");
		
	}while (opcao == 1);
	
	
	
	
	return 0;
}
