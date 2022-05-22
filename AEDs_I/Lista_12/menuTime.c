#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int menu();
void inicializaAmbiente(FILE* arq);
void leiaTimes(FILE* arq);
void escrevaTimes(FILE* arq);
void pesquisaPercTimes(FILE* arq);

int main(){
    FILE* arq;
    int op;

   do{
        op = menu();
        switch(op){
            case 0:
                printf("\nTchau!\n");
                break;
            case 1:
                inicializaAmbiente(arq);
                break;
            case 2:
                leiaTimes(arq);
                break;
            case 3:
                escrevaTimes(arq);
                break;
            case 4:
                pesquisaPercTimes(arq);
                break;
        }
    } while(op != 0);

    return 0;
}

int menu(){
    int op;
    bool erro;

    do{
        printf("\n\tMENU\n");
        printf("\n0 - Sair do programa");
        printf("\n1 - Inicializar o ambiente");
        printf("\n2 - Ler time do coracao");
        printf("\n3 - Escrever os times do coracao");
        printf("\n4 - Pesquisar pelo percentual de cada time (A, C, O)");
        printf("\n\nSua opcao: ");
        scanf("%i",&op);
        erro = (op < 0) || (op > 4);
        if(erro) printf("\n\aOpcao invalida!\n");
    } while(erro);

    return op;
}

void inicializaAmbiente(FILE* arq){
    arq = fopen("times.dat","w");
    fclose(arq);
}

void leiaTimes(FILE* arq){
    arq = fopen("times.dat","a");
    const char FLAG = 'X';
    char time;
    bool erro;

    printf("\nA - Atlético\nC - Cruzeiro\nO - Outros\n");

    do{
        printf("\nTime [X encerra]: ");
        scanf(" %c",&time);
        time = toupper(time);
        erro = (time != 'A') && (time != 'C') && (time != 'O') && (time != 'X');
        if(erro) printf("\n\aTime invalido!\n");
    } while(erro);

    while(time != FLAG){
        fprintf(arq,"%c\n",time);

        do{
            printf("\nTime [X encerra]: ");
            scanf(" %c",&time);
            time = toupper(time);
            erro = (time != 'A') && (time != 'C') && (time != 'O') && (time != 'X');
            if(erro) printf("\n\aTime invalido!\n");
        } while(erro);
    }

    fclose(arq);
}

void escrevaTimes(FILE* arq){
    arq = fopen("times.dat","r");

    if(arq != NULL){
        char time;

        fscanf(arq,"%c",&time);
        
        while(!feof(arq)){
            if(time == 'A') printf("\nAtlético");
            else if(time == 'C') printf("\nCruzeiro");
            else if(time == 'O') printf("\nOutros");

            fscanf(arq,"%c",&time);
        }

        fclose(arq);
    }
}

void pesquisaPercTimes(FILE* arq){
    arq = fopen("times.dat","r");

    if(arq != NULL){
        char time;
        int tamanho = 0;

        fscanf(arq," %c",&time);
        
        while(!feof(arq)){
            tamanho++;
            fscanf(arq," %c",&time);
        }

        char Times[tamanho];
        rewind(arq);

        for(int i = 0;i < tamanho;i++){
            fscanf(arq," %c",&Times[i]);
        }

        char op;
        const char FLAG = 'S';
        bool erro;

        printf("\nA - Atlético\nC - Cruzeiro\nO - Outros\n");
        
        float percentual;             

        do{
            printf("\nPesquisar percentual [S para sair]: ");
            scanf(" %c",&op);
            op = toupper(op);
            erro = (op != 'A') && (op != 'C') && (op != 'O') && (op != 'S');
            if(erro) printf("\n\aOpcao invalida!\n");
        } while(erro);

        while(op != FLAG){
            int atletico = 0;
            int cruzeiro = 0;
            int outros = 0;

            for(int i = 0;i < tamanho;i++){
                if(Times[i] == 'A') atletico++;
                else if(Times[i] == 'C') cruzeiro++;
                else if(Times[i] == 'O') outros++;
            }
            
            if(op == 'A'){
                percentual = (atletico / (float) tamanho) * 100;
                printf("\nPercentual de atleticanos = %.2f%%\n",percentual);
            } else if(op == 'C'){
                percentual = (cruzeiro / (float) tamanho) * 100;
                printf("\nPercentual de cruzeirenses = %.2f%%\n",percentual);
            } else if(op == 'O'){
                percentual = (outros / (float) tamanho) * 100;
                printf("\nPercentual de outros = %.2f%%\n",percentual);
            }
            
            do{
                printf("\nPesquisar percentual [S para sair]: ");
                scanf(" %c",&op);
                op = toupper(op);
                erro = (op != 'A') && (op != 'C') && (op != 'O') && (op != 'S');
                if(erro) printf("\n\aOpcao invalida!\n");
            } while (erro);
        }

        fclose(arq);
    }
}