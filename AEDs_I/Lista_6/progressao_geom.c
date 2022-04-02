#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tProgressao Geometrica\n\n");

    int N;
    bool Erro;

    do{
        printf("\nQuantidade de termos: ");
        scanf("%i",&N);
        Erro = N < 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    float T;

    if(N > 0){

        printf("\nPrimeiro termo: ");
        scanf("%f",&T);

        float R;

        printf("\nRazao: ");
        scanf("%f",&R);

        printf("\nTermos:\n");

        for(int i = 0; i < N; i ++){
            printf("%f\n",T);
            T *= R;
        }
    } 

    return 0;
}

