#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tEscreve de 1 a 10 em ordem decrescente\n\n");

    int num = 11;

    do{
        num --;
        printf("%i\n",num);
    } while(num != 1);

    return 0;
}
