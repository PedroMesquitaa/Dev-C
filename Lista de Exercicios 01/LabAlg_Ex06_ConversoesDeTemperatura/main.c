#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome no prompt
	SetConsoleTitle ("Conversoes de Temperatura");
	
	//entrada
	int grausCelsius1, grausCelsius2, grausFahrenheit1 = 0;
	
	printf("..:: Conversor para Fahrenheit ::..\n");
	printf("Digite quantos graus (Celsius) esta o dia: \n");
	scanf("%i", &grausCelsius1);
	
	//processamento
	grausCelsius2 = (grausCelsius1 / 5) * 9;
	grausFahrenheit1 = grausCelsius2 + 32;
	
	//saida
	printf("\n");
	printf("..:: Resultadao ::..\n");
	printf("A temperatura em Farenheit: %i\n", grausFahrenheit1);
	
	return 0;
}
