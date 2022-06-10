#include <stdio.h>
#include <stdlib.h>

int main(){
    // Cria uma estrutura, mas não cria um tipo antes
    // Para criar outra estrutura do mesmo tipo, precisa repetir essa sintaxe
    struct{
        int dia;
        int mes;
        int ano;
    } D1;

    // Cria um tipo, que pode ser usado para criar estruturas depois
    struct Data{
        int dia;
        int mes;
        int ano;
    };
    struct Data D1;
    struct Data D2;

    // Define um tipo para a estrutura
    typedef struct Data date;
    date D3;
    date D4;

    return 0;
}
