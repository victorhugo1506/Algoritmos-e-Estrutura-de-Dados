#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

void ImprimeCaminho(No *p, int k)
{
    if (p == NULL)
        return;

    printf("%d", p->valor);

    if (p->valor == k)
    {
        printf("\n");
        return;
    }

    printf(" -> ");

    if (k < p->valor)
    {
        ImprimeCaminho(p->esq, k);
    }
    else
    {
        ImprimeCaminho(p->dir, k);
    }
}