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
		printf("2. Subtra��o          \n");
		printf("3. Multiplica��o      \n");
		printf("4. Divis�o            \n");
		printf("9. Sair               \n");
		printf("\nDigite a op��o: \n");
		scanf("%i", &opcao);
		
		// Processamento e Sa�da dentro do while
		
		if (opcao == 1){
		printf("\n..:: SOMA ::..\n");
		printf("Digite o primeiro n�mero: \n");                               // Se o Usuario escolher a opcao 1, ele devera escolher dois numeros para o programa fazer a soma.
		scanf("%i", &n1);                                                   
		printf("Digite o segundo n�mero: \n");
		scanf("%i", &n2);
		resultado = n1 + n2;
		printf("\n O resultado da soma � %i\n\n", resultado);
	}else{
		if (opcao == 2){
			printf("\n..:: SUBTRA��O ::..\n");
			printf("Digite o primeiro n�mero: \n");                           // Se o Usuario escolher a opcao 2, ele devera escolher dois numeros para o programa fazer a subtra��o.
			scanf("%i", &n1);
			printf("Digite o segundo n�mero: \n");
			scanf("%i", &n2);
			resultado = n1 - n2;
			printf("\n O resultado da subtra��o � %i\n\n", resultado);
		}else{
			if (opcao == 3){
				printf("\n..:: MULTIPLICA��O ::..\n");
				printf("Digite o primeiro n�mero: \n");                       // Se o Usuario escolher a opcao 3, ele devera escolher dois numeros para o programa fazer a multiplica��o.
				scanf("%i", &n1);
				printf("Digite o segundo n�mero: \n");
				scanf("%i", &n2);
				resultado = n1 * n2;
				printf("\n O resultado da multiplica��o � %i\n\n", resultado);
			}else{
				if (opcao == 4){
					printf("\n..:: DIVIS�O ::..\n");
					printf("Digite o primeiro n�mero: \n");                   // Se o Usuario escolher a opcao 4, ele devera escolher dois numeros para o programa fazer a divis�o.
					scanf("%i", &n1);
					printf("Digite o segundo n�mero: \n");
					scanf("%i", &n2);
					resultado = n1 / n2;
					printf("\n O resultado da divis�o � %i\n\n", resultado);
				}
			}
		}
	}
		
	}

	
	return 0;
}
