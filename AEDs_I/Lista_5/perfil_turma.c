#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	printf("\n\tPERFIL DA TURMA\n\n");

	int N; // Número de alunos
	bool Erro;

	do{
		printf("\nQuantos alunos? ");
		scanf("%i",&N);
		Erro = N < 0;
		if(Erro) printf("\n\aValor inválido!\n"); 
	} while(Erro);

	int Contador = 0;

	char Genero;
	int Idade;

	int H = 0; // Homens
	int M = 0; // Mulheres

	int MaiorId = 0;
	int MenorId = 100;
	int Maioridade = 0; // Idade >= 18

	while(Contador < N){ // Entra N vezes
		Contador ++;

		do{ // Lê o gênero
			printf("\nGênero [m/f]: ");
			scanf(" %c",&Genero);
			Genero = tolower(Genero);
			Erro = (Genero !='m') && (Genero != 'f');
			if(Erro) printf("\n\aValor inválido!\n");
		} while(Erro); // Repete enquanto Genero for inválido

		do{ // Lê a idade
			printf("Idade [0..90]: ");
			scanf("%i",&Idade);
			Erro = (Idade < 0) || (Idade > 90);
			if(Erro) printf("\n\aValor inválido!\n");
		} while (Erro); // Repete enquanto Idade for inválida

		switch(Genero){ // Contabiliza homens e mulheres
			case 'm':
				H ++;
				break;
			case 'f':
				M ++;
		} // fim switch()

		if(Idade > MaiorId) MaiorId = Idade;
		if(Idade < MenorId) MenorId = Idade;
		if(Idade >= 18) Maioridade ++;

	} // fim while()

	if(N > 0){ // Entra se a qtde de alunos não for nula
		float PercentH = ((float) H / N) * 100;
		float PercentM = ((float) M / N) * 100;
		printf("\nO percentual de mulheres é %.2f%% e de homens é %.2f%%\n",PercentM,PercentH);
		
		float PercentMaior = ((float) Maioridade / N) * 100;
		printf("\nO percentual de pessoas maiores de idade é %.2f%%\n",PercentMaior);

		printf("\nA maior idade é %i e a menor é %i\n",MaiorId,MenorId);
	} // fim if()		

	return 0;
} // fim main()