#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Aprovado/Reprovado");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	float av1, av2, trb, media = 0.0;
	
	// Entrada. Solicitando ao usuario as notas da avaliacao 1, avaliacao 2 e trabalho.
	
	printf("..:: Aluno Online ::..\n");
	printf("Digite a nota da Avaliação 1: \n");
	scanf("%f", &av1);
	printf("Digite a nota da Avaliação 2: \n");
	scanf("%f", &av2);
	printf("Digite a nota da Trabalho: \n");
	scanf("%f", &trb);
	
	// Processamento e Saída. Calculando a média: av1 = 30%, av2 = 40% e trb = 30%.
	
	media = (av1 * 0.3) + (av2 * 0.4) + (trb * 0.3);
	
	printf("..:: RESULTADO ::..\n");
	
	if (media >= 0 && media <= 4.99){
		printf("Reprovado! Sua média foi %.2f.", media);
	}if (media >= 5.00 && media <= 7.49){
		printf("Aprovado! Sua média foi %.2f.", media);
	}if (media >= 7.50){
		printf("Parabéns, você foi aprovado com excelência. Sua média foi %.2f.", media);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
