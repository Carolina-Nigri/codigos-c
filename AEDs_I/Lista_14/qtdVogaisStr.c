#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int qtdVogaisStr(char S[], int tamanho);

int main(){
    char nome[] = "aeiou";

    printf("Qtd de vogais na string = %i\n",qtdVogaisStr(nome,strlen(nome)));
   
    return 0;
}

int qtdVogaisStr(char S[], int tamanho){  
    bool vogais;
    int qtd = 0;

    for(int i = 0;i < tamanho;i++){
        S[i] = toupper(S[i]);
 
        vogais = (S[i] == 'A') || (S[i] == 'E') || (S[i] == 'I') || (S[i] == 'O') || (S[i] == 'U');

        if(vogais){
            qtd++;
        }
    }

    return qtd;
}