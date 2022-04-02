#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("\n\tCalcula seu peso ideal de acordo com seu gênero e altura\n\n");

	float altura;
	char genero;

	printf("Escolha qual seu gênero (m/f): ");
	scanf("%c",&genero);

	printf("Digite sua altura: ");
	scanf("%f",&altura);

	float peso_ideal_M = (72.7 * altura) - 58;
	float peso_ideal_F = (62.1 * altura) - 44.7;

	if(genero == 'f' || genero == 'F'){
		printf("O seu peso ideal é: %.2f.\n",peso_ideal_F);
    } else if (genero == 'm' || genero == 'M'){
        printf("O seu peso ideal é: %.2f.\n",peso_ideal_M);
    }

	return 0;
}
