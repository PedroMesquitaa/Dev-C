#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Produto Intervalo 3 Valores");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	int vezesA, vezesB, vezesC = 1;
	int a, b, c = 0;
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
	
	
	// a) Resultado da multiplicacao de cada intervalo;  
	
	printf ("\n\nResultado da multiplicação de cada intervalo:");
	
	// valor de A
	
	vezesA = 1;
	
	for (i = 1; i <= a; i++){
		vezesA = vezesA * i;
	}
	
	printf("\n\na = %i \n", vezesA);
	
	// valor de B
	
	vezesB = 1;
	
	for (i = 1; i <= b; i++){
		vezesB = vezesB * i;
	}
	
	printf("\n\nb = %i \n", vezesB);
	
	// valor de C
	
	vezesC = 1;
	
	for (i = 1; i <= c; i++){
		vezesC = vezesC * i;
	}
	
	printf("\n\nc = %i \n", vezesC);
	
	printf("\n----------------------------------------------------------------");
	
	// b) O menor valor da multiplicação; 
	
	
	if (vezesA < vezesB && vezesA < vezesC){
		menor = vezesA;
		printf("\n\nO menor valor da multiplicação é o a = %i\n\n", menor);
	}else{
		if (vezesB < vezesA && vezesB < vezesC){
			menor = vezesB;
			printf("\n\nO menor valor da multiplicação é o b = %i\n\n", menor);
		}else{
			if (vezesC < vezesA && vezesC < vezesB){
				menor = vezesC;
				printf("\n\nO menor valor da multiplicação é o c = %i\n\n", menor);
			}
		}
	}
	
	printf("----------------------------------------------------------------");
	
	// c) O maior valor da multiplicação;
	
	if (vezesA > vezesB && vezesA > vezesC){
		maior = vezesA;
		printf("\n\nO maior valor da multiplicação é o a = %i\n\n", maior);
	}else{
		if (vezesB > vezesA && vezesB > vezesC){
			maior = vezesB;
			printf("\n\nO maior valor da multiplicação é o b = %i\n\n", maior);
		}else{
			if (vezesC > vezesA && vezesC > vezesB){
				maior = vezesC;
				printf("\n\nO maior valor da multiplicação é o c = %i\n\n", maior);
			}
		}
	}
	
	printf("----------------------------------------------------------------");
	
	// d) Os valores ordenados do menor para o maior. 
	
	if(vezesA > vezesB){
		ordem = vezesA;
		vezesA = vezesB;
		vezesB = ordem;
	}else if(vezesA > vezesC) {
		
		ordem = vezesA;
		vezesA = vezesC;
		vezesC = ordem;
				
	}else if (vezesB > vezesC) {
		ordem = vezesB;
		vezesB = vezesC;
		vezesC = ordem;
	}
	
	printf("\n\nA ordem é %i, %i, %i\n\n", vezesA, vezesB, vezesC);
	
	return 0;
}
