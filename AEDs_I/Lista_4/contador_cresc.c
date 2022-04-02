#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tEscreve de 1 a 10 em ordem crescente\n\n");

    int num = 0;

    do{
        num ++;
        printf("%i\n",num);
    } while(num != 10);

    return 0;
}
