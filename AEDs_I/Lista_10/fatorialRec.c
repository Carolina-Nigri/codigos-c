// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
long fatorial(int N);
int leNatural();

int main(){
    printf("\n\tCalcula fatorial (recursivo)\n\n");

    int N = leNatural();
    long Fat = fatorial(N);

    if(Fat == 0) printf("\nValor inválido!\n");
    else printf("\n%i! = %li\n",N,Fat);

    return 0;
} // fim main()

// Funções
int leNatural(){
    int N;
    printf("\nDigite valor natural: ");
    scanf("%i",&N);

    return N;
} // fim leNatural()

long fatorial(int N){
    long Fat  = 1;

    if (N > 0)
        Fat = N * fatorial(N - 1);
    else if (N < 0) // Valor negativo => Inválido
        Fat = 0;

    return Fat;
} // fim fatorial()