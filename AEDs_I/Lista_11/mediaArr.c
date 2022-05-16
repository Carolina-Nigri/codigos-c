// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void populaArr(float A[],int tamanho);
void leArray(float A[],int tamanho);
float somaArr(float A[],int tamanho);
float mediaArr(float A[],int tamanho);

int main(){
    int tamanho = 5;
    float A[tamanho];
    
    populaArr(A,tamanho);    
    leArray(A,tamanho);

    float Media = mediaArr(A,tamanho);

    printf("\nMedia do arranjo = %.2f\n",Media);

    return 0;
} // fim main()

// Funções
float somaArr(float A[],int tamanho){
    float Soma = 0;
    
    for(int i = 0; i < tamanho; i++){
        Soma += A[i];
    }

    return Soma;
} // fim somaArr()

float mediaArr(float A[],int tamanho){
    float Soma = somaArr(A,tamanho);
    float Media = Soma / tamanho;

    return Media;
} // fim mediaArr()

void populaArr(float A[],int tamanho){
    for(int i = 0; i < tamanho; i++){
        A[i] = 2 + (i * 2);
    }
} // fim populaArr()

void leArray(float A[],int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("A[%i] = %.2f\n",i,A[i]);
    }
} // fim leArray()