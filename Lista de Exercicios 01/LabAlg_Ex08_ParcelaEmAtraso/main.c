#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome do prompt
	SetConsoleTitle ("Parcela Em Atraso");
	
	//entrada
	float valorInicial, valorFinal, prestacao, taxa, taxaDeJuros, taxa2 = 0.0;
	int diasAtrasado = 0;
	
	printf("..:: PRESTACAO DA PARCELA ::..\n");
	printf("Digite o valor da prestacao: \n");
	scanf("%f", &valorInicial);
	printf("Porcentagem da taxa a cada 30 dias: \n");
	scanf("%f", &taxa);
	printf("Digite quantos dias de atraso: \n");
	scanf("%i", &diasAtrasado);
	
	//processamento
	taxa2 = taxa / 100;
	taxaDeJuros = (taxa2 / 30) * diasAtrasado * valorInicial;
	valorFinal = valorInicial + taxaDeJuros;
	
	//saida
	printf("\n");
	printf("..:: RELATORIO ::..\n");
	printf("Valor inicial da prestacao: R$%.2f\n", valorInicial);
	printf("Valor da taxa de juros sobre os dias atrasados: R$%.2f\n", taxaDeJuros);
	printf("\n");
	printf("Valor Final da prestacao: R$%.2f", valorFinal);
	
	
	return 0;
}
