#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float baseret, ladoret, basetri, alttri, ladoquad, raio, arearet, areatri, areaquad, areacirc = 0.0;
	printf("Insira o valor da base do ret�ngulo:");
	scanf("%f", &baseret);
	printf("Insira o valor do lado do ret�ngulo:");
	scanf("%f", &ladoret);
	arearet = baseret * ladoret;
	printf("A �rea do ret�ngulo �: %.1f\n", arearet);
	printf("Insira o valor da base do tri�ngulo:");
	scanf("%f", &basetri);
	printf("Insira o valor da altura do tri�ngulo:");
	scanf("%f", &alttri);
	areatri = (basetri * alttri) / 2;
	printf("A �rea do tri�ngulo �: %.1f\n", areatri);
	printf("Insira o valor do lado do quadrado:");
	scanf("%f", &ladoquad);
	areaquad = ladoquad * ladoquad;
	printf("A �rea do quadrado �: %.1f\n", areaquad);
	printf("Insira o raio do c�rculo:");
	scanf("%f", &raio);
	areacirc = 3.1415 * (raio * raio);
	printf("A �rea do c�rculo �: %.1f\n", areacirc);
	if(((areatri < arearet) && areatri < areaquad) && areatri < areacirc){
		printf("A figura geom�trica com a menor �rea � o tri�ngulo\n");
	} else if(((areaquad < arearet) && areaquad < areatri) && areaquad < areacirc){
		printf("A figura geom�trica com a menor �rea � o quadrado\n");
	} else if (((areacirc < arearet) && areacirc < areatri) && areacirc < areaquad){
		printf("A figura geom�trica com a menor �rea � o c�rculo\n");
	} else {
		printf("A figura geom�trica com a menor �rea � o ret�ngulo\n");
	} if(((arearet > areatri) && arearet > areaquad) && arearet > areacirc){
		printf("A figura geom�trica com a maior �rea � o ret�ngulo\n");
	} else if(((areatri > arearet) && areatri > areaquad) && areatri > areacirc){
		printf("A figura geom�trica com a maior �rea � o tri�ngulo\n");
	} else if(((areaquad > arearet) && areaquad > areatri) && areaquad > areacirc){
		printf("A figura geom�trica com a maior �rea � o quadrado\n");
	} else {
		printf("A figura geom�trica com a maior �rea � o c�rculo\n");
	} if(((arearet > areatri) && areatri > areaquad) && areaquad > areacirc){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areacirc, areaquad, areatri, arearet);
	} else if(((arearet > areatri) && areatri > areacirc) && areacirc > areaquad){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areaquad, areacirc, areatri, arearet);
	} else if(((arearet > areaquad) && areaquad > areatri) && areatri > areacirc){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areacirc, areatri, areaquad, arearet);
	} else if(((arearet > areaquad) && areaquad > areacirc) && areacirc > areatri){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areatri, areacirc, areaquad, arearet);
	} else if(((arearet > areacirc) && areacirc > areatri) && areatri > areaquad){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areaquad, areatri, areacirc, arearet);
	} else if(((arearet > areacirc) && areacirc > areaquad) && areaquad > areatri){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areatri, areaquad, areacirc, arearet);
	} else if(((areatri > arearet) && arearet > areaquad) && areaquad > areacirc){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areacirc, areaquad, arearet, areatri);
	} else if(((areatri > arearet) && arearet > areacirc) && areacirc > areaquad){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areaquad, areacirc, arearet, areatri);
	} else if(((areatri > areaquad) && areaquad > arearet) && arearet > areacirc){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areacirc, arearet, areaquad, areatri);
	} else if(((areatri > areaquad) && areaquad > areacirc) && areacirc > arearet){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", arearet, areacirc, areaquad, areatri);
	} else if(((areatri > areacirc) && areacirc > arearet) && arearet > areaquad){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areaquad, arearet, areacirc, areatri);
	} else if(((areatri > areacirc) && areacirc > areaquad) && areaquad > arearet){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", arearet, areaquad, areacirc, areatri);
	} else if(((areaquad > arearet) && arearet > areatri) && areatri > areacirc){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areacirc, areatri, arearet, areaquad);
	} else if(((areaquad > arearet) && arearet > areacirc) && areacirc > areatri){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areatri, areacirc, arearet, areaquad);
	} else if(((areaquad > areatri) && areatri > arearet) && arearet > areacirc){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areacirc, arearet, areatri, areaquad);
	} else if(((areaquad > areatri) && areatri > areacirc) && areacirc > arearet){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", arearet, areacirc, areatri, areaquad);
	} else if(((areaquad > areacirc) && areacirc > arearet) && arearet > areatri){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areatri, arearet, areacirc, areaquad);
	} else if(((areaquad > areacirc) && areacirc > areatri) && areatri > arearet){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", arearet, areatri, areacirc, areaquad);
	} else if(((areacirc > arearet) && arearet > areatri) && areatri > areaquad){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areaquad, areatri, arearet, areacirc);
	} else if(((areacirc > arearet) && arearet > areaquad) && areaquad > areatri){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areatri, areaquad, arearet, areacirc);
	} else if(((areacirc > areatri) && areatri > arearet) && arearet > areaquad){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areaquad, arearet, areatri, areacirc);
	} else if(((areacirc > areatri) && areatri > areaquad) && areaquad > arearet){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", arearet, areaquad, areatri, areacirc);
	} else if(((areacirc > areaquad) && areaquad > arearet) && arearet > areatri){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", areatri, arearet, areaquad, areacirc);
	} else if(((areacirc > areaquad) && areaquad > areatri) && areatri > arearet){
		printf("A ordem crescente das �reas das figuras �: %.1f, %.1f, %.1f e %.1f", arearet, areatri, areaquad, areacirc);
	}
	return 0;
}
