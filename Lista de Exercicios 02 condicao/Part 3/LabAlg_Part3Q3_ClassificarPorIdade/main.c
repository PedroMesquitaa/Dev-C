#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Classificar por Idade");
	setlocale (LC_ALL, "Portuguese");
	
	//Var
	int idade = 0;
	
	// Entrada. Solicitando ao Usuário sua Idade.
	
	printf("..:: Classificação da sua Idade ::..\n");
	printf("Digite sua idade para saber em qual classificação você se encontra: \n");
	scanf("%i", &idade);
	
	// Processamento e Saída. Colocando  diferentes mensagens para cada classficacao de idade.
	
	if (idade >= 0 && idade <=10){
		printf("\nOlá criança!");
	}else{
		if (idade >= 11 && idade <= 14){
			printf("\nOlá, você é um(a) pré-adolescente!");
		}else{
			if (idade >= 15 && idade <= 18){
				printf("\nParabéns, você já pode ser um eleitor!");
			}else{
				if (idade >= 19 && idade <= 21){
					printf("\nHummm, você já é um adulto!");
				}else if (idade > 21){
					printf("\nBem, agora já está na hora de sair de casa e seguir sua vida...");
				}
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
