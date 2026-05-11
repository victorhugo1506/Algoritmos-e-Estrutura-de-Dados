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
        {3, 9, 4, 2, 4, 1, 8, 5, 10}};
    int contador = 0;
    int numeroparaprocurar = 0;

    printf("Digite um valor para ver se esta na matriz e se ele se repete: ");
    scanf("%d", &numeroparaprocurar);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (V[i][j] == numeroparaprocurar)
            {
                contador++;
            }
        }
    }

    if (contador > 1)
    {
        printf("%d eh repetido %d vezes", numeroparaprocurar, contador);
    }
    else if (contador == 1)
    {
        printf("%d so aparece uma vez", numeroparaprocurar);
    }
    else
    {
        printf("%d nao aparece na matriz", numeroparaprocurar);
    }

    return 0;
}
