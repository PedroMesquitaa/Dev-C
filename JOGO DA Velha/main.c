#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char jogo[3][3];

void inicializarMatriz() {
    int i,j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            jogo[i][j] = ' ';
        }
    }
}

int eValido(char letra) {
    if(letra == 'x' || letra == '0')
        return 1;
    else
        return 0;
}

int coordenadaEhValida(int x, int y) {
    if(x >= 0 && x < 3) {
        if(y >= 0 && y < 3)
            return 1;
    }
    return 0;
}

int posicaVazia(int x, int y) {
    if(jogo[x][y] != 'x' && jogo[x][y] != '0')
        return 1;
    return 0;
}

int ganhouLinhas() {
    int i, j, igual = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(eValido(jogo[i][j]) && jogo[i][j] == jogo[i][j+1])
                igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;
}

int ganhouColunas() {
    int i, j, igual = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(eValido(jogo[j][i]) && jogo[j][i] == jogo[j+1][i])
                igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;
}

int ganhoudiagPrincipal() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(eValido(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

int ganhoudiagSecundaria() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(eValido(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

void imprimir() {
    int lin, col;

    printf("\n\t    0  1  2\n");
    for(lin = 0; lin < 3; lin++) {
        printf("\t%d ", lin);
        for(col = 0; col < 3; col++) {
            if(col < 2)
                printf(" %c |", jogo[lin][col]);
            else
                printf(" %c ", jogo[lin][col]);
        }
        if(lin < 2)
            printf("\n\t   ---------\n");
    }
}

void jogar() {
    int x, y, valida, jogadas = 0, ganhou = 0, ordem = 1;

    do {
        do {
            imprimir();
            printf("\nDigite a coordenada que deseja jogar: ");
            scanf("%d%d", &x, &y);
            valida = coordenadaEhValida(x, y);
            if(valida == 1)
                valida += posicaVazia(x, y);
        } while(valida != 2);
        if(ordem == 1)
            jogo[x][y] = 'x';
        else
            jogo[x][y] = '0';
        jogadas++;
        ordem++;
        if(ordem == 3)
            ordem = 1;
        ganhou += ganhouLinhas();
        ganhou += ganhouColunas();
        ganhou += ganhoudiagPrincipal();
        ganhou += ganhoudiagSecundaria();
    } while(ganhou == 0 && jogadas < 9);

    if(ganhou != 0) {
        imprimir();
        if(ordem - 1 == 1)
            printf("\nParabens Jogador 1. Voce venceu\n");
        else
            printf("\nParabens jogador 2. Voce venceu\n");
    } else
        printf("\nDeu velha. Ninguem venceu!\n\n");
}

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int opc = 0;


	do{
		
		printf("..:: Jogo Da Velha ::..\n");
		printf("1. Iniciar Jogo        \n");
		printf("2. Exibir Regras       \n");
		printf("3. Instrucoes para jogar       \n");
		printf("Digite a opcao:\n");
		printf("9. Sair       \n");
		scanf("%i", &opc);
		
		
		if ( opc == 1){
			
			int op;
		
		    do {
		        inicializarMatriz();
		        jogar();
		        printf("Deseja jogar novamente?\n1 - Sim\n2 - Nao\n");
		        scanf("%d", &op);
		    } while(op == 1);
			
		}else if (opc == 2){
			
			printf("\n..:: REGRAS ::..\n");
			printf("\nParticipam duas pessoas, que jogam alternadamente, preenchendo cada um dos espaços vazios.\n" 
			"Cada participante poderá usar um símbolo (X ou O).\nVence o jogador que conseguir formar primeiro uma linha com três símbolos iguais,"
			"seja ela na horizontal, \nvertical ou diagonal.\n\n");
			
			
		}else if (opc == 3){
			
			printf("\n..:: Intruções ::..\n");
			printf("1. Jogador 1 sempre será: X e o jogador 2: 0\n");
			printf("2. Escolha a posição selecionando primeiro a linha e depois a coluna entre 0 a 2.\n");
			printf("3. Fique Atento, Primeira jogada sempre será do jogador 1.\n");
			printf("4. Caso alguns dos jogadores tente selecionar alguma posição ja escolhida, o programa irá aguardar uma posição diferente ser selecionada.\n");
			printf("5. Depois da última jogada, mostrará o vencedor.\n");
			printf("6. Para jogar novamente Digite 1 e 0 para Sair.\n\n");
			
		}
		
		
		
	}while (opc != 9);


    

    return 0;
}
