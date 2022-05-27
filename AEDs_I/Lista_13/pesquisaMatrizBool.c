// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 2

// Protótipos
bool estaNaMatriz(float M[LIN][COL], float X);

int main(){
    float M[LIN][COL]= {
        {1,3},
        {2,4},
        {5,6}
    };

    float chave = 7;
    if(estaNaMatriz(M,chave))
        printf("%.2f esta na matriz\n",chave);
    else
        printf("%.2f nao esta na matriz\n",chave);        

    return 0;
} // fim main()

bool estaNaMatriz(float M[LIN][COL], float X){
    bool contem = false;
    int i = 0;
    int j = 0;

    while(i < LIN && j < COL && !contem){
        if(M[i][j] == X) contem = true;

        j++;
        if(j == COL){
            i++;
            j = 0;    
        }        
    }

    return contem;
} // fim estaNaMatriz()