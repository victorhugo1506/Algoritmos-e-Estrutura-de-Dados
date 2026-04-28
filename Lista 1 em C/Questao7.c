#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[]= {9, 42, 21, 14, 25, 3, 19, 33, 45, 6, 8};
    int contador = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i < j && V[i] > V[j]){
                contador++;
            }
        }
    }

    printf("O numero de inversoes eh: %d\n", contador);

 return 0;
}