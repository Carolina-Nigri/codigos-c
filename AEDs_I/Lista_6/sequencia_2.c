#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tSequencia: 1/100, 97/2, 3/94, 91/4, 5/88, ... \n\n");

    int N;
    bool Erro;

    do{
        printf("\nQuantidade de termos: ");
        scanf("%i",&N);
        Erro = N < 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    float T;
    int D = 100;

    if(N > 0) printf("\nTermos:\n");

    for(int i = 1; i <= N; i ++){ // N vezes
        if((i % 2) == 0){ // i = PAR
            T = (float) D / i;
        } else{ // i = ÍMPAR
            T = (float) i / D;
        }
        printf("%f\n",T);
        D -= 3;
    }

    return 0;
}
