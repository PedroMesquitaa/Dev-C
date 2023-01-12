#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Valor Negativo para Positivo");
	
	//entrada
	int numero1, numero2 = 0;
	
	printf("..:: Transformador para Positivo ::..\n");
	printf("Digite um numero negativo ou positivo: \n");
	scanf("%i", &numero1);
	
	//processamento e saida
	printf("..:: Resultado ::..\n");
	if(numero1 <= 0){
		numero2 = numero1 * -1;
		printf("%i", numero2);
	}
	else{
		printf("%i", numero1);
	}
	
	return 0;
}
