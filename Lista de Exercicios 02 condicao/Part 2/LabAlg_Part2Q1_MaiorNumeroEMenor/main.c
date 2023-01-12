#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Ler cinco valores numéricos inteiros, identificar e apresentar o maior e o menor valor informado dentre 
os valores lidos. Atenção, não deve ser realizada ordenação dos mesmos, não deve ser realizado uso 
de vetores e nem comandos de repetição. */

int main(int argc, char *argv[]) {
	
	SetConsoleTitle ("Numero Maior e Menor");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero1, numero2, numero3, numero4, numero5, maior, menor = 0;
	
	
	//entrada. Pedindo os numeros para o usuario
	
	printf("..:: Qual o Maior número e o Menor número ::..\n ");
	printf("\nDigite um número: \n");
	scanf("%i", &numero1);
	printf("Digite um outro número: \n");
	scanf("%i", &numero2);
	printf("Digite um outro número: \n");
	scanf("%i", &numero3);
	printf("Digite um outro número: \n");
	scanf("%i", &numero4);
	printf("Digite um outro número: \n");
	scanf("%i", &numero5);
	
	//processamento. Estrutura condicional if para mostrar o maior numero e o menor
	
	maior = numero1;
	
	if (numero2 > numero1 && numero2 > numero3 && numero2 > numero4 && numero2 > numero5){
		maior = numero2;
	}else{
		if (numero3 > numero1 && numero3 > numero2 && numero3 > numero4 && numero3 > numero5){
			maior = numero3;
		}else{
			if (numero4 > numero1 && numero4 > numero2 && numero4 > numero3 && numero4 > numero5){
				maior = numero4;
			}else{
				if (numero5 > numero1 && numero5 > numero2 && numero5 > numero3 && numero5 > numero4){
					maior = numero5;
				}
			}
		}
	}
	
	menor = numero1;
	
	if (numero1 < numero2 && numero1 < numero3 && numero1 < numero4 && numero1 < numero5){
		menor = numero1;
	}else{
		if (numero2 < numero1 && numero2 < numero3 && numero2 < numero4 && numero2 < numero5){
			menor = numero2;
		}else{
			if (numero3 < numero1 && numero3 < numero2 && numero3 < numero4 && numero3 < numero5){
				menor = numero3;
			}else{
				if (numero4 < numero1 && numero4 < numero2 && numero4 < numero3 && numero4 < numero5){
					menor = numero4;
				}else{
					if (numero5 < numero1 && numero5 < numero2 && numero5 < numero3 && numero5 < numero4){
						menor = numero5;
					}
				}
			}
		}
	}

	
	
	//saida. Mostrando qual e o maio numero e menor numero digitado
	
	printf("\n ..:: Resultado ::..\n");
	printf("O maior número digitado foi: %i\n", maior);
	printf("O menor número digitado foi: %i\n", menor);
	
	
	
	
	
	
	return 0;
}
