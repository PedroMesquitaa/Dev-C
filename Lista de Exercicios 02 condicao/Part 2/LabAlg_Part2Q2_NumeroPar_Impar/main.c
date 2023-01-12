#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Ler um valor inteiro e apresentar uma mensagem informando se o valor é um número */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Numero Par ou Impar");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero = 0;
	
	//entrada. Pedindo para o usuario colocar um numero.
	printf("..:: Par ou Ímpar ::..\n");
	printf("Digite um número para saber se ele é par ou ímpar: \n");
	scanf("%i", &numero);
	
	//processamento e saida. Mostrando ao usuario o resultado if
	printf("\n..:: Resultado ::..\n");
	
	if (numero % 2 == 0){
		printf("O número %i é par!", numero);
	}else{
		printf("O número %i é ímpar!", numero);
	}
	
	
	
	
	return 0;
}
