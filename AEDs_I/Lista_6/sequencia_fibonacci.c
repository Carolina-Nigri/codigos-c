#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tSequencia de Fibonacci\n\n");

    int N;
	bool Erro;

		do{
			printf("\nQuantidade de termos = ");
			scanf("%i",&N);
			Erro = N < 1;
			if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);

	int A = 0; // Termo anterior (N-1)
	int B = 0; // Termo anterior ao anterior (N-2)
	int C = 1; // Termo (N) -> Inicial = 1

	printf("\nTermos:\n");

	for(int cont = 0; cont < N; cont ++){
		printf("%i\n",C);
		B = A; // (N-2) guarda o valor de (N-1)
		A = C; // (N-1) guarda o valor de (N)
		C = A + B; // (N) = (N-1) + (N+2) -> Termo = Soma(dois anteriores)
	}

return 0;
}
