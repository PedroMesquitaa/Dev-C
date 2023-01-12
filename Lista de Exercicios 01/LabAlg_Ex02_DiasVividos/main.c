#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//titulo na barra do prompt
	SetConsoleTitle ("Quantidade de Dias Vividos");
	
	//declaracao variaveis
	int diaNascimento, mesNascimento, anoNascimento = 0;
	int anoAtual = 0;
	int diasHoje, mesHoje, anoHoje = 0;
	
	
	//entrada
	printf("..:: Calculadora de Idade ::..\n");
	printf("Digite seu ano de nascimento:\n");
	scanf("%i", &anoNascimento);
	printf("Digite o ano atual:\n");
	scanf("%i", &anoAtual);
	
	//processamento
	diasHoje = (anoAtual - anoNascimento ) * 365;
	
	//saida
	printf("..:: Relatorio ::..\n");
	printf("\n");
	printf("Quantidade de dias vividos: %i\n", diasHoje);

	return 0;
}
