#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Ordenar Idades e Bloquear Valores Iguais");
	
	//entrada
	char nome1[30];
	char nome2[30];
	int idade1, idade2 = 0;
	
	printf("..:: Aluno Online ::..\n");
	printf("Escreva o nome do primeiro aluno: \n");
	fgets(nome1,30,stdin);
	printf("Digite a idade: \n");
	scanf("%i", &idade1);
	printf("Escreva o nome do segundo aluno: \n");
	fgets(nome2,30,stdin);
	printf("Digite a idade: \n");
	scanf("%i", &idade2);
	
	//processamento
	printf("..:: Informacoes ::..\n");
	if(idade1 < idade2){
		printf("Aluno 1: %s\n", nome1);
		printf("Idade: %i\n", idade1);
		printf("Aluno 2: %s\n", nome2);
		printf("Idade: %i\n", idade2);
	}
	else if(idade1 == idade2){
		printf("Processamento Bloqueado! Nao pode haver idades igausi.");
	}
	else if(idade2 < idade1){
		printf("Aluno 1: %s\n", nome2);
		printf("Idade: %i\n", idade2);
		printf("Aluno 2: %\n", nome1);
		printf("Idade: %i\n", idade1);
	}
	return 0;
}
