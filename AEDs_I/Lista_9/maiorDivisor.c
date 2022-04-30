// Documentação das funções
/***************************************************************
* Nome: maiorDivisor
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Identifica o maior divisor de um número natural N menor que ele mesmo
* Argumentos: N (natural)
* Valor gerado: MaiorDiv (natural)
****************************************************************
* Nome: leiaNatural
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê um número inteiro (natural*) 
* Argumentos: Nulo
* Valor gerado: N (natural*)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int maiorDivisor(int N);
int leiaNatural();

int main(){
    printf("\n\tIdentifica maior divisor\n\n");

    // Teste das funções
    int N = leiaNatural();
    printf("\nMaior divisor = %i\n",maiorDivisor(N));

    return 0;
} // fim main()

int maiorDivisor(int N){
    int MaiorDiv = 1;

    for(int i = 2; i <= N/2; i++){
        int Resto = N % i;
        if(Resto == 0) MaiorDiv = i;
    } // fim for

    return MaiorDiv;
} // fim maiorDivisor()

int leiaNatural(){
    int N;
    bool Erro;

    do{
        printf("\nValor natural: ");
        scanf("%i",&N);
        Erro = N <= 0;
        if (Erro) printf("\n\aSomente valores positivos!\n\n");
    } while(Erro);

    return N;
} // fim leiaNatural()