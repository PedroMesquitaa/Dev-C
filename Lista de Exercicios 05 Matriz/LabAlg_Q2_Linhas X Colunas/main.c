#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
    
    int i, j, opc, escolhaLi, escolhaCo = 0;
    int arm = 0;
    int arm2 = 0;
    int somaLinhas[5], somaColunas[6], somaColunas1[6], somaLinhas1[5], somaLinhas2[5];
    int mat[5][6];
    int maior, maiorC, maiorLinha, maiorLinha1, maiorLinha2, maior1, maior2, maior3;
    int maiorColuna, maiorColuna1, maiorColuna2;
    int contar, somar, soma1, soma2 = 0;
    int arm1 = 0;
    
    srand(time(NULL));
    
    arm = 0;
    arm2 = 0;
    
    do{
        printf("..:: LINHAS X COLUNAS 2 ::..");
        printf("\n""\n");
        printf("1. Carregar Matriz \n");
        printf("2. Impressao \n");
        printf("7. Maior soma linha x coluna y \n");
        printf("9. Sair \n");
        printf("\n""\n");
        printf("Selecione a opção desejada: ");
        scanf("%i", &opc);
        printf("\n""\n");
        
        
        if(opc == 1){
            for(i = 0; i < 5; i++){
                for(j = 0; j < 6; j++){
                    mat[i][j] = rand() % 50;
                }    
            }
            printf("\n");
            
        }else if(opc == 2){
            printf("LINHAS X COLUNAS: \n");
            for(i = 0; i < 5; i++){
                for(j = 0; j < 6; j++){
                    printf("%2d | ", mat[i][j]);
                }
                printf("\n");
            }
            printf("\n");
                
                
        }else if(opc == 7){
            
            soma1 = 0;
            soma2 = 0;
            
            do{
                printf("\nEscolha uma linha de 1 a 3 da matriz: \n");
                scanf("%i", &escolhaLi);
            }while (escolhaLi < 1 || escolhaLi > 3);
            
            if (escolhaLi < 0 || escolhaLi > 4){
                printf("Linha não exite!\n");
            }else{
                for (j = 0; j < 6; j++){
                    printf("%2d | ", mat[escolhaLi][j]);
                    
                    soma1 = soma1 + mat[escolhaLi][j];
                }
            }
            printf("\n\nA linha [%i] com a soma total de: %i \n", escolhaLi, soma1);
            printf("\n");
            
            
            // COLUNA
            
            do{
                printf("\nEscolha uma coluna de 1 a 3 da matriz: \n");
                scanf("%i", &escolhaCo);
                printf("\n");
                    
            }while (escolhaCo < 1 || escolhaCo > 3);
            

            if (escolhaCo < 0 || escolhaCo > 5){
                printf("Coluna não exite!\n");
            }else{
                for (i = 0; i < 5; i++){
                    printf("%2d | ", mat[i][escolhaCo]);
                    soma2 = soma2 + mat[i][escolhaCo];
                    printf("\n");
                }
            }
            printf("\n\nA coluna [%i] com a soma total de: %i \n", escolhaCo, soma2);
            printf("\n");
            
            if(soma1 > soma2){
                printf("A soma da linha é maior que a soma da coluna!\n");
            }else{
                printf("A soma da coluna é maior que a soma da linha!\n");
            }

            
            printf("\n");
            
        
        }
            
    }while (opc != 9);
    
    
    return 0;
}
