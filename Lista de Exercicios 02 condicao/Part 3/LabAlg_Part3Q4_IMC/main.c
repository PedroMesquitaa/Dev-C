#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("IMC");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	float peso, altura, imc = 0.0;
	
	// Entrada. Solicitando ao usuário seu peso e altura.
	
	printf("..:: IMC ::..\n");
	printf("Digite o seu peso em quilos: \n");
	scanf("%f", &peso);
	printf("Digite sua altura em metros: \n");
	scanf("%f", &altura);
	
	// Processasmento e Saída. Fazendo a conta para o IMC e classificando os resultados.
	
	imc = (peso / (altura * altura));
	
	printf("\n..:: Resultado ::..\n");
	
	if (imc <= 18.5){
		printf("Seu IMC é %.2f, você está abaixo do peso ideal.", imc);
	}else if (imc >= 18.6 && imc <= 24.9){
		printf("Seu IMC é %.2f, você está com peso normal.", imc);
	}else if (imc >= 25 && imc <= 29.9){
		printf("Seu IMC é %.2f, você está com sobrepeso.", imc);
	}else if (imc >= 30 && imc <= 34.9){
		printf("Seu IMC é %.2f, você está com obesidade grau I.", imc);
	}else if (imc >= 35 && imc <= 39.9){
		printf("Seu IMC é %.2f, você está com obesidade grau II.", imc);
	}else{
		printf("Seu IMC é %.2f, você está com obesidade grau III.", imc);
	}
	
	
	
	
	return 0;
}
