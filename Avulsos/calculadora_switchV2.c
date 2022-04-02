#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tCALCULADORA\n\n");

    printf("Digite uma operação no formato: A (OP) B\n");
    int A;
    int B;
    char OPERACAO;
    scanf("\n%i %c %i",&A,&OPERACAO,&B);

    int RESULTADO;

    switch(OPERACAO){
        case '+':
            RESULTADO = A + B;
            break;
        case '-':
            RESULTADO = A - B;
            break;
        case '*':
            RESULTADO = A * B;
            break;
        case '/':
            RESULTADO = A / B;
            break;
        default:
            RESULTADO = 0;
    }

    printf(" = %i\n",RESULTADO);

    return 0;
}