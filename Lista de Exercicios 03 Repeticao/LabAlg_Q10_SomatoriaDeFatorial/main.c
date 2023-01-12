#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somatoria de Fatorial");
	setlocale(LC_ALL, "Portuguese");
	
	// Var
	int num1, num2, num3, num4, num5, somafat = 0;
	int fat1, fat2, fat3, fat4, fat5 = 1;
	
	// Entrada
	printf("Insira o primeiro número para o qual deseja calcular o fatorial:");
	scanf("%i", &num1);
	printf("Insira o segundo número para o qual deseja calcular o fatorial:");
	scanf("%i", &num2);
	printf("Insira o terceiro número para o qual deseja calcular o fatorial:");
	scanf("%i", &num3);
	printf("Insira o quarto número para o qual deseja calcular o fatorial:");
	scanf("%i", &num4);
	printf("Insira o quinto número para o qual deseja calcular o fatorial:");
	scanf("%i", &num5);
	
	// Processamento
	for(fat1 = 1; num1 >= 1; num1--){
		fat1 = fat1 * num1;
	}
	for(fat2 = 1; num2 >= 1; num2--){
		fat2 = fat2 * num2;
	}
	for(fat3 = 1; num3 >= 1; num3--){
		fat3 = fat3 * num3;
	}
	for(fat4 = 1; num4 >= 1; num4--){
		fat4 = fat4 * num4;
	}
	for(fat5 = 1; num5 >= 1; num5--){
		fat5 = fat5 * num5;
	}
	somafat = fat1 + fat2 + fat3 + fat4 + fat5;
	
	// Saida
	
	printf("O somatório do fatorial de cada número é %i", somafat);
	
	
	
	return 0;
}
