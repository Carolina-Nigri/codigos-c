#include <stdio.h>
#include <stdlib.h>
#include "Pessoa.h"

const int TAM = 3;

int main(){
    // Alocação estática
    ///*
    Pessoa P1;
    Pessoa P2;
    //*/

    // Alocação dinâmica
    /*
    Pessoa* P1;
    Pessoa* P2;

    P1 = (Pessoa*) malloc(sizeof(Pessoa));
    P2 = (Pessoa*) malloc(sizeof(Pessoa));
    */

    lePessoa(P1);
    escrevePessoa(P1);
    lePessoa(P2);
    escrevePessoa(P2);
       
    return 0;
}