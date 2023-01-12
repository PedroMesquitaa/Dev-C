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
	
	int opc = 0;
	int vetorNumeros[60];
	int i = 0;
	int contar, somar, maior, igual = 0;
	
	//  Valor aleatorio
	
	srand(time(NULL));
	
	// Entrada
	
	do{
		
		printf("..:: SORTEIO ::..\n");
		printf("1. Zerar                           \n");
		printf("2. Carregar Aleat�rio              \n");
		printf("3. Imprimir                        \n");
		printf("4. Somar                           \n");
		printf("5. Relat�rio valores �mpares       \n");
		printf("6. Maiores que valor desejado      \n");
		printf("7. Quantos  existem/repetidos      \n");
		printf("9. Sair                            \n");
		printf("Digite a op��o:                    \n");
		scanf("%i", &opc);
		
		
		if (opc == 1){
			
			for (i = 0; i < 60; i++){
				vetorNumeros[i] = 0;
			}
			
			printf("\nVetor Zerado! \n\n");
			
			
		}else if (opc == 2){
			
			printf("\n");
			
			for (i = 0; i < 60; i++){
				
				vetorNumeros[i] = rand() % 60;
			}
			
			printf("N�meros Gerados! \n\n");
			
		}else if (opc == 3){
			printf("\n");
			
			for (i = 0; i < 60; i++){
				printf("N�meros aleat�rios [%i]: %i \n", i, vetorNumeros[i]);

			}
			printf("\n\n");
			
			
		}else if (opc == 4){
			
			somar = 0;
			
			for (i = 0; i < 60; i++) {
				somar = somar + vetorNumeros[i];
			}
			printf("\nA soma dos n�meros aleat�rios �: %i \n", somar);
			printf("\n\n");
			
		}else if (opc == 5){
			somar = 0;
			contar = 0;
			
			for (i = 0; i < 60; i++){
				
				if(vetorNumeros[i] % 2 != 0){
					
					contar = contar + 1;
					somar = somar + vetorNumeros[i];
					
				}

			}
			printf("\nA soma dos n�meros aleat�rios �mpares �: %i\n", somar);
			printf("\nO total de n�meros aleat�rios �mpares �: %i\n", contar);
			printf("\n\n");
			
		}else if (opc == 6){
			
			printf("\nDigite um n�mero para saber quantos n�meros s�o maiores que ele: \n");
			scanf("%i", &maior);
			
			for (i = 0; i < 60; i++){
				
				if(vetorNumeros[i] > maior){
		
					printf("N�meros maiores que %i [%i]: %i \n", maior, i, vetorNumeros[i]);
					
				}
			}
			printf("\n\n");
			
			
			
		}else if (opc == 7){
			contar = 0;
			
			
			printf("\nDigite um n�mero para saber quantos n�meros s�o iguais a ele: \n");
			scanf("%i", &igual);
			
			for (i = 0; i < 60; i++){
				
				if(vetorNumeros[i] == igual){
					contar = contar + 1;
					printf("N�meros iguais a %i : %i \n", vetorNumeros[i], contar);
					
					
					
				}
			}
			
			printf("\nO total de n�meros iguais a %i �: %i\n", igual, contar);
			printf("\n\n");
			
			
			
		}
		
		
	}while (opc != 9);
		
	
	return 0;
}
