#include <stdio.h>
#include <stdlib.h>

FILE* criaArquivo(char* Nome);
void leNotas(FILE* Arq);
FILE* abreArqLeitura(char* Nome);
int alunosSubstitutiva(FILE* Arq);

int main(){
    printf("\n\tCalcula alunos que devem fazer prova substitutiva\n\n");

    FILE* Arq = criaArquivo("notas.dat");
    leNotas(Arq);
    Arq = abreArqLeitura("notas.dat");
    int QtdeAlunos = alunosSubstitutiva(Arq);

    printf("\nA quantidade de alunos que devem fazer a prova substitutiva eh %i\n",QtdeAlunos);

    return 0;
}

FILE* criaArquivo(char* Nome){
    return fopen(Nome,"w");
}

void leNotas(FILE* Arq){
    printf("\nLer notas. Digite -1 para sair.\n");

    float Nota;
    const int FLAG = -1;

    printf("\nNota: ");
    scanf("%f",&Nota);

    while(Nota != FLAG){
        fprintf(Arq,"%f\n",Nota);

        printf("\nNota: ");
        scanf("%f",&Nota);
    }

    fclose(Arq);
}

FILE* abreArqLeitura(char* Nome){
    return fopen(Nome,"r");
}

int alunosSubstitutiva(FILE* Arq){
    int Alunos = 0;
    float Nota;

    fscanf(Arq,"%f",&Nota);
    while(!feof(Arq)){
        if(Nota > 20 && Nota < 60) Alunos++;

        fscanf(Arq,"%f",&Nota);
    }

    fclose(Arq);

    return Alunos;
}