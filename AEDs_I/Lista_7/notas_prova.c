#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tNotas da turma na prova\n\n");

    int N;
    bool Erro;

    do{
        printf("\nNumero de alunos? ");
        scanf("%i",&N);
        Erro = N < 1;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    float Nota;
    float Soma = 0;
    int QtdAcimaMed = 0;
    float Maior;
    float Menor;

    for(int i = 0; i < N; i++){
        do{
            printf("\nNota: ");
            scanf("%f",&Nota);
            Erro = (Nota < 0) || (Nota > 20);
            if(Erro) printf("\n\aValor invalido!\n");
        } while(Erro);

        if(i == 0){   
            Maior = Nota;
            Menor = Nota;
        } else{    
            if(Nota > Maior) Maior = Nota;
            else if (Nota < Menor) Menor = Nota;
        }

        if(Nota >= 12) QtdAcimaMed++;

        Soma += Nota;
    } // fim for()

    printf("\nA maior nota foi %.2f e a menor foi %.2f.\n",Maior,Menor);
    printf("\n%i alunos tiraram acima de 60%%\n",QtdAcimaMed);

    float Media = Soma / N;

    printf("\nA media das notas foi %.2f.\n",Media);

    return 0;
} // fim main()