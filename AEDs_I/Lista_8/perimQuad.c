/***************************************************************
* Nome do método: Calcular o perímetro de um quadrado
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê o valor do lado de um quadrado e escreve seu perímetro
* Argumentos: Lado (real) 
* Valor gerado: Perímetro (real)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
float lerLado();
float perimQuad(float Lado);

int main(){
    printf("\n\tPerimetro de um quadrado\n\n");

    float Lado = lerLado();

    printf("\nPerimetro = %.2f\n",perimQuad(Lado));

    return 0;
} // fim main()

float lerLado(){
    float Lado;
    bool Erro;

    do{
        printf("\nLado: ");
        scanf("%f",&Lado);
        Erro = Lado <= 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    return Lado;
} // fim lerLado()

float perimQuad(float Lado){
    float Perimetro = Lado * 4;

    return Perimetro;
} // fim perimQuad()