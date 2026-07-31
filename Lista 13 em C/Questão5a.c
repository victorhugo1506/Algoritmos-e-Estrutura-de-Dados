#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int MenorFolhaImpar(No *p)
{
    if (p == NULL)
        return -1;

    int esq = MenorFolhaImpar(p->esq);
    if (esq != -1)
        return esq;

    if (p->esq == NULL && p->dir == NULL && p->valor % 2 != 0)
    {
        return p->valor;
    }

    return MenorFolhaImpar(p->dir);
}