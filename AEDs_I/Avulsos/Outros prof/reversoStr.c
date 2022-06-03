#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int tamanhoString(char string[]);
void inversoString(char string[]);

int main(){
    char string[] = "Carolina";
    printf("%s\n",string);

    inversoString(string);
    printf("%s\n",string);

    return 0;
}


int tamanhoString(char string[]){
    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

void inversoString(char string[]){
    int tamanho = tamanhoString(string);
    int j = tamanho - 1;
    char aux;

    for(int i = 0;i < (tamanho / 2);i++){
        aux = string[i];
        string[i] = string[j - i];
        string[j - i] = aux;
    }
}