#include <stdio.h>
#include <stdlib.h>

int main() {
    int U[] = {1,2,3,4,5,6,7,8,9,10};
    int V[] = {7,2,3,1,6,5,9,10,4,8};
    int contador = 0;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(U[i] == V[j]){
                contador++;
            }
        }
    }

    if(contador == 10){
        printf("O vetor V eh uma permutacao do vetor U.\n");
    } else{
        printf("O vetor V nao eh uma permutacao do vetor U.\n");
    }
    printf("O tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).");
    return 0;
}