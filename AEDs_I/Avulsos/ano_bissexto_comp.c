#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main(){
	printf("\n\tIdentifica se o ano é bissexto ou não\n\n");

	int ano;

	printf("Qual o ano? ");
    scanf("\n%i",&ano);

// Forma 1: If/Else (uma só variável resto):
/*
	int resto = ano % 4;
	if(resto == 0){
		// Divisível por 4
		resto = ano % 100;
		if(resto == 0){
			// Divisível por 100
			resto = ano % 400;
			if(resto == 0){
				// Divisível por 400
				printf("Esse ano é bissexto.\n");
			} else{
				// Não divisível por 400
				printf("Esse ano não é bissexto.\n");
			}
		}
		else{
			// Não divisível por 100
			printf("Esse ano é bissexto.\n");
		}	
	} else{
		// Não divisível por 4
	    printf("Esse ano não é bissexto.\n");
	}
*/
// Forma 2: If/Else (mais de uma variável resto):
/*
	int restoDiv4 = ano % 4;
	int restoDiv100 = ano % 100;
	int restoDiv400 = ano % 400;

	if((restoDiv4 == 0) && (restoDiv100 != 0) || (restoDiv400 == 0)){
		// Divisível por 4 e não por 100 OU Divisível por 400
		printf("Esse ano é bissexto.\n");
	} else{
		// Não é divisível por 4
	    printf("Esse ano não é bissexto.\n");
	}
*/
// Forma 3: If/Else (uma só variável resto, variável bool bissexto):
///*
	bool BISSEXTO;
	int resto = ano % 4;
	if(resto == 0){
		// Divisível por 4
		resto = ano % 100;
		if(resto == 0){
			// Divisível por 100
			resto = ano % 400;
			if(resto == 0){
				// Divisível por 400
				BISSEXTO = true;
			} else{
				// Não divisível por 400
				BISSEXTO = false;
			}
		}
		else{
			// Não divisível por 100
			BISSEXTO = true;
		}	
	} else{
		// Não divisível por 4
		BISSEXTO = false;
	}

	if(BISSEXTO){
			printf("Esse ano é bissexto.\n");
	} else{
		printf("Esse ano não é bissexto.\n");
	}
//*/
	return 0;
}