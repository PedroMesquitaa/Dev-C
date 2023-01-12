#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Diferenca de Valores");
	
	//entrada
	int n1, n2, diferenca1, diferenca2 = 0;
	
	printf("..:: Calculadora ::..\n");
	printf("Digite um numero: \n");
	scanf("%i", &n1);
	printf("Digite outro numero: \n");
	scanf("%i", &n2);
	
	//processamento e saida
	printf("..:: Resultado ::..\n");
	if(n1 > n2){
		diferenca1 = n1 -n2;
		printf("%i e o maior numero. A diferenca do menor para o maior e de: %i\n", n1, diferenca1);
	}
	else if(n2 > n1){
		diferenca2 = n2 - n1;
		printf("%i e o maior numero. A diferenca do menor para o maior e de: %i\n", n2, diferenca2);
	}
	else if(n1 == n2){
		printf("Os dois numeros tem o mesmo valor. Tente novamente.");
	}
	
	
	return 0;
}
