#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome na barra do prompt
	SetConsoleTitle ("Area Circunferencia");
	
	//entrada
	float pi, raio, area, quadrado = 0.0;
	
	printf("..:: Calculadora ::..\n");
	printf("Digite o valor de pi: \n");
	scanf("%f", &pi);
	printf("Digite o valor do raio: \n");
	scanf("%f", &raio);
	
	//processamento
	quadrado = raio * raio;
	area = pi * quadrado;
	
	//saida
	printf("\n");
	printf("..:: Resultado ::..\n");
	printf("A area da circunferencia e: %.2f", area);
	return 0;
}
