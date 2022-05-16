// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void trocaDoisArr(float A[],int tamanho,int x, int y);
void populaArr(float A[],int tamanho);
void leArray(float A[],int tamanho);

int main(){
    int tamanho = 5;
    float A[tamanho];
    
    populaArr(A,tamanho);    

    printf("\nAntes da troca:\n");
    leArray(A,tamanho);

    trocaDoisArr(A,tamanho,1,4);

    printf("\nDepois da troca:\n");
    leArray(A,tamanho);

    return 0;
} // fim main()

// Funções
void trocaDoisArr(float A[],int tamanho,int x, int y){
    // Testa se as posições pedidas existem na array
    if((x < tamanho) && (y < tamanho) && (x >=0) && (y >=0)){
        float Aux = A[x];

        A[x] = A[y];
        A[y] = Aux; 
    }
} // fim trocaDoisArr()

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