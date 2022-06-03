#include <stdio.h>
#include <stdlib.h>

int funcao(int a, int* b);

int main(){
    int a = 7;
    int b = 2;
    int X = funcao(a,&b);

    printf("%i, %i",X,b);

    return 0;
}

int funcao(int a, int* b){
    int X = a * (*b);
    *b *= 2;

    return X;
}
