#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int qtdNegativosArr(float A[]);

// IMPLEMENTAR RECURSÃO

int main(){
    float A[TAM] = {3,2,1,0,1,2,3,100,-20,0};

    printf("Qtde de numeros negativos = %i\n",qtdNegativosArr(A));

    return 0;
} 

int qtdNegativosArr(float A[]){
    int negativos = 0;

    for(int i = 0;i < TAM;i++){
        if(A[i] < 0){
            negativos++;
        } 
    }

    return negativos;
}