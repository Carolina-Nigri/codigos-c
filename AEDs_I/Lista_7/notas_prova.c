#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tNotas da turma na prova\n\n");

    int N;
    bool Erro;

    do{
        printf("\nNumero? ");
        scanf("%i",&N);
        Erro = N < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);



    return 0;
} // fim main()
