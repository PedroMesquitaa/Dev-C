#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Crie  um  programa  que  efetua  a  leitura  de  5  valores  num�ricos  inteiros 
informados pelo usu�rio, no final o programa dever� apresentar a soma dos fatoriais de cada um dos 
valores informados pelo usu�rio. */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar 5 Fatoriais");
	setlocale (LC_ALL, "Portuguese");
	
	int i, resultado, numero, total = 0;
	
	for (i = 1;  i <= 5; i++){
		printf("Digite um n�mero: \n");
		scanf("%i", &numero);
		for (resultado = 1; numero > 1; numero--){
			resultado = resultado * numero;
		} 
		total = resultado + total;
	}
	
	
	
	printf("A soma total de todos os fatoriais � de: %i", total);
	
	
	return 0;
}
