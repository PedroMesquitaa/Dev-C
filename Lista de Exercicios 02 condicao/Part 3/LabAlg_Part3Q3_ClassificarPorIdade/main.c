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
	
	// Entrada. Solicitando ao Usu�rio sua Idade.
	
	printf("..:: Classifica��o da sua Idade ::..\n");
	printf("Digite sua idade para saber em qual classifica��o voc� se encontra: \n");
	scanf("%i", &idade);
	
	// Processamento e Sa�da. Colocando  diferentes mensagens para cada classficacao de idade.
	
	if (idade >= 0 && idade <=10){
		printf("\nOl� crian�a!");
	}else{
		if (idade >= 11 && idade <= 14){
			printf("\nOl�, voc� � um(a) pr�-adolescente!");
		}else{
			if (idade >= 15 && idade <= 18){
				printf("\nParab�ns, voc� j� pode ser um eleitor!");
			}else{
				if (idade >= 19 && idade <= 21){
					printf("\nHummm, voc� j� � um adulto!");
				}else if (idade > 21){
					printf("\nBem, agora j� est� na hora de sair de casa e seguir sua vida...");
				}
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
