#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tCalculadora de operações básicas inteiras\n\n");

    int A;
    int B;

    printf("Primeiro operando = ");
    scanf("\n%i",&A);

    printf("Segundo operando = ");
    scanf("\n%i",&B);

    char operacao;

    printf("Operações:\n* Adição (a)\n* Subtração (s)\n* Multiplicação(m)\n* Divisão (d)\n");
    printf("Escolha uma operação: ");
    scanf("\n%c",&operacao);

    int resultado;

    if(operacao == 'a' || operacao == 'A'){
        resultado = A + B;
    } else if(operacao == 's' || operacao == 'S'){
        resultado = A - B;
    } else if(operacao == 'm' || operacao == 'M'){
        resultado = A * B;
    } else if(operacao == 'd' || operacao == 'D'){
        resultado = A / B;
    }

    printf("Resultado = %i\n",resultado);

    return 0;
}