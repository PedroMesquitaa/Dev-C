#include <stdio.h>
#include <stdlib.h>

/* Marcal, J. - Desvio Condicional Composto
 * Sistema simples de controle acadêmico, verifica se
 * o aluno foi aprovado ou reprovado.
 */
int main(int argc, char *argv[]) {
	float nota1, nota2, media = 0.0;	
	
	printf("\n");
	printf(":: SISTEMA CONTROLE ACADEMICO ::..\n");
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media >= 5.0) {
		printf("APROVADO!\n");
	} else {
		printf("NAO FOI DESTA VEZ!\n");
	}
	
	return 0;
}





