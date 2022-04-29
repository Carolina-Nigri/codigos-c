// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tEscreve N pares e N impares\n\n");

    int N;
    bool Erro;

    do{
        printf("\nN = ");
        scanf("%i",&N);
        Erro = N < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while (Erro);

    int Par = 2;
    printf("\nPares:\n");
    
    for(int i = 0; i < N; i++){
        printf("%i\n",Par);
        Par += 2;
    } // fim for

    int Impar = 1;
    printf("\nImpares:\n");
    
    for(int i = 0; i < N; i++){
        printf("%i\n",Impar);
        Impar += 2;
    } // fim for

    return 0;
} // fim main()