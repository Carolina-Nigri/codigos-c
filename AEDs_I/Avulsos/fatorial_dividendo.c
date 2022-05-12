#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	printf("\n\tSoma da sequencia: 1 + 1/1! + 1/2! + ... + 1/N!\n\n");

	int N;
	bool Erro;

	do{
		printf("\nN = ");
		scanf("%i",&N);
		Erro = N < 0;
		if(Erro) printf("\n\aValor invalido\n");
	} while(Erro); 

	float E = 1;
	float Fracao;

	while(N > 0){
		int Fat = 1;
		int Valor = N;

		while(Valor > 1){
			Fat *= Valor;
			Valor--;
		}

		Fracao = 1.0 / Fat;
		E += Fracao;
		N--;
	}
	
	printf("\nE = %.2f\n",E);

	return 0;
}