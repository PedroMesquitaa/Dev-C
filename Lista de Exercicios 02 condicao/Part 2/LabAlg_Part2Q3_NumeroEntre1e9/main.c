#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* Ler um valor num�rico inteiro que seja na faixa de valores de 1 at� 9. O programa deve apresentar a 
mensagem �O valor est� na faixa permitida!�, caso o valor esteja fora da faixa dever� exibir a 
mensagem �O valor informado n�o � permitido pois n�o est� na faixa de 1 a 9�.  */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Numero entre 1 e 9");
	setlocale (LC_ALL, "Portuguese");
	
	//var
	int numero = 0;
	
	//entrada. Usuario precisa digitar o numero
	
	printf("Digite um n�mero entre 1 at� 9: \n");
	scanf("%i", &numero);
	
	//processamento e saida. Colocando a mensagem se esta dentro da faixa ou fora
	
	if (numero < 1 || numero > 9){
		printf("O valor informado n�o � permitido, pois n�o est� na faixa de 1 a 9");
	}else{
		printf("O valor est� na faixa permitida!");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
