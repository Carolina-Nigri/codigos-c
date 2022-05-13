#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGANDO 1
#define ACABOU 0

int main() {
	int seg = time(0);
	srand(seg);

	printf("\n\n                         /^\\             \n");
	printf("                         | |             \n");
	printf("                         | |             \n");
	printf("                         |-|             \n");
	printf("                    /^\\  | |             \n");
	printf("             /^\\  / [_] \\+-+             \n");
	printf("            |---||-------| |             \n");
	printf("   _/^\\_    _/^\\_|  [_]  |_/^\\_   _/^\\_  \n");
	printf("   |___|    |___||_______||___|   |___|  \n");
	printf("    | |======| |===========| |=====| |   \n");
	printf("    | |      | |    /^\\    | |     | |   \n");
	printf("    | |      | |   |   |   | |     | |   \n");
	printf("    |_|______|_|__ |   |___|_|_____|_|   \n");
	printf("*******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int numeroSecreto = rand() % 100 + 1;
	int estado = JOGANDO;
	int tentativa = 1;
	double pontos = 1000;

	while(estado == JOGANDO){
		printf("\nTentativa %d.\n",tentativa);

		int chute;
		printf("Qual é o seu chute (entre 1 e 100)? ");
		scanf("%d",&chute);

		int chuteInvalido = (chute < 1 || chute > 100);

		if (chuteInvalido){
			printf("O seu chute deve ser entre 1 e 100.\n");	
			continue;
		}

		int acertou = (chute == numeroSecreto);
		int maior = (numeroSecreto > chute);

		if(acertou){
			estado = ACABOU;
			continue;
		} else if(maior){
			printf("O número secreto é maior do que %d.\n",chute);
		} else {
			printf("O número secreto é menor do que %d.\n",chute);
		}

		double pontosPerdidos = abs (chute - numeroSecreto) / 2.0;
		pontos -= pontosPerdidos;

		tentativa++;
	}

	printf("\n\n             OOOOOOOOOOO\n");
	printf("         OOOOOOOOOOOOOOOOOOO\n");
	printf("      OOOOOO  OOOOOOOOO  OOOOOO\n");
	printf("    OOOOOO      OOOOO      OOOOOO\n");
	printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO\n");
	printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO\n");
	printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
	printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
	printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO\n");
	printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO\n");
	printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO\n");
	printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO\n");
	printf("      OOOOOO   OOOOOOOOO   OOOOOO\n");
	printf("         OOOOOO         OOOOOO\n");
	printf("             OOOOOOOOOOOO\n\n\n");
	
	printf("Parabéns! Você acertou!\n");
	printf("%d tentativas e %.2f pontos.\n",tentativa, pontos);
	printf("Que tal jogar novamente?\n");
	return 0;
}