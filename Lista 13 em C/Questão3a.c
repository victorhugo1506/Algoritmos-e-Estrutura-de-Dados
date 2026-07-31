#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int MenorImparMaior(No *p, int k)
{
    if (p == NULL)
        return -1;

    int menor = -1;
    if (p->valor > k)
    {
        menor = MenorImparMaior(p->esq, k);

        if (menor == -1 && p->valor % 2 != 0)
        {
            menor = p->valor;
        }

        if (menor == -1)
        {
            menor = MenorImparMaior(p->dir, k);
        }
    }
    else
    {
        menor = MenorImparMaior(p->dir, k);
    }

    return menor;
}