// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 2

// Protótipos
int linhaMaiorVal(float M[LIN][COL]);

int main(){
    float M[LIN][COL] = {
        {100,2},
        {30,4},
        {5,60}
    };

    printf("A linha do maior valor da matriz eh %i\n",linhaMaiorVal(M));

    return 0;
} // fim main()

float maiorValor(float M[LIN][COL]){
    float maior = M[0][0];

    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            if(M[i][j] > maior){
                maior = M[i][j];
            }
        }
    }

    return maior;
} // fim maiorValor()

int linhaMaiorVal(float M[LIN][COL]){
    int linha = 0;
    float maior = maiorValor(M);
    int i = 0;
    int j = 0;
    bool achou = false;

    while((i < LIN) && !achou){
        if(M[i][j] == maior){
            achou = true;
            linha = i;
        }

        j++;
        if(j == COL){
            i++;
            j = 0;
        }
    }

    return linha;
} // fim linhaMaiorVal()