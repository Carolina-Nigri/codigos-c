#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>

int main(){
    printf("\n\tCálculo do Peso Ideal\n\n");

    bool ERRO;
    bool CONTINUAR;
    float altura;

    do{
        do{
            printf("\nAltura: ");
            scanf("%f", &altura);
            ERRO = altura < 0;
        } while(ERRO);

        char genero;
        do{
            printf("\nGênero [M/F]: ");
            scanf(" %c", &genero);
            genero = toupper(genero);
            ERRO = (genero != 'M') && (genero != 'F');
        } while(ERRO);

        float pesoIdeal;
        if(genero == 'M') pesoIdeal = 72.7 * altura - 58;
        else pesoIdeal = 62.1 * altura - 44.7;

        printf("\nPeso Ideal = %f", pesoIdeal);

        char repetir;
        do{
            printf("\nDeseja realizar um novo cálculo [S/N]? ");
            scanf(" %c",&repetir);
            repetir = toupper(repetir);
            ERRO = (repetir != 'S') && (repetir != 'N');
        } while(ERRO);

        if(repetir == 'S') CONTINUAR = true;
        else CONTINUAR = false;

    } while(CONTINUAR);

    return 0;
}
