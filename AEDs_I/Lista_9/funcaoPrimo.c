// Documentação das funções
/***************************************************************
* Nome: ehPrimo
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Verifica se é um número natural primo ou não
* Argumentos: N (natural)
* Valor gerado: Primo (valor booleano)
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
int leiaNatural();
bool ehPrimo(int N);

int main(){
    printf("\n\tIdentifica se o numero eh primo\n\n");

    // Teste das funções
    int Num = leiaNatural();
    if(ehPrimo(Num)) printf("\nEh primo\n");
    else printf("\nNao eh primo\n");

    return 0;
} // fim main()

bool ehPrimo(int N){
    bool Primo = true;
    int i = 2;

    while((i <= N/2) && Primo){
        int Resto = N % i;
        if(Resto == 0) Primo = false;
        i++;
    } // fim while

    if(N == 1) Primo = false;

    return Primo;
} // fim ehPrimo()

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