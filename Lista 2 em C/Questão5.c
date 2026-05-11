#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[] = {7, 1, 9, 1, 7, 3, 9, 2, 1, 6, 8, 3};
    int contador = 0;
    int numeroparaencontrar = 0;
    int aux = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (V[i] < V[j])
            {
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", V[i]);
    }
    printf("\n");

    printf("Digite um numero para encontrar no vetor: ");
    scanf("%d", &numeroparaencontrar);

    for (int i = 0; i < 12; i++)
    {
        if (V[i] == numeroparaencontrar)
        {
            contador++;
        }
        else if (V[i] > numeroparaencontrar)
        {
            break;
        }
        else
        {
            printf("Seu numero nao esta no vetor\n");
            return 0;
        }
    }

    printf("O numero %d aparece %d vezes no vetor.\n", numeroparaencontrar, contador);
    printf("O tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).");
    return 0;
}