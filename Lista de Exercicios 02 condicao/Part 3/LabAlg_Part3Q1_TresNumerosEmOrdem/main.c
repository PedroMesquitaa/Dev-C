#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* ORDENAR � Crie uma aplica��o que solicite do usu�rio 3 valores inteiros quaisquer em qualquer ordem, os valores dever�o ser apresentados ordenados. */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Ordenar");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero1, numero2, numero3, ordem = 0;
	
	//entrada. Solicitando ao usuario os tres n�meros.
	
	printf("..:: Ordenar os N�meros ::..\n'");
	printf("Digite o Primeiro n�mero: \n");
	scanf("%i", &numero1);
	printf("Digite o Segundo n�mero: \n");
	scanf("%i", &numero2);
	printf("Digite o Terceiro n�mero: \n");
	scanf("%i", &numero3);
	
	//Processamento e Sa�da. # Variavel ordem sera onde vou ficar trocando os numeros para colocar em ordem.
	
	if(numero1 > numero2){
		ordem = numero1;
		numero1 = numero2;
		numero2 = ordem;
	}
	
	if(numero1 > numero3){
		ordem = numero1;
		numero1 = numero3;
		numero3 = ordem;
	}
	
	if(numero2 > numero3){
		ordem = numero2;
		numero2 = numero3;
		numero3 = ordem;
	}
	
	printf("\nA ordem � %i, %i, %i", numero1, numero2, numero3);
	
	
	
	
	
	return 0;
}
