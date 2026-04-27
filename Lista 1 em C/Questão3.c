#include <stdio.h>
#include <stdlib.h>

int V[] = {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};

int main() {
    int numeroparaprocurar = 0;

    printf("Digite um numero para ser procurado na lista: ");
    scanf("%d", &numeroparaprocurar);

    int numeromaisproximo = V[0];
    int menor_distancia = abs(V[0] - numeroparaprocurar);

    for(int i = 0; i < 10; i++) {

        if(V[i] == numeroparaprocurar) {
            printf("O numero %d esta presente na lista.\n", numeroparaprocurar);
            return 0;
        }

        int distancia_atual = abs(V[i] - numeroparaprocurar);
        
        if(distancia_atual < menor_distancia) {
            menor_distancia = distancia_atual;
            numeromaisproximo = V[i];
        }
    }

    printf("O numero %d nao esta presente na lista. Porem, o numero mais proximo eh %d.\n", numeroparaprocurar, numeromaisproximo);
    
    return 0;
}