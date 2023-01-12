#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int ra1, ra2, ra3, aprovados, reprovados = 0;
	float n1a1, n1a2, n1a3, n2a1, n2a2, n2a3, n3a1, n3a2, n3a3, ma1, ma2, ma3, mt = 0.0;
	printf("Insira o RA do aluno 1:");
	scanf("%i", &ra1);
	printf("Insira o RA do aluno 2:");
	scanf("%i", &ra2);
	printf("Insira o RA do aluno 3:");
	scanf("%i", &ra3);
	printf("Insira a nota 1 do aluno 1:");
	scanf("%f", &n1a1);
	printf("Insira a nota 2 do aluno 1:");
	scanf("%f", &n2a1);
	printf("Insira a nota pluri do aluno 1:");
	scanf("%f", &n3a1);
	ma1 = (n1a1 * 0.3) + (n2a1 * 0.4) + (n3a1 * 0.3);
	printf("Insira a nota 1 do aluno 2:");
	scanf("%f", &n1a2);
	printf("Insira a nota 2 do aluno 2:");
	scanf("%f", &n2a2);
	printf("Insira a nota pluri do aluno 2:");
	scanf("%f", &n3a2);
	ma2 = (n1a2 * 0.3) + (n2a2 * 0.4) + (n3a2 * 0.3);
	printf("Insira a nota 1 do aluno 3:");
	scanf("%f", &n1a3);
	printf("Insira a nota 2 do aluno 3:");
	scanf("%f", &n2a3);
	printf("Insira a nota pluri do aluno 3:");
	scanf("%f", &n3a3);
	ma3 = (n1a3 * 0.3) + (n2a3 * 0.4) + (n3a3 * 0.3);
	printf("O aluno 1 de RA %i obteve a média %.1f\n", ra1, ma1);
	printf("O aluno 2 de RA %i obteve a média %.1f\n", ra2, ma2);
	printf("O aluno 3 de RA %i obteve a média %.1f\n", ra3, ma3);
	mt = (ma1 + ma2 + ma3) / 3;
	printf("A média geral das notas dos alunos foi: %.1f\n", mt);
	if(ma1 >= 7){
		printf("O aluno 1 de RA %i foi aprovado!\n", ra1);
	} else {
		printf("O aluno 1 de RA %i foi reprovado!\n", ra1);
	}
	if(ma2 >= 7){
		printf("O aluno 2 de RA %i foi aprovado!\n", ra2);
	} else{
		printf("O aluno 2 de RA %i foi reprovado!\n", ra2);
	}
	if(ma3 >= 7){
		printf("O aluno 3 de RA %i foi aprovado!\n", ra3);
	} else {
		printf("O aluno 3 de RA %i foi reprovado!\n", ra3);
	}
	if(((ma1 >= 7) && ma2 >= 7) && ma3 >= 7){
		printf("3 alunos foram aprovados e nenhum foi reprovado!\n");
	} else if((ma1 >= 7) && ma2 >= 7){
		printf("2 alunos foram aprovados e 1 foi reprovado!\n");
	} else if((ma1 >= 7) && ma3 >= 7){
		printf("2 alunos foram aprovados e 1 foi reprovado!\n");
	} else if((ma2 >= 7) && ma3 >= 7){
		printf("2 alunos foram aprovados e 1 foi reprovado!\n");
	} else if(ma1 >= 7){
		printf("Somente 1 aluno foi aprovado e 2 foram reprovados!\n");
	} else if(ma2 >= 7){
		printf("Somente 1 aluno foi aprovado e 2 foram reprovados!\n");
	} else if(ma3 >= 7){
		printf("Somente 1 aluno foi aprovado e 2 foram reprovados!\n");
	} else {
		printf("Os 3 alunos foram reprovados!\n");
	}
	if((ma1 < ma2) && ma2 < ma3){
		printf("A ordem crescente das médias é: RA %i com a média %.1f, RA %i, com a média %.1f e RA %i com a média %.1f\n", ra1, ma1, ra2, ma2, ra3, ma3);
	} else if ((ma1 < ma3) && ma3 < ma2){
		printf("A ordem crescente das médias é: RA %i com a média %.1f, RA %i, com a média %.1f e RA %i com a média %.1f\n", ra1, ma1, ra3, ma3, ra2, ma2);
	} else if((ma2 < ma1) && ma1 < ma3){
		printf("A ordem crescente das médias é: RA %i com a média %.1f, RA %i, com a média %.1f e RA %i com a média %.1f\n", ra2, ma2, ra1, ma1, ra3, ma3);
	} else if((ma2 < ma3) && ma3 < ma1){
		printf("A ordem crescente das médias é: RA %i com a média %.1f, RA %i, com a média %.1f e RA %i com a média %.1f\n", ra2, ma2, ra3, ma3, ra1, ma1);
	} else if((ma3 < ma1) && ma1 < ma2){
		printf("A ordem crescente das médias é: RA %i com a média %.1f, RA %i, com a média %.1f e RA %i com a média %.1f\n", ra3, ma3, ra1, ma1, ra2, ma2);
	} else if((ma3 < ma2) && ma2 < ma1){
		printf("A ordem crescente das médias é: RA %i com a média %.1f, RA %i, com a média %.1f e RA %i com a média %.1f\n", ra3, ma3, ra2, ma2, ra1, ma1);
	}
	return 0;
}
