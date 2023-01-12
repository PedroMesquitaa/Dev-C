#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome do prompt
	SetConsoleTitle ("Media Final LP");
	
	//entrada
	float mediaFinal, n1, np1, n2, np2 = 0.0;
	float atvs1, atvs2, ead1, ead2, av1, av2, pluri = 0.0;
	
	printf("..:: NOTAS FINAIS ::..\n");
	printf("Digite a nota da atividade do primeiro semestre: \n");
	scanf("%f", &atvs1);
	printf("Digite a nota ead do primeiro semestre: \n");
	scanf("%f", &ead1);
	printf("Digite a nota avaliacao do primeiro semestre: \n");
	scanf("%f", &av1);
	printf("Digite a nota da atividade do segundo semestre: \n");
	scanf("%f", &atvs2);
	printf("Digite a nota ead do segundo semestre: \n");
	scanf("%f", &ead2);
	printf("Digite a nota avaliacao do segundo semestre: \n");
	scanf("%f", &av2);
	printf("Digite a nota do pluri: \n");
	scanf("%f", &pluri);
	
	
	//processamento
	n1 = (atvs1 * 0.2) + (ead1 * 0.2) + (av1 * 0.6);
	n2 = (atvs2 * 0.2) + (ead2 * 0.2) + (pluri * 0.2) + (av2 * 0.4);
	np1 = n1 * 0.4;
	np2 = n2* 0.6;
	mediaFinal = (n1 + n2) / 2;
	
	//saida
	printf("\n");
	printf("..:: Boletim final ::..\n");
	printf("Nota NP1: %.2f\n", np1);
	printf("Nota NP2: %.2f\n", np2);
	printf("Media Final: %.2f\n", mediaFinal);
	
	
	return 0;
}
