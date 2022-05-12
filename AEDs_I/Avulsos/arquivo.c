// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    arq = fopen("teste.dat","w");
    
    int idade = 18;
    fprintf(arq,"%i\n",idade);
    idade = 20;
    fprintf(arq,"%i",idade);
    
    fclose(arq);
    
    arq = fopen("teste.dat","r");
    if(arq == NULL){
        printf("\nArquivo inexistente");
    } else{
        fscanf(arq,"%i",&idade);
        if(feof(arq)) printf("FIM!\n");
        
        fscanf(arq,"%i",&idade);
        if(feof(arq)) printf("FIM!\n");

        fclose(arq);
    }

    return 0;
} // fim main()