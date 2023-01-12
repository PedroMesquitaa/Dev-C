#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* ORDENAR – Crie uma aplicação que solicite do usuário 3 valores inteiros quaisquer em qualquer ordem, os valores deverão ser apresentados ordenados. */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Ordenar");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero1, numero2, numero3, ordem = 0;
	
	//entrada. Solicitando ao usuario os tres números.
	
	printf("..:: Ordenar os Números ::..\n'");
	printf("Digite o Primeiro número: \n");
	scanf("%i", &numero1);
	printf("Digite o Segundo número: \n");
	scanf("%i", &numero2);
	printf("Digite o Terceiro número: \n");
	scanf("%i", &numero3);
	
	//Processamento e Saída. # Variavel ordem sera onde vou ficar trocando os numeros para colocar em ordem.
	
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
	
	printf("\nA ordem é %i, %i, %i", numero1, numero2, numero3);
	
	
	
	
	
	return 0;
}
