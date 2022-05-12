#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tESTADO CIVIL\n\n");
    char EstadoCivil;
    int ERRO;

    do{
        printf("c - CASADO\ns - SOLTEIRO\nd - DIVORCIADO\nv - VIÚVO\n");
        printf("Estado civil? ");
        scanf("\n%c",&EstadoCivil);
        ERRO = (EstadoCivil != 'c' && EstadoCivil != 's' && EstadoCivil != 'd' && EstadoCivil != 'v');
        if(ERRO) printf("\n\aDado inválido!\n\n");
    } while (ERRO);

    // switch(EstadoCivil){
    //     case 'c':
    //         printf("\nSeu estado civil é CASADO\n");
    //         break;
    //     case 's':
    //         printf("\nSeu estado civil é SOLTEIRO\n");
    //         break;
    //     case 'd':
    //         printf("\nSeu estado civil é DIVORCIADO\n");
    //         break;
    //     case 'v':
    //         printf("\nSeu estado civil é VIÚVO\n");
    // }
    return 0;
}