#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tIdentifica numeros primos\n\n");

    int N;
    bool Erro;

    do{
        printf("\nNumero? ");
        scanf("%i",&N);
        Erro = N < 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    int QtdeDiv = 0;
    int Resto;

    for(int Div = 2; Div <= (N/2); Div++){
        Resto = N % Div;
        if(Resto == 0) QtdeDiv++;
    } // fim for

    bool Primo = (N > 1) && (QtdeDiv == 0);

    if(Primo) printf("\nO numero %i eh primo.\n",N);
    else printf("\nO numero %i nao eh primo.\n",N);

    return 0;
} // fim main()
