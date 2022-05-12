#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tCALCULADORA\n\n");

    printf("Adição [+]\nSubtração [-]\nMultiplicação [*]\nDivisão [/]\n");
    printf("Operação? ");
    char OPERACAO;
    scanf("\n%c",&OPERACAO);

    int A;
    int B;
    printf("A = ");
    scanf("\n%i",&A);
    printf("B = ");
    scanf("\n%i",&B);

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

    printf("Resultado = %i\n",RESULTADO);

    return 0;
}