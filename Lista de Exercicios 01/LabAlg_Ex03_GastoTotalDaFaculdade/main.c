#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome no prompt
	SetConsoleTitle ("Gasto Total da Faculdade");
	
	//declaracao das variaveis
	float mensalidadeFaculdade, transporte, alimentacao = 0.0;
	float valorTotalMensal, valorTotalAnualTransporte, valorTotalAnualAlimentacao = 0.0;
	float valorTotalAnualMensalidade = 0.0;
	float gastoTotalAnual = 0.0;
	
	//entrada
	printf("..:: Sistema ::..\n");
	printf("Digite o valor da sua mensalidade na faculdade:\n");
	scanf("%f", &mensalidadeFaculdade);
	printf("Digite o seu custo com transporte:\n");
	scanf("%f", &transporte);
	printf("Digite o seu gasto com alimentacao na faculdade:\n");
	scanf("%f", &alimentacao);
	
	//processamento
	valorTotalMensal = mensalidadeFaculdade + transporte + alimentacao;
	valorTotalAnualMensalidade = mensalidadeFaculdade * 12;
	valorTotalAnualTransporte = transporte * 12;
	valorTotalAnualAlimentacao = alimentacao * 12;
	gastoTotalAnual = valorTotalAnualMensalidade + valorTotalAnualTransporte + valorTotalAnualAlimentacao;
	
	//saida
	printf("\n");
	printf("..:: Relatorio ::..\n");
	printf("Seu gasto total no mes: %.2f\n", valorTotalMensal);
	printf("Seu gasto anual com transporte: %.2f\n", valorTotalAnualTransporte);
	printf("Seu gasto anual com alimentacao: %.2f\n", valorTotalAnualAlimentacao);
	printf("\n");
	printf("Seu gasto total anual: %.2f", gastoTotalAnual);
	
	return 0;
}
