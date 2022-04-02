#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
/*	
	// Questão 1: S = 2 + 5 + 8 + 11 + ... -> até 10° termo

	int S = 0; 
	int A = 2; 

	for(int C = 1; C <= 10; C ++){ 
		S += A;
		A += 3;
		printf("%i° Termo = %i\n",C,A);
	}

	printf("\nSoma = %i\n",S);
*/
///*	
	// Questão 2: S = (1/1) + (1/10) + (1/100) + ... -> Até N° termo

	int N;
	bool Erro;

	do{
		printf("N = ");
		scanf("%i",&N);
		Erro = N < 0;
		if(Erro) printf("\n\aValor inválido!\n");
	} while(Erro);

	float Soma = 0;
	int Dividendo = 1;

	for (int C = 1; C <= N ; C ++){
		float A = (1.0 / Dividendo);
		printf("\n%f\n",A);
		Soma += A;
		Dividendo *= 10;
	}
		printf("\nSoma = %f\n",Soma);
//*/
	return 0;
}