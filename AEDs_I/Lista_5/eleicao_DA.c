#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	printf("\n\tELEIÇÃO DA CHAPA DO DACC\n");

	int voto; // Domínio: {0, 1, 2, 3} -> Se não for = ERRO
	bool ERRO;

	do{	// Lê o primeiro voto -> Se já for a FLAG (0), encerra
		printf("\n0 - Sair do programa\n1 – Chapa 1\n2 – Chapa 2\n3 – Voto em branco/nulo\n");
		printf("\nVoto: ");
		scanf("%i",&voto);
		ERRO = (voto != 0) && (voto != 1) && (voto != 2) && (voto != 3);
		if(ERRO) printf("\nValor inválido!\a\n");
	} while(ERRO);

	int chapa1 = 0;
	int chapa2 = 0;
	int nulo = 0;
	int eleitores = 0;

	while(voto != 0){ // Executa até que tecle pra sair (0)
		eleitores ++; // Contabiliza qtde de eleitores

		switch(voto){ // Contabiliza votos de cada chapa/nulos
			case 1: 
				chapa1 ++;
				break;
			case 2:
				chapa2 ++;
				break;
			case 3:
				nulo ++;
		}

		do{	
			// Lê os votos
			printf("\n0 - Sair do programa\n1 – Chapa 1\n2 – Chapa 2\n3 – Voto em branco/nulo\n");
			printf("\nVoto: ");
			scanf("%i",&voto);
			ERRO = (voto != 0) && (voto != 1) && (voto != 2) && (voto != 3);
			if(ERRO) printf("\nValor inválido!\a\n");
		} while(ERRO);
	}

	if(eleitores > 0){ // Não entra se o primeiro voto for 0
		printf("\n\tVOTOS:\n\nChapa 1 - %i\nChapa 2 - %i\nNulos - %i\n",chapa1,chapa2,nulo);

		// Calcula os percentuais de votos de cada chapa/nulos
		float perc_chapa1 = ((float) chapa1 / eleitores) * 100;
		float perc_chapa2 = ((float) chapa2 / eleitores) * 100;
		float perc_nulo = ((float) nulo / eleitores) * 100;
		
		// Imprime a vencedora
		if(chapa1 > chapa2){ // Chapa 1
			printf("\nA Chapa 1 é a vencedora, com %.2f%% dos votos!\n",perc_chapa1);
		} else if(chapa2 > chapa1){ // Chapa 2
			printf("\nA Chapa 2 é a vencedora, com %.2f%% dos votos!\n",perc_chapa2);
		} else{ // Chapa 1 == Chapa 2: Empate
			printf("\nHouve um empate\n");
		}
	}

	return 0;
}