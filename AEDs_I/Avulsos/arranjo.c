#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void leiaArranjo(int A[],int tamanho);
void escrevaArranjo(int A[],int tamanho);

int main(){
    int tamanho = TAM;
    int A[tamanho];

    leiaArranjo(A,tamanho);
    escrevaArranjo(A,tamanho);


    return 0;
} // fim main()

void leiaArranjo(int A[],int tamanho){
    for(int i = 0;i < tamanho;i++){
        printf("\nDigite um valor inteiro: ");
        scanf("%i",&A[i]);
    }
} // fim leiaArranjo()

void escrevaArranjo(int A[],int tamanho){
    for(int i = 0;i < tamanho;i++){
        printf("\nA[%i] = %i",i,A[i]);
    }
} // fim escrevaArranjo()
