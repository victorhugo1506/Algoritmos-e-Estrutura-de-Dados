#include <stdio.h>

#define N 10
int Q[N];
int frente = 0;
int fundo = 0;

void Enfileira(int elem)
{
    int verificador = 0;

    if (fundo == N)
    {
        verificador = 1;
        printf("Erro: O vetor da fila encheu!\n");
    }

    if (verificador == 0)
    {
        Q[fundo] = elem;
        fundo++;
    }
}

int Desenfileira()
{
    int verificador = 0;

    if (frente == fundo)
    {
        verificador = 1;
        printf("Erro: A fila esta vazia!\n");
        return -1;
    }

    int valor = 0;
    if (verificador == 0)
    {
        valor = Q[frente];
        frente++;
    }
    return valor;
}