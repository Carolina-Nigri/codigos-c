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

/* Primeira forma (for)
    int QtdeDiv = 0;
    int Resto;

    for(int Div = 2; Div <= (N/2); Div++){
        Resto = N % Div;
        if(Resto == 0) QtdeDiv++;
    } // fim for

    bool Primo = (N > 1) && (QtdeDiv == 0);

    if(Primo) printf("\nO numero %i eh primo.\n",N);
    else printf("\nO numero %i nao eh primo.\n",N);
*/

/* Segunda forma (while)
    int QtdeDiv = 0;
    int Resto;
    int Div = 2;

    while((QtdeDiv < 1) && (Div <= (N/2))){
        Resto = N % Div;
        if(Resto == 0) QtdeDiv++;
        Div++;
    } // fim while

    bool Primo = (N > 1) && (QtdeDiv == 0);

    if(Primo) printf("\nO numero %i eh primo.\n",N);
    else printf("\nO numero %i nao eh primo.\n",N);
*/     

///* Terceira forma (while - melhor)
    bool Primo = true;
    int Div = 2;
    int Resto;

    while(Primo && (Div <= (N/2))){
        Resto = N % Div;
        if(Resto == 0) Primo = false;
        Div++;
    } // fim while

    if(Primo && (N > 1)) printf("\nO numero %i eh primo.\n",N);
    else printf("\nO numero %i nao eh primo.\n",N);
//*/  

    return 0;
} // fim main()