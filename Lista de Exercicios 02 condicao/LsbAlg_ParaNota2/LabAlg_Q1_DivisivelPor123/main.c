#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	SetConsoleTitle ("Numero Divisivel por 1,2 e 3.");
	
	int n1, n2, n3 = 0;
	
	//entrada
	printf("..:: N�meros Divis�veis por 1, 2 e 3 ::..\n");
	printf("Digite o valor do Primeiro N�mero: \n");
	scanf("%i", &n1);
	printf("Digite o valor do Segundo N�mero: \n");
	scanf("%i", &n2);
	printf("Digite o valor do Terceiro N�mero: \n");
	scanf("%i", &n3);

	//processamento e saida
	
	printf("\n..:: Resultado ::..");
	
	
	if ((n1 % 1 ) == 0){
	}if ((n1 % 2 ) == 0){
	}else if ((n1 % 3 ) == 0){
		printf("\nO n�mero %i � divis�vel por 1, 2 e 3.\n", n1);
	}else{
		printf("\nO n�mero %i n�o � divis�vel por 1, 2 e 3.\n", n1);
	}
	
	
	if ((n2 % 1 ) == 0){
	}if ((n2 % 2 ) == 0){
	}else if ((n2 % 3 ) == 0){
		printf("\nO n�mero %i � divis�vel por 1, 2 e 3.\n", n2);
	}else{
		printf("\nO n�mero %i n�o � divis�vel por 1, 2 e 3.\n", n2);
	}
	
	
	if ((n3 % 1 ) == 0){
	}if ((n3 % 2 ) == 0){
	}else if ((n3 % 3 ) == 0){
		printf("\nO n�mero %i � divis�vel por 1, 2 e 3.\n", n3);
	}else{
		printf("\nO n�mero %i n�o � divis�vel por 1, 2 e 3.\n", n3);
	}
	
	
	
	
	
	
	
	return 0;
}
