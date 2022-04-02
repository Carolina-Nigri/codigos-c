#include <stdio.h>
#include <stdlib.h>

int main(){
	double fahrenheit;

	printf("Digite uma temperatura em Fahrenheit: ");
	scanf("%lf",&fahrenheit);

	double celsius = (5.0 / 9.0) * (fahrenheit - 32);
	printf("%.2lf ºF equivalem a %.2lf ºC.\n",fahrenheit,celsius);
	return 0;
}