#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Graos de Trigo no Tabuleiro");
	setlocale (LC_ALL, "Portuguese");
	
	long double totalDeGraos = 1;
	long double graos = 1;
	int i = 0;
	
	printf("1 Quadro = 1 Grãos\n\n");
	
	for (i = 2; i <= 64; i++){
		
		graos = graos * 2;
		totalDeGraos = totalDeGraos + graos;
		
		__mingw_printf("%i Quadro = %.Lf Grãos\n\n", i, graos);
	}
	
	
	__mingw_printf("Total de Grãos é: %.Lf", totalDeGraos);
	
	return 0;
}
