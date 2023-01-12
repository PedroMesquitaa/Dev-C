#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//titulo na barra do prompt
	SetConsoleTitle("Media das Notas");
	
	
	//declaracao variaveis
	float n1, n2, n3 = 0.0;
	float m = 0.0;
	
	//entrada
	printf("Calculadora\n");
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	printf("Digite a nota do trabalho:\n");
	scanf("%f", &n3);
	
	//processamento
	m = (n1 + n2 + n3) / 3;
	
	//saida
	printf("A media final e: %f\n", m);
	
	system("pause");
	return 0;
}
