
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	printf("\n\tNumero de termos divisiveis por X em uma PA\n\n");

	char Continuar;

	int N;
    bool Erro;

    do{
	    do{
	        printf("\nQuantidade de termos: ");
	        scanf("%i",&N);
	        Erro = N <= 0;
	        if(Erro) printf("\n\aValor invalido!\n");
	    } while(Erro);

	    int T;

	    printf("\nPrimeiro termo: ");
	    scanf("%i",&T);

	    int R;

	    printf("\nRazao: ");
	    scanf("%i",&R);

	    int X;

	    do{
		    printf("\nVerificar quantos termos divisiveis por: ");
		    scanf("%i",&X);
		    Erro = X <= 0;
	        if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);

		int Divisiveis = 0;

		printf("\nTermos:\n");

	    for(int i = 0; i < N; i ++){
	        printf("%i\n",T);

	        int Resto = T % X; 
	        if(Resto == 0){
	        	Divisiveis++;
	        }

	        T += R;
	    }

	    printf("\nQuantidade de termos divisiveis por %i: %i\n",X,Divisiveis);

	    do{
		    printf("\nRealizar novo calculo [S/N]? ");
		    scanf(" %c",&Continuar);
		    Continuar = toupper(Continuar);
		   	Erro = (Continuar != 'S') && (Continuar != 'N');
		    if(Erro) printf("\n\aValor invalido!\n");
		} while(Erro);

	} while(Continuar == 'S');

	return 0;
}