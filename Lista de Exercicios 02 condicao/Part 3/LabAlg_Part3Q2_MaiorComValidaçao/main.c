#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Maior com Validacao");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero1, numero2 = 0;
	
	// Entrda. Solicitando ao usuario os dois valores.
	
	printf("..:: Qual o Maior Valor? ::..\n");
	printf("Digite o Primeiro n�mero: \n");
	scanf("%i", &numero1);
	printf("Digite o Segundo n�mero: \n");
	scanf("%i", &numero2);
	
	//Processamento e Sa�da. Verificando se os valores sao iguais. E mostrando qual o maio valor.
	
	if (numero1 == numero2){
		printf("Valores iguais n�o s�o permitidos! Tente novamente.");
	}
	else if (numero1 > numero2){
		printf("O n�mero %i � o maior valor.", numero1);
	}
	else if (numero2 > numero1){
		printf("O n�mero %i � o maior valor.", numero2);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
