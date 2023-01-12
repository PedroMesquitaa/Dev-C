#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Menu interacao");
	setlocale (LC_ALL, "Portuguese");
	
	// var
	
	char nome[100];
	int i, vezes, n, p, n1, n2, n3, contar = 0;
	int opcao, opcao2, opcao4 = 0;
	int menor, maior, ordem, a, b, c, somaA, somaB, somaC = 0;
	int vezesA, vezesB, vezesC = 1;
	float salario, total = 0.0;
	int final = 0;
	int opcao3 = 1;
	
	// Entrada, Processamente e Saída
	
	while (opcao != 19){
		printf("..:: MENU PRINCIPAL ::.. \n");
		printf("11. Imprimir Nomes x Vezes e Repetir       \n");
		printf("12. Imprimir Multiplos     \n");
		printf("13. Imprimir 3 Contagens      \n");
		printf("14. Imprimir 3 Contagens Decrescente    \n");
		printf("15. Somar Intervalos 3 Valores    \n");
		printf("16. Produto Intervalo 3 valores    \n");
		printf("17. Somar Salarios (Máximo 5 ou Até Informar 'Não')    \n");
		printf("18. Menu Interativo 6 Opções    \n");
		printf("19. Sair               \n");
		printf("\nDigite a opção:\n");
		scanf("%i", &opcao);
		
		
		if (opcao == 11){
			
			do{
				printf("Quantas vezes você quer repetir o nome?\n");
				scanf("%i", &vezes);
		
				printf("Qual o nome?\n");
				scanf("%s", &nome);
		
				for (i = 1; i <= vezes; i++ ){
					printf("\n%i - %s\n", i, nome);
				}
		
				printf("\n\nDeseja repetir o processamento? (0 = NÃO; 1 = SIM)\n");
				scanf("%i", &opcao2);
				printf("\n");
		
			}while (opcao2 == 1);
			
			
			
		} else if(opcao == 12){
			
			printf("Digite um número: \n");
			scanf("%i", &n);
	
			printf("Digite um número que irá ser o multiplo da contagem: \n");
			scanf("%i", &p);
	
			for (i = 0; i <= n; i++){
		
				if (i % p == 0){
					printf("\n%i\n\n", i);
			
				}	
			}
						
			
		} else if(opcao == 13){
			
			printf("Digite o primeiro número: \n");
			scanf("%i", &n1);
	
			printf("Digite o segundo número: \n");
			scanf("%i", &n2);
	
			printf("Digite o terceiro número: \n");
			scanf("%i", &n3);
	
	
			// Contagem do n1
	
			printf("\n\nImpressão contagem do valor %i:\n", n1);
	
			for (i = 1; i <= n1; i++){
				printf("%i\n", i);
			}
	
			// Contagem do n2
	
			printf("\n\nImpressão contagem do valor %i:\n", n2);
		
			for (i = 1; i <= n2; i++){
				printf("%i\n", i);
			}
	
	
			// Contagem do n3
	
	
			printf("\n\nImpressão contagem do valor %i:\n", n3);
	
			for (i = 1; i <= n3; i++){
				printf("%i\n", i);
			}
			
			printf("\n");
			
			
			
		} else if(opcao == 14){
			
			printf("Digite o primeiro número: \n");
			scanf("%i", &n1);
	
			printf("Digite o segundo número: \n");
			scanf("%i", &n2);
		
			printf("Digite o terceiro número: \n");
			scanf("%i", &n3);
	
	
			// Contagem do n1
	
			printf("\n\nImpressão contagem do valor %i:\n", n1);
	
			for (i = n1; i >= 1; i--){
				printf("%i\n", i);
			}
	
			// Contagem do n2
	
			printf("\n\nImpressão contagem do valor %i:\n", n2);
	
			for (i = n2; i >= 1; i--){
				printf("%i\n", i);
			}
	
	
			// Contagem do n3
	
	
			printf("\n\nImpressão contagem do valor %i:\n", n3);
	
			for (i = n3; i >= 1; i--){
				printf("%i\n", i);
			}
			
			printf("\n");
			
			
			
		} else if(opcao == 15){
			
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
	
			
			
		} else if(opcao == 16){
			
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
			
			
			
		} else if(opcao == 17){
			
			for (i = 1; i <= 5; i++) {
		
			printf("Digite um salário para saber o total da soma (Total de vezes permitdos é 5 salários): \n");
			scanf("%f", &salario);
				
			total = total + salario;
				
				
			printf("Deseja informar outro salário (0 = Não, 1 = Sim)? \n");
			scanf("%i", &opcao3);
			
			
			if (opcao3 == 0){
				break;
			}
			
			
			
		}
 	
		printf ("\nO total valor de salários é de: %.2f\n\n", total);
			
			
			
		} else if(opcao == 18){
			
			printf("\n");
			
			while (opcao4 != 29){
				printf("..:: CALCULADORA ::.. \n");
				printf("21. Contar pares       \n");
				printf("22. Contar ímpares     \n");
				printf("23. Produto pares     \n");
				printf("24. Produto ímpares     \n");
				printf("29. Sair               \n");
				printf("\nDigite a opção:\n");
				scanf("%i", &opcao4);
				
			
				if (opcao4 == 21){ 
					printf("\n..:: CONTAR PARES ::..\n"); 
					printf("Digite o número limite da contagem:\n");
					scanf("%i", &final);
					
					contar = 0;
							
					for (i = 1; i <= final; i++){
						if ((i % 2) == 0){
							contar = contar + 1; 
							printf("\nPar do intervalo: %i \n\n\n", i);
						}
					}
					
					printf("\nExiste %i pares entre 1 é %i \n\n\n", contar, final);
					
					
				}else if (opcao4 == 22){ 
					printf("\n..:: CONTAR ÍMPARES ::..\n"); 
					printf("Digite o número limite da contagem:\n");
					scanf("%i", &final);
					
					contar = 0;
							
					for (i = 1; i <= final; i++){
						if ((i % 2) != 0){
							contar = contar + 1; 
							printf("\nÍmpar do intervalo: %i \n\n\n", i);
						}
					}
					
					printf("\nExiste %i ímpares entre 1 é %i \n\n\n", contar, final);
					
					
				}else if (opcao4 == 23){
					
					printf("\n..:: PRODUTO PARES ::..\n");
					printf("Digite o número limite da contagem:\n");
					scanf("%i", &final);
					
					vezes = 1;		
							
					for (i = 1; i <= final; i++){
						if ((i % 2) == 0){
							vezes = vezes * i;
							printf("\nnPar do intervalo de 1 até %i é: %i \n\n\n", final, i);
						}
					}
					
					printf("\nO valor total da multiplicação dos pares é: %i \n\n\n", vezes);
						
				}else if (opcao4 == 24){
					
					printf("\n..:: PRODUTO ÍMPARES ::..\n"); 
					printf("Digite o número limite da contagem:\n");
					scanf("%i", &final);
					
					vezes = 1;
							
					for (i = 1; i <= final; i++){
						if ((i % 2) != 0){
							vezes = vezes * i; 
							printf("\nÍmpar do intervalo de 1 até %i é: %i \n\n\n", final, i);
						}
					}
					
					printf("\nO valor total da multiplicação dos pares é: %i \n\n\n", vezes);
			
				}		
			}
			
			printf("\n");
			
		}
		
		
		
	}
	
	
	
	return 0;
}
