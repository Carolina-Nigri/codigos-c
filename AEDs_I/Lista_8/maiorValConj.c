/***************************************************************
* Nome do método: Calcular o maior entre um conjunto de valores reais lidos
* Data da elaboração: 26/04/2022
* Data da última alteração: 26/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê valores reais enquanto não teclar 0, escreve o maior deles
* Argumentos: Valores (reais)
* Valor gerado: Maior (real)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
float lerReal();
float maior2val(float A, float B);

int main(){
    printf("\n\tMaior entre valores reais lidos\n\n");

    const int FLAG = 0;

    printf("\n[0 encerra]");
    float Num = lerReal();
    float Maior = Num;

    while(Num != FLAG){
        printf("\n[0 encerra]");
        Num = lerReal();
        Maior = maior2val(Num,Maior);
    }

    printf("\nMaior valor do conjunto = %.2f\n",Maior);
    return 0;
} // fim main()

float lerReal(){
    float X;
    printf("\nValor: ");
    scanf("%f",&X);

    return X;
} // fim lerReal()

float maior2val(float A, float B){
    float Maior;

    if(A > B){
        Maior = A;
    } else{
        Maior = B;
    }

    return Maior;
} // fim maior2val()