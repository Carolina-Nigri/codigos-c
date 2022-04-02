#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main(){
    printf("\n\tPROGRESSÃO ARITMÉTICA\n\n");

    float a;
    printf("\nPrimeiro termo: ");
    scanf("%f",&a);

    float r;
    printf("\nRazão: ");
    scanf("%f",&r);

    int n;
    bool ERRO;

    do{
        printf("\nNúmero de termos: ");
        scanf("%i",&n);
        ERRO = n < 1;
        if (ERRO) printf("\n\aValor inválido!\n");
    } while(ERRO);

    printf("\nPA = ");

    int contador = n;
    float soma = 0; 

    while(contador > 0){
        printf("%.2f ",a);
        soma += a;
        a += r;
        contador --;
    }

    float media = soma / n;
    printf("\n\nMédia = %.2f\n",media);

    return 0;
}