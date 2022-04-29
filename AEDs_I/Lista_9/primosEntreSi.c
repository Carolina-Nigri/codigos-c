// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipos
bool primosEntreSi(int A, int B);

int main(){
    printf("\n\tPrimos entre si\n\n");

    printf("Primos entre si = %i",primosEntreSi(10,5));

    return 0;
} // fim main()

bool primosEntreSi(int A, int B){
    bool Primos = true;
    int Menor;

    if(A < B) Menor = A;
    else Menor = B;

    for(int i = 2;i < Menor;i++){
        int RestoA = A % i;
        int RestoB = B % i;
        if(RestoA == 0 && RestoB == 0) Primos = false;
        printf("Primos = %i\n",Primos);
    }

    return Primos;
} // fim primosEntreSi()
