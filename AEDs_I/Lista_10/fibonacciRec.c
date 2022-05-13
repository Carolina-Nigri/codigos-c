// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
int leNatural(char* mensagem);
int fibonacci(int K);

int main(){
    printf("\n\tCalcula o k-esimo termo Fibonacci");

    int K = leNatural("K");
    printf("\nO termo %i é %i\n",K,fibonacci(K));

    return 0;
} // fim main()

// Funções
int leNatural(char* mensagem){
    int N;
    printf("\n%s: ",mensagem);
    scanf("%i",&N);

    return N;
} // fim leNatural()

int fibonacci(int K){
    int Fib = K;

    if(K > 1)
        Fib = fibonacci(K - 1) + fibonacci(K - 2);

    return Fib;
} // fim fibonacci()