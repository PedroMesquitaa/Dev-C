#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Carregar e Imprimir Valores");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int opc = 0;
	int vetorIdade[10];
	int i, j = 0;
	
	// Entrada
	
	do {
		
		printf(":: VETOR IDADES ::.. \n");
		printf("1. Inicializar vetor     \n");
		printf("2. Carregar              \n");
		printf("3. Imprimir              \n");
		printf("9. Sair                  \n");
		printf("Digite a opção:          \n");
		scanf("%i", &opc);
		
		
		if (opc == 1){
			
			for (i = 0; i < 10; i++){
				vetorIdade[i] = 0;
			}
			
			printf("\nVetor inicializado! \n\n");
			
			
		}else if (opc == 2){
			
			
			for (i = 0; i < 10; i++){
				printf("Digite uma idade para posicao %i: \n", i);
				scanf("%i", &j);
				
				vetorIdade[i] = j;
			}
			
		}else if (opc == 3){
			
			for (i = 0; i < 10; i++){
				printf("Idade na posicao [%i]: %i \n", i, vetorIdade[i]);

			}
			printf("\n\n");
		}

		
	}while (opc != 9);
	
	
	
	
	return 0;
}
