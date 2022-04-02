#include <stdio.h>
#include <stdlib.h>

int main(){
	double celsius = 37.777777;
	double fahrenheit = (celsius * 1.8) + 32;

	printf("%lf ºC equivalem a %lf ºF.\n",celsius,fahrenheit);
	return 0;
}