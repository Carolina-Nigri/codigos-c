#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	printf("\n\tCalcula fatorial de nº inteiro positivo\n\n");

	int N;

	printf("\n[Numero negativo encerra]");
	printf("\nNumero = ");
	scanf("%i",&N);

	int FLAG = N < 0;
	
	while(!FLAG){
		int Fat = 1;

		for(int i = 0; i < N; i++){
			Fat *= (N-i);
		}

		printf("\nResultado = %i\n",Fat);

		printf("\n[Numero negativo encerra]");
		printf("\nNumero = ");
		scanf("%i",&N);

		FLAG = N < 0;
	}

	return 0;
}