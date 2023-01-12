#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Media com Condicional");
	
	//entrada
	float nota1, nota2, media = 0.0;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	//processamento
	media = (nota1 + nota2) / 2;
	
	if(nota1 == nota2){
		printf("Erro! Nao e permitido valores iguais.");
	}
	else if(nota1 < 0 || nota1 > 10){
		printf("Erro! Nota 1 com numeros nao permitidos.");
	}
	else if(nota2 < 0 || nota2 > 10){
		printf("Erro! Nota 2 com numeros nao permitidos.");
	}
	else if(media > 6.0){
		printf("\n..:: Relatorio ::..\n Aprovado! Sua media foi: %.1f", media);
	}
	else{
		printf("\n..:: Relatorio ::..\n Reprovado! Sua media foi: %.1f", media);
	}
	
	return 0;
}
