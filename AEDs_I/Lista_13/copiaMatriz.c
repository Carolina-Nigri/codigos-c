// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 2

// Protótipos
void copiaMatriz(float A[LIN][COL], float B[LIN][COL]);
void escreveMatriz(float M[LIN][COL]);

int main(){
    float A[LIN][COL] = {
        {1,2},
        {3,4},
        {5,6}
    };
    float B[LIN][COL];

    copiaMatriz(A,B);

    puts("Matriz A:\n");
    escreveMatriz(A);
    
    puts("Matriz B:\n");
    escreveMatriz(B);

    return 0;
} // fim main()

void copiaMatriz(float A[LIN][COL], float B[LIN][COL]){
    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            B[i][j] = A[i][j];
        }
    }
} // fim copiaMatriz()

void escreveMatriz(float M[LIN][COL]){
    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            printf("%.2f\t",M[i][j]);
        }

        puts("\n");
    }
} // fim escreveMatriz()