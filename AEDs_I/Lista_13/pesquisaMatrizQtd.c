// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 2

// Protótipos
int pesquisaMatriz(float M[LIN][COL], float X);

int main(){
    float M[LIN][COL]= {
        {1,2},
        {2,4},
        {5,2}
    };

    float chave = 2;
    printf("Ha %i ocorrencias de %.2f na matriz\n",pesquisaMatriz(M,chave),chave);

    return 0;
} // fim main()

int pesquisaMatriz(float M[LIN][COL], float X){
    int qtdX = 0;

    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            if(M[i][j] == X) qtdX++;
        }
    }

    return qtdX;
} // fim pesquisaMatriz()