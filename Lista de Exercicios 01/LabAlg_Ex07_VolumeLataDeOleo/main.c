#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome do prompt
	SetConsoleTitle ("Volume Lata de Oleo");
	
	//entrada
	float volume, raio, raioAoQuadrado, altura = 0.0;
	
	printf("..:: CALCULADORA ::..\n");
	printf("Digite a altura da lata de oleo: \n");
	scanf("%f", &altura);
	printf("Digite o raio da lata de oleo: \n");
	scanf("%f", &raio);
	
	//processamento
	raioAoQuadrado = raio * raio;
	volume = 3.1 * raioAoQuadrado * altura;
	
	//saida
	printf("\n");
	printf("..:: RESULTADO ::..\n");
	printf("O volume lata de oleo e: %.2f\n", volume);
	
	return 0;
}
