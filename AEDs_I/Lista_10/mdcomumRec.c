// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Protótipos


int main(){
    int R = 9 % 3;
    printf("%i\n",R);

    return 0;
} // fim main()

// Funções
int mdc(int A, int B){
    int R;

    // B < A  

    while(B != 0){
        R = A % B;
        A = B;
        B = R;
    }

    return A;
} // fim mdc() 