#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Somar Salarios (Maximo 5 ou ate informar 'nao')");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	
	float salario, total = 0.0;
	int opcao = 1;
	int i = 0;
	
	// Entrada
	
	for (i = 1; i <= 5; i++) {
		
		printf("Digite um salário para saber o total da soma (Total de vezes permitdos é 5 salários): \n");
		scanf("%f", &salario);
			
		total = total + salario;
			
			
		printf("Deseja informar outro salário (0 = Não, 1 = Sim)? \n");
		scanf("%i", &opcao);
		
		
		if (opcao == 0){
			break;
		}
		
		
		
	}
 	
	printf ("\nO total valor de salários é de: %.2f", total);
	
	
	
	return 0;
}
