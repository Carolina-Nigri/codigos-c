#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int tamanhoString(char string[]);
void imprimeVogaisStr(char S[], int tamanho);

int main(){
    char nome[] = "Carol";

    printf("\n");
    imprimeVogaisStr(nome,tamanhoString(nome));
    printf("\n");

    return 0;
}

int tamanhoString(char string[]){
    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

void imprimeVogaisStr(char S[], int tamanho){  
    bool vogais;

    for(int i = 0;i < tamanho;i++){
        S[i] = toupper(S[i]);
        vogais = (S[i] == 'A') || (S[i] == 'E') || (S[i] == 'I') || (S[i] == 'O') || (S[i] == 'U');

        if(vogais){
            printf("%c ",S[i]);
        }
    }

}