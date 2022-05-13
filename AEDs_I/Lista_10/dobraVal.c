// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void dobro(int* A);

int main(){
    int x = 20;
    printf("O dobro de %i", x);

    dobro(&x);
    printf(" eh igual a %i\n", x);

    return 0;
} // fim main()

// Funções
void dobro(int* A){
    *A = 2 * *A;
} // fim dobraVal()