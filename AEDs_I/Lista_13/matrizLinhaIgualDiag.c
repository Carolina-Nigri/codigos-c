// Biblio
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define linha e coluna
#define LIN 3
#define COL 3

// Protótipos
bool primLinhaEhIgualDiag(float M[][COL]);

int main(){
    float M[LIN][COL] = {
        {1,2,2},
        {4,10,6},
        {7,8,2},
    };

    if(primLinhaEhIgualDiag(M))
        printf("A primeira linha eh igual a diagonal principal\n");
    else
        printf("A primeira linha nao eh igual a diagonal principal\n");

    return 0;
} // fim main()

bool primLinhaEhIgualDiag(float M[][COL]){
    bool iguais = false;
    int i = 1;
    
    if(LIN == COL){
        iguais = true;

        while((i < COL) && iguais){
            if(M[0][i] != M[i][i]) 
                iguais = false;

            i++;
        }
    }

    return iguais;
}