#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = {55, 81, 45, 19, 28, 35, 66, 10};
    int n = 8;

    int alvo = n / 2;

    int inicio = 0;
    int fim = n - 1;

    int verificador = 0;

    while (inicio <= fim)
    {
        int pivo = A[inicio];
        int i = inicio;

        for (int j = inicio + 1; j <= fim; j++)
        {
            if (A[j] <= pivo)
            {
                i++;
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }

        int temp = A[inicio];
        A[inicio] = A[i];
        A[i] = temp;

        if (i == alvo)
        {
            verificador = 1;

            printf("Mediana encontrada na posicao: %d\n", i + 1);
            printf("Valor: %d\n", A[i]);

            break;
        }
        else if (i > alvo)
        {
            fim = i - 1;
        }
        else
        {
            inicio = i + 1;
        }
    }

    if (verificador == 0)
    {
        printf("A lista nao possui mediana valida para os parametros.\n");
    }

    return 0;
}