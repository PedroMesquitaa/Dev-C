#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Media Aritmetica 1");
	
	//entrada
	float n1, n2, n3, n4, media = 0.0;
	
	printf("..:: Aluno Online ::..\n");
	printf("Digite a nota do Primeiro semestre: \n");
	scanf("%f", &n1);
	printf("Digite a nota do Segundo semestre: \n");
	scanf("%f", &n2);
	printf("Digite a nota do Terceiro semestre: \n");
	scanf("%f", &n3);
	printf("Digite a nota do Quarto semestre: \n");
	scanf("%f", &n4);
	
	//processamento e saida
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("..:: Resultado ::..\n");
	
	if(media >= 5){
		printf("Aprovado! \nMedia Final: %.1f", media);
	}
	else{
		printf("Reprovado! \nMedia Final: %.1f", media);
	}
	
	return 0;
}
