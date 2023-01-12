#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Calculadora de Dias Vividos.");
	setlocale (LC_ALL, "Portuguese");
	
	
	int anoIdade, meses, dias, diasVividos = 0;

	//entrada. Usuario inserindo as informacoes
	
	printf("..:: Calculadora De Dias Vividos ::..\n");
	printf("Digite sua idade atual: \n");
	scanf("%i", &anoIdade);
	printf("Digite o mês do seu nascimento: \n");
	scanf("%i", &meses);
	if(meses < 1 || meses > 11){
		printf("\nMês invalido! Tente novamente.\n");
		return 0;
	}
	
	printf("Digite o dia do seu nascimento: \n");
	scanf("%i", &dias);
	if(dias < 1 || dias > 29){
		printf("\nDias invalidos! Tente novamente.\n");
		return 0;
	}
	
	//processamento
	diasVividos = (anoIdade * 365) + (meses * 30) + dias;
	
	//saida. Mostrando os dias vividos ao usuario
	printf("\n..:: Resultado ::..\n");
	printf("Você viveu %i dias.", diasVividos);
	
	
	
	return 0;
}
