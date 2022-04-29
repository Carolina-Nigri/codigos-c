// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tSerie de Fetuccine\n\n");

    int A;
    int B;
    bool Erro;

    do{
        printf("\nPrimeiro termo: ");
        scanf("%i",&A);
        Erro = A < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while (Erro);

    do{
        printf("\nSegundo termo: ");
        scanf("%i",&B);
        Erro = B < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while (Erro);

    int N;

    do{
        printf("\nNumero de termos: ");
        scanf("%i",&N);
        Erro = N < 3;
        if(Erro) printf("\n\aValor invalido!\n");
    } while (Erro);

    printf("\n%i\n%i",A,B);

    int C = A + B;
    printf("\n%i",C);
    int i = 4;

    while(i <= N){
        A = B;
        B = C;
        if ((i % 2) == 0) C = B - A;
        else C = A + B;
        printf("\n%i",C);
        i++;
    } // fim while

    return 0;
} // fim main()