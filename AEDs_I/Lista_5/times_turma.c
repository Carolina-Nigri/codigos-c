#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    printf("\n\tTIMES DA TURMA\n\n");

    int N; // Número de alunos
    bool ERRO; 

    do{
        // Lê o número de alunos (N) e repete se foge ao Domínio: 0 < N < 70
        printf("\nQuantos alunos? ");
        scanf("\n%i",&N);
        ERRO = (N < 0) || (N > 70);
        if (ERRO) printf("\n\aValor inválido!\n");
    } while(ERRO);

    char TIME;
    int contador = 0;
    int a = 0; // Alunos atleticanos
    int c = 0; // Alunos cruzeirenses
    int o = 0; // Alunos de outros times

    while(contador < N){ // Entra N vezes / Se N = 0, não entra
        do{
            // Lê o TIME e repete se foge ao Domínio: {a, A, c, C, o, O} 
            printf("\nTime [A - Atlético, C - Cruzeiro, O - Outros]: ");
            scanf("\n%c",&TIME);
            TIME = tolower(TIME); // Converte caractere lido pra minúsculo
            ERRO = (TIME != 'a') && (TIME != 'c') && (TIME != 'o');
            if (ERRO) printf("\n\aValor inválido!\n");
        } while(ERRO);
        contador ++;

        switch(TIME){
            // Contabiliza qtdes de torcedores de cada time
            case 'a': // Atleticanos
                a ++;
                break;
            case 'c': // Cruzeirenses
                c ++;
                break;
            case 'o': // Outros
                o ++;
        }
    }

    // Calcula os percentuais de cada time
    float perc_a = ((float) a / N) * 100;
    float perc_c = ((float) c / N) * 100;
    float perc_o = ((float) o / N) * 100;

    if(N > 0){ // Se N = 0, não entra -> Para a execução
        // Imprime o percentual de torcedores de cada time
        printf("\nO percentual de atleticanos é %.2f%%, de cruzeirenses é %.2f%% e de outros é %.2f%%.\n",perc_a,perc_c,perc_o);
    
        // Dizer qual o time preferido
        if(a > c && a > o){ // Atlético 
            printf("\nA preferência da turma é pelo Atlético.\n");
        } else if(c > a && c > o){ // Cruzeiro
            printf("\nA preferência da turma é pelo Cruzeiro.\n");
        } else if(o > a && o > c){ // Outros
            printf("\nA preferência da turma é por Outros.\n");
        } else{ // Empate
            printf("\nHouve um empate.\n");
        }
    } // fim if (N > 0)
    return 0;
}