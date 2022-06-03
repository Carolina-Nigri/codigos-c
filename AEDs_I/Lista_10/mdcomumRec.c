// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Protótipos
int maximoDivComum(int A, int B);
void trocaVal(float* A, float* B);

int main(){
    int A = 1500;
    int B = 210;

    printf("MDC(%i,%i) = %i\n",A,B,maximoDivComum(A,B));
    
    return 0;
} // fim main()

// Funções
int maximoDivComum(int A, int B){
    int mdc = A;
    
    if(B > A){
        trocaVal(&A,&B);
    }
    
    if(B > 0){
        mdc = maximoDivComum(B,(A % B));
    }

    return mdc;
} // fim maximoDivComum() 

void trocaVal(float* A, float* B){
    float C = *A;
    *A = *B;
    *B = C;
} // fim trocaVal()