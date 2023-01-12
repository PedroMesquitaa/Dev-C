#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Calculadora para Barraca de Feira");
	
	//entrada
	int uniAbacaxi, duziaLaranja = 0;
	float quiloMandioca, abacaxi, laranja, mandioca, valorTotal = 0.0;
	
	printf("..:: Calculadora ::..\n");
	printf("Digite quantas unidades de abacaxi: \n");
	scanf("%i", &uniAbacaxi);
	printf("Digite quantas duzias de laranja: \n");
	scanf("%i", &duziaLaranja);
	printf("Digite quantos quilos ou gramas de mandioca: \n");
	scanf("%f", &quiloMandioca);
	
	//processamento
	abacaxi = uniAbacaxi * 5.00;
	laranja = duziaLaranja * 8.00;
	mandioca = quiloMandioca * 4.00;
	
	if(uniAbacaxi >= 3){
		abacaxi = uniAbacaxi * 4.00;
	}
	if(duziaLaranja >= 2){
		laranja = duziaLaranja * 6.00;
	}
	if(quiloMandioca >= 3.00){
		mandioca = quiloMandioca * 3.00;
	}
	
	valorTotal = abacaxi + laranja + mandioca;
	
	//saida
	printf("..:: Nota Fiscal ::..\n");
	printf("Valor abacaxi: %.2f\n", abacaxi);
	printf("Valor laranja: %.2f\n", laranja);
	printf("Valor mandioca: %.2f\n", mandioca);
	printf("\n");
	printf("Valor Total: %.2f", valorTotal);
	
	
	return 0;
	}
