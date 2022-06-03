#include <stdio.h>
#include <stdlib.h>

int LIN;

void escreveArranjo(int A[]);
void inverteArranjo(int A[]);
void inverteArranjoRec(int A[],int i,int j);

int main(){
    LIN = 5;
    int A[] = {1,2,3,4,5};

    escreveArranjo(A);
    
    puts("\nInverte iterativamente");
    inverteArranjo(A);
    escreveArranjo(A);
   
    puts("\nInverte recursivamente");
    inverteArranjoRec(A,0,LIN-1);
    escreveArranjo(A);

    return 0;
}

void escreveArranjo(int A[]){
    for(int i=0;i < LIN;i++){
      printf("A[%i] = %i\n",i,A[i]);
    }
}

void inverteArranjo(int A[]){
    int Aux;

    for(int i=0, j=(LIN-1);i < (LIN/2);i++,j--){
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

        inverteArranjoRec(A, i+1, j-1);
    }
}