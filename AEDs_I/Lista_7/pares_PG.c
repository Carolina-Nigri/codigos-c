#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tPares em uma PG\n\n");

    bool Erro;
    int N;

    do{
        printf("\nNumero de termos = ");
        scanf("%i",&N);
        Erro = N < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    int A;
    printf("\nPrimeiro termo = ");
    scanf("%i",&A);

    int R;
    printf("\nRazao = ");
    scanf("%i",&R);

    int Pares = 0;
    bool EhPar;

    for(int i = 0; i < N; i++){
        EhPar = (A % 2) == 0;
        if(EhPar) Pares++;
        A *= R;
    } // fim for()

    printf("\nA quantidade de termos pares é %i.\n",Pares);

    return 0;
} // fim main()