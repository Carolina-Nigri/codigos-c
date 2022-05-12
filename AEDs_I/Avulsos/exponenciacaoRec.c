// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
float potencia(float Base, int Expoente);

int main(){
    printf("\n\tCalcula exponenciacao\n\n");

    printf("%f\n",potencia(2,10));

    return 0;
} // fim main()

float potencia(float Base, int Expoente){
   float Potencia = 1;

    if(Expoente > 0) Potencia = Base;
    else if(Expoente < 0) Potencia = 1.0 / Base;

    if(Expoente > 1){
        Potencia = Base * potencia(Base,Expoente - 1);
    } else if(Expoente < -1){
        Potencia = (1.0 / Base) * potencia(Base,Expoente + 1);
    }

    return Potencia;
} // fim potencia()