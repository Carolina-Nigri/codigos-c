#include <stdio.h>
#include <stdlib.h>

void teste(int a, int *b);

int main(){
    /*
    int X;
    printf("\nX em %p guarda %i valor",&X,X);
    X = 7;
    printf("\nX = %i e utiliza %i bytes",X,sizeof(int));
    int *Y;
    Y = &X;
    printf("\nY em %p guarda %i e estah em %p",&Y,*Y,Y);
    int *Z;
    Z = malloc(sizeof(int));
    *Z = 3;
    printf("\nZ aponta para %p onde guarda o valor %i",Z,*Z);
    */
    int X = 7;
    int Y = 2;
    teste(X,&Y);
    printf("\n%i",X);
    printf("\n%i",Y);

    return 0;
}

void teste(int a, int *b){
    a *= 2;
    *b *= 3;
}