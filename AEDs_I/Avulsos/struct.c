#include <stdio.h>
#include <stdlib.h>

int main(){
    // Cria uma estrutura, mas não cria seu tipo antes
    // Para criar outra estrutura do mesmo tipo, precisa repetir essa sintaxe
    struct{
        int dia;
        int mes;
        int ano;
    } registro;

    // Cria um tipo de estrutura, que pode ser usado para criar estruturas depois
    struct Data{
        int dia;
        int mes;
        int ano;
    };
    struct Data D1;

    // Faz referência aos campos da estrutura
    D1.dia = 19;
    D1.mes = 07;
    D1.ano = 2002;
    printf("D1.dia = %i\n",D1.dia);
    printf("D1.mes = %i\n",D1.mes);
    printf("D1.ano = %i\n",D1.ano);
    
    // Define um tipo para a estrutura
    typedef struct Data Data;
    Data D2;

    // Cria um tipo de estrutura, já definindo seu tipo
    typedef struct{
        int dia;
        int mes;
        int ano;
    } date;
    date D3;

    // Faz referência aos campos da estrutura
    D3.dia = 10;
    D3.mes = 10;
    D3.ano = 2010;
    printf("\nD3.dia = %i\n",D3.dia);
    printf("D3.mes = %i\n",D3.mes);
    printf("D3.ano = %i\n",D3.ano);

    return 0;
}