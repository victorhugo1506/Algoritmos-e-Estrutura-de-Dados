#include <stdio.h>

#define N 10

int main()
{
    int V[N] = {3, 1, 7, 2, 9, 4, 6, 5, 8, 10};
    int k;

    printf("Vetor original: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", V[i]);
    }
    printf("\n");

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int i = 0;
    int j = N - 1;

    while (i <= j)
    {
        if (V[i] < k)
        {
            i++;
        }
        else
        {
            int temp = V[i];
            V[i] = V[j];
            V[j] = temp;
            j--;
        }
    }

    printf("Vetor apos particao: ");
    for (int x = 0; x < N; x++)
    {
        printf("%d ", V[x]);
    }
    printf("\n");

    printf("Posicao do primeiro elemento maior ou igual a %d: %d\n", k, i + 1);
    printf("Primeiro elemento maior ou igual a %d: %d\n", k, V[i]);

    return 0;
}