#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tPotenciacao\n\n");

    float Base;

    printf("\nBase = ");
    scanf("%f",&Base);

	int Expoente;
	bool Erro;

	do{
        printf("\nExpoente [valor natural] = ");
        scanf("%i",&Expoente);
        Erro = Expoente < 0;
        if(Erro) printf("\n\aValor invalido!\n");
	} while(Erro);

    float Resultado = 1;

	for(int i = 1;i <= Expoente;i ++){
        Resultado *= Base;
	}

    printf("\nResultado = %.2f\n",Resultado);

    return 0;
}