// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
float leReal(char* mensagem);
int leInteiro(char* mensagem);
float potencia(float Base, int Expoente);

int main(){
    printf("\n\tCalcula exponenciacao\n\n");

    float Base = leReal("Base");
    int Expoente = leInteiro("Expoente");

    printf("\n%.2f ^ %i = %f\n",Base,Expoente,potencia(Base,Expoente));

    return 0;
} // fim main()

// Funções
float leReal(char* mensagem){
    float R;
    printf("\n%s: ",mensagem);
    scanf("%f",&R);

    return R;
} // fim leReal()

int leInteiro(char* mensagem){
    int I;
    printf("\n%s: ",mensagem);
    scanf("%i",&I);

    return I;
} // fim leInteiro()

float potencia(float Base, int Expoente){
    float Pot = 1;

    if(Expoente > 0) 
        Pot = Base * potencia(Base,Expoente - 1);
    else if(Expoente < 0) 
        Pot = (1.0 / Base) * potencia(Base,Expoente + 1);

    return Pot;
} // fim potencia()