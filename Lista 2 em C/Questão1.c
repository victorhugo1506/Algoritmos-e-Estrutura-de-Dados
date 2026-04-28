#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[]={9,42,21,14,25,3,19,33,45,6};
    int maior, segundo_maior, terceiro_maior;

    for(int i=0; i<10; i++){
        if(i==0){
            maior = V[i];
            segundo_maior = V[i];
            terceiro_maior = V[i];
        }else{
            if(V[i]>maior){
                terceiro_maior = segundo_maior;
                segundo_maior = maior;
                maior = V[i];
            }else if(V[i]>segundo_maior){
                terceiro_maior = segundo_maior;
                segundo_maior = V[i];
            }else if(V[i]>terceiro_maior){
                terceiro_maior = V[i];
            }
        }
    }
    printf("O maior eh %d, o segundo maior eh %d e o terceiro maior eh %d\n", maior, segundo_maior, terceiro_maior);
    printf("E seu tempo de execucao eh O(n), porque percorre o vetor apenas uma vez.\n");
    return 0;

}