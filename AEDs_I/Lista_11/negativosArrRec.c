#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int qtdNegativosArr(float A[],int i); 

int main(){
    float A[TAM] = {3,2,-1,0,1,-2,3,-100,-20,0};

    printf("Qtde de numeros negativos = %i\n",qtdNegativosArr(A,0));

    return 0;
} 

int qtdNegativosArr(float A[],int i){
    int negativos = 0;

    if(i < TAM){
        negativos = qtdNegativosArr(A, i+1);

        if(A[i] < 0) negativos++;
    }

    return negativos;
}