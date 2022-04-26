/***************************************************************
* Nome do método: Calcular o peso ideal de uma pessoa
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê a altura e gênero da pessoa, calcula e escreve o peso ideal 
* Argumentos: Altura (real positivo) e Gênero (caractere - M/F)
* Valor gerado: Peso Ideal (real)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Protótipos
float lerGenero();
float lerAltura();
float calcPesoIdeal(char Genero,float Altura);

int main(){
    printf("\n\tCalculo do Peso Ideal\n\n");

    char Genero = lerGenero();
    float Altura = lerAltura();
    float PesoIdeal = calcPesoIdeal(Genero,Altura);

    printf("\nPeso Ideal = %.2f\n",PesoIdeal);

    return 0;
} // fim main()

float lerGenero(){
    char Genero;
    bool Erro;
    
    do{
        printf("\nGenero [M/F]? ");
        scanf(" %c", &Genero);
        Genero = toupper(Genero);
        Erro = (Genero != 'M') && (Genero != 'F');
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    return Genero;
} // fim lerGenero()

float lerAltura(){
    float Altura;
    bool Erro;

    do{
        printf("\nAltura [em metros]? ");
        scanf("%f", &Altura);
        Erro = Altura <= 0;
        if(Erro) printf("\n\aValor invalido!\n");
    } while(Erro);

    return Altura;
} // fim lerAltura()

float calcPesoIdeal(char Genero,float Altura){
    float PesoIdeal;

    if(Genero == 'M'){
        PesoIdeal = ((72.7 * Altura) - 58);
    } else{
        PesoIdeal = ((62.1 * Altura) - 44.7);
    }

    return PesoIdeal;
} // fim calcPesoIdeal()