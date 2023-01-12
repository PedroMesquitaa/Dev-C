#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	
	
	// Var
	
	int numero1,numero2,numero3,numero4, somar, contar, armazem, maior, menor, somar2, contar2, totalContar, totalSomar = 0;
	
	// Entrada
	
	printf("\nDigite um número: \n");
	scanf("%i", &numero1);
	printf("Digite um outro número: \n");
	scanf("%i", &numero2);
	printf("Digite um outro número: \n");
	scanf("%i", &numero3);
	printf("Digite um outro número: \n");
	scanf("%i", &numero4);
	
	// Processamento


	// numero 1 maior e 2 menor
	
	if ((numero1 > numero2 && numero1 > numero3 && numero1 > numero4) && (numero2 < numero1 && numero2 < numero3 && numero2 < numero4)){
		maior = numero1;
		menor = numero2;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero3 == 0 && armazem % numero4 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
			 if (armazem % numero4 == 0){
			 	somar2 = somar2 + armazem;
			 	contar2 = contar2 + 1;
			 }
			totalSomar = somar + somar2;
			totalContar = contar + contar2;
			
		}
		printf("\n\nQuantos números são divisiveis por 3 e 4: %i\n\n", totalContar);
		printf("A soma total de todos os números divisiveis por 3 e 4 é: %i", totalSomar);
	}
	
	// Numero 1 maior e 3 menor
	
	if ((numero1 > numero2 && numero1 > numero3 && numero1 > numero4) && (numero3 < numero1 && numero3 < numero2 && numero3 < numero4)){
		maior = numero1;
		menor = numero3;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero2 == 0 && armazem % numero4 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}

		printf("\n\nQuantos números são divisiveis por 2 e 4: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 2 e 4 é: %i", somar);
	}
	
	
	// Numero 1 maior e 4 menor
	
	if ((numero1 > numero2 && numero1 > numero3 && numero1 > numero4) && (numero4 < numero1 && numero4 < numero2 && numero4 < numero3)){
		maior = numero1;
		menor = numero4;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero2 == 0 && armazem % numero3 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 2 e 3: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 2 e 3 é: %i", somar);
	}
	
	
	// Numero 2 maior e 1 menor
	
	if ((numero2 > numero1 && numero2 > numero3 && numero2 > numero4) && (numero1 < numero2 && numero1 < numero3 && numero1 < numero4)){
		maior = numero2;
		menor = numero1;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero3 == 0 && armazem % numero4 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 3 e 4: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 3 e 4 é: %i", somar);
	}
	
	// Numero 2 maior e 3 menor
	
	if ((numero2 > numero1 && numero2 > numero3 && numero2 > numero4) && (numero3 < numero1 && numero3 < numero2 && numero3 < numero4)){
		maior = numero2;
		menor = numero3;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero1 == 0 && armazem % numero4 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 1 e 4: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 1 e 4 é: %i", somar);
	}
	
	// Numero 2 maior e 4 menor
	
	if ((numero2 > numero1 && numero2 > numero3 && numero2 > numero4) && (numero4 < numero1 && numero4 < numero2 && numero4 < numero3)){
		maior = numero2;
		menor = numero4;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero1 == 0 && armazem % numero3 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 1 e 3: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 1 e 3 é: %i", somar);
	}
	
	// Numero 3 maior e 1 menor
	
	if ((numero3 > numero1 && numero3 > numero2 && numero3 > numero4) && (numero1 < numero2 && numero1 < numero3 && numero1 < numero4)){
		maior = numero3;
		menor = numero1;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero2 == 0 && armazem % numero4 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 2 e 4: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 2 e 4 é: %i", somar);
	}
	
	// Numero 3 maior e 2 menor
	
	if ((numero3 > numero1 && numero3 > numero2 && numero3 > numero4) && (numero2 < numero1 && numero2 < numero3 && numero2 < numero4)){
		maior = numero3;
		menor = numero2;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero1 == 0 && armazem % numero4 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 1 e 4: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 1 e 4 é: %i", somar);
	}
	
	// Numero 3 maior e 4 menor
	
	if ((numero3 > numero1 && numero3 > numero2 && numero3 > numero4) && (numero4 < numero1 && numero4 < numero2 && numero4 < numero3)){
		maior = numero3;
		menor = numero4;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero1 == 0 && armazem % numero2 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 1 e 2: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 1 e 2 é: %i", somar);
	}
	
	// Numero 4 amior e 1 menor
	
	if ((numero4 > numero1 && numero4 > numero2 && numero4 > numero3) && (numero1 < numero2 && numero1 < numero3 && numero1 < numero4)){
		maior = numero4;
		menor = numero1;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero2 == 0 && armazem % numero3 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 2 e 3: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 2 e 3 é: %i", somar);
	}
	
	// Numero 4 maior e 2 menor
	
	if ((numero4 > numero1 && numero4 > numero2 && numero4 > numero3) && (numero2 < numero1 && numero2 < numero3 && numero2 < numero4)){
		maior = numero4;
		menor = numero2;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero1 == 0 && armazem % numero3 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("\n\nQuantos números são divisiveis por 1 e 3: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 1 e 3 é: %i", somar);
	}
	
	// Numero 4 maior e 3 menor
	
		if ((numero4 > numero1 && numero4 > numero2 && numero4 > numero3) && (numero3 < numero1 && numero3 < numero2 && numero3 < numero4)){
		maior = numero4;
		menor = numero3;
		
		printf("\n\nO maior número digitado é: % i\n", maior);
		printf("\n\nO menor número digitado é: % i\n", menor);
		
		contar = 0;
	
		for (menor; menor <= maior; menor++){
			armazem = menor;
		
			if (armazem % numero1 == 0 && armazem % numero2 == 0){
				somar = somar + armazem;
				contar = contar  + 1;
			}
		}
		printf("Quantos números são divisiveis por 1 e 2: %i\n\n", contar);
		printf("A soma total de todos os números divisiveis por 1 e 2 é: %i", somar);
	}
	
	

	
	
	
	return 0;
}
