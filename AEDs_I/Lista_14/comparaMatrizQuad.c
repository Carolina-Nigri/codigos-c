#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LIN 4
#define COL 4

bool saoIguaisLinColMatrs(float A[LIN][COL], float B[LIN][COL]);

int main(){
    float A[LIN][COL] ={
        {1,2,3,4},
        {10,20,30,40},
        {11,12,13,14},
        {11,21,31,41}
    };

    float B[LIN][COL]={
        {1,29,39,49},
        {2,28,38,48},
        {3,27,37,47},
        {4,26,36,46}
    };

    if(saoIguaisLinColMatrs(A,B))
        puts("A primeira linha da matriz A e a primeira coluna da matriz B sao iguais");
    else
        puts("A primeira linha da matriz A e a primeira coluna da matriz B NAO sao iguais");

    return 0;
}

bool saoIguaisLinColMatrs(float A[LIN][COL], float B[LIN][COL]){
    bool iguais = false;

    if(LIN == COL){
        iguais = true;
        int i = 0;

        while(i < LIN && iguais){
            if(A[0][i] != B[i][0]) iguais = false;

            i++;
        }
    }

    return iguais;
}