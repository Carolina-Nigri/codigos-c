#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tSoma da sequencia: H = 1/100 + 1/97 + 1/94 + 1/91 + ...\n\n");

    int N;
    bool Erro;

    do{
        printf("\nQuantidade de termos: ");
        scanf("%i",&N);
        Erro = N < 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    float H = 0; // Soma
    int D = 100; // Dividendo inicial
    float T;

    for(int cont = 0; cont < N; cont ++){ // N vezes
       T = 1.0 / D;
       printf("\n%f",T);
       H += T;
       D -= 3;
    }

    if(N > 0){
        printf("\n\nH = %f\n",H);
    }

    return 0;
}
