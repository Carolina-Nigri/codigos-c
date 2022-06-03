#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int tamanhoString(char string[]);
bool ehPalindromo(char string[]);

int main(){
    char nome[] = "Arara";

    if(ehPalindromo(nome)) printf("Eh palindromo\n");
    else printf("Nao eh palindromo\n");

    return 0;
}


int tamanhoString(char string[]){
    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

bool ehPalindromo(char string[]){
    bool palindromo = true;
    int tamanho = tamanhoString(string);
    int j = tamanho - 1;
    int i = 0;

    while((i < (tamanho / 2)) && palindromo){
        string[i] = tolower(string[i]);
        string[j - i] = tolower(string[j - i]);

        if(string[i] != string[j - i]){ 
            palindromo = false;
        }

        i++;
    }

    return palindromo;
}