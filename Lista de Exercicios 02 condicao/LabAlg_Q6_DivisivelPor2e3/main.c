#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Numeros Divisiveis por 2 e 3");
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4 = 0.0;
	
	//entrada
	printf("..:: N�meros Div�siveis por 2 e 3 ::..\n");
	printf("Digite o valor do Primeiro N�mero: \n");
	scanf("%i", &n1);
	printf("Digite o valor do Segundo N�mero: \n");
	scanf("%i", &n2);
	printf("Digite o valor do Terceiro N�mero: \n");
	scanf("%i", &n3);
	printf("Digite o valor do Quarto N�mero: \n");
	scanf("%i", &n4);
	
	//processamento e saida
	
	if(n1 % 2 == 0 && n1 % 3 == 0){
		printf("\nO Primeiro N�mero � divisivel por 2 e 3.\n");
	}else{
		if(n1 % 2 ==0 && n1 % 3 != 0){
			printf("\nO Primeiro n�mero � divisivel apenas por 2.\n");
		}else{
			if(n1 % 2 != 0 && n1 % 3 == 0){
				printf("\nO Primeiro n�mero � divisivel apenas por 3.\n");
			}else{
				printf("\nO Primeiro n�mero n�o � divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	if(n2 % 2 == 0 && n2 % 3 == 0){
		printf("\nO Segundo N�mero � divisivel por 2 e 3.\n");
	}else{
		if(n2 % 2 ==0 && n2 % 3 != 0){
			printf("\nO Segundo n�mero � divisivel apenas por 2.\n");
		}else{
			if(n2 % 2 != 0 && n2 % 3 == 0){
				printf("\nO Segundo n�mero � divisivel apenas por 3.\n");
			}else{
				printf("\nO Segundo n�mero n�o � divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	if(n3 % 2 == 0 && n3 % 3 == 0){
		printf("\nO Terceiro N�mero � divisivel por 2 e 3.\n");
	}else{
		if(n3 % 2 ==0 && n3 % 3 != 0){
			printf("\nO Terceiro n�mero � divisivel apenas por 2.\n");
		}else{
			if(n3 % 2 != 0 && n3 % 3 == 0){
				printf("\nO Terceiro n�mero � divisivel apenas por 3.\n");
			}else{
				printf("\nO Terceiro n�mero n�o � divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	if(n4 % 2 == 0 && n4 % 3 == 0){
		printf("\nO Quarto N�mero � divisivel por 2 e 3.\n");
	}else{
		if(n4 % 2 ==0 && n4 % 3 != 0){
			printf("\nO Quarto n�mero � divisivel apenas por 2.\n");
		}else{
			if(n4 % 2 != 0 && n4 % 3 == 0){
				printf("\nO Quarto n�mero � divisivel apenas por 3.\n");
			}else{
				printf("\nO Quarto n�mero n�o � divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	
	return 0;
}
