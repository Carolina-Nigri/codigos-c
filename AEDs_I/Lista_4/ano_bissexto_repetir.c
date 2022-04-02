#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>

int main(){
    printf("\n\tIdentifica se o ano é bissexto ou não\n\n");

    bool ERRO;
    bool CONTINUAR;
    int ano;

    do{
        printf("Qual o ano? ");
        scanf("\n%i",&ano);

        int restoDiv4 = ano % 4;
        int restoDiv100 = ano % 100;
        int restoDiv400 = ano % 400;

        if((restoDiv4 == 0) && (restoDiv100 != 0) || (restoDiv400 == 0)){
            // Divisível por 4 e não por 100 OU Divisível por 400
            printf("Esse ano é bissexto.\n");
        } else{
            // Não é divisível por 4
            printf("Esse ano não é bissexto.\n");
        }

        char repetir;
            do{
                printf("\nDeseja realizar um novo teste [S/N]? ");
                scanf(" %c",&repetir);
                repetir = toupper(repetir);
                ERRO = (repetir != 'S') && (repetir != 'N');
            } while(ERRO);

            if(repetir == 'S') CONTINUAR = true;
            else CONTINUAR = false;

    } while(CONTINUAR);

    return 0;
}
