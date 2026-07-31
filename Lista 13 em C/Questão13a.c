#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

void ImprimeMaioresRec(No *p, int limite, int *visitados)
{
    if (p == NULL || *visitados >= limite)
        return;

    ImprimeMaioresRec(p->dir, limite, visitados);

    if (*visitados < limite)
    {
        printf("%d ", p->valor);
        (*visitados)++;
        ImprimeMaioresRec(p->esq, limite, visitados);
    }
}

void ImprimeMeioMaiores(No *p, int n)
{
    int limite = n / 2;
    int visitados = 0;
    ImprimeMaioresRec(p, limite, &visitados);
}