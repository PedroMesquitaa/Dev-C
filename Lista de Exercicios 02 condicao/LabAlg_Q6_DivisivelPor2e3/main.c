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
	printf("..:: Números Divísiveis por 2 e 3 ::..\n");
	printf("Digite o valor do Primeiro Número: \n");
	scanf("%i", &n1);
	printf("Digite o valor do Segundo Número: \n");
	scanf("%i", &n2);
	printf("Digite o valor do Terceiro Número: \n");
	scanf("%i", &n3);
	printf("Digite o valor do Quarto Número: \n");
	scanf("%i", &n4);
	
	//processamento e saida
	
	if(n1 % 2 == 0 && n1 % 3 == 0){
		printf("\nO Primeiro Número é divisivel por 2 e 3.\n");
	}else{
		if(n1 % 2 ==0 && n1 % 3 != 0){
			printf("\nO Primeiro número é divisivel apenas por 2.\n");
		}else{
			if(n1 % 2 != 0 && n1 % 3 == 0){
				printf("\nO Primeiro número é divisivel apenas por 3.\n");
			}else{
				printf("\nO Primeiro número não é divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	if(n2 % 2 == 0 && n2 % 3 == 0){
		printf("\nO Segundo Número é divisivel por 2 e 3.\n");
	}else{
		if(n2 % 2 ==0 && n2 % 3 != 0){
			printf("\nO Segundo número é divisivel apenas por 2.\n");
		}else{
			if(n2 % 2 != 0 && n2 % 3 == 0){
				printf("\nO Segundo número é divisivel apenas por 3.\n");
			}else{
				printf("\nO Segundo número não é divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	if(n3 % 2 == 0 && n3 % 3 == 0){
		printf("\nO Terceiro Número é divisivel por 2 e 3.\n");
	}else{
		if(n3 % 2 ==0 && n3 % 3 != 0){
			printf("\nO Terceiro número é divisivel apenas por 2.\n");
		}else{
			if(n3 % 2 != 0 && n3 % 3 == 0){
				printf("\nO Terceiro número é divisivel apenas por 3.\n");
			}else{
				printf("\nO Terceiro número não é divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	if(n4 % 2 == 0 && n4 % 3 == 0){
		printf("\nO Quarto Número é divisivel por 2 e 3.\n");
	}else{
		if(n4 % 2 ==0 && n4 % 3 != 0){
			printf("\nO Quarto número é divisivel apenas por 2.\n");
		}else{
			if(n4 % 2 != 0 && n4 % 3 == 0){
				printf("\nO Quarto número é divisivel apenas por 3.\n");
			}else{
				printf("\nO Quarto número não é divisivel nem por 2 e nem 3.\n");
			}
		}
	}
	
	
	
	return 0;
}
