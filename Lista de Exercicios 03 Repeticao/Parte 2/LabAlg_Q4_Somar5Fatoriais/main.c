#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie  um  programa  que  efetua  a  leitura  de  5  valores  numéricos  inteiros 
informados pelo usuário, no final o programa deverá apresentar a soma dos fatoriais de cada um dos 
valores informados pelo usuário. */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar 5 Fatoriais");
	setlocale (LC_ALL, "Portuguese");
	
	int i, resultado, numero, total = 0;
	
	for (i = 1;  i <= 5; i++){
		printf("Digite um número: \n");
		scanf("%i", &numero);
		for (resultado = 1; numero > 1; numero--){
			resultado = resultado * numero;
		} 
		total = resultado + total;
	}
	
	
	
	printf("A soma total de todos os fatoriais é de: %i", total);
	
	
	return 0;
}
