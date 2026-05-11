#include <stdio.h>

int main()
{
    int V[] = {2, 1, 9, 7, 6, 3, 9, 4, 2, 6, 1, 3};
    int n = 12;
    int k = 0;
    int achou = 0;

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= i + k && j < n; j++)
        {
            if (V[i] == V[j])
            {
                printf("Sim, o %d nas posicoes %d e %d\n", V[i], i, j);
                achou = 1;
            }
        }
    }

    if (!achou)
    {
        printf("Nao existem elementos repetidos dentro da distancia %d\n", k);
    }

    printf("O tempo de execucao eh O(n * k), porque percorre o vetor n vezes e para cada elemento, percorre k elementos seguintes.");
    return 0;
}