#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[] = {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};
    int aux = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (V[i] > V[j])
            {
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }
    printf("O maior eh %d, o segundo maior eh %d e o terceiro maior eh %d\n", V[0], V[1], V[2]);
    printf("E seu tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).\n");
    return 0;
}