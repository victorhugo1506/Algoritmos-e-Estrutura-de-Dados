#include <stdio.h>
#include <stdlib.h>

int main(){
    int V[]= {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};
    int numeroparaprocurar = 0;
    int dobrodonumero = 0;

    printf("Digite um numero para ser procurado na lista e ver se tem o dobro dele: ");
    scanf("%d", &numeroparaprocurar); 

    for(int i = 0; i < 10; i++){
        if(V[i] == (numeroparaprocurar * 2)){
            dobrodonumero = V[i];
        }
    }

    for(int i = 0; i < 10; i++){
        if(V[i] == numeroparaprocurar){
            printf("%d foi encontrado\n", numeroparaprocurar);

            if(dobrodonumero != 0){
                printf("E %d, que eh o dobro de %d, foi encontrado\n", dobrodonumero, numeroparaprocurar);
            } else {
                printf("Mas o seu dobro nao esta na lista\n");
            }
            return 0; 
        }
    }

    printf("Seu numero nao esta na lista\n");

    return 0;
}