#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	printf("\n\tClassifica um triângulo de acordo com os lados\n\n");

	float A;
	float B;
	float C;

	printf("Lado A: ");
	scanf("\n%f",&A);
	printf("Lado B: ");
	scanf("\n%f",&B);
	printf("Lado C: ");
	scanf("\n%f",&C);

	if((A == B) && (B == C)){
		printf("O triângulo é equilátero.\n");
	} else if ((A != B) && (B != C) && (A != C)){
            printf("O triângulo é escaleno.\n");
        } else{
            printf("O triângulo é isósceles.\n");
        }

	return 0;
}