// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
// FILE* criaArquivo(char* nome);
void criaArquivo(FILE* arq,char* nome);
// FILE* abreArquivoLeitura(char* nome);
void abreArquivoLeitura(FILE* arq,char* nome);
void leIdades(FILE* arq);
float mediaIdades(FILE* arquivo);
float percentualAcimaMedia(FILE* arq,float Media);

int main(){
    printf("\n\tPercentual de pessoas com idade acima da idade média\n");

    FILE* arq;

    // arq = criaArquivo("idades.dat");
    criaArquivo(arq,"idades.dat");

    leIdades(arq);

    // arq = abreArquivoLeitura("idades.dat");
    abreArquivoLeitura(arq,"idades.dat");
    
    float Media = mediaIdades(arq);
    float Percentual = percentualAcimaMedia(arq,Media);

    printf("\nO percentual de idades acima da media = %.2f%%\n",Percentual);

    return 0;
} // fim main()

/*
FILE* criaArquivo(char* nome){
    return fopen(nome,"w");
} // fim criaArquivo()
*/

///*
void criaArquivo(FILE* arq,char* nome){
    arq = fopen(nome,"w");
} // fim criaArquivo()
//*/

/*
FILE* abreArquivoLeitura(char* nome){
    return fopen(nome,"r");
} // fim abreArquivoLeitura()
*/

///*
void abreArquivoLeitura(FILE* arq,char* nome){
    arq = fopen(nome,"r");

    if(arq == NULL) arq = fopen(nome,"w+");
} // fim abreArquivoLeitura()
//*/

void leIdades(FILE* arq){
    printf("\nLer idades. Digite 0 para sair.");

    int Idade;
    const int FLAG = 0;

    printf("\nIdade: ");
    scanf("%i",&Idade);

    while(Idade != FLAG){
        fprintf(arq,"%i\n",Idade);
        printf("\nIdade: ");
        scanf("%i",&Idade);
    }
    
    fclose(arq);
} // fim leIdades()

float mediaIdades(FILE* arquivo){
    int Idade;
    int Soma = 0;
    int Contador = 0;

    fscanf(arquivo,"%i",&Idade);
    while(!feof(arquivo)){
        Soma += Idade;
        Contador++;
        fscanf(arquivo,"%i",&Idade);
    }

    float Media = 0;
    if(Contador > 0) Media = (float) Soma / Contador;

    return Media;
} // fim mediaIdades()

float percentualAcimaMedia(FILE* arq,float Media){
    rewind(arq);

    int Idade;
    int C = 0;
    int Total = 0;
    float Percentual = 0;

    fscanf(arq,"%i",&Idade);
    while(!feof(arq)){
        if(Idade > Media) C++;
        Total++;
        
        fscanf(arq,"%i",&Idade);
    }

    if(Total > 0) Percentual = ((float) C / Total) * 100;

    return Percentual;
} // fim percentualAcimaMedia()