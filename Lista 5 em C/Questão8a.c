#include <stdio.h>

void reorganizar_esparsa(int A[], int n)
{
    int ocupados = 0;
    int verificador = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] != -1)
        {
            A[ocupados] = A[i];
            ocupados++;
            verificador = 1;
        }
    }

    if (verificador == 0)
    {
        printf("A lista esta completamente vazia.\n");
        return;
    }

    int espacamento = n / ocupados;
    int idx_antigo = ocupados - 1;
    int idx_novo = n - 1;

    while (idx_antigo >= 0)
    {
        A[idx_novo] = A[idx_antigo];

        for (int k = 1; k < espacamento && (idx_novo - k) >= 0; k++)
        {
            if ((idx_novo - k) != idx_antigo || idx_antigo == 0)
            {
                A[idx_novo - k] = -1;
            }
        }

        idx_novo -= espacamento;
        idx_antigo--;
    }

    printf("Lista esparsa reorganizada com sucesso!\n");
}