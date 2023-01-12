#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Ler um valor numérico inteiro qualquer e fazer a sua apresentação caso o valor não seja maior que 
TRES. Utilize apenas o .não. (da tabela de operadores lógicos) para a solução do problema. Atenção 
para esse problema não deve ser utilizado os operadores relacionais.  */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Numero Maior que Tres");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero = 0;
	
	//entrada
	printf("Digite qualquer número para saber se ele é maior que 3: \n");
	scanf("%i", &numero);
	
	//processamento e saida
	
	if(!(numero > 3)){
		printf("O número não é maior que 3.");
	}else{
		printf("O número é maior que 3.");
	}
	
	
	
	
	return 0;
}
