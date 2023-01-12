#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Valores Aleatorios");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int aux;
	int opc = 0;
	int vetorNumeros[60];
	int i, j = 0;
	int contar, igual = 0;
	int n1, n2 = 0;
	
	//  Valor aleatorio
	
	srand(time(NULL));
	
	// Entrada
	
	do{
		
		printf("..:: SORTEIO ::..\n");
		printf("1. Zerar                           \n");
		printf("2. Carregar Aleatório              \n");
		printf("3. Imprimir                        \n");
		printf("4. Entre Valores                   \n");
		printf("5. Exibir Repetidos                \n");
		printf("9. Sair                            \n");
		printf("Digite a opção:                    \n");
		scanf("%i", &opc);
		
		
		if (opc == 1){
			
			for (i = 0; i < 60; i++){
				vetorNumeros[i] = 0;
			}
			
			printf("\nVetor Zerado! \n\n");
			
			
		}else if (opc == 2){
			
			printf("\n");
			
			for (i = 0; i < 60; i++){
				
				vetorNumeros[i] = 1 + rand() % 60;
			}
			
			printf("Números Gerados! \n\n");
			
		}else if (opc == 3){
			printf("\n");
			
			for (i = 0; i < 60; i++){
				printf("Números aleatórios [%i]: %i \n", i, vetorNumeros[i]);

			}
			printf("\n\n");
			
			
		}else if (opc == 4){
			
			printf("Digite um valor entre 1 e 60: ");
        	scanf("%i", &n1);
			printf("Digite outro valor entre 1 e 60: ");
	        scanf("%i", &n2);
	
	        for(i = 0; i < 60; i++){
						
	            if(vetorNumeros[i] >= n1 && vetorNumeros[i] <= n2){
	                printf("%i\n", vetorNumeros[i]);
	            }
	        }
	        printf("\n");
			
		}else if (opc == 5){
			
			printf("\nNumeros repetidos vetor: \n");
			
	        for(i = 0; i < 60; i++){
		        for(j = i + 1; j < 60; j++){
		            if(vetorNumeros[i] > vetorNumeros[j]){
		                aux = vetorNumeros[i];
		                vetorNumeros[i] = vetorNumeros[j];
		                vetorNumeros[j] = aux;
		            }
		        }
		    }
	        
	        contar = 1;
	        
	        for (i = 1; i < 60; i++){
	        	if(vetorNumeros[i] == vetorNumeros[i - 1]){
	        		contar++;
				}else if (contar > 1){
					printf("%d = %d\n", vetorNumeros[i - 1], contar);
					contar = 1;
				}
			}
	        printf("\n");
			
			
		}
		
		
	}while (opc != 9);
		
	
	return 0;
}
