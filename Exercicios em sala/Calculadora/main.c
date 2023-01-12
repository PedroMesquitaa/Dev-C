#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Calculadora");
	setlocale (LC_ALL, "Portuguese");
	
	// var
	int n1, n2, resultado, opcao = 0;
	
	// Entrada
	
	while (opcao != 9){                         // Dando opcoes ao usuario escolher quais tipos de conta fazer, se ele digitar 9 encerra a calculadora.
		printf("..:: CALCULADORA ::.. \n");
		printf("1. Soma               \n");
		printf("2. Subtração          \n");
		printf("3. Multiplicação      \n");
		printf("4. Divisão            \n");
		printf("9. Sair               \n");
		printf("\nDigite a opção: \n");
		scanf("%i", &opcao);
		
		// Processamento e Saída dentro do while
		
		if (opcao == 1){
		printf("\n..:: SOMA ::..\n");
		printf("Digite o primeiro número: \n");                               // Se o Usuario escolher a opcao 1, ele devera escolher dois numeros para o programa fazer a soma.
		scanf("%i", &n1);                                                   
		printf("Digite o segundo número: \n");
		scanf("%i", &n2);
		resultado = n1 + n2;
		printf("\n O resultado da soma é %i\n\n", resultado);
	}else{
		if (opcao == 2){
			printf("\n..:: SUBTRAÇÃO ::..\n");
			printf("Digite o primeiro número: \n");                           // Se o Usuario escolher a opcao 2, ele devera escolher dois numeros para o programa fazer a subtração.
			scanf("%i", &n1);
			printf("Digite o segundo número: \n");
			scanf("%i", &n2);
			resultado = n1 - n2;
			printf("\n O resultado da subtração é %i\n\n", resultado);
		}else{
			if (opcao == 3){
				printf("\n..:: MULTIPLICAÇÃO ::..\n");
				printf("Digite o primeiro número: \n");                       // Se o Usuario escolher a opcao 3, ele devera escolher dois numeros para o programa fazer a multiplicação.
				scanf("%i", &n1);
				printf("Digite o segundo número: \n");
				scanf("%i", &n2);
				resultado = n1 * n2;
				printf("\n O resultado da multiplicação é %i\n\n", resultado);
			}else{
				if (opcao == 4){
					printf("\n..:: DIVISÃO ::..\n");
					printf("Digite o primeiro número: \n");                   // Se o Usuario escolher a opcao 4, ele devera escolher dois numeros para o programa fazer a divisão.
					scanf("%i", &n1);
					printf("Digite o segundo número: \n");
					scanf("%i", &n2);
					resultado = n1 / n2;
					printf("\n O resultado da divisão é %i\n\n", resultado);
				}
			}
		}
	}
		
	}

	
	return 0;
}
