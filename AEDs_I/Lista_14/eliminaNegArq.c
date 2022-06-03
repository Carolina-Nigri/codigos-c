#include <stdio.h>
#include <stdlib.h>

void criaArquivo(char* nome);
void eliminaNegativos(char* dados, char* novo);

int main(){
    // criaArquivo("dados.dat");
    eliminaNegativos("dados.dat","novo.dat");

    return 0;
}

void criaArquivo(char* nome){
    FILE* arq = fopen(nome,"w");
    fclose(arq);
}

void eliminaNegativos(char* dados, char* novo){
    FILE* arqDados = fopen(dados,"r");
    FILE* arqNovo = fopen(novo,"w");
    float dado;

    if(arqDados != NULL){
        fscanf(arqDados,"%f",&dado);
    
        while(!feof(arqDados)){
            if(dado >= 0){
                fprintf(arqNovo,"%.2f\n",dado);
            }
        
            fscanf(arqDados,"%f",&dado);
        }
    }
    
    fclose(arqDados);
    fclose(arqNovo);
}