#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Mensalidades");
	setlocale (LC_ALL, "Portuguese");
	
	// VAR
	
	int opc = 0;
	int vetorMensalidades[10];
	int i, j = 0;
	
	// Entrada
	
	do {
		
		printf(":: VETOR IDADES ::.. \n");
		printf("1. Inicializar vetor     \n");
		printf("2. Carregar              \n");
		printf("3. Imprimir              \n");
		printf("4. Somar                 \n");
		printf("9. Sair                  \n");
		printf("Digite a opção:          \n");
		scanf("%i", &opc);
		
		
		if (opc == 1){
			
			for (i = 0; i < 10; i++){
				vetorMensalidades[i] = 0;
			}
			
			printf("\nVetor inicializado! \n\n");
			
			
		}else if (opc == 2){
			
			
			for (i = 0; i < 10; i++){
				printf("Digite o valor da mensalidade para posição %i: \n", i);
				scanf("%i", &j);
				
				vetorMensalidades[i] = j;
			}
			
		}else if (opc == 3){
			
			for (i = 0; i < 10; i++){
				printf("Mensalidade na posição [%i]: %i \n", i, vetorMensalidades[i]);

			}
			printf("\n\n");
			
			
		}else if (opc == 4){
			j = 0;
			
			for (i = 0; i < 10; i++) {
				j = j + vetorMensalidades[i];
			}
			printf("A soma das mensalidades é: %i \n", j);
			printf("\n\n");
		}

		
	}while (opc != 9);
	
	
	return 0;
}
