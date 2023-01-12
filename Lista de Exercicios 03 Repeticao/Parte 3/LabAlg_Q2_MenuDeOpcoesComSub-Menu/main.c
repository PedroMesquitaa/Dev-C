#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	SetConsoleTitle ("Menu de Opcoes com Sub-Menu");
	setlocale (LC_ALL, "Portuguese");
	
	// Var
	int opcao, opcao2, opcao3, opcao4 = 0;
	
	while (opcao != 9){
		printf("..:: MENU SISTEMA CLIENTE ::.. \n");
		printf("1. Clientes           \n");      
		printf("2. Fornecedores       \n");
		printf("3. Cidades            \n");
		printf("9. Sair               \n");
		printf("\nDigite a opção:\n");
		scanf("%i", &opcao);
		
		
		if (opcao == 1){
			while (opcao2 != 19){
				printf("11. Cadastrar clientes       \n");
				printf("12. Alterar clientes       \n");
				printf("13. Pesquisar clientes          \n");
				printf("14. Excluir clientes         \n");
				printf("19. Sair               \n");
				printf("\nDigite a opção:\n");
				scanf("%i", &opcao2);
			}
		}	
		
		
		
		if (opcao == 2){
			while (opcao3 != 29){
				printf("21. Cadastrar fornecedor       \n");
				printf("22. Alterar fornecedor       \n");
				printf("23. Pesquisar fornecedor          \n");
				printf("24. Excluir fornecedor         \n");
				printf("29. Sair               \n");
				printf("\nDigite a opção:\n");
				scanf("%i", &opcao3);
			}
		}
		
		
		
		if (opcao == 3){
			while (opcao4 != 39){
				printf("31. Cadastrar cidade       \n");
				printf("32. Alterar cidade        \n");
				printf("33. Pesquisar cidade           \n");
				printf("34. Excluir cidade          \n");
				printf("39. Sair               \n");
				printf("\nDigite a opção:\n");
				scanf("%i", &opcao4);
			}
		}
	}
	
	
	return 0;
}
