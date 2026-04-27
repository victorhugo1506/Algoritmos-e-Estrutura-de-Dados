#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[6] = {1, 2, 3, 4, 5, 6};
    int A[6] = {0, 0, 0, 0, 0, 0};
    int i = 0;
    int j = 0;

    for(int i = 0; i < 6;){
        if(V[i] % 2 != 0){
            A[j] = V[i];
            j++;
        }
        i++;
    }
    i = 0;
        for(int i = 0; i < 6;){
        if(V[i] % 2 == 0){
            A[j] = V[i];
            j++;
        }
        i++;
    }
    printf("Vetor Reorganizado: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}