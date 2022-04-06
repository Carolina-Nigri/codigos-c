#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	printf("\n\tCalcula a amplitude de um conjunto de valores\n\n");

	char Continuar;

    do{ // Repete se usuário tecla 'S' para Continuar
	    
	    int Valor;
	    bool Erro;

	    do{
		    printf("\nValor: ");
		    scanf("%i",&Valor);
		    Erro = Valor < 0;
		    if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);

		int Maior = Valor;
		int Menor = Valor;
	    const int FLAG = 0;

		while(Valor != FLAG){
		    if(Valor > Maior) Maior = Valor;
		    else if(Valor < Menor) Menor = Valor;

			do{
			    printf("\nValor: ");
			    scanf("%i",&Valor);
			    Erro = Valor < 0;
			    if(Erro) printf("\n\aValor invalido!\n");
			} while(Erro);
	
		} // fim while(Valor != FLAG)
	
		int Amplitude = Maior - Menor;
		bool ValInformados = (Maior != 0) && (Menor != 0);

		if(ValInformados){
			printf("\nMaior valor: %i\n",Maior);
			printf("\nMenor valor: %i\n",Menor);			
			printf("\nAmplitude = %i\n",Amplitude);
		} else {
			printf("\nNenhum valor informado\n");
		}
		
		do{
		    printf("\nRealizar novo calculo [S/N]? ");
		    scanf(" %c",&Continuar);
		    Continuar = toupper(Continuar);
		   	Erro = (Continuar != 'S') && (Continuar != 'N');
		    if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);

	} while(Continuar == 'S'); // fim do{ }while(Continuar == 'S')

	return 0;
}