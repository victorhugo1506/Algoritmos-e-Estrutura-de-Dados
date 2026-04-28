#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[] = {17,2,8,1,7,13,9,12,4,16};
    int contador = 0;
    int aux = 0;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(V[i]>V[j]){
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    for(int i=0; i<10; i++){
        if(V[i+1] != V[i]+1 && V[i-1] != V[i]-1){
            contador++;
        }
    }
    printf("A quantidade de numeros isolados eh: %d\n", contador);
    printf("E seu tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).");
    return 0;
}