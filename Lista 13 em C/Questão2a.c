#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int ContaImparesMaiores(No *p, int k)
{
    if (p == NULL)
        return 0;

    int cont = 0;
    if (p->valor > k)
    {
        if (p->valor % 2 != 0)
        {
            cont = 1;
        }
        cont += ContaImparesMaiores(p->esq, k);
        cont += ContaImparesMaiores(p->dir, k);
    }
    else
    {
        cont += ContaImparesMaiores(p->dir, k);
    }
    return cont;
}