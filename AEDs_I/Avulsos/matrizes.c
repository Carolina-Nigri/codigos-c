// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define n° de linhas e colunas
#define LIN 3 
#define COL 3

// Protótipos
void escreveMatriz(float M[][COL]);
void leiaMatriz(float M[][COL]);
void somaMatriz(float A[][COL],float B[][COL],float C[][COL]);
int contaNegativos(float M[][COL]);
bool haNegativos(float M[][COL]);
void escreveDiagonalPrincipal(float M[][LIN]);

int main(){
    /*
    // Declara matriz de (LIN) linhas e (COL) colunas
    float M1[LIN][COL] = { {5,6}, {7,8}, {9,10}};
    escreveMatriz(M1);

    // Lê matriz de (LIN) linhas e (COL) colunas
    float M2[LIN][COL];
    leiaMatriz(M2);
    escreveMatriz(M2);

    puts("\n");

    // Matriz que soma as outras duas
    float M3[LIN][COL];
    somaMatriz(M3,M1,M2);
    escreveMatriz(M3);

    // Verifica se há negativos em M2
    if(haNegativos(M2)){
        puts("\nHa negativos na matriz lida");
        printf("\nHa %i valores negativos na matriz lida\n",contaNegativos(M2));
    }
   // */

    // Matriz quadrada: alterar COL p/msm valor de LIN
    float M4[LIN][COL];
    leiaMatriz(M4);
    escreveMatriz(M4);
    escreveDiagonalPrincipal(M4);

    return 0;
} // fim main()

void escreveMatriz(float M[][COL]){
    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            printf("%.2f\t",M[i][j]);
        }

        puts("\n");
    }
} // fim escreveMatriz()

void leiaMatriz(float M[][COL]){
    puts("\n");
    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            printf("M[%i,%i] = ",i,j);
            scanf("%f",&M[i][j]);
        }
    }
   puts("\n");
} // fim leiaMatriz()

void somaMatriz(float A[][COL],float B[][COL],float C[][COL]){
    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            A[i][j] = B[i][j] + C[i][j];
        }
    }
} // fim somaMatriz()

int contaNegativos(float M[][COL]){
    int negativos = 0;

    for(int i=0;i < LIN;i++){
        for(int j=0;j < COL;j++){
            if(M[i][j] < 0) negativos++;
        }
    }

    return negativos;
} // fim contaNegativos()

bool haNegativos(float M[][COL]){
    int i = 0;
    int j = 0;
    bool negativo = false;

    while(i < LIN && j < COL && !negativo){
        if(M[i][j] < 0) negativo = true;

        j++;
        if(j == COL){
            j = 0;
            i++;
        }
    }

    return negativo;
} // fim haNegativos()

void escreveDiagonalPrincipal(float M[][LIN]){
    puts("\n");
    for(int i=0;i < LIN;i++){
        printf("%.2f\n",M[i][i]);
    }
} // fim escreveDiagonalPrincipal()