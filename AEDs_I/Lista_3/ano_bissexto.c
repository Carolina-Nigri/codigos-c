#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	printf("\n\tIdentifica se o ano é bissexto ou não\n\n");

	int ano;

	printf("Qual o ano? ");
    scanf("\n%i",&ano);

	int resto = ano % 4;

	if(resto == 0){
        printf("Esse ano é bissexto.\n");
	} else{
	    printf("Esse ano não é bissexto.\n");
	}

	return 0;
}
