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
        {10,2},
        {30,4},
        {5,6}
    };

    printf("A linha do maior valor da matriz eh %i\n",linhaMaiorVal(M));

    return 0;
} // fim main()

int linhaMaiorVal(float M[LIN][COL]){
    int linha = -1;
    float maior = 0;

    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            if(M[i][j] > maior){
                maior = M[i][j];
                linha = i;
            }
        }
    }

    return linha;
}