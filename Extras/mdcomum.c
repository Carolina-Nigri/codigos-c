// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Protótipos
int mdc(int A, int B);
void trocaVal(float* A, float* B);

int main(){
    int A = 35;
    int B = 15;

    printf("MDC(%i,%i) = %i\n",A,B,mdc(A,B));
    
    return 0;
} // fim main()

// Funções
int mdc(int A, int B){
    int R;

    if(B > A){
        trocaVal(&A,&B);
    } 

    while(B != 0){
        R = A % B;
        A = B;
        B = R;
    }

    return A;
} // fim mdc() 

void trocaVal(float* A, float* B){
    float C = *A;
    *A = *B;
    *B = C;
} // fim trocaVal()