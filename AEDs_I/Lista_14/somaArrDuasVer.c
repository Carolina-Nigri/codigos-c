#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LIN 4

float somaArr(float A[]);
float somaArrRec(float A[], int i);

int main(){
    float A[LIN] = {11,12,13,14};

    printf("Versao iterativa:\nA soma do arranjo eh %.2f\n",somaArr(A));
    puts("");
    printf("Versao recursiva:\n A soma do arranjo eh %.2f\n",somaArrRec(A,0));


    return 0;
}

float somaArr(float A[]){
    float soma = 0;

    for(int i=0;i < LIN;i++){
        soma += A[i];
    }

    return soma;
}

float somaArrRec(float A[], int i){
    float soma = A[i];
    
    if(i < (LIN - 1)){
        soma += somaArrRec(A, i+1);
    }

    return soma;
}