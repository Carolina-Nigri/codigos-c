// Documentação das funções
/***************************************************************
* Nome: novoSalario
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Calcula o novo salário de um funcionário
* Argumentos: SalarioAtual (real) e PercAum (natural)
* Valor gerado: SalarioNovo (real)
****************************************************************
* Nome: leiaPercentual
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê um percentual (natural*)
* Argumentos: Nulo
* Valor gerado: N (natural*)
****************************************************************
* Nome: leiaSalario
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê um salário (real)
* Argumentos: Nulo
* Valor gerado: R (real)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
int leiaPercentual();
float leiaSalario();
float novoSalario(float SalarioAtual,int PercAum);

int main(){
    printf("\n\tCalcula o novo salario com %% de aumento\n\n");

    // Teste das funções
    float Salario = leiaSalario();
    int PercAum = leiaPercentual();
    printf("\nO novo salario eh %.2f\n",novoSalario(Salario,PercAum));

    return 0;
} // fim main()

float novoSalario(float SalarioAtual,int PercAum){
    float SalarioNovo = SalarioAtual * ((PercAum / 100.0) + 1);

    return SalarioNovo;
} // fim novoSalario()

int leiaPercentual(){
    int N;
    bool Erro;

    do{
        printf("\nPercentual de aumento [em %%]: ");
        scanf("%i",&N);
        Erro = N <= 0;
        if (Erro) printf("\n\aSomente valores positivos!\n\n");
    } while(Erro);

    return N;
} // fim leiaPercentual()

float leiaSalario(){
    float R;
    bool Erro;

    do{
        printf("\nSalario atual: ");
        scanf("%f",&R);
        Erro = R <= 0;
        if (Erro) printf("\n\aSomente valores positivos!\n\n");
    } while(Erro);

    return R;
} // fim leiaSalario()