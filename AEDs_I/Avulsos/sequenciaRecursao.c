// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Protótipos
void escreveSequencia(int i);

int main(){
    printf("\n\tSequencia recursiva\n\n");

    // Teste da função
    escreveSequencia(1);
    printf("\n");

    return 0;
} // fim main()

/***************************************************************
* Nome: escreveSequencia
* Elaboração: 29/04/22
* Última alteração: 29/04/22 
* Autor: Carolina Morais Nigri
* Contexto de ação: Escreve a sequencia {1,2,3,4,5,5,4,3,2,1}
* Argumentos: i (inteiro)
* Valor gerado: Nulo
****************************************************************
*/
void escreveSequencia(int i){
    if(i <= 5){
        printf("%i ",i);
        escreveSequencia(++i);
        i--;
        printf("%i ",i);
    }
} // fim escreveSequencia()