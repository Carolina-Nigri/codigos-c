/***************************************************************
* Nome do método: Calcular o maior entre dois valores reais
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê dois valores reais e escreve o valor do maior
* Argumentos: A e B (reais)
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
    printf("\n\tMaior entre dois valores reais\n\n");

    float A = lerReal();
    float B = lerReal();
    
    printf("\nO maior valor é %.2f\n",maior2val(A,B));

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