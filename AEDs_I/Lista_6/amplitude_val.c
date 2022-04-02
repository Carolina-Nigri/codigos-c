#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	printf("\n\tCalcula a amplitude de um conjunto de valores\n\n");

	char Continuar;
    bool Erro;
    int Valor;

    do{ // Repete se usuário tecla 'S' para Continuar
	    
	    do{
		    printf("\nValor: ");
		    scanf("%i",&Valor);
		    Erro = Valor < 0;
		    if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);


		int Maior = Valor;
		int Menor = Valor;

		while(Valor > 0){
			do{
			    printf("\nValor: ");
			    scanf("%i",&Valor);
			    Erro = Valor < 0;
			    if(Erro) printf("\n\aValor invalido!\n");
				if(Valor != 0){
				    if(Valor > Maior) Maior = Valor;
				    if(Valor < Menor) Menor = Valor;
				}
			} while(Erro);
		} // fim while()
	
		int Amplitude = Maior - Menor;

		if(Amplitude > 0) printf("\nAmplitude = %i\n",Amplitude);
		else printf("\nNenhum valor informado\n");

		 do{
		    printf("\nRealizar novo calculo [S/N]? ");
		    scanf(" %c",&Continuar);
		    Continuar = toupper(Continuar);
		   	Erro = (Continuar != 'S') && (Continuar != 'N');
		    if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);

	} while(Continuar == 'S'); // fim do{}while

	return 0;
}