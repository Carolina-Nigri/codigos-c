// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
bool saoNotasValidas(float Notas[], int tamanho);
int qtdAlunosAprovados(float Notas[], int tamanho);

int main(){
    float Notas[] = {100, 60, 20, 30, 100, 20, 30, 10, 80, 40};

    printf("Qtde de alunos aprovados = %i\n",qtdAlunosAprovados(Notas,10));

    return 0;
} // fim main()

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

int qtdAlunosAprovados(float Notas[], int tamanho){
    int aprovados = 0;

    if(saoNotasValidas(Notas,tamanho)){
        for(int i = 0;i < tamanho;i++){
            if(Notas[i] >= 60) aprovados++;
        }
    }

    return aprovados;
}