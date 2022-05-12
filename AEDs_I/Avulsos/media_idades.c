#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main(){
    printf("\n\tMÉDIA DAS IDADES DA TURMA\n\n");

    int n; 
    bool ERRO;

    do{
        printf("\nQuantos alunos? ");
        scanf("\n%i",&n);
        ERRO = n < 0;
        if (ERRO) printf("\n\aValor inválido!\n");
    } while(ERRO);

    int idade;
    int soma = 0;
    int contador = 0;

    while(contador < n){ // Se n for 0,não entra
        do{
            printf("\nIdade: ");
            scanf("\n%i",&idade);
            ERRO = idade < 0;
            if (ERRO) printf("\n\aValor inválido!\n");
        } while(ERRO);
        soma += idade;
        contador ++; 
    }

    if(n > 0){ // Se n for 0,não entra -> Para o programa
        // É preciso converter o tipo da variável soma (int -> float) p/fazer divisão real
        float media = (float) soma / n; 
        printf("\nMédia = %.2f\n",media);
    }

    return 0;
}