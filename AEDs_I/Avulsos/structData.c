#include <stdio.h>
#include <stdlib.h>

struct Data{
    int dia;
    int mes;
    int ano;
};
typedef struct Data Data;

int MAX = 3;

int menu();
void cadastra(Data A[]);
void pesquisa(Data A[]);
void listaAniversariantes(Data A[], int mes);

int main(){
    Data A[MAX];
    int op;

    do{
        op = menu();

        switch(op){
            case 0:
                puts("\nTchau!");
                break;
            case 1:
                cadastra(A);
                break;
            case 2:
                pesquisa(A);
                break;
            default:
                puts("\nOpcao invalida");
        }
    } while(op != 0);

    return 0;
}

int menu(){
    int op;

    puts("\n\tMENU\n");
    puts("0 - Sair");
    puts("1 - Cadastrar datas de nascimento");
    puts("2 - Pesquisar aniversariantes do mes");
    printf("Sua opcao: ");
    scanf("%i",&op);
    fflush(stdin);   

    return op;
}

void cadastra(Data A[]){
    for(int i=0;i < MAX;i++){
        printf("\nAluno %i",i+1);
        printf("\nNascimento [dd/mm/aa]: ");
        scanf("%i/%i/%i",&A[i].dia,&A[i].mes,&A[i].ano);
        fflush(stdin);
    }
}

void pesquisa(Data A[]){
    int chave;

    printf("\nMes da pesquisa: ");
    scanf("%i",&chave);
    listaAniversariantes(A,chave);
}

void listaAniversariantes(Data A[], int mes){
    for(int i=0;i < MAX;i++){
        if(A[i].mes == mes){
            printf("\nAluno %i, %i/%i/%i\n",i+1,A[i].dia,A[i].mes,A[i].ano);
        }
    }
}