#include <stdio.h>

void busca_binaria_esparsa(int A[], int n, int chave)
{
    int inicio = 0;
    int fim = n - 1;
    int verificador = 0;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;

        if (A[meio] == -1)
        {
            int esq = meio - 1;
            int dir = meio + 1;
            int encontrou_vizinho = 0;

            while (esq >= inicio || dir <= fim)
            {
                if (esq >= inicio && A[esq] != -1)
                {
                    meio = esq;
                    encontrou_vizinho = 1;
                    break;
                }
                if (dir <= fim && A[dir] != -1)
                {
                    meio = dir;
                    encontrou_vizinho = 1;
                    break;
                }
                esq--;
                dir++;
            }

            if (encontrou_vizinho == 0)
            {
                break;
            }
        }

        if (A[meio] == chave)
        {
            verificador = 1;
            printf("Chave %d encontrada na posicao: %d\n", chave, meio + 1);
            break;
        }
        else if (A[meio] < chave)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    if (verificador == 0)
    {
        printf("Chave %d nao encontrada na lista.\n", chave);
    }
}