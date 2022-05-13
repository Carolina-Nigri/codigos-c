// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void zeraVal(float* A, float* B);

int main(){
    float A = 10;
    float B = 25;
    printf("\nA = %f\nB = %f\n",A,B);

    zeraVal(&A,&B);
    printf("\nA = %f\nB = %f\n",A,B);

    return 0;
} // fim main()

// Funções
void zeraVal(float* A, float* B){
    *A = 0;
    *B = 0;
} // fim zeraVal()