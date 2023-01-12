#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Divisel por 4");
	setlocale (LC_ALL, "Portuguese");
	
	int contador = 0;
	
	
	for (contador = 1; contador <= 200; contador++){
		if (contador % 4 == 0){
			printf("%i\n", contador);
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
