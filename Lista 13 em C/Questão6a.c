#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int ContaFolhasImpares(No *p)
{
    if (p == NULL)
        return 0;

    if (p->esq == NULL && p->dir == NULL && p->valor % 2 != 0)
    {
        return 1;
    }

    return ContaFolhasImpares(p->esq) + ContaFolhasImpares(p->dir);
}