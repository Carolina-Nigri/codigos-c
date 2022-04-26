/***************************************************************
* Nome do método: Identificar se é um ano bissexto ou não
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê o ano e escreve se é bissexto ou não 
* Argumentos: Ano (inteiro natural)
* Valor gerado: Nulo
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int lerAno();
bool ehBissexto(int Ano);

int main(){
    printf("\n\tIdentifica se o ano eh bissexto\n\n");

    int Ano = lerAno();

    if(ehBissexto(Ano)){
        printf("Esse ano eh bissexto.\n");
    } else{
        printf("Esse ano nao eh bissexto.\n");
    }

    return 0;
} // fim main()

int lerAno(){
    int Ano;
    bool Erro;

    do{
        printf("\nQual o ano? ");
        scanf("%i",&Ano);
        Erro = Ano < 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    return Ano;
} // fim lerAno()

bool ehBissexto(int Ano){
    int RestoDiv4 = Ano % 4;
    int RestoDiv100 = Ano % 100;
    int RestoDiv400 = Ano % 400;

    // Divisível por 4 e não por 100 OU Divisível por 400 => Bissexto
    bool Bissexto = ((RestoDiv4 == 0) && (RestoDiv100 != 0) || (RestoDiv400 == 0));

    return Bissexto;
} // fim ehBissexto()