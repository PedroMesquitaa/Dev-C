#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Imprimir Multiplos");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int n, p, i = 0;
	
	printf("Digite um número: \n");
	scanf("%i", &n);
	
	printf("Digite um número que irá ser o multiplo da contagem: \n");
	scanf("%i", &p);
	
	for (i = 0; i <= n; i++){
		
		if (i % p == 0){
			printf("\n%i\n", i);
			
		}	
	}
	

	return 0;
}
