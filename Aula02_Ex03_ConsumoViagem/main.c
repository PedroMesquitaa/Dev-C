#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	// Declaracao variáveis	
	int distancia, numeroPedagios = 0;
	float autonomiaVeiculo, precoCombustivel, 
	      valorUnitarioPedagio = 0.0;
	double consumoCombustivel, custoCombustivel, custoPedagios,
	      custoTotalViagem = 0.0;
	
	// Entrada
	printf("Digite a distância (kilometros):\n");
	scanf("%i", &distancia);
	printf("Digite a autonomia do veículo (km/l):\n");
	scanf("%f", &autonomiaVeiculo);
	printf("Digite o preço do combustível (l):\n");
	scanf("%f", &precoCombustivel);
	printf("Digite o número de pedágios:\n");
	scanf("%i", &numeroPedagios);
	printf("Digite o valor médido dos pedágios:\n");
	scanf("%f", &valorUnitarioPedagio);
	
	//Processamento
	consumoCombustivel = distancia / autonomiaVeiculo;
	custoCombustivel = consumoCombustivel * precoCombustivel;
	custoPedagios = numeroPedagios * valorUnitarioPedagio;
	custoTotalViagem = (custoCombustivel + custoPedagios);
	
	//Saída
	printf("\n");
	printf("..::RELATÓRIO::..\n");
	printf("Combustível:\t %3.2f \n", custoCombustivel);
	printf("Pedágios:   \t %3.2f \n", custoPedagios);
	printf("Total:      \t %3.2f \n", custoTotalViagem);
	
	return 0;
}


