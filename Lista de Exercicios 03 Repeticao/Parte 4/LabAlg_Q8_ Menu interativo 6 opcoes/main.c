#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Menu Interativo 6 Opcoes");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int final, i, opcao = 0;
	int contar, vezes = 0;
	
	// Entrada
	
	while (opcao != 9){
		printf("..:: CALCULADORA ::.. \n");
		printf("1. Contar pares       \n");
		printf("2. Contar ímpares     \n");
		printf("3. Produto pares     \n");
		printf("4. Produto ímpares     \n");
		printf("9. Sair               \n");
		printf("\nDigite a opção:\n");
		scanf("%i", &opcao);
		
	
		if (opcao == 1){ 
			printf("\n..:: CONTAR PARES ::..\n"); 
			printf("Digite o número limite da contagem:\n");
			scanf("%i", &final);
			
			contar = 0;
					
			for (i = 1; i <= final; i++){
				if ((i % 2) == 0){
					contar = contar + 1; 
					printf("\nPar do intervalo: %i \n\n\n", i);
				}
			}
			
			printf("\nExiste %i pares entre 1 é %i \n\n\n", contar, final);
			
			
		}else if (opcao == 2){ 
			printf("\n..:: CONTAR ÍMPARES ::..\n"); 
			printf("Digite o número limite da contagem:\n");
			scanf("%i", &final);
			
			contar = 0;
					
			for (i = 1; i <= final; i++){
				if ((i % 2) != 0){
					contar = contar + 1; 
					printf("\nÍmpar do intervalo: %i \n\n\n", i);
				}
			}
			
			printf("\nExiste %i ímpares entre 1 é %i \n\n\n", contar, final);
			
			
		}else if (opcao == 3){
			
			printf("\n..:: PRODUTO PARES ::..\n");
			printf("Digite o número limite da contagem:\n");
			scanf("%i", &final);
			
			vezes = 1;		
					
			for (i = 1; i <= final; i++){
				if ((i % 2) == 0){
					vezes = vezes * i;
					printf("\nnPar do intervalo de 1 até %i é: %i \n\n\n", final, i);
				}
			}
			
			printf("\nO valor total da multiplicação dos pares é: %i \n\n\n", vezes);
				
		}else if (opcao == 4){
			
			printf("\n..:: PRODUTO ÍMPARES ::..\n"); 
			printf("Digite o número limite da contagem:\n");
			scanf("%i", &final);
			
			vezes = 1;
					
			for (i = 1; i <= final; i++){
				if ((i % 2) != 0){
					vezes = vezes * i; 
					printf("\nÍmpar do intervalo de 1 até %i é: %i \n\n\n", final, i);
				}
			}
			
			printf("\nO valor total da multiplicação dos pares é: %i \n\n\n", vezes);
	
		}		
	}
	
	return 0;
}
