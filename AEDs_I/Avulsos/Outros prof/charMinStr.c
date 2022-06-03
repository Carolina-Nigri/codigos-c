#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int tamanhoString(char string[]);
int qtdCharMin(char string[], int tamanho);

int main(){
    char nome[] = "Carol";

    printf("Qtd de caracteres minusculos = %i\n",qtdCharMin(nome,tamanhoString(nome)));

    return 0;
}

int tamanhoString(char string[]){
    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

int qtdCharMin(char string[], int tamanho){  
    int qtde = 0;

    for(int i = 0;i < tamanho;i++){
        if(string[i] >= 'a' && string[i] <= 'z') 
        // if(islower(string[i]))
            qtde++;
    }

    return qtde;
}