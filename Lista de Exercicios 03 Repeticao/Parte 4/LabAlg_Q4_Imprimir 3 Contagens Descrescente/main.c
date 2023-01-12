#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Imprimir 3 Contagens Decrescente");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int n1, n2, n3 = 0;
	int i = 0;
	
	// Entrada
	
	printf("Digite o primeiro número: \n");
	scanf("%i", &n1);
	
	printf("Digite o segundo número: \n");
	scanf("%i", &n2);
	
	printf("Digite o terceiro número: \n");
	scanf("%i", &n3);
	
	
	// Contagem do n1
	
	printf("\n\nImpressão contagem do valor %i:\n", n1);
	
	for (i = n1; i >= 1; i--){
		printf("%i\n", i);
	}
	
	// Contagem do n2
	
	printf("\n\nImpressão contagem do valor %i:\n", n2);
	
	for (i = n2; i >= 1; i--){
		printf("%i\n", i);
	}
	
	
	// Contagem do n3
	
	
	printf("\n\nImpressão contagem do valor %i:\n", n3);
	
	for (i = n3; i >= 1; i--){
		printf("%i\n", i);
	}
	
	
	
	return 0;
}
