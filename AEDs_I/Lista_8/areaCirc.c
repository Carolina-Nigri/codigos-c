/***************************************************************
* Nome do método: Calcular a área de um círculo
* Data da elaboração: 24/04/2022
* Data da última alteração: 25/04/2022
* Autor: Carolina Morais Nigri
* Contexto de ação: Lê o raio e calcula a área do círculo 
* Argumentos: Raio (real positivo)
* Valor gerado: Área (real positivo)
****************************************************************
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
float lerRaio();
float areaCirc(float Raio);

int main(){
    printf("\n\tArea de um circulo\n\n");

    float Raio = lerRaio();

    printf("\nArea = %.2f\n",areaCirc(Raio));

    return 0;
} // fim main()

float lerRaio(){
    float Raio;
    bool Erro;

    do{
        printf("\nRaio: ");
        scanf("%f",&Raio);
        Erro = Raio <= 0;
        if(Erro) printf("\n\aValor invalido!\n\n");
    } while(Erro);

    return Raio;
} // fim lerRaio()

float areaCirc(float Raio){
    const float PI = 3.14;
    float Area = (Raio * Raio) * PI;

    return Area;
} // fim areaCirc()