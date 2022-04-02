#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tEscreve números em ordem decrescente\n\n");

    int limiteSup;
    int limiteInf;

    printf("Limite superior: ");
    scanf("%i",&limiteSup);

    printf("Limite inferior: ");
    scanf("%i",&limiteInf);

    int num;
    do{
        num = limiteSup --;
        printf("\n%i",num);
    } while(num != limiteInf);

    return 0;
}
