#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Ler um valor num�rico inteiro qualquer e fazer a sua apresenta��o caso o valor n�o seja maior que 
TRES. Utilize apenas o .n�o. (da tabela de operadores l�gicos) para a solu��o do problema. Aten��o 
para esse problema n�o deve ser utilizado os operadores relacionais.  */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Numero Maior que Tres");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero = 0;
	
	//entrada
	printf("Digite qualquer n�mero para saber se ele � maior que 3: \n");
	scanf("%i", &numero);
	
	//processamento e saida
	
	if(!(numero > 3)){
		printf("O n�mero n�o � maior que 3.");
	}else{
		printf("O n�mero � maior que 3.");
	}
	
	
	
	
	return 0;
}
