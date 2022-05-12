#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tIdentifica numeros perfeitos\n\n");

    int N;
    bool Erro;

    do{
        printf("\nNumero? ");
        scanf("%i",&N);
        Erro = N < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    int SomaDiv = 1;
    int Resto;

    for(int Div = 2; Div <= (N/2); Div++){
        Resto = N % Div;
        if(Resto == 0) SomaDiv += Div;
    } // fim for

    bool Perfeito = (N != 1) && (SomaDiv == N);

    if(Perfeito) printf("\nO numero %i eh perfeito.\n",N);
    else printf("\nO numero %i nao eh perfeito.\n",N);

    return 0;
} // fim main()