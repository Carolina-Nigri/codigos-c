// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 3

// Protótipos
float somaDiagonalMatriz(float M[][COL]);

int main(){
    float M[LIN][COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    printf("A soma dos valores da diagonal principal eh %.2f\n",somaDiagonalMatriz(M));

    return 0;
} // fim main()

float somaDiagonalMatriz(float M[][COL]){
    int soma = 0;
    
    if(LIN == COL){
        for(int i=0;i < COL;i++){
            soma += M[i][i];
        }
    }

    return soma;
}