#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[]= {9, 42, 21, 14, 28, 3, 19, 32, 46 ,6};
    int A[]= {2, 15, 19, 12, 33, 9, 17, 41, 54, 8};
    int aux[]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(V[i] == A[j]){
                aux[i] = V[i];
            }
        }
    }

    printf("Vetor com valores repetidos:s ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", aux[i]);
        }
    printf("\n");
    return 0;
}