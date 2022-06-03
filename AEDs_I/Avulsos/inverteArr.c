#include <stdio.h>
#include <stdlib.h>

void escreveArranjo(int A[], int tamanho);
void inverteArranjo(int A[], int tamanho);
void inverteArranjoRec(int A[],int i,int j);

int main(){
    int tamanho = 5;
    int A[] = {1,2,3,4,5};

    escreveArranjo(A,tamanho);
    puts("");

   // inverteArranjoRec(A,0,tamanho-1);
   // escreveArranjo(A,tamanho);

    inverteArranjo(A,tamanho);
    escreveArranjo(A,tamanho);

    return 0;
}

void escreveArranjo(int A[], int tamanho){
    for(int i=0;i < tamanho;i++){
      printf("A[%i] = %i\n",i,A[i]);
    }
}

void inverteArranjo(int A[], int tamanho){
    int Aux;

    for(int i=0, int j=(tamanho-1); i < (tamanho/2); i++,j--){
        Aux = A[i];
        A[i] = A[j];
        A[j] = Aux;
    }
}

void inverteArranjoRec(int A[],int i,int j){
    int Aux;

    if(i < j){
        Aux = A[i];
        A[i] = A[j];
        A[j] = Aux;

        inverteArranjoRec(A,i+1,j-1);
    }
}
