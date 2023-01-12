#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char nome1[30];
	char nome2[30];
	char nome3[30];
	char nome4[30];
	float dolar, euro, libra, reais1, reais2, reais3, reais4, somareais = 0.0;
	printf("Insira a cotação diária do dólar:");
	scanf("%f", &dolar);
	printf("Insira a cotação diária do euro:");
	scanf("%f", &euro);
	printf("Insira a cotação diária da libra esterlina:");
	scanf("%f", &libra);
	printf("Insira o primeiro nome do primeiro amigo:");
	scanf("%s", &nome1);
	printf("Insira o primeiro nome do segundo amigo:");
	scanf("%s", &nome2);
	printf("Insira o primeiro nome do terceiro amigo:");
	scanf("%s", &nome3);
	printf("Insira o primeiro nome do quarto amigo:");
	scanf("%s", &nome4);
	printf("Insira a quantidade de dinheiro em reais que o primeiro amigo irá levar:");
	scanf("%f", &reais1);
	printf("Insira a quantidade de dinheiro em reais que o segundo amigo irá levar:");
	scanf("%f", &reais2);
	printf("Insira a quantidade de dinheiro em reais que o terceiro amigo irá levar:");
	scanf("%f", &reais3);
	printf("Insira a quantidade de dinheiro em reais que o quarto amigo irá levar:");
	scanf("%f", &reais4);
	somareais = reais1 + reais2 + reais3 + reais4;
	printf("A soma total dos valores em reais é de: R$%.2f\n", somareais);
	if(((reais1 > reais2) && reais1 > reais3) && reais1 > reais4){
		printf("O amigo %s com R$%.2f é o amigo com o maior valor em reais\n", nome1, reais1);
	} else if(((reais2 > reais1) && reais2 > reais3) && reais2 > reais4){
		printf("O amigo %s com R$%.2f é o amigo com o maior valor em reais\n", nome2, reais2);
	} else if(((reais3 > reais1) && reais3 > reais2) && reais3 > reais4){
		printf("O amigo %s com R$%.2f é o amigo com o maior valor em reais\n", nome3, reais3);
	} else if(((reais4 > reais1) && reais4 > reais2) && reais4 > reais3){
		printf("O amigo %s com R$%.2f é o amigo com o maior valor em reais\n", nome4, reais4);
	}
	if(((reais1 < reais2) && reais1 < reais3) && reais1 < reais4){
		printf("O amigo %s com R$%.2f é o amigo com o menor valor em reais\n", nome1, reais1);
	} else if(((reais2 < reais1) && reais2 < reais3) && reais2 < reais4){
		printf("O amigo %s com R$%.2f é o amigo com o menor valor em reais\n", nome2, reais2);
	} else if(((reais3 < reais1) && reais3 < reais2) && reais3 < reais4){
		printf("O amigo %s com R$%.2f é o amigo com o menor valor em reais\n", nome3, reais3);
	} else if(((reais4 < reais1) && reais4 < reais2) && reais4 < reais2){
		printf("O amigo %s com R$%.2f é o amigo com o menor valor em reais\n", nome4, reais4);
	} 
	printf("%s tem R$%.2f, convertidos terá %.2f dólares, %.2f euros e %.2f libras\n", nome1, reais1, reais1 / dolar, reais1 / euro, reais1 / libra);
	printf("%s tem R$%.2f, convertidos terá %.2f dólares, %.2f euros e %.2f libras\n", nome2, reais2, reais2 / dolar, reais2 / euro, reais2 / libra);
	printf("%s tem R$%.2f, convertidos terá %.2f dólares, %.2f euros e %.2f libras\n", nome3, reais3, reais3 / dolar, reais3 / euro, reais3 / libra);
	printf("%s tem R$%.2f, convertidos terá %.2f dólares, %.2f euros e %.2f libras\n", nome4, reais4, reais4 / dolar, reais4 / euro, reais4 / libra);
	if(((reais1 < reais2) && reais2 < reais3) && reais3 < reais4){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais1, reais2, reais3, reais4);
	} else if(((reais1 < reais2) && reais2 < reais4) && reais4 < reais3){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais1, reais2, reais4, reais3);
	} else if(((reais1 < reais3) && reais3 < reais2) && reais2 < reais4){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais1, reais3, reais2, reais4);
	} else if(((reais1 < reais3) && reais3 < reais4) && reais4 < reais2){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais1, reais3, reais4, reais2);
	} else if(((reais1 < reais4) && reais4 < reais2) && reais2 < reais3){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais1, reais4, reais2, reais3);
	} else if(((reais1 < reais4) && reais4 < reais3) && reais3 < reais2){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais1, reais4, reais3, reais2);
	} else if(((reais2 < reais1) && reais1 < reais3) && reais3 < reais4){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais2, reais1, reais3, reais4);
	} else if(((reais2 < reais1) && reais1 < reais4) && reais4 < reais3){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais2, reais1, reais4, reais3);
	} else if(((reais2 < reais3) && reais3 < reais1) && reais1 < reais4){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais2, reais3, reais1, reais4);
	} else if(((reais2 < reais3) && reais3 < reais4) && reais4 < reais1){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais2, reais3, reais4, reais1);
	} else if(((reais2 < reais4) && reais4 < reais1) && reais1 < reais3){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais2, reais4, reais1, reais3);
	} else if(((reais2 < reais4) && reais4 < reais3) && reais3 < reais1){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais2, reais4, reais3, reais1);
	} else if(((reais3 < reais1) && reais1 < reais2) && reais2 < reais4){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais3, reais1, reais2, reais4);
	} else if(((reais3 < reais1) && reais1 < reais4) && reais4 < reais2){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais3, reais1, reais4, reais2);
	} else if(((reais3 < reais2) && reais2 < reais1) && reais1 < reais4){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais3, reais2, reais1, reais4);
	} else if(((reais3 < reais2) && reais2 < reais4) && reais4 < reais1){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais3, reais2, reais4, reais1);
	} else if(((reais3 < reais4) && reais4 < reais1) && reais1 < reais2){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais3, reais4, reais1, reais2);
	} else if(((reais3 < reais4) && reais4 < reais2) && reais2 < reais1){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais3, reais4, reais2, reais1);
	} else if(((reais4 < reais1) && reais1 < reais2) && reais2 < reais3){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais4, reais1, reais2, reais3);
	} else if(((reais4 < reais1) && reais1 < reais3) && reais3 < reais2){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais4, reais1, reais3, reais2);
	} else if(((reais4 < reais2) && reais2 < reais1) && reais1 < reais3){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais4, reais2, reais1, reais3);
	} else if(((reais4 < reais2) && reais2 < reais3) && reais3 < reais1){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais4, reais2, reais3, reais1);
	} else if(((reais4 < reais3) && reais3 < reais2) && reais2 < reais1){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais4, reais3, reais2, reais1);
	} else if(((reais4 < reais3) && reais3 < reais1) && reais1 < reais2){
		printf("Os valores ordenados do menor para o maior são: R$%.2f, R$%.2f, R$%.2f e R$%.2f", reais4, reais3, reais1, reais2);
	}
	return 0;
}
