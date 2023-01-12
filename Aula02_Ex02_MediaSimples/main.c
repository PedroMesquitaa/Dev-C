#include <stdio.h>
#include <stdlib.h>

/* Marçal, J. 
 * Exemplo programa em C, prática: 
 * variáveis, printf, scanf.
 */

int main(int argc, char *argv[]) {
	// Declaração das variáveis
	float m = 0.0;
	float p1, p2 = 0.0;
	
	// Entrada
	printf("..:: CALCULADORA DE MEDIA ::..\n");
	printf("Digite o valor da primeira nota:\n");	
	scanf("%f", &p1);
	printf("Digite o valor da segunda nota:\n");	
	scanf("%f", &p2);

	// Processamento
	m = (p1 + p2) / 2;
	
	// Saída
	printf("Sua media e: %f", m);
	
	return 0;
}





