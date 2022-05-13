// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int leNatural();
void leNaturalRef(int* N);

int main(){
    int A = leNatural();
    int B;
    leNaturalRef(&B);

    int Soma = A + B;
    printf("\n%i + %i = %i\n",A,B,Soma);

    return 0;
} // fim main()

// Funções
int leNatural(){
    int N;
    bool Erro;

    do{
        printf("\nDigite um valor natural: ");
        scanf("%i",&N);
        Erro = N < 0;
        if(Erro) printf("\n\aSomente zero ou valores positivos!\n");
    } while(Erro);

    return N;
} // fim leNatural()

void leNaturalRef(int* N){
    bool Erro;

    do{
        printf("\nDigite um valor natural: ");
        scanf("%i",N);
        Erro = *N < 0;
        if(Erro) printf("\n\aSomente zero ou valores positivos!\n");
    } while(Erro);
} // fim leNaturalRef()