#include <stdio.h>
#include <stdlib.h>

void intercalar(int A[], int tamA, int B[], int tamB, int Resultado[])
{
    int i = 0, j = 0, k = 0;

    // Compara os elementos das duas listas e coloca o menor no Resultado
    while (i < tamA && j < tamB)
    {
        if (A[i] <= B[j])
        {
            Resultado[k] = A[i];
            i++;
        }
        else
        {
            Resultado[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < tamA)
    {
        Resultado[k] = A[i];
        i++;
        k++;
    }
    while (j < tamB)
    {
        Resultado[k] = B[j];
        j++;
        k++;
    }
}

int main()
{
    int k_listas = 3;
    int elementos_por_lista = 3;
    int multilista[3][3] = {
        {12, 33, 45},
        {7, 56, 91},
        {14, 22, 89}};

    int n_total = k_listas * elementos_por_lista;
    int lista_final[n_total];
    int tam_atual = 0;

    int verificador = 0;

    // Passo 1: Inicializamos a lista final com a primeira sublista
    for (int j = 0; j < elementos_por_lista; j++)
    {
        lista_final[j] = multilista[0][j];
        tam_atual++;
        verificador = 1;
    }

    // Passo 2: Intercalacoes sucessivas
    if (verificador == 1)
    {

        for (int i = 1; i < k_listas; i++)
        {

            int temp[tam_atual + elementos_por_lista];

            intercalar(lista_final, tam_atual, multilista[i], elementos_por_lista, temp);

            tam_atual += elementos_por_lista;
            for (int j = 0; j < tam_atual; j++)
            {
                lista_final[j] = temp[j];
            }
        }
    }
    else
    {
        printf("A multilista esta vazia.\n");
        return 0;
    }

    printf("Lista completamente ordenada:\n\n");
    for (int i = 0; i < n_total; i++)
    {
        printf("Posicao %d: %d\n", i + 1, lista_final[i]);
    }

    return 0;
}