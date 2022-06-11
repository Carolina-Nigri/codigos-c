// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Estruturas
typedef struct{
    int dia;
    int mes;
    int ano;
} Data;
typedef struct{
    char nome[50];
    Data nascimento;
} Pessoa;

// Variáveis globais
int qtdAlunos;

// Protótipos
void leQtdAlunos();
int menu();
void cadastraAnivers(Pessoa alunos[]);
void pesquisaAnivers(Pessoa alunos[]);
void listaAnivers(Pessoa alunos[], int mes);

int main(){
    leQtdAlunos();
   
    Pessoa alunos[qtdAlunos];
    int op;

    do{
        op = menu();

        switch(op){
            case 0:
                puts("\nTchau!");
                break;
            case 1:
                cadastraAnivers(alunos);
                break;
            case 2:
                pesquisaAnivers(alunos);
                break;
            default:
                puts("\nOpcao invalida");
        }
    } while(op != 0);
    
    return 0;
}

// Funções
void leQtdAlunos(){
    printf("\nQtd de alunos: ");
    scanf("%i",&qtdAlunos);
}

int menu(){
    int op;

    puts("\n\tMENU\n");
    puts("0 - Sair");
    puts("1 - Cadastrar alunos");
    puts("2 - Pesquisar aniversariantes do mes");
    printf("Sua opcao: ");
    scanf("%i",&op);
    
    return op;
}

void cadastraAnivers(Pessoa alunos[]){
    for(int i = 0;i < qtdAlunos;i++){
        printf("\nNome do aluno: ");
        scanf("%s",&alunos[i].nome);
        printf("Nascimento [dd/mm/aa]: ");
        scanf("%i/%i/%i",&alunos[i].nascimento.dia,&alunos[i].nascimento.mes,&alunos[i].nascimento.ano);
    }
}

void pesquisaAnivers(Pessoa alunos[]){
    int chave;

    printf("\nMes da pesquisa: ");
    scanf("%i",&chave);
    listaAnivers(alunos,chave);
}

void listaAnivers(Pessoa alunos[], int mes){
    for(int i=0;i < qtdAlunos;i++){
        if(alunos[i].nascimento.mes == mes){
            printf("\n%s, %i/%i\n",alunos[i].nome,alunos[i].nascimento.dia,alunos[i].nascimento.mes);
        }
    }
}