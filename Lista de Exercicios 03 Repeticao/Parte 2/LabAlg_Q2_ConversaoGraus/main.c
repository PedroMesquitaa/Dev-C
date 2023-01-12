#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Coversao Graus");
	setlocale (LC_ALL, "Portuguese");
	
	int i, conta = 0;
	float grausCelsius, grausFahrenheit = 0.0;
	
	
	for (i = 1; i <= 10; i++){
		grausCelsius = grausCelsius + 10;
		conta = (grausCelsius * 1.8) + 32;
		grausFahrenheit = conta;
		
		printf("Graus Celsius %.0f = Graus Fahrenheit %.1f\n\n", grausCelsius, grausFahrenheit);
	}
	
	
	return 0;
}
