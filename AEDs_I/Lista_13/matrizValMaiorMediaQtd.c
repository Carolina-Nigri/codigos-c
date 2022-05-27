// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 2

// Protótipos
float mediaMatriz(float M[LIN][COL]);
int qtdValAcimaMedia(float M[LIN][COL],float media);

int main(){
    float M[LIN][COL] = {
        {1,2},
        {3,4},
        {5,6}
    };

    float media = mediaMatriz(M);
    printf("Valor medio da matriz = %.2f\n",media);
    printf("Ha %i valores acima da media na matriz\n",qtdValAcimaMedia(M,media));

    return 0;
} // fim main()

float mediaMatriz(float M[LIN][COL]){
    float soma = 0;

    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            soma += M[i][j];
        }
    }

    int total = LIN * COL;
    float media = soma / total;

    return media;
}

int qtdValAcimaMedia(float M[LIN][COL],float media){
    int acimaMedia = 0;

    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            if(M[i][j] > media) acimaMedia++;
        }
    }

    return acimaMedia;
}