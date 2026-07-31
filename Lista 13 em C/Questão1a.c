#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

void ImprimeFaixa(No *p, int k, int l)
{
    if (p == NULL)
        return;

    if (p->valor > k)
    {
        ImprimeFaixa(p->esq, k, l);
    }

    if (p->valor > k && p->valor < l)
    {
        printf("%d ", p->valor);
    }

    if (p->valor < l)
    {
        ImprimeFaixa(p->dir, k, l);
    }
}