// Documentação das funções
/***************************************************************
* Nome: primosEntreSi
* Elaboração: 29/04/22
* Última alteração: 29/04/22
* Autor: Carolina Morais Nigri
* Contexto de ação: Verifica se dois números naturais são primos entre si ou não 
* Argumentos: A e B (valores inteiros - naturais)
* Valor gerado: Primos (valor booleano)
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
bool primosEntreSi(int A, int B);

int main(){
    printf("\n\tPrimos entre si\n\n");

    // Teste das funções
    int A = leiaNatural();
    int B = leiaNatural();
    
    if(primosEntreSi(A,B)) printf("\nSão primos entre si\n");
    else printf("\nNão são primos entre si\n");

    return 0;
} // fim main()

bool primosEntreSi(int A, int B){ 
    bool Primos = true;
    int Menor;

    if(A < B) Menor = A;
    else Menor = B;

    int i = 2;

    while((i <= Menor) && Primos){
        int RestoA = A % i;
        int RestoB = B % i;
        // Verifica se i é divisor comum => Ñ são primos entre si
        if(RestoA == 0 && RestoB == 0) Primos = false;
        i++;
    } // fim while

    return Primos;
} // fim primosEntreSi()

int leiaNatural(){
    int N;
    bool Erro;

    do{
        printf("\nDigite um valor natural: ");
        scanf("%i",&N);
        Erro = N <= 0;
        if (Erro) printf("\n\aSomente valores positivos!\n\n");
    } while(Erro);

    return N;
} // fim leiaNatural()