#include <stdio.h>
#include <stdlib.h>

int main(){
	float raio;
	float pi = 3.14;

    printf("Digite um valor real para o raio: ");
	scanf("%f",&raio);

	float area = (raio * raio) * pi;
	printf("Área de um círculo de raio %.2f = %.2f.\n",raio,area);

	return 0;
}
