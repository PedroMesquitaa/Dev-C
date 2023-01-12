#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	SetConsoleTitle ("Media Aritimetica 2");
	
	//entrada
	float nota1, nota2, nota3, nota4, media1, media2, exame = 0.0;
	
	printf("..:: Aluno Online ::..\n");
	printf("Digite a nota do Primeiro Semestre: \n");
	scanf("%f", &nota1);
	printf("Digite a nota do Segundo Semestre: \n");
	scanf("%f", &nota2);
	printf("Digite a nota do Terceiro Semestre: \n");
	scanf("%f", &nota3);
	printf("Digite a nota do Quarto Semestre: \n");
	scanf("%f", &nota4);
	
	media1 = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media1 >= 7.0){
		printf("Aprovado! Sua media foi de: %.1f", media1);
	}else{
		if(media1 < 7.0){
			printf("Exame! Digite sua nota do Exame: \n");
			scanf("%f", &exame);
			media2 = (media1 + exame) / 2;
		}if(media2 >= 5.0){
			printf("Aprovado! Sua media foi de: %.1f", media2);
		}else{
			printf("Reprovado! Sua media foi de: %.1f", media2);
		}
		}
 	

	return 0;
}
