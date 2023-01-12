#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Equacao de Segundo Grau e Bhaskara");
	
	float a, b, c, delta, x1, x2 = 0.0;
	
	//entrada
	printf("..:: Calculadora de Bhaskara ::..\n");
	printf("Digite o valor de a: \n");
	scanf("%f", &a);
	printf("Digite o valor de b: \n");
	scanf("%f", &b);
	printf("Digite o valor de c: \n");
	scanf("%f", &c);
	
	//processamento e saida
	delta = (b * b) - 4 * (a * c);
	
	if(delta < 0){
		printf("Delta não pode ser menor que Zero! Tente Novamente.");
	}
	else if(delta == 0){
		printf("Delta não pode ser igual a Zero! Tente Novamente.");
	}
	else{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("\n..:: Resultado ::..\n");
		printf("Delta: %.1f", delta);
		printf("\nX1: %.1f", x1);
		printf("\nX2: %.1f", x2);
	}
	
	
	return 0;
}
