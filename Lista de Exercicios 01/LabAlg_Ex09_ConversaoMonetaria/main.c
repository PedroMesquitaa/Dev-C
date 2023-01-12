#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		//nome do prompt
		SetConsoleTitle ("Conversao Monetaria");
		
		//entrada
		float valorReais, cotacaoDolar, cotacaoEuro, valorDolar, valorEuro = 0.0;
		
		printf("..:: CONVERSOR MONETARIO ::..\n");
		printf("Valor em reias: \n");
		scanf("%f", &valorReais);
		printf("Digite a cotacao do dolar: \n");
		scanf("%f", &cotacaoDolar);
		printf("Digite a cotacao do euro: \n");
		scanf("%f", &cotacaoEuro);
		
		//processamento
		valorDolar = valorReais / cotacaoDolar;
		valorEuro = valorReais / cotacaoEuro;
		
		//saida
		printf("\n");
		printf("..:: RESULTADO ::..\n");
		printf("Valor Real para Dolar: US$%.2f\n", valorDolar);
		printf("Valor Real para Euro: %.2f\n", valorEuro);
		
	return 0;
}
