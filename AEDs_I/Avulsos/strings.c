#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[10];
    palavra[0] = 'P';
    palavra[1] = 'U';
    palavra[2] = 'C';
    palavra[3] = '\0';
    printf("%s\n",palavra);
    
    // Considera espaços -> entende como um caractere
    printf("\nPalavra: ");
    fflush(stdin);
    gets(palavra);
    printf("%s\n",palavra);

    // Não considera espaços -> entende como fim da palavra
    printf("\nPalavra: ");
    scanf("%s",&palavra);
    printf("%s\n",palavra);

    // char nome[] = { 'P', 'U', 'C', '\0'};
    // printf("\n%s",nome);

    char nome[] = "PUC";
    printf("\n%s",nome);
    
    char frase[] = "PUC MINAS";
    printf("\n%s\n",frase);

    return 0;
}