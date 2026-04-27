#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[] = {9,42,21,14,28,3,19,32,46,6};
    int numero1 = V[0];
    int numero2 = V[1];
    int menordistancia = abs(numero2 - numero1);

    //ovo imprimir o vetor primeiro
    for (int i = 0; i < 10; i++) {
        printf("%d ", V[i]);
    }

    printf("\n");

    for(int i=0; i < 10; i++){
        for(int j= i+1; j < 10 ; j++){
            int distanciaatual = abs(V[j] - V[i]);
            if(distanciaatual < menordistancia){
                menordistancia = distanciaatual;
                numero1 = V[i];
                numero2 = V[j];
            }
        }
    }

    printf("A menor distancia eh %d e eh entre os numeros %d e %d", menordistancia, numero2, numero1);

    return 0;
}