#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	
	int i, j, opc, escolhaLi, escolhaCo, escolhaLi2, escolhaCo2 = 0;
	int arm = 0;
	int somaLinhas[5], somaColunas[10], somaLinhas1[5], somaLinhas2[5];
	int mat[5][10];
	int maior, maiorLinha, maiorLinha1, maiorLinha2, maior1, maior2;
	int contar, somar = 0;
	int arm1 = 0;
	
	srand(time(NULL));
	
	arm = 0;
	
	do{
		printf("..:: Atividade Matriz ::..");
		printf("\n""\n");
		printf("1. Zerar Matriz \n");
		printf("2. Carregar Matriz \n");
		printf("3. Impressão \n");
		printf("4. Linha com maior soma \n");
		printf("5. Coluna maior número valores pares  \n");
		printf("6. Linha com o maior valor \n");
		printf("7. 2 Linhas e 2 Colunas \n");
		printf("8. Nomes dos Alunos que fizeram \n");
		printf("9. Sair \n");
		printf("\n""\n");
		printf("Selecione a opção desejada: ");
		scanf("%i", &opc);
		printf("\n""\n");
		
		if(opc == 1){
			for(i = 0; i < 5; i++){
				for(j = 0; j < 10; j++){
					mat[i][j] = 0;
				}
			}	
		}else if(opc == 2){
			for(i = 0; i < 5; i++){
				for(j = 0; j < 10; j++){
					mat[i][j] = 1 + rand() % 40;
				}	
			}
			printf("\n");
			
		}else if(opc == 3){
			printf("Matriz ORIGINAL:\n");
			for(i = 0; i < 5; i++){
				for(j = 0; j < 10; j++){
					printf("%2d | ", mat[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
		}else if(opc == 4){
			for(i = 0; i < 5; i++){
				arm = 0;
				for(j = 0; j < 10; j++){
					arm = arm + mat[i][j];
				}
				somaLinhas[i] = arm;
			}
			
			
			for (i = 0; i < 5; i++){
				printf("A linha [%i] com a soma total de: %i \n", i, somaLinhas[i]);
				
				if (i == 0 ){
					maior = somaLinhas[i];
				}else if (maior < somaLinhas[i]){
					maior = somaLinhas[i];
					maiorLinha = i;
				} 
			}// Mesquita
			printf("\nA linha [%i] é a que tem o maior valor, com a soma total de: %i \n", maiorLinha, maior);
			printf("\n");
			
		}else if(opc == 5){
			
			int ma = mat[0][0];
			int li = 0, co = 0;
			
			printf("Matriz Colunas Só Com Números Pares:\n");
			for(i = 0; i < 5; i++){
				for(j = 0; j < 10; j++){
					if (mat[i][j] % 2 == 0){
						printf("%2d | ", mat[i][j]);
					}
				}
				printf("\n");
			}
			printf("\n");
			
			printf("-------------------------------\n\n");
			
			contar = 0;
			
			for (i = 0; i < 5; i++){
				for (j = 0; j < 10; j++){
					if (mat[i][j] % 2 == 0){
						contar = contar + 1;
						
					}
				}
			}
			printf("Na Matriz Original existe %i números pares.\n", contar);
			printf("\n");
			printf("-------------------------------\n");
			

			
			for (i = 0; i < 5; i++){
				for (j = 0; j < 10; j++){
					if (mat[i][j] % 2 == 0){
						if (mat[i][j] > ma){
							ma = mat[i][j];
							li = i;
							co = j;
						}
					}
				}
			}
			
			printf("\nMaior valor de número par na matriz original é %i na coluna [%i]\n\n", ma, co);
			
	
		}else if(opc == 6){
			int ma = mat[0][0];
			int li = 0, co = 0;
			
			
			for (i = 0; i < 5; i++){
				for (j = 0; j < 10; j++){
					
					if (mat[i][j] > ma){
						ma = mat[i][j];
						li = i;
						co = j;
					}
				}
			}
			
			printf("Maior valor na matriz original %i na linha [%i].\n\n", ma, li);
				
			
		}else if(opc == 7){
			
			printf("Escolha uma linha de 1 a 5 da matriz original: \n");
			scanf("%i", &escolhaLi);
			printf("Escolha uma coluna de 1 a 10 da matriz original: \n");
			scanf("%i", &escolhaCo);
			
			printf("Escolha uma outra linha de 1 a 5 da matriz original: \n");
			scanf("%i", &escolhaLi2);
			printf("Escolha uma outra coluna de 1 a 10 da matriz original: \n");
			scanf("%i", &escolhaCo2);
			
			// Primeira Matriz mostrando a soma 
			
			printf("\nNova Matriz 1:\n");
			
			for(i = 0; i < escolhaLi; i++){
				for(j = 0; j < escolhaCo; j++){
					printf("%2d | ", mat[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			
			for(i = 0; i < escolhaLi; i++){
				arm = 0;
				for(j = 0; j < escolhaCo; j++){
					arm = arm + mat[i][j];
				}
				somaLinhas1[i] = arm;
			}
			
			
			for (i = 0; i < escolhaLi; i++){
				printf("A linha [%i] com a soma total de: %i \n", i, somaLinhas1[i]);
				
				if (i == 0 ){
					maior1 = somaLinhas1[i];
				}else if (maior1 < somaLinhas1[i]){
					maior1 = somaLinhas1[i];
					maiorLinha1 = i;
				} 
			}
				
			
			// Segunda Matriz mostrando a soma 
			
			printf("\nNova Matriz 2:\n");
			for(i = 0; i < escolhaLi2; i++){
				for(j = 0; j < escolhaCo2; j++){
					printf("%2d | ", mat[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			// 2109065
			for(i = 0; i < escolhaLi2; i++){
				arm1 = 0;
				for(j = 0; j < escolhaCo2; j++){
					arm1 = arm1 + mat[i][j];
				}
				somaLinhas2[i] = arm1;
			}
			
			
			for (i = 0; i < escolhaLi2; i++){
				printf("A linha [%i] com a soma total de: %i \n", i, somaLinhas2[i]);
				
				if (i == 0 ){
					maior2 = somaLinhas2[i];
				}else if (maior2 < somaLinhas2[i]){
					maior2 = somaLinhas2[i];
					maiorLinha2 = i;
				} 
			}
			
			// Maior Soma
			
			if (maior1 > maior2){
				printf("\nA linha [%i] da Primeira Matriz é o maior valor, com a soma total de: %i \n", maiorLinha1, maior1);
				
			}else{
				printf("\nA linha [%i] da Segunda Matriz é o maior valor, com a soma total de: %i \n", maiorLinha2, maior2);
			}
			
			printf("\n");
			
			
		}else if(opc == 8){
			printf("NOME: , RA: ");
			printf("\nNOME: , RA: ");
			printf("\nNOME: , RA: ");
			printf("\nNOME: , RA: ");
			
			printf("\n");
			printf("\n");
		}
			
	}while (opc != 9);
	
	
	return 0;
}
