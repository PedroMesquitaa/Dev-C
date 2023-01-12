#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//titulo na barra do prompt
	SetConsoleTitle("Dividir Conta Restaurante");
	
	//declaracao variaveis
	float valorGasto = 0.0;
	float taxaDeServico = 0.0;
	float custoTotal = 0.0;
	float custoTaxaDeServico = 0.0;
	int pessoas;
	float valorPessoa = 0.0;
	
	//entrada
	printf("..:: Caixa Eletronico ::..\n");
	printf("Digite o valor gasto:\n");
	scanf("%f", &valorGasto);
	printf("Qual a taxa de servico?\n");
	scanf("%f", &taxaDeServico);
	printf("Sera divido em quantas pessoas?\n");
	scanf("%i", &pessoas);
	
	//processamento
	custoTaxaDeServico = (taxaDeServico/100) * valorGasto;
	custoTotal = valorGasto * (taxaDeServico/100) + valorGasto;
	valorPessoa = custoTotal/pessoas;
	
	//saida
	printf("\n");
	printf("..:: Nota Fiscal::..\n");
	printf("Valor dividido: %.2f\n", valorPessoa);
	printf("Taxa de servico sobre o valor total: %.2f\n", custoTaxaDeServico);
	printf("Valor total %.2f\n", custoTotal);
	printf("\n");
	printf("Valor a ser pago: %.2f", valorPessoa);
	
	
	return 0;
}
