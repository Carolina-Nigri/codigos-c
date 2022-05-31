// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 3

// Protótipos
float maiorValAcimaDiag(float M[][COL]);

int main(){
    float M[LIN][COL] = {
        {1,0,15},
        {4,2,6},
        {200,8,2},
    };

   printf("O maior valor acima da diagonal principal eh %.2f\n",maiorValAcimaDiag(M));

    return 0;
} // fim main()

float maiorValAcimaDiag(float M[][COL]){
    float maior = 0;
    
    if(LIN == COL){
        maior = M[0][1];
        
        for(int i = 0;i < (COL - 1);i++){ // Linha

            for(int j = (1 + i);j < COL;j++){ // Coluna

                if(M[i][j] > maior)
                    maior = M[i][j];

            } // fim for(j)

        } // fim for(i)
    } 

    return maior;
}