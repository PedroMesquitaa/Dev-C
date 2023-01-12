#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	
	int i, j, opc = 0;
	int mat[3][3];
	int somar = 0;
	
	
	do{
		printf("..:: Matriz ::..");
		printf("\n""\n");
		printf("1. Zerar Matriz    \n");
		printf("2. Carregar Matriz \n");
		printf("3. Imprimir        \n");
		printf("4. Somar           \n");
		printf("9. Sair            \n");
		printf("\n""\n");
		printf("Selecione a opção desejada: ");
		scanf("%i", &opc);
		printf("\n""\n");
		
		if(opc == 1){
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					mat[i][j] = 0;
				}
			}	
		}else if(opc == 2){
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					printf ("\nElemento[%i][%i] = ", i, j);
					scanf ("%i", &mat[ i ][ j ]);
				}	
			}
			printf("\n");
			
		}else if(opc == 3){
			printf("Matriz:\n");
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					printf("%2d | ", mat[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
		}else if(opc == 4){
			somar = 0;
			
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					somar = somar + mat[i][j];
				}
			}	
			printf("A soma dos valores e: %i \n\n", somar);
		}
			
	}while (opc != 9);
	
	
	return 0;
}
