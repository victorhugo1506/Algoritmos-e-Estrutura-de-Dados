#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D[9] = {45, 12, 89, 33, 7, 56, 91, 22, 14};
    int n = 9;

    int k = 3;
    int elementos_por_lista = n / k;

    int multilista[3][3];

    // Passo 1: Transferir os dados da lista D para a multilista
    int idx = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < elementos_por_lista; j++)
        {
            multilista[i][j] = D[idx];
            idx++;
        }
    }

    // Passo 2: Ordenar cada sublista usando o metodo da bolha
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < elementos_por_lista - 1; j++)
        {
            int verificador = 0;

            for (int l = 0; l < elementos_por_lista - j - 1; l++)
            {
                if (multilista[i][l] > multilista[i][l + 1])
                {
                    int temp = multilista[i][l];
                    multilista[i][l] = multilista[i][l + 1];
                    multilista[i][l + 1] = temp;

                    verificador = 1;
                }
            }

            if (verificador == 0)
            {
                break;
            }
        }
    }

    printf("Multilista construida e ordenada\n\n");
    for (int i = 0; i < k; i++)
    {
        printf("Sublista %d: ", i + 1);
        for (int j = 0; j < elementos_por_lista; j++)
        {
            printf("%d ", multilista[i][j]);
        }
        printf("\n");
    }

    return 0;
}