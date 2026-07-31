#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

void ImprimeFolhas(No *p)
{
    if (p == NULL)
        return;

    if (p->esq == NULL && p->dir == NULL)
    {
        printf("%d ", p->valor);
    }

    ImprimeFolhas(p->esq);
    ImprimeFolhas(p->dir);
}