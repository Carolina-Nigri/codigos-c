// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
bool saoNotasValidas(float Notas[], int tamanho);

int main(){
    float Notas[] = {100, 0, 20, 30, 100, 20, 30, 10, 20, 40};

    if(saoNotasValidas(Notas,10))
        puts("As notas sao validas");
    else
        puts("As notas NAO sao validas");

    return 0;
}

// Funções
bool saoNotasValidas(float Notas[], int tamanho){
    bool validas = true;
    int i = 0;

    while((i < tamanho) && validas){
        if((Notas[i] < 0) || (Notas[i] > 100)) 
            validas = false;
        
        i++;
    }

    return validas;
}