#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	int dia;
	int mes;
	int ano;

	printf("Digite sua idade: ");
    scanf("%d",&idade);

    int dias_vividos = idade * 365;
    printf("Você viveu %d dias.\n",dias_vividos);

	return 0;
}
