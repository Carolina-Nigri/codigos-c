// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void trocaPrimUltArr(float A[],int tamanho);
void populaArr(float A[],int tamanho);
void leArray(float A[],int tamanho);

int main(){
    int tamanho = 5;
    float A[tamanho];
    
    populaArr(A,tamanho);    

    printf("\nAntes da troca:\n");
    leArray(A,tamanho);

    trocaPrimUltArr(A,tamanho);

    printf("\nDepois da troca:\n");
    leArray(A,tamanho);

    return 0;
} // fim main()

// Funções
void trocaPrimUltArr(float A[],int tamanho){
    float Aux = A[0];

    A[0] = A[tamanho - 1];
    A[tamanho - 1] = Aux; 
} // fim  trocaPrimUltArr()

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