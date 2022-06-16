#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

void leData(Data D){
    printf("[dd/mm/aaaa]: ");
    scanf("%i/%i/%i",&D.dia,&D.mes,&D.ano);
}

void escreveData(Data D){
    printf("%i/%i/%i\n",D.dia,D.mes,D.ano);
}