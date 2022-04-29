// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int leiaN();
int termoFibonacci(int K);

int main(){
    printf("\n\tSequencia de Fibonacci\n\n");

    int N = leiaN();
    printf("\nTermo = %i",termoFibonacci(N));

    return 0;
}

int leiaN(){
    int X;
    printf("\nDigite a posicao do termo desejado: ");
    scanf("%i",&X);

    return X;
}

int termoFibonacci(int K){
    int A = 0; // Termo anterior (N-1)
	int B = 0; // Termo anterior ao anterior (N-2)
	int C = 1; // Termo (N) -> Inicial = 1

	for(int i = 0; i < K; i++){
		B = A; // (N-2) guarda o valor de (N-1)
		A = C; // (N-1) guarda o valor de (N)
		C = A + B; // (N) = (N-1) + (N+2) -> Termo = Soma(dois anteriores)
	}

    return C;
}
