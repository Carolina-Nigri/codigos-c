// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void trocaVal(float* A, float* B);

int main(){
    float A = 10;
    float B = 25;
    printf("\nA = %f\nB = %f\n",A,B);

    trocaVal(&A,&B);
    printf("\nA = %f\nB = %f\n",A,B);

    return 0;
} // fim main()

// Funções
void trocaVal(float* A, float* B){
    float C = *A;
    *A = *B;
    *B = C;
} // fim trocaVal()