#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Ler um valor inteiro e apresentar uma mensagem informando se o valor � um n�mero */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Numero Par ou Impar");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero = 0;
	
	//entrada. Pedindo para o usuario colocar um numero.
	printf("..:: Par ou �mpar ::..\n");
	printf("Digite um n�mero para saber se ele � par ou �mpar: \n");
	scanf("%i", &numero);
	
	//processamento e saida. Mostrando ao usuario o resultado if
	printf("\n..:: Resultado ::..\n");
	
	if (numero % 2 == 0){
		printf("O n�mero %i � par!", numero);
	}else{
		printf("O n�mero %i � �mpar!", numero);
	}
	
	
	
	
	return 0;
}
