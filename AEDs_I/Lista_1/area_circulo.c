#include <stdio.h>
#include <stdlib.h>

int main(){
	int raio = 1;
	float pi = 3.14;
	float area = (raio * raio) * pi;

	printf("Área de um círculo de raio %d = %.2f.\n",raio,area);
	return 0;
}