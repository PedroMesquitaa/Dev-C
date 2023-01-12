#include <stdio.h>
#include <stdlib.h>

/* Marcal, J. - Desvio Condicional Composto Encadeado
 * Sistema simples de controle acadêmico, verifica se
 * o aluno foi aprovado ou reprovado.
 */
int main(int argc, char *argv[]) {
	float nota1, nota2, media = 0.0;	
	
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media >= 5.0) {
		if (media >= 8.5) {
			printf("APROVADO COM MERITO!\n");	
		} else {
			printf("APROVADO!\n");	
		}		
	} else {
		printf("NAO FOI DESTA VEZ!\n");
	}
	
	return 0;
}





