#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int tamanhoString(char string[]);
bool senhaCorreta(char senha[], char correta[]);
bool comparaStrings(char A[], char B[]);

int main(){
    char senha[30];
    printf("\nDigite senha: ");
    gets(senha);

    // // Usando a biblioteca <string.h>
    // printf("\nSua senha tem %i caracteres\n",strlen(senha));

    // Sem usar a biblioteca <string.h>
    printf("\nSua senha tem %i caracteres\n",tamanhoString(senha));
    
    char correta[] = "sorvete";

    if(senhaCorreta(senha,correta)) printf("\nSenha correta\n");
    else printf("\n\aSenha incorreta!\n");

    return 0;
}

int tamanhoString(char string[]){
    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

bool senhaCorreta(char senha[], char correta[]){
    bool valida = false;

    // // Usando a biblioteca <string.h>
    // if(!strcmp(senha,correta)) valida = true;

    // Sem usar a biblioteca <string.h>
    if(comparaStrings(senha,correta)) valida = true;

    return valida;
}

bool comparaStrings(char A[], char B[]){
    int tamanhoA = tamanhoString(A);
    int tamanhoB = tamanhoString(B);
    bool iguais = false;

    if(tamanhoA == tamanhoB){
        iguais = true;
        int i = 0;

        while((i < tamanhoA) && iguais){
            if(A[i] != B[i]) iguais = false;
            i++;
        }
    }
    
    return iguais;
}