#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tNOTAS DA TURMA\n\n");
   
    float Nota;
    bool Erro;
    const int FLAG = -1; // Valor constante que encerra o programa

    do{
        // Lê a nota só uma vez -> Caso a primeira seja FLAG [-1], já encerra
        printf("\n[-1 para terminar]");
        printf("\nNota [0..100]: ");
        scanf("%f",&Nota);
        Erro = (Nota != FLAG) && (Nota < 0) || (Nota > 100); // Fora do domínio de nota
        if (Erro) printf("\n\aValor inválido!\n");
    } while (Erro); // Repete enquanto valor é inválido
   
    float MaiorNota = 0;
    float Soma = 0;
    int Quantidade = 0;

    while(Nota != FLAG){ // Repete enquanto não teclar pra sair [-1]
        Soma += Nota; // Acumula a nota na soma
        Quantidade ++; // Conta qtde de notas

        if(Nota > MaiorNota) MaiorNota = Nota;

        do{
            // Lê a nota
            printf("\n[-1 para terminar]");
            printf("\nNota [0..100]: ");
            scanf("%f",&Nota);
            Erro = (Nota != FLAG) && (Nota < 0) || (Nota > 100); // Fora do domínio de nota
            if (Erro) printf("\n\aValor inválido!\n");
        } while (Erro); // Repete enquanto valor é inválido
    } // fim while()

    if(Quantidade > 0){
        // Calcula a média das notas
        float Media = Soma / Quantidade;
        printf("\nMédia = %.2f\n",Media);
        // Imprime a maior nota
        printf("\nMaior nota = %.2f\n",MaiorNota);
    } // fim if()

    return 0;
} // fim main()