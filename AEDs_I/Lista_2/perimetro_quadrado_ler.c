#include <stdio.h>
#include <stdlib.h>

int main(){
	float lado;

	printf("Digite um valor real para o lado do quadrado: ");
    scanf("%f",&lado);

	float perimetro = 4 * lado;
	printf("Perímetro de um quadrado de lado %.1f = %.1f.\n",lado,perimetro);

	return 0;
}
