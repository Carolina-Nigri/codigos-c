/***************************************************************
* Nome do método: Calcular a potenciação
* Data da elaboração: 24/04/2022
* Data da última alteração: 26/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê a base e o expoente, faz a potenciação e escreve o resultado
* Argumentos: Base (real) e Expoente (inteiro)
* Valor gerado: Potencia (real)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
float lerBase();
int lerExpoente();
float calcPotencia(float Base,float Expoente);

int main(){
    printf("\n\tPotenciacao (expoente positivo)\n\n");

    float Base = lerBase();
	int Expoente = lerExpoente();

    printf("\nPotencia = %.2f\n",calcPotencia(Base,Expoente));

    return 0;
} // fim main()

float lerBase(){
    float Base;
    printf("\nBase: ");
    scanf("%f",&Base);

    return Base;
} // fim lerBase()

int lerExpoente(){
    int Expoente;
    bool Erro;
    do{
        printf("\nExpoente: ");
        scanf("%i",&Expoente);
        Erro = Expoente < 0;
        if(Erro) printf("\n\aSomente valores positivos!\n");
    } while(Erro);

    return Expoente;
} // fim lerExpoente()

float calcPotencia(float Base,float Expoente){
    float Potencia = 1;

    for(int i = 0;i < Expoente;i++){
        Potencia *= Base;
    }

    return Potencia;
} // fim calcPotencia()