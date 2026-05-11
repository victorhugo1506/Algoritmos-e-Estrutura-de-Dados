#include <stdio.h>

int main()
{
    int U[] = {1, 3, 6, 7, 10, 11, 15, 17, 19, 21};
    int V[] = {2, 4, 5, 8, 9, 12, 14, 16, 18, 20};
    int n = 10;

    int inicioU = 0, fimU = n - 1;
    int inicioV = 0, fimV = n - 1;

    while (fimU - inicioU > 1)
    {
        int meioU = (inicioU + fimU) / 2;
        int meioV = (inicioV + fimV) / 2;

        if (U[meioU] < V[meioV])
        {
            int descartar = meioU - inicioU;
            inicioU += descartar;
            fimV -= descartar;
        }
        else
        {
            int descartar = meioV - inicioV;
            inicioV += descartar;
            fimU -= descartar;
        }
    }

    int mediana;
    if (U[inicioU] < V[inicioV])
    {
        mediana = U[inicioU];
    }
    else
    {
        mediana = V[inicioV];
    }

    printf("A mediana eh: %d\n", mediana);
    printf("E o tempo de execucao eh O(log n), pois \n");

    return 0;
}