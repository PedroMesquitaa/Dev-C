#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Acomular Pares e Impares");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int inicial, final, i, opcao = 0;
	int contar, somar = 0;
	
	// Entrada
	
	while (opcao != 9){
		printf("..:: CALCULADORA ::.. \n");
		printf("1. Contar pares       \n");      // Uma Calculadora que dara opcoes de contar, somar numeros pares ou impares entre um valor inical e final. Se digitar 9 a calculadora encerra.
		printf("2. Somar pares        \n");
		printf("3. Contar e somar impares          \n");
		printf("9. Sair               \n");
		printf("\nDigite a opção:\n");
		scanf("%i", &opcao);
		
	
		if (opcao == 1){  // Opcao 1 mostrara todos os numero pares
			printf("\n..:: CONTAR PARES ::..\n");
			printf("Digite o valor inicial:\n");
			scanf("%i", &inicial);                // Solicitando ao usuario o numero inical e final.
			printf("Digite o valor final:\n");
			scanf("%i", &final);
		
		
			if (inicial == final){  // Os numeros nao podem ser iguais
				printf("Valores iguais não são permitidos!\n\n");
			}else{
				if (inicial > final){  // O numero inicial nao pode ser maior que o final
					printf("O valor inicial está maior que o valor final!\n\n");
				}else{
					contar = 0;
					
					for (i = inicial; i <= final; i++){      // Variavel i recebe o valor da var inicial || enquanto i for menor igual ao valor final,  a variavel i ira de 1 em 1 até chegar ao final.
						if ((i % 2) == 0){
							contar = contar + 1; // contar serve para mostrar quantos numero tem no total.
							printf("\nPar do intervalo: %i \n\n\n", i);
						}
					}
				}
			}
		
		}else if (opcao == 2){   // Opcao 2 ira somar todos os valores pares.
			printf("\n..:: SOMAR PARES ::..\n");
			printf("Digite o valor inicial:\n");
			scanf("%i", &inicial);                // Solicitando ao usuario o numero inical e final.
			printf("Digite o valor final:\n");
			scanf("%i", &final);
			
			if (inicial == final){  // Os numeros nao podem ser iguais
				printf("Valores iguais não são permitidos!\n\n");
			}else{
				if (inicial > final){  // O numero inicial nao pode ser maior que o final
					printf("O valor inicial está maior que o valor final!\n\n");
				}else{
					somar = 0;
					
					for (i = inicial; i <= final; i++){      // Variavel i recebe o valor da var inicial || enquanto i for menor igual ao valor final,  a variavel i ira de 1 em 1 até chegar ao final.
						if ((i % 2) == 0){
							somar = somar + i; // somar serve para somar cada valor que ele recebe e passa, Exemolo: somar = 2 || vai para o 4 e fica a conta: somar = 2 + 4
							printf("\nSoma dos pares: %i \n\n\n", somar);
						}
					}
				}
			}
					
		}else if (opcao == 3){
			printf("\n..:: CONTAR E SOMAR PARES ::..\n");
			printf("Digite o valor inicial:\n");
			scanf("%i", &inicial);                // Solicitando ao usuario o numero inical e final.
			printf("Digite o valor final:\n");
			scanf("%i", &final);
			
			if (inicial == final){  // Os numeros nao podem ser iguais
				printf("Valores iguais não são permitidos!\n\n");
			}else{
				if (inicial > final){  // O numero inicial nao pode ser maior que o final
					printf("O valor inicial está maior que o valor final!\n\n");
				}else{
					contar = 0;
					somar = 0;
					
					for (i = inicial; i <= final; i++){      // Variavel i recebe o valor da var inicial || enquanto i for menor igual ao valor final,  a variavel i ira de 1 em 1 até chegar ao final.
						contar = contar + 1;
						somar = somar + i; 
						printf("\nImpares do intervalo: %i \n\n\n", contar);
						printf("\nSoma dos impares: %i \n\n\n", somar);
					}
				}
			}	
		}		
	}
	
	return 0;
}
