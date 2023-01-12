#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//nome no prompt
	SetConsoleTitle ("Informacoes Salariais");
	
	//entrada
	float salarioPorAula, salarioBrutoMensal, salarioLiquidoMensal, horasAulaSemanal = 0.0;
	float irDesconto, inssDesconto, acrescimo = 0.0;
	int horasAulaDia, diasTrabalhados = 0;
	
	printf("..:: Sistema ::..\n");
	printf("Digite quanto voce ganha por hora/aula: \n");
	scanf("%f", &salarioPorAula);
	printf("Digite quantos dias na semana voce trabalha: \n");
	scanf("%i", &diasTrabalhados);
	printf("Digite quantas horas voce trabalha por dia: \n");
	scanf("%i", &horasAulaDia);
	
	//processamento
	horasAulaSemanal = horasAulaDia * diasTrabalhados;
	salarioBrutoMensal = 1.1 * horasAulaSemanal * 4 * salarioPorAula;
	acrescimo = salarioBrutoMensal - salarioBrutoMensal / 1.1;
	irDesconto = salarioBrutoMensal / 1.05 - salarioBrutoMensal;
	inssDesconto = salarioBrutoMensal / 1.07 - salarioBrutoMensal;
	salarioLiquidoMensal = salarioBrutoMensal - irDesconto - inssDesconto;
	
	//saida
	printf("\n");
	printf("..:: Folha de Pagamento ::..\n");
	printf("Salario Bruto Mensal: %.2f\n", salarioBrutoMensal);
	printf("Acrescimo de  10 porcento: %.f\n", acrescimo);
	printf("Desconto de IR 5 porcento: %.2f\n", irDesconto);
	printf("Desconto de INSS 7 porcento: %.2f\n", inssDesconto);
	printf("\n");
	printf("Salario Liquido: %.2f\n", salarioLiquidoMensal);
	
	
	return 0;
}
