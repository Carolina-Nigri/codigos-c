#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tNotas da turma na prova\n\n");

    bool Erro;

    float Nota;
    int Qtd = 0;
    float Soma = 0;
    int QtdAcimaMed = 0;

    const int FLAG = -1;
    do{
        printf("\nNota [-1 encerra]: ");
        scanf("%f",&Nota);
        Erro = (Nota != FLAG) && (Nota < 0) || (Nota > 20);
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    float Maior = Nota;
    float Menor = Nota;

    while(Nota != FLAG){
        Qtd++;

        if(Nota > Maior) Maior = Nota;
        else if (Nota < Menor) Menor = Nota;

        if(Nota >= 12) QtdAcimaMed++;

        Soma += Nota;

        do{
            printf("\nNota [-1 encerra]: ");
            scanf("%f",&Nota);
            Erro = (Nota != FLAG) && (Nota < 0) || (Nota > 20);
            if(Erro) printf("\n\aValor invalido!\n");
        } while(Erro);
    } // fim while()

    if(Maior != FLAG){
        printf("\nA maior nota foi %.2f e a menor foi %.2f.\n",Maior,Menor);
        printf("\n%i alunos tiraram acima de 60%%\n",QtdAcimaMed);

        float Media = Soma / Qtd;

        printf("\nA media das notas foi %.2f.\n",Media);
    }

    return 0;
} // fim main()