#include <stdio.h>
#include <stdlib.h>
#include "Data.h"

typedef struct{
    char nome[50];
    Data nasc;
} Pessoa;

// Alocação estática
///*
void lePessoa(Pessoa P){
    fflush(stdin);
    printf("\nNome: ");
    gets(P.nome);
    puts("Nascimento:");
    leData(P.nasc);
}

void escrevePessoa(Pessoa P){
    printf("\nNome: %s\n",P.nome);
    printf("Nascimento: ");
    escreveData(P.nasc);
}
//*/

// Alocação dinâmica
/*
void lePessoa(Pessoa* P){
    printf("\nNome: ");
    scanf("%s",&P -> nome);
    puts("Nascimento:");
    leData(&P -> nasc);
}

void escrevePessoa(Pessoa* P){
    printf("\nNome: %s\n",P -> nome);
    printf("Nascimento: ");
    escreveData(&P -> nasc);
}
*/