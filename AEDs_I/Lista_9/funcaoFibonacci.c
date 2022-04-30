// Documentação das funções
/***************************************************************
* Nome: termoFibonacci
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Gera o enésimo da sequência de Fibonnaci
* Argumentos: K (natural*)
* Valor gerado: Termo (natural*)
****************************************************************
* Nome: leiaPosicao
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê um número inteiro (natural*) que indica a posicao do termo 
* Argumentos: Nulo
* Valor gerado: N (natural*)
****************************************************************
*/
// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int leiaPosicao();
int termoFibonacci(int K);

int main(){
    printf("\n\tSequencia de Fibonacci\n\n");

    // Teste das funções
    int N = leiaPosicao();
    printf("\nTermo = %i\n",termoFibonacci(N));

    return 0;
} // fim main()

int termoFibonacci(int K){
    int A = 0; // Termo anterior
	int Aux = 0; // Auxiliar
	int Termo = 1; // Termo => Primeiro = 1

	for(int i = 0; i < K; i++){
		Aux = A; // Aux guarda o valor do A
		A = Termo; // A guarda o valor do Termo
		Termo = A + Aux; // Termo = Soma(dois anteriores)
	}

    return Termo;
} // fim termoFibonacci()

int leiaPosicao(){
    int N;
    bool Erro;

    do{
        printf("\nDigite a posicao do termo desejado: ");
        scanf("%i",&N);
        Erro = N <= 0;
        if (Erro) printf("\n\aSomente valores positivos!\n\n");
    } while(Erro);

    return N;
} // fim leiaPosicao()