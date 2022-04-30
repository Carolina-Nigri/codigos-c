// Documentação das funções
/***************************************************************
* Nome: 
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Verifica se o aluno está aprovado ou não
* Argumentos: NotaFinal (real)
* Valor gerado: Aprovado (booleano) (>= 60 true)
****************************************************************
* Nome: leiaNota
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê uma nota (real) 
* Argumentos: Nulo
* Valor gerado: Nota (Real*)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
float leiaNota();
bool foiAprovado(float NotaFinal);

int main(){
    printf("\n\tVerifica se o aluno foi aprovado\n\n");

    // Teste das funções
    float Nota = leiaNota();
    if(foiAprovado(Nota)) printf("\nO aluno foi aprovado\n");
    else printf("\nO aluno nao foi aprovado\n");

    return 0;
} // fim main()

bool foiAprovado(float NotaFinal){
    bool Aprovado = true;

    if(NotaFinal < 60) Aprovado = false;

    return Aprovado;
} // fim foiAprovado()

float leiaNota(){
    float Nota;
    bool Erro;

    do{
        printf("\nNota: ");
        scanf("%f",&Nota);
        Erro = Nota < 0;
        if (Erro) printf("\n\aSomente valores positivos!\n\n");
    } while(Erro);

    return Nota;
} // fim leiaNota()