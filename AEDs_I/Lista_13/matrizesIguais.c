// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 2

// Protótipos
void escreveMatriz(float M[LIN][COL]);
bool saoIguaisMatrizes(float A[LIN][COL], float B[LIN][COL]);

int main(){
    float A[LIN][COL] = {
        {1,2},
        {3,4},
        {5,6}
    };
    float B[LIN][COL] = {
        {1,2},
        {3,4},
        {5,6}
    };

    puts("Matriz A:\n");
    escreveMatriz(A);
    
    puts("Matriz B:\n");
    escreveMatriz(B);

    if(saoIguaisMatrizes(A,B)) printf("\nAs matrizes são iguais\n");
    else printf("\nAs matrizes não são iguais\n");

    return 0;
} // fim main()

bool saoIguaisMatrizes(float A[LIN][COL], float B[LIN][COL]){
    bool iguais = true;
    int i = 0;
    int j = 0;

    while((i < LIN) && iguais){
        if(A[i][j] != B[i][j]) 
            iguais = false;

        j++;
        if(j == COL){
            i++;
            j = 0;
        }
    }
    
    return iguais;
} // fim saoIguaisMatrizes()

void escreveMatriz(float M[LIN][COL]){
    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            printf("%.2f\t",M[i][j]);
        }

        puts("\n");
    }
} // fim escreveMatriz()