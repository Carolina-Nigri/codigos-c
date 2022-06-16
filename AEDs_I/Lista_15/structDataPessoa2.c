#include <stdio.h>
#include <stdlib.h>
#include "Pessoa.h"

int main(){
    Pessoa P1;
    Pessoa P2;
    
    lePessoa(P1);
    escrevePessoa(P1);
    lePessoa(P2);
    escrevePessoa(P2);

    return 0;
}