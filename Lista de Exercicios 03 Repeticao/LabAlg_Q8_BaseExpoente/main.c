#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Base e Expoente");
	setlocale (LC_ALL, "Portugutese");
	
	
	
	// Var
	int base, expoente, contador, potencia = 0;
	
	// Entrada
	
	printf("Digite um numero inteiro para a base: \n");
	scanf("%d", &base);
	printf("Digite um numero um inteiro nao-negativo para o expoente: \n");
	scanf("%d", &expoente);
	
	// Processamento
	
	potencia = 1;
	contador = 0;
	
	while (contador != expoente){
		potencia = potencia * base;
    	contador = contador + 1;		
	}
	
	printf("\nO valor de %d elevado a %d: %d\n", base, expoente, potencia);
	
	
	return 0;
}
