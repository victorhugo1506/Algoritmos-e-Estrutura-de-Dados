#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[]={9,42,21,14,25,3,19,33,45,6};
    int kmaior = 0;
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
    printf("Digite qual maior valor voce quer (Entre as posições de 1 à 10): ");
    scanf("%d", &kmaior);
    printf("O %d maior eh %d\n", kmaior, V[kmaior-1]);
    printf("E seu tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).");
    return 0;
}