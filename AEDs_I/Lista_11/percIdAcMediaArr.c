// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Protótipos
int consisteIdade();
void leIdades(int Idades[], int* i);
int somaIdades(int Idades[], int tamanho);
float mediaIdades(int Idades[], int tamanho);
int qtdAcimaMedia(int Idades[], int tamanho);
float percAcimaMedia(int Idades[], int tamanho);

int main(){
    puts("Calcula percentual de idades acima da media\n");

    int tamanho = 0;
    int Idades[100];

    leIdades(Idades,&tamanho);
    printf("Percentual de idades acima da media = %.2f\n",percAcimaMedia(Idades,tamanho));

    return 0;
} // fim main()

// Funções
int consisteIdade(){
    int idade;
    bool erro;

    do{
        printf("Idade: ");
        scanf("%i",&idade);
        erro = (idade < 0) || (idade > 150);
        if(erro) puts("\n\aIdade invalida!\n");
    } while(erro);

    return idade;
}

void leIdades(int Idades[], int* i){
    const int FLAG = 0;
    int idade;

    puts("[0 encerra]");

    idade = consisteIdade();
    while(idade != FLAG){
        Idades[*i] = idade;

        idade = consisteIdade();
        (*i)++;
    }
}

int somaIdades(int Idades[], int tamanho){
    int soma = 0;

    for(int i = 0;i < tamanho;i++){
        soma += Idades[i];
    }

    return soma;
}

float mediaIdades(int Idades[], int tamanho){
    float media = ((float) somaIdades(Idades,tamanho)) / tamanho;

    return media;
}

int qtdAcimaMedia(int Idades[], int tamanho){
    float media = mediaIdades(Idades,tamanho);
    int acima = 0;

    for(int i = 0;i < tamanho;i++){
        if(Idades[i] > media) acima++;
    }

    return acima;
}

float percAcimaMedia(int Idades[], int tamanho){
    float percentual = (((float) qtdAcimaMedia(Idades,tamanho)) / tamanho) * 100;

    return percentual;
}