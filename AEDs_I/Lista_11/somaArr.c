// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void populaArr(float A[],int tamanho);
void leArray(float A[],int tamanho);
float somaArr(float A[],int tamanho);

int main(){
    int tamanho = 10;
    float A[tamanho];
    
    populaArr(A,tamanho);    
    leArray(A,tamanho);

    float Soma = somaArr(A,tamanho);
    printf("\nSoma do arranjo = %.2f\n",Soma);

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