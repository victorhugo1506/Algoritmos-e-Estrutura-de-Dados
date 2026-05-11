#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[9][9] = {
        {3, 9, 4, 2, 4, 1, 8, 5, 1},
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {5, 8, 2, 3, 9, 8, 4, 1, 7},
        {8, 3, 4, 2, 3, 1, 3, 9, 4},
        {3, 7, 2, 9, 4, 2, 1, 2, 3},
        {7, 5, 3, 1, 2, 4, 5, 8, 2},
        {4, 7, 3, 6, 6, 1, 9, 3, 2},
        {1, 5, 3, 2, 9, 8, 7, 6, 5},
        {3, 9, 4, 2, 4, 1, 8, 5, 1}};
    int verificador = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            int linhasiguais = 1;
            for (int k = 0; k < 9; k++)
            {
                if (V[i][k] != V[j][k])
                {
                    linhasiguais = 0;
                    break;
                }
            }
            if (linhasiguais == 1)
            {
                verificador = 1;
                printf("As linhas %d e %d sao iguais", i + 1, j + 1);
            }
        }
    }

    if (verificador == 0)
    {
        printf("A matriz nao possui linhas iguais");
    }

    return 0;
}
