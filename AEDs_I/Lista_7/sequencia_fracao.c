#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("\n\tH = 11/101 + 102/12 + 13/103 + 104/14 + ...\n");

    float H = 0;
    int A = 11;
    int B = 101;
    float T;

    bool Par;

    for(int i = 0; i < 10; i++){
        Par = (A % 2) == 0;
        if(Par) T = (float) B / A;
        else T = (float) A / B; 
        H += T;
        A++;
        B++;
    } // fim for()

    printf("\nH = %f.\n",H);

    return 0;
} // fim main()