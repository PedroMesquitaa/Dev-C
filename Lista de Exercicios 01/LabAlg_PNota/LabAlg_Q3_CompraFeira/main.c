#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//titulo na barra do prompt
	SetConsoleTitle("Compra Feira");
	
	//declaracao variaveis
	float custoCenoura, custoTomate, custoPepino = 0.0;
	float valorCenoura, valorTomate, valorPepino = 0.0;
	int quantidadeBandejasCenoura, quantidadeBandejasTomate, quantidadeBandejasPepino = 0;
	float valorTotal = 0.0;
	
	//entrada
	printf("..:: Caixa Eletronico ::..\n");
	printf("Digite o valor da cenoura:\n");
	scanf("%f", &valorCenoura);
	printf("Quantas bandejas:\n");
	scanf("%i", &quantidadeBandejasCenoura);
	printf("Digite o valor do tomate:\n");
	scanf("%f", &valorTomate);
	printf("Quantas bandejas:\n");
	scanf("%i", &quantidadeBandejasTomate);
	printf("Digite o valor do pepino:\n");
	scanf("%f", &valorPepino);
	printf("Quantas bandejas:\n");
	scanf("%i", &quantidadeBandejasPepino);
	
	//processamento
	custoCenoura = valorCenoura * quantidadeBandejasCenoura;
	custoTomate = valorTomate * quantidadeBandejasTomate;
	custoPepino = valorPepino * quantidadeBandejasPepino;
	valorTotal = (custoCenoura + custoTomate + custoPepino);
	
	//saida
	printf("\n");
	printf("..:: Nota Fiscal ::..\n");
	printf("Cenoura: %.2f\n", custoCenoura);
	printf("Tomate: %.2f\n", custoTomate);
	printf("Pepino: %.2f\n", custoPepino);
	printf("\n");
	printf("... Valor a ser Pago ...\n");
	printf("%.2f", valorTotal);
	
	return 0;
}
