#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar Intervalos 3 Valores");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int a, b, c, somaA, somaB, somaC = 0;
	int i = 0;
	int menor, maior, ordem = 0;
	
	// Entrada
	
	// Pedindo o primeiro número
	
	printf("Digite o primeiro número:\n");
	scanf("%i", &a);
	
	
	// Pedindo o segundo número
	
	do{
		printf("Digite o segundo número (Não pode ser igual ao primeiro):\n");
		scanf("%i", &b);
		
	}while (b == a);
	
	// Pedindo o terceiro número
	
	do{
		printf("Digite o terceiro número (Não pode ser igual ao primeiro e o segundo):\n");
		scanf("%i", &c);
		
	}while ((c == a || c == b));
	
	
	// a) Resultado da soma de cada intervalo;  
	
	printf ("\n\nResultado da soma de cada intervalo:");
	
	// valor de A
	
	somaA = 0;
	
	for (i = 1; i <= a; i++){
		somaA = somaA + i;
	}
	
	printf("\n\na = %i \n", somaA);
	
	// valor de B
	
	somaB = 0;
	
	for (i = 1; i <= b; i++){
		somaB = somaB + i;
	}
	
	printf("\n\nb = %i \n", somaB);
	
	// valor de C
	
	somaC = 0;
	
	for (i = 1; i <= c; i++){
		somaC = somaC + i;
	}
	
	printf("\n\nc = %i \n", somaC);
	
	printf("\n----------------------------------------------------------------");
	
	// b) O menor valor de soma; 
	
	
	if (somaA < somaB && somaA < somaC){
		menor = somaA;
		printf("\n\nO menor valor da soma é o a = %i\n\n", menor);
	}else{
		if (somaB < somaA && somaB < somaC){
			menor = somaB;
			printf("\n\nO menor valor da soma é o b = %i\n\n", menor);
		}else{
			if (somaC < somaA && somaC < somaB){
				menor = somaC;
				printf("\n\nO menor valor da soma é o c = %i\n\n", menor);
			}
		}
	}
	
	printf("----------------------------------------------------------------");
	
	// c) O maior valor de soma;
	
	if (somaA > somaB && somaA > somaC){
		maior = somaA;
		printf("\n\nO maior valor da soma é o a = %i\n\n", maior);
	}else{
		if (somaB > somaA && somaB > somaC){
			maior = somaB;
			printf("\n\nO maior valor da soma é o b = %i\n\n", maior);
		}else{
			if (somaC > somaA && somaC > somaB){
				maior = somaC;
				printf("\n\nO maior valor da soma é o c = %i\n\n", maior);
			}
		}
	}
	
	printf("----------------------------------------------------------------");
	
	// d) Os valores ordenados do menor para o maior. 
	
	if(somaA > somaB){
		ordem = somaA;
		somaA = somaB;
		somaB = ordem;
	}else if(somaA > somaC) {
		
		ordem = somaA;
		somaA = somaC;
		somaC = ordem;
		
	}else if (somaB > somaC) {
		ordem = somaB;
		somaB = somaC;
		somaC = ordem;
	}
	
	printf("\n\nA ordem é %i, %i, %i\n\n", somaA, somaB, somaC);
	
	
	
	return 0;
}
