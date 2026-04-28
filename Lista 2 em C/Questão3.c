#include <stdio.h>
#include <stdlib.h>

int main(){
    float V[]={5,3,1,10,2,13,9,12,4,7};
    float media = 0;
    float menordistancia = 0;

    for(int i=0; i<10; i++){
        media += V[i];
    }
    media /= 10;

    for(int i=0; i<10; i++){
        if(i==0){
            menordistancia = V[i];
        }
        else if(abs(V[i]-media)<abs(menordistancia-media)){
            menordistancia = V[i];
        }
    }
    printf("A media eh: %.2f\n", media);
    printf("O valor mais proximo da media eh: %.2f\n", menordistancia);
    printf("E seu tempo de execucao eh O(n), porque percorre o vetor apenas uma vez para calcular a media e outra vez para encontrar o valor mais proximo da media.\n");    
    return 0;
}