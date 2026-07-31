#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int ImparesNoNivel(No *p, int k, int nivelAtual)
{
    if (p == NULL || nivelAtual > k)
        return 0;

    if (nivelAtual == k)
    {
        return (p->valor % 2 != 0) ? 1 : 0;
    }

    return ImparesNoNivel(p->esq, k, nivelAtual + 1) +
           ImparesNoNivel(p->dir, k, nivelAtual + 1);
}