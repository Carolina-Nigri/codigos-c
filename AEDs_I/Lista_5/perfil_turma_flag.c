#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	printf("\n\tPERFIL DA TURMA\n\n");

	bool Erro;
	int Quantidade	 = 0;
	const char FLAG = 's'; 

	char Genero;
	int Idade;

	int H = 0; // Homens
	int M = 0; // Mulheres

	int MaiorId = 0;
	int MenorId = 100;
	int Maioridade = 0; // Idade >= 18
	
	do{ // Lê o gênero
		printf("\n[S pra encerrar] ");
		printf("\nGênero [m/f]: ");
		scanf(" %c",&Genero);
		Genero = tolower(Genero);
		Erro = (Genero !='m') && (Genero != 'f') && (Genero != FLAG);
		if(Erro) printf("\n\aValor inválido!\n");
	} while(Erro); // Repete enquanto Genero for inválido

	do{ // Lê a idade
		printf("Idade [0..90]: ");
		scanf("%i",&Idade);
		Erro = (Idade < 0) || (Idade > 90);
		if(Erro) printf("\n\aValor inválido!\n");
	} while (Erro); // Repete enquanto Idade for inválida
	
	while(Genero != FLAG){ // Entra enquanto não teclar pra sair
		Quantidade	 ++;
		
		switch(Genero){ // Contabiliza homens e mulheres
			case 'm':
				H ++;
				break;
			case 'f':
				M ++;
		} // fim switch()

		// Guarda idades maior e menor
		if(Idade > MaiorId) MaiorId = Idade;
		if(Idade < MenorId) MenorId = Idade;
		// Contabiliza maiores de idade
		if(Idade >= 18) Maioridade ++;

		do{ // Lê o gênero
			printf("\n[S pra encerrar] ");
			printf("\nGênero [m/f]: ");
			scanf(" %c",&Genero);
			Genero = tolower(Genero);
			Erro = (Genero !='m') && (Genero != 'f') && (Genero != FLAG);
			if(Erro) printf("\n\aValor inválido!\n");
		} while(Erro); // Repete enquanto Genero for inválido
		
		do{ // Lê a idade
			printf("Idade [0..90]: ");
			scanf("%i",&Idade);
			Erro = (Idade < 0) || (Idade > 90);
			if(Erro) printf("\n\aValor inválido!\n");
		} while (Erro); // Repete enquanto Idade for inválida
		
	} // fim while()

	if(Quantidade > 0){ // Entra se a qtde de alunos não for nula
		float PercentH = ((float) H / Quantidade) * 100;
		float PercentM = ((float) M / Quantidade) * 100;
		printf("\nO percentual de mulheres é %.2f%% e de homens é %.2f%%\n",PercentM,PercentH);
		
		float PercentMaior = ((float) Maioridade / Quantidade) * 100;
		printf("\nO percentual de pessoas maiores de idade é %.2f%%\n",PercentMaior);

		printf("\nA maior idade é %i e a menor é %i\n",MaiorId,MenorId);
	} // fim if()		

	return 0;
} // fim main()