#include <stdio.h>

int main()
{
    int V[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(V) / sizeof(V[0]);
    int k;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &k);

    int inicio = 0;
    int fim = n - 1;
    int resultado = -1;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;

        if (V[meio] == k)
        {
            resultado = meio;
            break;
        }

        if (V[meio] < k)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    if (resultado != -1)
    {
        printf("Elemento %d encontrado na posicao %d.\n", k, resultado + 1);
    }
    else
    {
        printf("Elemento %d nao encontrado.\n", k);
    }

    return 0;
}