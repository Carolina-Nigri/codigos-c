/***************************************************************
* Nome do método: Calcular a soma de dois valores reais
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê dois valores reais, calcula e escreve a soma
* Argumentos: A e B (reais)
* Valor gerado: Soma (real)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
float lerReal();
float soma2val(float A, float B);

int main(){
    printf("\n\tSoma de dois reais\n\n");

    float A = lerReal();
    float B = lerReal();

    printf("\nSoma = %.2f\n",soma2val(A,B));

    return 0;
} // fim main()

float lerReal(){
    float X;
    printf("\nValor: ");
    scanf("%f",&X);

    return X;
} // fim lerReal()

float soma2val(float A, float B){
    float Soma = A + B;

    return Soma;
} // fim soma2val()