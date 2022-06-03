#include <stdio.h>
#include <stdlib.h>

int funcao(int a, int* b);

int main(){
    int a = 7;
    int b = 2;
    int x = funcao(a,&b);

    printf("%i, %i\n",x,b);

    return 0;
}

int funcao(int a, int* b){
    int x = a * (*b);
    *b *= 2;

    return x;
}