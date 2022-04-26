/***************************************************************
* Nome do método: Calcular o fatorial de um número natural
* Data da elaboração: 24/04/2022
* Data da última alteração: 26/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê um número natural e escreve o valor do seu fatorial
* Argumentos: Número (natural)
* Valor gerado: Fatorial (natural)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int lerNatural();
int calcFat(int N);

int main(){
    printf("\n\tCalcula fatorial\n\n");

	int N = lerNatural();
    int Fat = calcFat(N);

    printf("\n%i! = %i\n",N,Fat);

    return 0;
} // fim main()

int lerNatural(){
    int N;
    bool Erro;

    do{
        printf("\nNumero? ");
        scanf("%i",&N);
        Erro = N < 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    return N;
} // fim lerNatural()

int calcFat(int N){
    int Fat = 1;

    for(int i = 0; i < N; i++){
        Fat *= (N-i);
    }

    return Fat;
} // fim calcFat()