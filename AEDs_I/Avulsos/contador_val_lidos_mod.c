#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tEscreve números em ordem crescente\n\n");

    int limiteInf;
    printf("\nLimite inferior: ");
    scanf("\n%i",&limiteInf);

    int limiteSup;
    printf("\nLimite superior: ");
    scanf("\n%i",&limiteSup);

    if(limiteInf > limiteSup){ // Inverte os valores dos limites
        // Variável auxiliar - guarda o valor de limiteInf pra não sobrepor
        int aux = limiteInf; 
        limiteInf = limiteSup;
        limiteSup = aux;
    }

    int num = limiteInf;
    do{
        printf("\n%i\n",num);
        num ++;
    } while(num <= limiteSup);

    return 0;
}