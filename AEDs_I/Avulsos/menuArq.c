#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int menu();
void reinicializaAmbiente(FILE* arq);
void leiaValores(FILE* arq);
void escrevaValores(FILE* arq);
void escrevaOrdemCrescente(FILE* arq);

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
                reinicializaAmbiente(arq);
                break;
            case 2:
                leiaValores(arq);
                break;
            case 3:
                escrevaValores(arq);
                break;
            case 4:
                escrevaOrdemCrescente(arq);
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
        printf("\n1 - Reiniciar o ambiente");
        printf("\n2 - Ler valores");
        printf("\n3 - Escrever valores");
        printf("\n4 - Escrever em ordem crescente");
        printf("\n\nSua opcao: ");
        scanf("%i",&op);
        erro = (op < 0) || (op > 4);
        if(erro) printf("\n\aOpcao invalida!\n");
    } while(erro);

    return op;
}

void reinicializaAmbiente(FILE* arq){
    arq = fopen("valores.dat","w");
    fclose(arq);
}

void leiaValores(FILE* arq){
    arq = fopen("valores.dat","a");
    const int FLAG = 0;
    int val;

    printf("\nDigite valor[0 encerra]: ");
    scanf("%i",&val);

    while(val != FLAG){
        fprintf(arq,"%i\n",val);
        printf("\nDigite valor[0 encerra]: ");
        scanf("%i",&val);
    }

    fclose(arq);
}

void escrevaValores(FILE* arq){
    if((arq = fopen("valores.dat","r")) != NULL){
        int val;

        fscanf(arq,"%i",&val);
        while(!feof(arq)){
            printf("\n%i",val);
            fscanf(arq,"%i",&val);
        }

        fclose(arq);
    }
}

void escrevaOrdemCrescente(FILE* arq){

}
