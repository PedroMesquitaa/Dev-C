#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Idades");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int opc = 0;
	int vetorIdades[8];
	int i, j = 0;
	int contar, somar = 0;
	
	// Entrada
	
	do {
		
		printf(":: IDADES ::.. \n");
		printf("1. Inicializar vetor     \n");
		printf("2. Carregar              \n");
		printf("3. Imprimir              \n");
		printf("4. Somar                 \n");
		printf("5. Pares                 \n");
		printf("6. Contar Pares          \n");
		printf("7. Somar Pares           \n");
		printf("8. Menores Idades        \n");
		printf("9. Contar Maiores Idades \n");
		printf("10. Somar Maiores Idades \n");
		printf("11. Sair                 \n");
		printf("Digite a opção:          \n");
		scanf("%i", &opc);
		
		
		if (opc == 1){
			
			for (i = 0; i < 8; i++){
				vetorIdades[i] = 0;
			}
			
			printf("\nVetor inicializado! \n\n");
			
			
		}else if (opc == 2){
			
			printf("\n");
			
			for (i = 0; i < 8; i++){
				printf("Digite uma idade para posição %i: \n", i);
				scanf("%i", &j);
				
				vetorIdades[i] = j;
			}
			
		}else if (opc == 3){
			
			for (i = 0; i < 8; i++){
				printf("Idade na posição [%i]: %i \n", i, vetorIdades[i]);

			}
			printf("\n\n");
			
			
		}else if (opc == 4){
			j = 0;
			
			for (i = 0; i < 8; i++) {
				j = j + vetorIdades[i];
			}
			printf("A soma das idades é: %i \n", j);
			printf("\n\n");
			
			
		}else if (opc == 5){
			
			for (i = 0; i < 8; i++){
				
				if(vetorIdades[i] % 2 == 0){
					printf("Idades pares na posição [%i]: %i \n", i, vetorIdades[i]);
					
				}

			}
			printf("\n\n");
			
			
		}else if (opc == 6){
			contar = 0;
			
			for (i = 0; i < 8; i++){
				
				if(vetorIdades[i] % 2 == 0){
		
					contar = contar + 1;

					
				}
			}
			printf("Existe %i idades pares\n", contar);
			printf("\n\n");
			
			
		}else if (opc == 7){
			somar = 0;
			
			for (i = 0; i < 8; i++){
				
				if(vetorIdades[i] % 2 == 0){
		
					somar = somar + vetorIdades[i];

					
				}
			}
			printf("A soma das idades pares é: %i\n", somar);
			printf("\n\n");
			
			
		}else if (opc == 8){
			
			for (i = 0; i < 8; i++){
				
				if(vetorIdades[i] < 18){
					printf("Idades que são menores de 18 na posição [%i]: %i \n", i, vetorIdades[i]);
					
				}

			}
			printf("\n\n");
			
			
		}else if(opc == 9){
			contar = 0;
			
			for (i = 0; i < 8; i++){
				
				if(vetorIdades[i] >= 18){
		
					contar = contar + 1;

					
				}
			}
			printf("Existe %i idades maiores e iguais a 18.\n", contar);
			printf("\n\n");
			
			
		}else if(opc == 10){
			
			somar = 0;
			
			for (i = 0; i < 8; i++){
				
				if(vetorIdades[i] >= 18){
		
					somar = somar + vetorIdades[i];

					
				}
			}
			printf("A soma das idades maiores e iguais 18 é: %i\n", somar);
			printf("\n\n");
			
		}

		
	}while (opc != 11);
	
	
	
	return 0;
}
