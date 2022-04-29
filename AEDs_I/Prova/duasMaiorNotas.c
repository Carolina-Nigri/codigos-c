// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    printf("\n\tMaiores notas\n\n");

    int N;
    bool Erro;

    do{
        printf("\nQuantidade de alunos: ");
        scanf("%i",&N);
        Erro = N < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while (Erro);

    int Matricula;
    float Nota;
    int MatrA;
    int MatrB;
    float MaiorA = 0;
    float MaiorB = 0;

    while(N > 0){
        printf("\nMatricula: ");
        scanf("%i",&Matricula);
        printf("\nNota: ");
        scanf("%f",&Nota);
        if((Nota > MaiorA) && (MaiorB > MaiorA)){
            MaiorA = Nota;
            MatrA = Matricula;
        } else if ((Nota > MaiorB) && (MaiorB < MaiorA)){
            MaiorB = Nota;
            MatrB = Matricula;
        }
        N--;
    } // fim while

    printf("\nMaiores notas: ");
    printf("\n%f do aluno de matricula %i",MaiorA,MatrA);
    printf("\n%f do aluno de matricula %i",MaiorB,MatrB);

    return 0;
} // fim main()