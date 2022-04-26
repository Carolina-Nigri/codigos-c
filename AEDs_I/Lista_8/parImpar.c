/***************************************************************
* Nome do método: Identificar se um inteiro é par ou ímpar
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê um valor inteiro e escreve se é par ou ímpar
* Argumentos: Num (inteiro)
* Valor gerado: Nulo
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int lerInteiro();
bool ehPar(int X);
void escreveParImpar(int Num);

int main(){
    printf("\n\tIdentifica se um inteiro eh par ou impar\n\n");

    int Num = lerInteiro();

    escreveParImpar(Num);
    
    return 0;
} // fim main()

int lerInteiro(){
    int X;
    printf("\nValor? ");
    scanf("%i",&X);

    return X;
} // fim lerInteiro()

bool ehPar(int X){
    int Resto = X % 2;
    bool Par = (Resto == 0); 

    return Par;
} // fim ehPar()

void escreveParImpar(int Num){
    if(ehPar(Num)){
        printf("\nEh Par\n");
    } else{
        printf("\nEh Impar\n");
    }
} // fim escreveParImpar()