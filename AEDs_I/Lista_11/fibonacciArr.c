// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void arranjoFibonacci(int Fib[], int tamanho);
void escreveArranjo(int A[], int tamanho);

int main(){
    int Fib[10];
    
    arranjoFibonacci(Fib,10);
    escreveArranjo(Fib,10);
    puts("");

    return 0;
} // fim main()

// Funções
void arranjoFibonacci(int Fib[], int tamanho){
    Fib[0] = Fib[1] = 1;

    for(int i = 2;i < tamanho;i++){
        Fib[i] = Fib[i-2] + Fib[i-1]; 
    }
}

void escreveArranjo(int A[], int tamanho){
    for(int i = 0;i < tamanho;i++){
        printf("%i ",A[i]);
    }
}