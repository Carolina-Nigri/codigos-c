#include <stdio.h>
#include <stdlib.h>

int main(){
	float altura;

	printf("Digite sua altura: ");
	scanf("%f",&altura);

	float peso_ideal_M = (72.7 * altura) - 58;
	float peso_ideal_F = (62.1 * altura) - 44.7;

	printf("Peso ideal de pessoas de gênero feminino: %.2f.\n",peso_ideal_F);
	printf("Peso ideal de pessoas de gênero masculino: %.2f.\n",peso_ideal_M);

	return 0;
}