#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Contar/Somar Divisiveis");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int a, b, c, somar, contar, armazem = 0;
	
	// Entrada. Solicitando ao usuario os tres valores inteiros a b c.
	
	printf("Digite um valor para a: \n");
	scanf("%i", &a);
	printf("Digite um valor para b: \n");
	scanf("%i", &b);
	printf("Digite um valor para c: \n");
	scanf("%i", &c);
	
	contar = 0;
	
	for (a; a <= b; a++){
		armazem = a;
		
		if (armazem % c == 0){
			somar = somar + armazem;
			contar = contar  + 1;
		}
	}
	
	
	printf("Quantos números são divisiveis por c: %i\n\n", contar);
	printf("A soma total de todos os números divisiveis por c é: %i", somar);
	
	
	
	
	
	
	
	return 0;
}
